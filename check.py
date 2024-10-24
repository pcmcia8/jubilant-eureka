import os
from pwn import *
from cond import *
import json


class Debugger:
    CDB = "C:\\Program Files (x86)\\Windows Kits\\10\\Debuggers\\x64\\cdb.exe"
    IGNORE_LINES = [
            "c0000096",
        "Unable to read dynamic function table entry",
        "The system cannot write to the specified device.",
        "The breakpoint was set with BP.  If you want breakpoints",
        "to track module load/unload state you must use BU.",
        "Unable to remove breakpoint",
        "ModLoad",
    ]

    @staticmethod
    def should_include_line(line):
        for s in Debugger.IGNORE_LINES:
            if s in line:
                return False
        return True

    BREAKPOINT_TABLE = [
            (0x017a07, "R14"),
            (0x02f390, "RBX"),
            (0x047524, "R12"),
            (0x05d2d7, "RSI"),
            (0x072315, "R15"),
            (0x089185, "R14"),
            (0x0a0df2, "R15"),
            (0x0b7d0a, "RDI"),
            (0x0d074c, "R13"),
            (0x0e7b85, "RBX"),
            (0x0ff3ad, "RDI"),
            (0x1164f4, "RBX"),
            (0x12ce5c, "R14"),
            (0x144935, "RDI"),
            (0x15ec28, "R14"),
            (0x176fc7, "R15"),
            (0x19073c, "R13"),
            (0x1a5a62, "R12"),
            (0x1bc767, "R12"),
            (0x1d5735, "R12"),
            (0x1ecdfb, "RBP"),
            (0x20567b, "R13"),
            (0x21b640, "RBP"),
            (0x22f44c, "RBP"),
            (0x243e51, "R13"),
            (0x25a1a8, "RBX"),
            (0x26ec6c, "RBP"),
            (0x285d15, "RBP"),
            (0x29e562, "R12"),
            (0x2b5f23, "RSI"),
            (0x2cd433, "RBX"),
            (0x2e4b99, "RBX"),
            ]

    def __init__(self, flag):
        self.p = pwnlib.tubes.process.process([self.CDB, "serpentine.exe", flag], stdin=subprocess.PIPE, stdout=subprocess.PIPE)
        self.wait_for_prompt()

    def wait_for_prompt(self):
        output = []
        # wait until ready
        while True:
            l = self.p.recvuntil(b'>')
            output.append(l.decode())
            #print(l.decode())
            if len(l.decode()) >= 6 and l[-6:] == b'0:000>':
                #print(l.decode())
                return ''.join(output)

    def send_cmd(self, cmd):
        cmd = cmd + '\n'
        self.p.send(cmd.encode('ascii'))
    
    def run(self):
        # clear all breakpoints
        self.send_cmd('bc')
        self.p.recvuntil(b'0:000>')
        # set break at main
        self.send_cmd('bp 0x140001649')
        self.p.recvuntil(b'0:000>')
        # go
        self.send_cmd('g')
        self.p.recvuntil(b'0:000>')
        # get the base address of payload
        self.send_cmd('?? *(int64*)(0x14089b8e0)')
        payload_base = int(self.p.recvline().decode().strip().split(' ')[1][2:])
        print("payload_base = 0x%016x" % payload_base)
        self.p.recvuntil(b'0:000>')

        # set the breakpoints at conditions and print the hash and JMP to next hash
        for i, e in enumerate(self.BREAKPOINT_TABLE):
            cmd = 'bp 0x%x ".echo ** condition %02d **; r %s; g"' % (payload_base + e[0] - 10, i, e[1])
            self.send_cmd(cmd)
            self.p.recvuntil(b'0:000>')
            cmd = 'bp 0x%x "r RIP=0x%x; g"' % (payload_base + e[0], payload_base + e[0]+4)
            self.send_cmd(cmd)
            self.p.recvuntil(b'0:000>')

        # execute
        self.p.sendline(b'g')
        # gather output
        output = self.p.recvuntil(b'0:000>').decode()
        output = output.split('\n')
        output = list(filter(Debugger.should_include_line, output))
        #print('\n'.join(output))
        # quit the debugger
        self.send_cmd('q')

        return self.parse_output(output)

    def parse_output(self, output):
        hashes = []
        num = 0
        for i, line in enumerate(output):
            line = line.strip()
            #print(line)
            if line == '** condition %02d **' % num:
                hashes.append(int(output[i+1].split('=')[1], 16))
                num += 1
        return hashes

def get_debugger_hashes(flag):
    j = {}
    filename = 'cached_hashes.json'
    if os.path.isfile(filename):
        with open(filename) as f:
            j = json.loads(f.read())
            if flag in j:
                return j[flag]

    d = Debugger(flag)
    debugger_hashes = d.run()
    j[flag] = debugger_hashes

    with open(filename, 'w') as f:
        f.write(json.dumps(j, indent=True))

    return debugger_hashes

def get_python_hashes(flag):
    flag2 = [ord(ch) for ch in flag]
    python_hashes = [ c(flag2) for c in cond ]
    return python_hashes

def main():
    flag = '12345678901234567890123456789012'
    if len(sys.argv) >= 2:
        flag = sys.argv[1]

    if len(flag) != 32:
        print("flag must be 32 chars long")
        exit()

    debugger_hashes = get_debugger_hashes(flag)
    python_hashes = get_python_hashes(flag)
    for i, (d, p) in enumerate(zip(debugger_hashes, python_hashes)):
        print('%02d \t 0x%016x\t 0x%016x \t %s' % (i, d, p, (d & 0xffffffffffffffff) == (p & 0xffffffffffffffff)))

if __name__ == '__main__':
    main()

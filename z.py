from cond import *
from z3 import *

s = Solver ()

#known_key = "c   |   /   ,   ~   c   2   G   "
#known_key = "cA  |0  /G  ,[  ~]  cS  23  G(  "
#known_key = "cAU |0e /G\ ,[k ~]q cSW 23. G(~ "

flag = [ BitVec('V_%02d' % i, 20) for i in range(32) ]

for i in range(32):
    s.add(flag[i] > 0x20)
    s.add(flag[i] < 0x80)

#for i in range(32):
    #if known_key[i] != ' ':
        #s.add(flag[i] == ord(known_key[i]))

s.add(cond0(flag) == 0)
#s.add(cond1(flag) == 0)
#s.add(cond2(flag) == 0)
#s.add(cond3(flag) == 0)
s.add(cond4(flag) == 0)

res = s.check()

if res == sat:
    m = s.model()
    answer = sorted ([(d, m[d]) for d in m], key = lambda x: str(x[0]))
    answer = [chr(int(str(ch[1]))) for ch in answer]
    answer = ''.join(answer)
    print(answer)
else:
    print("Solver said: %s" % res)


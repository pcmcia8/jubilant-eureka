from cond import *
from z3 import *

s = Solver ()


flag = [ BitVec('V_%02d' % i, 64) for i in range(32) ]

for i in range(32):
    s.add(flag[i] > 0x20)
    s.add(flag[i] < 0x80)

for c in cond[0::4]:
    s.add(c(flag) == 0)
    print('adding %s' % c.__name__)

for c in cond[2::4]:
    s.add(c(flag) == 0)
    print('adding %s' % c.__name__)

for c in cond[3::4]:
    s.add(c(flag) == 0)
    print('adding %s' % c.__name__)


res = s.check()

if res == sat:
    m = s.model()
    answer = sorted ([(d, m[d]) for d in m], key = lambda x: str(x[0]))
    answer = [chr(int(str(ch[1]))) for ch in answer]
    answer = '"%s"' % ''.join(answer)
    print(answer)
else:
    print("Solver said: %s" % res)


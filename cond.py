
def cond0(flag):
    k = flag[4]
    h = k * 0xef7a8c
    h += 0x9d865d8d

    k = flag[24]
    h += k * -0x45b53c
    h += 0x18baee57

    k = flag[0]
    h += k * -0xe4cf8b
    h -= 0x913fbbde

    k = flag[8]
    h += k * -0xf5c990
    h += 0x6bfaa656

    k = flag[20]
    h ^= k * 0x733178
    h = h ^ 0x61e3db3b

    k = flag[16]
    h ^= k * 0x9a17b8
    h -= 0xca2804b1

    k = flag[12]
    h ^= k * 0x773850
    h ^= 0x5a6f68be

    k = flag[28]
    h ^= k * 0xe21d3d
    h ^= 0x5c911d23

    h -= 0xffffffff81647a79
    h &= 0xffffffffffffffff
    return h

def cond1(flag):
    h = flag[17] * 0x99aa81
    h -= 0x74edea51

    h ^= flag[5] * 0x4aba22
    h += 0x598015bf

    h ^= flag[21] * 0x91a68a
    h ^= 0x6df18e52

    h ^= flag[1] * 0x942fde
    h += 0x15c825ee

    h += flag[13] * -0xfe2fbe
    h += 0xd5682b64

    h += flag[29] * -0xd7e52f
    h += 0x798bd018

    h ^= flag[25] * 0xe44f6a
    h -= 0xe66d523e

    h += flag[9] * 0xaf71d6
    h += 0x921122d3

    h -= 0xe1148bae
    h &= 0xffffffffffffffff
    return h


def cond2(flag):
    h = flag[10] * 0x48c500
    h -= 0x8fdaa1bc

    h += flag[30] * -0x152887
    h += 0x65f04e48

    h += flag[14] * -0xaa4247
    h ^= 0x3d63ec69

    h ^= flag[22] * 0x38d82d
    h ^= 0x872eca8f

    h ^= flag[26] * 0xf120ac
    h += 0x803dbdcf

    h += flag[2] * 0x254def
    h ^= 0xee380db3

    h ^= flag[18] * 0x9ef3e7
    h -= 0x6deaa90b

    h += flag[6] * 0x69c573
    h -= 0xc9ac5c5d

    h -= 0xfffffffdf3ba3f0d
    h &= 0xffffffffffffffff
    return h


def cond3(flag):
    h = flag[11] * 0x67dda4
    h += 0xf4753afc

    h += flag[31] * 0x5bb860
    h ^= 0xc1d47fc9

    h ^= flag[23] * 0xab0ce5
    h += 0x544ff977

    h += flag[7] * 0x148e94
    h -= 0x9cb3e419

    h += flag[15] * -0x9e06ae
    h -= 0xadc62064

    h ^= flag[3] * 0xfb9de1
    h ^= 0x4e3633f7

    h += flag[27] * -0xa8a511
    h ^= 0xa61f9208

    h += flag[19] * 0xd3468d
    h += 0x4a5d7b48

    h -= 0xffffffffef6412a2
    h &= 0xffffffffffffffff
    return h


def cond4(flag):
    k = flag[12]
    h = k * 0x640ba9
    h += 0x516c7a5c

    k = flag[0]
    h += k * -0xf1d9e5
    h += 0x8b424d6b

    k = flag[28]
    h += k * 0xd3e2f8
    h += 0x3802be78

    k = flag[24]
    h += k * 0xb558ce
    h -= 0x33418c8e

    k = flag[8]
    h += k * -0x2f03a7
    h ^= 0xe050b170

    k = flag[16]
    h += k * 0xb8fa61
    h ^= 0x1fc22df6

    k = flag[20]
    h += k * -0xe0c507
    h ^= 0xd8376e57

    k = flag[4]
    h += k * 0x8e354e
    h -= 0xd2cb3108

    h -= 0x100e79080
    h &= 0xffffffffffffffff
    return h

def cond5(flag):
    k = flag[17]
    h = k * 0xa9b448
    h ^= 0x9f938499

    k = flag[5]
    h += k * 0x906550
    h += 0x407021af

    k = flag[13]
    h ^= k * 0xaa5ad2
    h ^= 0x77cf83a7

    k = flag[29]
    h ^= k * 0xc49349
    h ^= 0x3067f4e7

    k = flag[9]
    h += k * 0x314f8e
    h += 0xcd975f3b

    k = flag[21]
    h ^= k * 0x81968b
    h += 0x893d2e0b

    k = flag[25]
    h += k * -0x5ffbac
    h ^= 0xf3378e3a

    k = flag[1]
    h += k * -0xf63c8e
    h -= 0x1c1d882b

    h -= 0x028e5eb48d
    h &= 0xffffffffffffffff
    return h

def cond6(flag):
    h = -1
    h &= 0xffffffffffffffff
    return h


def cond7(flag):
    h = -1
    h &= 0xffffffffffffffff
    return h


def cond8(flag):
    h = -1
    h &= 0xffffffffffffffff
    return h


def cond9(flag):
    h = -1
    h &= 0xffffffffffffffff
    return h


def cond10(flag):
    h = -1
    h &= 0xffffffffffffffff
    return h


def cond11(flag):
    h = -1
    h &= 0xffffffffffffffff
    return h


def cond12(flag):
    h = -1
    h &= 0xffffffffffffffff
    return h


def cond13(flag):
    h = -1
    h &= 0xffffffffffffffff
    return h


def cond14(flag):
    h = -1
    h &= 0xffffffffffffffff
    return h


def cond15(flag):
    h = -1
    h &= 0xffffffffffffffff
    return h


def cond16(flag):
    h = -1
    h &= 0xffffffffffffffff
    return h


def cond17(flag):
    h = -1
    h &= 0xffffffffffffffff
    return h


def cond18(flag):
    h = -1
    h &= 0xffffffffffffffff
    return h


def cond19(flag):
    h = -1
    h &= 0xffffffffffffffff
    return h

def cond20(flag):
    h = -1
    h &= 0xffffffffffffffff
    return h

def cond21(flag):
    h = -1
    h &= 0xffffffffffffffff
    return h

def cond22(flag):
    h = -1
    h &= 0xffffffffffffffff
    return h

def cond23(flag):
    h = -1
    h &= 0xffffffffffffffff
    return h

def cond24(flag):
    h = -1
    h &= 0xffffffffffffffff
    return h

def cond25(flag):
    h = -1
    h &= 0xffffffffffffffff
    return h

def cond26(flag):
    h = -1
    h &= 0xffffffffffffffff
    return h

def cond27(flag):
    h = -1
    h &= 0xffffffffffffffff
    return h

def cond28(flag):
    h = -1
    h &= 0xffffffffffffffff
    return h

def cond29(flag):
    h = -1
    h &= 0xffffffffffffffff
    return h

def cond30(flag):
    h = -1
    h &= 0xffffffffffffffff
    return h

def cond31(flag):
    h = -1
    h &= 0xffffffffffffffff
    return h


cond = [cond0, cond1, cond2, cond3, cond4, cond5, cond6, cond7, cond8, cond9, cond10, cond11, cond12, cond13, cond14, cond15, cond16,
        cond17, cond18, cond19, cond20, cond21, cond22, cond23, cond24, cond25, cond26, cond27, cond28, cond29, cond30, cond31]


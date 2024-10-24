
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
    k = flag[22]
    h = k * 0xa6edf9
    h ^= 0x77c58017

    k = flag[18]
    h += k * -0xe87bf4
    h -= 0x999bd740

    k = flag[2]
    h += k * -0x19864d
    h -= 0x41884bed

    k = flag[6]
    h += k * 0x901524
    h ^= 0x247bf095

    k = flag[10]
    h ^= k * 0xc897cc
    h ^= 0xeff7eea8

    k = flag[14]
    h ^= k * 0x731197
    h += 0x67a0d262

    k = flag[30]
    h += k * 0x5f591c
    h += 0x316661f9

    k = flag[26]
    h += k * 0x579d0e
    h -= 0x3427fa1c

    h -= 0x900d744b
    h &= 0xffffffffffffffff
    return h

def cond7(flag):
    k = flag[23]
    h = k * 0x9afaf6
    h ^= 0xdb895413

    k = flag[19]
    h += k * 0x7d1a12
    h -= 0xc679fc44

    k = flag[11]
    h += k * 0x4d84b1
    h += 0xa30387dc

    k = flag[15]
    h += k * -0x552b78
    h ^= 0xf54a725e

    k = flag[7]
    h ^= k * 0xf372a1
    h -= 0x4c5103ad

    k = flag[31]
    h += k * 0xb40eb5
    h ^= 0x16fa70d2

    k = flag[3]
    h ^= k * 0x9e5c18
    h += 0x38784353

    k = flag[27]
    h ^= k * 0xf2513b
    h += 0xa1fc09f0

    h -= 0x0101d6e408
    h &= 0xffffffffffffffff
    return h


def cond8(flag):
    k = flag[28]
    h = k * 0xac70b9
    h += 0xdae0a932

    k = flag[4]
    h ^= k * 0xc42b6f
    h ^= 0xbc03104c

    k = flag[0]
    h += k * -0x867193
    h += 0xdc48c63a

    k = flag[12]
    h += k * -0x6d31fe
    h ^= 0x4baeb6d0

    k = flag[16]
    h += k * -0xaaae58
    h -= 0xcd7121f8

    k = flag[20]
    h += k * 0x9faa7a
    h += 0xbe0a2c9c

    k = flag[24]
    h += k * 0x354ac6
    h ^= 0xd8ad17f1

    k = flag[8]
    h += k * -0x3f2acb
    h -= 0x8b6b7d89

    h -= 0x263c13793
    h &= 0xffffffffffffffff
    return h


def cond9(flag):
    k = flag[29]
    h = k * 0xe9d18a
    h ^= 0xcb5557ea

    k = flag[25]
    h ^= k * 0x8aa5b9
    h ^= 0x9125a906

    k = flag[17]
    h += k * -0x241997
    h += 0x6e46fcb8

    k = flag[5]
    h += k * 0xe3da0f
    h += 0x442800ec

    k = flag[13]
    h += k * 0xa5f9eb
    h += 0xbde8f9af

    k = flag[21]
    h += k * 0xd6e0fb
    h -= 0xc9d97243

    k = flag[1]
    h += k * 0x8dc36e
    h += 0xc54b7d21

    k = flag[9]
    h ^= k * 0xb072ee
    h -= 0x2a1ab0c1
    
    h -= 0x02bf2044db
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
    h = flag[16] * 0x336e91
    h += 0xa1eb20e3

    h += flag[4] * -0xd45de9
    h -= 0x381ac71a

    h += flag[8] * 0x76c8f8
    h ^= 0xd8caa2cd

    h += flag[20] * -0x945339
    h += 0x524d7efa

    h += flag[12] * 0x4474ec
    h -= 0xe47e82cd

    h ^= flag[0] * 0x51054f
    h ^= 0x3321c9b1

    h += flag[24] *-0xd7eb3b
    h += 0x36f6829d

    h += flag[28] * -0xad52e1
    h ^= 0x6ce2181a

    h -= 0xfffffffff39b4443
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
    h = flag[16] * 0xbae081
    h += 0x2359766f

    h ^= flag[24] * 0xc2483b
    h += 0xea986a57

    h += flag[28] * -0x520ee2
    h ^= 0xa6ff8114

    h += flag[8] * 0x9864ba
    h += 0x42833507

    h += flag[0] * -0x7cd278
    h ^= 0x360be811

    h ^= flag[4] * 0xbe6605
    h -= 0x4c927a8d

    h += flag[20] * 0x3bd2e8
    h += 0xb790cfd3

    h += flag[12] * -0x548c2b
    h += 0x2a0e04cc

    h -= 0x0221328792
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
    h = flag[24] * 0xb74a52
    h ^= 0x8354d4e8

    h ^= flag[4] * 0xf22ecd
    h -= 0x34cbf23b

    h += flag[20] * 0xbef4be
    h ^= 0x60a6c39a

    h ^= flag[8] * 0x7fe215
    h += 0xb14a7317

    h += flag[16] * -0xdb9f48
    h -= 0xbca905f2

    h += flag[28] * -0xbb4276
    h -= 0x920e2248

    h ^= flag[0] * 0xa3fbef
    h += 0x4c22d2d3

    h ^= flag[12] * 0xc5e883
    h ^= 0x50a6e5c9

    h -= 0xffffffffd8e5bdc6
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
    h = flag[4] * 0xf56c62
    h ^= 0x6c7d1f41

    h += flag[16] * 0x615605
    h += 0x5b52f6ee

    h += flag[20] * 0x828456
    h ^= 0x6f059759

    h += flag[28] * -0x50484b
    h += 0x84e222af

    h ^= flag[8] * 0x89d640
    h += 0xfd21345b

    h += flag[24] * -0xe4b191
    h += 0xfe15a789

    h ^= flag[0] * 0x8c58c1
    h ^= 0x4c49099f

    h += flag[12] * 0xa13c4c
    h ^= 0x27c5288e

    h -= 0x030098db0b
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
    h = flag[0] * 0x53a4e0
    h -= 0x6061803e

    h += flag[16] * -0x9bbfda
    h += 0x69b383f1

    h += flag[24] * -0x6b38aa
    h -= 0x971317a0

    h += flag[20] * 0x5d266f
    h += 0x5a4b0e60

    h += flag[8] * -0xedc3d3
    h ^= 0x93e59af6

    h += flag[4] * -0xb1f16c
    h ^= 0xe8d2b9a9

    h += flag[12] * 0x1c8e5b
    h -= 0x68839283

    h += flag[28] * 0x78f67b
    h -= 0xf53dd889

    h -= 0xfffffffe4eab225d
    h &= 0xffffffffffffffff
    return h

def cond29(flag):
    h = flag[17] * 0x87184c
    h -= 0x72a15ad8

    h ^= flag[25] * 0xf6372e
    h += 0x16ad4f89

    h += flag[21] * -0xd7355c
    h -= 0xbb20fe35

    h ^= flag[5] * 0x471dc1
    h ^= 0x572c95f4

    h += flag[1] * -0x8c4d98
    h -= 0x94650c74

    h += flag[13] * -0x5ceea1
    h ^= 0xf703dcc1

    h += flag[29] * -0xeb0863
    h += 0xad3bc09d

    h ^= flag[9] * 0xb6227f
    h -= 0x46ae6a17

    h -= 0xffffffff315e8118
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


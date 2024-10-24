
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
    h = flag[30] * 0xd14f3e
    h ^= 0xa06c215b

    h += flag[26] * -0xc5ecbf
    h += 0xb197c5c0

    h ^= flag[6] * 0x19ff9c
    h ^= 0x66e7d06c

    h += flag[2] * 0xe3288b
    h ^= 0x80af4325

    h ^= flag[10] * 0xcfb18c
    h -= 0xe13c8393

    h^= flag[18] * 0xd208e5
    h += 0xf96d2b51

    h += flag[14] * 0x42240f
    h -= 0x8732273d

    h += flag[22] * -0x1c6098
    h -= 0xd3d45c5a

    h -= 0x0b3d7e5b
    h &= 0xffffffffffffffff
    return h


def cond11(flag):
    h = flag[11] * 0x3768cc
    h ^= 0x19f61419

    h += flag[3] * -0x43be16
    h += 0x566cc6a8

    h ^= flag[15] * 0xb7cca5
    h += 0x6db0599e

    h += flag[27] * 0xf6419f
    h ^= 0xbd613538

    h ^= flag[19] * 0xae52fc
    h += 0x717a44dd

    h += flag[23] * -0x5eeb81
    h += 0xdd02182d

    h ^= flag[7] * 0xec1845
    h ^= 0xef8e5416

    h += flag[31] * 0x61a3be
    h ^= 0x9288d4fa

    h -= 0x0281bdbe05
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

"""NOT WORKING"""
def cond13(flag):
    h = flag[29] * 0x725059
    h ^= 0xa8b69f6b

    #check again
    h += flag[17] * 0x6dcfe7
    h ^= 0x653c249a

    h += flag[1] * 0x8f4c44
    h ^= 0x68e87685

    h += flag[9] * -0xd2f4ce
    h -= 0x87238dc5

    h ^= flag[13] * 0xe99d3f
    h += 0xed16797a

    h += flag[5] * 0xada536
    h -= 0x95a05aa9

    h += flag[25] * -0xe0b352
    h ^= 0x43c020

    h += flag[21] * 0x8675b6
    h += 0x34a29213

    h -= 0x20196a7e
    h &= 0xffffffffffffffff
    return h

def cond14(flag):
    h = flag[2] * 0x4a5e95
    h += 0x5ed7a1f1

    h += flag[22] * 0x3a7b49
    h ^= 0x87a91310

    h += flag[6] * -0xf27038
    h ^= 0xf64a0f19

    h += flag[30] * 0xa187d0
    h -= 0xbbcc735d

    h += flag[18] * -0xfc991a
    h ^= 0xf9ddd08f

    h += flag[26] * -0x4e947a
    h -= 0x59a9172e

    h ^= flag[14] * 0x324ead
    h -= 0x969a7a64

    h += flag[10] * -0x656b1b
    h += 0x8c112543

    h -= 0xfffffffdc1db45c7
    h &= 0xffffffffffffffff
    return h

def cond15(flag):
    h = flag[11] * 0x251b86
    h += 0xa751192c

    h += flag[7] * -0x743927
    h ^= 0xf851da43

    h ^= flag[31] * 0x9a3479
    h ^= 0x335087a5

    h ^= flag[3] * 0x778a0d
    h ^= 0x4bfd30d3

    h += flag[27] * -0x7e04b5
    h -= 0x5d540495

    h ^= flag[19] * 0xf1c3ee
    h += 0x460c48a6

    h += flag[15] * 0x883b8a
    h += 0x7b2ffbdc

    h += flag[23] * 0x993db1
    h += 0xa98b28fa

    h -= 0x0222087cd4
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
    h = flag[17] * 0xfb213b
    h -= 0x6773d643

    h ^= flag[9] * 0xde6876
    h ^= 0x8649fde3

    h ^= flag[29] * 0x629ff7
    h ^= 0xa0eeb203

    h += flag[25] * -0xdbb107
    h ^= 0x94aa6b62

    h += flag[1] * -0x262675
    h -= 0xdfcf5488

    h += flag[5] * 0xd691c5
    h -= 0x5b3ee746

    h += flag[13] * -0xcafc93
    h -= 0x111bde22

    h += flag[21] * -0x81f945
    h -= 0x90033b08

    h -= 0xfffffffd6349d7cf
    h &= 0xffffffffffffffff
    return h


def cond18(flag):
    h = flag[10] * 0x52f44d
    h ^= 0x33b3d0e4

    h ^= flag[30] * 0xe6e66e
    h -= 0x275d79b0

    h += flag[6] * -0xf98017
    h ^= 0x456e6c1d

    h += flag[14] * -0x34fcb0
    h ^= 0x28709cd8

    h ^= flag[2] * 0x4d8ba9
    h += 0xb5482f53

    h ^= flag[18] * 0x6c7e92
    h += 0x2af1d741

    h += flag[22] * 0xa4711e
    h ^= 0x22e79af6

    h += flag[26] * 0x33d374
    h -= 0x117efc0e

    h -= 0x9379438e
    h &= 0xffffffffffffffff
    return h


def cond19(flag):
    h = flag[27] * 0x65ac37
    h += 0x15e586b0

    h ^= flag[31] * 0xc6dde0
    h ^= 0x2354cad4

    h ^= flag[15] * 0x154abd
    h ^= 0xfee57fd5

    h ^= flag[19] * 0xa5e467
    h += 0x315624ef

    h ^= flag[23] * 0xb6bed6
    h -= 0x5285b0a5

    h += flag[7] * -0x832ae7
    h += 0xe961bedd

    h += flag[11] * 0xc46330
    h -= 0x4a9e1d65

    h ^= flag[3] * 0x3f8467
    h ^= 0x95a6a1c4

    h -= 0x01110e3519
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
    h = flag[13] * 0x4b2d02
    h ^= 0x4b59b93a

    h += flag[9] * -0x84bb2c
    h ^= 0x42d5652c

    h ^= flag[25] * 0x6f2d21
    h += 0x1020133a

    h += flag[29] * 0x5fe38f
    h -= 0x62807b20

    h += flag[21] * 0xea20a5
    h ^= 0x60779ceb

    h ^= flag[17] * 0x5c17aa
    h ^= 0x1aaf8a2d

    h += flag[5] * -0xb9feb0
    h -= 0xadbe02fb

    h += flag[1] * -0x782f79
    h -= 0xcfc12836

    h -= 0xfffffffe488d6b06
    h &= 0xffffffffffffffff
    return h

def cond22(flag):
    h = flag[6] * 0x608d19
    h -= 0x2eee62ec

    h += flag[14] * -0xbe18f4
    h ^= 0xb86f9b72

    h ^= flag[30] * 0x88dec9
    h += 0xaf5cd797

    h ^= flag[18] * 0xb68150
    h -= 0x3d073ba5

    h += flag[22] * 0x4d166c
    h += 0xbb1e1039

    h += flag[2] * -0x495e3f
    h += 0xe727b98e

    h += flag[10] * -0x5caba1
    h -= 0x1a3cf6c1

    h += flag[26] * 0x183a4d
    h -= 0xca0397e1

    h -= 0x6684a31d
    h &= 0xffffffffffffffff
    return h

def cond23(flag):
    h = flag[11] * 0xffd0ca
    h -= 0x8f26cee8

    h ^= flag[7] * 0xbf2b59
    h += 0xc76bad6e

    h += flag[23] * 0x29df01
    h += 0xeef034a2

    h ^= flag[27] * 0xbbda1d
    h += 0x5923194e

    h += flag[31] * -0x5d24a5
    h -= 0x81100799

    h += flag[15] * 0x3dc505
    h -= 0x69baee91

    h ^= flag[19] * 0x4e25a6
    h += 0x2468b30a

    h += flag[3] * -0xae1920
    h ^= 0xd3db6142

    h -= 0x01bb7af00f
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
    h = flag[1] * 0x73aaf0
    h ^= 0xa04e34f1

    h += flag[29] * 0xf61e43
    h += 0xd09b66f3

    h += flag[25] * 0x8cb5f0
    h += 0xc11c9b4b

    h ^= flag[17] * 0x4f53a8
    h -= 0x6465672e

    h += flag[9] * 0xb2e1fa
    h ^= 0x77c07fd8

    h += flag[21] * -0xb8b7b3
    h -= 0x882c1521

    h += flag[13] * 0x13b807
    h ^= 0x758dd142

    h ^= flag[5] * 0xdd40c4
    h -= 0x449786e6

    h -= 0x1b05dd93c
    h &= 0xffffffffffffffff
    return h

def cond26(flag):
    h = flag[14] * 0xca894b
    h += 0xa34fe406

    h += flag[18] * 0x11552b
    h += 0x3764ecd4

    h ^= flag[22] * 0x7dc36b
    h += 0xb45e777b

    h ^= flag[26] * 0xcec5a6
    h ^= 0x2d59bc15

    h += flag[30] * 0xb6e30d
    h ^= 0xfab9788c

    h ^= flag[10] * 0x859c14
    h += 0x41868e54

    h += flag[6] * 0xd178d3
    h += 0x958b0be3

    h ^= flag[2] * 0x61645c
    h += 0x9dc814cf

    h -= 0x47b801542
    h &= 0xffffffffffffffff
    return h

def cond27(flag):
    h = flag[27] * 0x7239e9
    h -= 0x760e5ada

    h += flag[3] * -0xf1c3d1
    h -= 0xef28a068

    h ^= flag[11] * 0x1b1367
    h ^= 0x31e00d5a

    h ^= flag[19] * 0x8038b3
    h += 0xb5163447

    h += flag[31] * 0x65fac9
    h += 0xe04a889a

    h += flag[23] * -0xd845ca
    h -= 0xab7d1c58

    h += flag[15] * 0xb2bbbc
    h ^= 0x3a017b92

    h ^= flag[7] * 0x33c8bd
    h += 0x540376e3

    h -= 0xffffffffb0e80c93
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
    h = flag[30] * 0x8c6412
    h ^= 0xc08c361c

    h ^= flag[14] * 0xb253c4
    h += 0x21bb1147

    h += flag[2] * 0x8f0579
    h -= 0xfa691186

    h += flag[22] * -0x7ac48a
    h += 0xbb787dd5

    h += flag[10] * 0x2737e6
    h ^= 0xa2bb7683

    h += flag[18] * -0x4363b9
    h ^= 0x88c45378

    h ^= flag[6] * 0xb38449
    h -= 0x209dc078

    h += flag[26] * 0x6e1316
    h += 0x1343dee9

    h -= 0xe3699527
    h &= 0xffffffffffffffff
    return h

def cond31(flag):
    h = flag[19] * 0x390b78
    h += 0x7d5deea4

    h += flag[15] * -0x70e6c8
    h -= 0x6ea339e2

    h ^= flag[27] * 0xd8a292
    h -= 0x288d6ec5

    h += flag[23] * -0x978c71
    h -= 0xe5d85ed8

    h += flag[31] * 0x9a14d4
    h -= 0xb69670cc

    h ^= flag[7] * 0x995144
    h -= 0xd2e77342

    h ^= flag[11] * 0x811c39
    h -= 0x2dd03565

    h ^= flag[3] * 0x9953d7
    h ^= 0x80877669

    h -= 0xfFFffffdf9422478
    h &= 0xffffffffffffffff
    return h


cond = [cond0, cond1, cond2, cond3, cond4, cond5, cond6, cond7, cond8, cond9, cond10, cond11, cond12, cond13, cond14, cond15, cond16,
        cond17, cond18, cond19, cond20, cond21, cond22, cond23, cond24, cond25, cond26, cond27, cond28, cond29, cond30, cond31]


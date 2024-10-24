
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void Condition_16(void)

{
  ulonglong uVar1;
  longlong lVar2;
  uint7 uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  code *UNRECOVERED_JUMPTABLE;
  uint7 uVar7;
  undefined2 uStack_158;
  undefined6 uStack_14e;
  uint7 uStack_10f;
  byte bStack_de;
  uint7 uStack_8f;
  
  uVar1 = ((ulonglong)(uint)g_MyInput._16_4_ & 0xff) * 0xbae081;
  uVar4 = uVar1 & 0xff;
  uVar3 = (uint7)(uVar1 + (ulonglong)g_TableBase4_x_y>0x100[0x6f][uVar4] * 0x100 >> 8);
  uVar5 = (ulonglong)uVar3 & 0xff;
  uVar4 = CONCAT71(uVar3,g_TableBase3_x_add_y[0x6f][uVar4]) + (ulonglong)g_TableBase4_x_y>0x100[0x76][uVar5] * 0x10000;
  uVar1 = uVar4 >> 0x10 & 0xff;
  uVar4 = (uVar4 & 0xffffffffffff00ff | (ulonglong)g_TableBase3_x_add_y[0x76][uVar5] << 8) +
          (ulonglong)g_TableBase4_x_y>0x100[0x59][uVar1] * 0x1000000;
  uVar5 = uVar4 >> 0x18 & 0xff;
  uVar4 = (uVar4 & 0xffffffffff00ffff | (ulonglong)g_TableBase3_x_add_y[0x59][uVar1] << 0x10) +
          ((ulonglong)g_TableBase4_x_y>0x100[0x23][uVar5] << 0x20);
  uVar1 = uVar4 >> 0x20 & 0xff;
  uVar5 = (uVar4 & 0xffffffff00ffffff | (ulonglong)g_TableBase3_x_add_y[0x23][uVar5] << 0x18) +
          ((ulonglong)g_TableBase4_x_y>0x100[0][uVar1] << 0x28);
  uVar4 = uVar5 >> 0x30;
  uVar1 = (uVar5 & 0xffffff00ffffffff | (ulonglong)g_TableBase3_x_add_y[0][uVar1] << 0x20) +
          ((ulonglong)g_TableBase4_x_y>0x100[0][uVar4] << 0x38);
  uVar4 = (uVar1 & 0xffffffffffff | (ulonglong)g_TableBase3_x_add_y[0][uVar4] << 0x30 |
          (ulonglong)g_TableBase3_x_add_y[0][uVar1 >> 0x38] << 0x38) ^
          ((ulonglong)g_MyInput._20_8_ >> 0x20 & 0xff) * 0xc2483b;
  uVar1 = uVar4 & 0xff;
  uVar3 = (uint7)(uVar4 + (ulonglong)g_TableBase4_x_y>0x100[0x57][uVar1] * 0x100 >> 8);
  uVar4 = (ulonglong)uVar3 & 0xff;
  uVar1 = CONCAT71(uVar3,g_TableBase3_x_add_y[0x57][uVar1]) + (ulonglong)g_TableBase4_x_y>0x100[0x6a][uVar4] * 0x10000;
  uVar5 = uVar1 >> 0x10 & 0xff;
  uVar4 = (uVar1 & 0xffffffffffff00ff | (ulonglong)g_TableBase3_x_add_y[0x6a][uVar4] << 8) +
          (ulonglong)g_TableBase4_x_y>0x100[0x98][uVar5] * 0x1000000;
  uVar1 = uVar4 >> 0x18 & 0xff;
  uVar4 = (uVar4 & 0xffffffffff00ffff | (ulonglong)g_TableBase3_x_add_y[0x98][uVar5] << 0x10) +
          ((ulonglong)g_TableBase4_x_y>0x100[0xea][uVar1] << 0x20);
  uVar5 = uVar4 >> 0x28 & 0xff;
  uVar4 = (uVar4 & 0xffffffff00ffffff | (ulonglong)g_TableBase3_x_add_y[0xea][uVar1] << 0x18) +
          ((ulonglong)g_TableBase4_x_y>0x100[0][uVar5] << 0x30);
  uVar1 = uVar4 >> 0x30 & 0xff;
  uVar4 = (uVar4 & 0xffff00ffffffffff | (ulonglong)g_TableBase3_x_add_y[0][uVar5] << 0x28) +
          ((ulonglong)g_TableBase4_x_y>0x100[0][uVar1] << 0x38);
  uVar4 = (uVar4 & 0xffffffffffff | (ulonglong)g_TableBase3_x_add_y[0][uVar1] << 0x30 |
          (ulonglong)g_TableBase3_x_add_y[0][uVar4 >> 0x38] << 0x38) + (g_MyInput._28_8_ & 0xff) * -0x520ee2;
  uStack_8f = (uint7)(uVar4 >> 8);
  uVar1 = (CONCAT71(uStack_8f,g_TableBase1_x_xor_y[0x14][uVar4 & 0xff]) & 0xff00000000ff |
           (ulonglong)g_TableBase1_x_xor_y[0x81][(ulonglong)uStack_8f & 0xff] << 8 |
           (ulonglong)
           g_TableBase1_x_xor_y[0xff]
           [(ulonglong)CONCAT16(g_TableBase1_x_xor_y[0x14][uVar4 & 0xff],(int6)(uVar4 >> 0x10)) & 0xff] << 0x10 |
           (ulonglong)g_TableBase1_x_xor_y[0xa6][uVar4 >> 0x18 & 0xff] << 0x18 |
           (ulonglong)g_TableBase1_x_xor_y[0][(ulonglong)(uStack_8f >> 0x18) & 0xff] << 0x20 |
           (ulonglong)g_TableBase1_x_xor_y[0][uVar4 >> 0x30 & 0xff] << 0x30 |
          (ulonglong)g_TableBase1_x_xor_y[0][uStack_8f >> 0x30] << 0x38) + (g_MyInput._8_8_ & 0xff) * 0x9864ba;
  uVar4 = uVar1 & 0xff;
  uVar7 = (uint7)(uVar1 + (ulonglong)g_TableBase4_x_y>0x100[7][uVar4] * 0x100 >> 8);
  uVar3 = uVar7 & 0xff;
  uVar4 = CONCAT71(uVar7,g_TableBase3_x_add_y[7][uVar4]) + (ulonglong)g_TableBase4_x_y>0x100[0x35][uVar3] * 0x10000 &
          0xffffffffffff00ff;
  bStack_de = (byte)(uVar4 >> 0x10);
  uVar4 = (uVar4 | (ulonglong)g_TableBase3_x_add_y[0x35][uVar3] << 8) +
          (ulonglong)g_TableBase4_x_y>0x100[0x83][(uint7)bStack_de] * 0x1000000;
  uVar5 = uVar4 >> 0x18 & 0xff;
  uVar4 = (uVar4 & 0xffffffffff00ffff | (ulonglong)g_TableBase3_x_add_y[0x83][(uint7)bStack_de] << 0x10) +
          ((ulonglong)g_TableBase4_x_y>0x100[0x42][uVar5] << 0x20);
  uVar1 = uVar4 >> 0x20 & 0xff;
  uVar4 = (uVar4 & 0xffffffff00ffffff | (ulonglong)g_TableBase3_x_add_y[0x42][uVar5] << 0x18) +
          ((ulonglong)g_TableBase4_x_y>0x100[0][uVar1] << 0x28);
  uVar5 = uVar4 >> 0x28 & 0xff;
  uVar4 = (uVar4 & 0xffffff00ffffffff | (ulonglong)g_TableBase3_x_add_y[0][uVar1] << 0x20) +
          ((ulonglong)g_TableBase4_x_y>0x100[0][uVar5] << 0x30);
  uVar4 = (uVar4 & 0xff00ffffffffff | (ulonglong)g_TableBase3_x_add_y[0][uVar5] << 0x28 |
          (ulonglong)g_TableBase3_x_add_y[0][uVar4 >> 0x38] << 0x38) +
          ((ulonglong)(uint)g_MyInput._0_4_ & 0xff) * -0x7cd278;
  uStack_10f = (uint7)(uVar4 >> 8);
  uVar4 = (CONCAT71(uStack_10f,g_TableBase1_x_xor_y[0x11][uVar4 & 0xff]) & 0xffff00000000ff |
           (ulonglong)g_TableBase1_x_xor_y[0xe8][uVar4 >> 8 & 0xff] << 8 |
           (ulonglong)g_TableBase1_x_xor_y[0xb][(ulonglong)(uStack_10f >> 8) & 0xff] << 0x10 |
           (ulonglong)g_TableBase1_x_xor_y[0x36][(ulonglong)(uStack_10f >> 0x10) & 0xff] << 0x18 |
           (ulonglong)g_TableBase1_x_xor_y[0][(ulonglong)(uStack_10f >> 0x18) & 0xff] << 0x20 |
          (ulonglong)g_TableBase1_x_xor_y[0][uVar4 >> 0x38] << 0x38) ^
          ((ulonglong)(uint)g_MyInput._4_4_ & 0xff) * 0xbe6605;
  uVar6 = uVar4 & 0xff;
  lVar2 = uVar4 + (ulonglong)g_TableBase6_x_<_y[0x8d][uVar6] * -0x100;
  uVar3 = (uint7)((ulonglong)lVar2 >> 8);
  uStack_14e = (undefined6)((ulonglong)lVar2 >> 0x10);
  uStack_158 = (undefined2)CONCAT71(uVar3,g_TableBase5_x_minus_y[0x8d][uVar6]);
  uVar1 = (ulonglong)uVar3 & 0xff;
  uVar5 = CONCAT62(uStack_14e,uStack_158) + (ulonglong)g_TableBase6_x_<_y[0x7a][uVar1] * -0x10000 & 0xffffffffffff00ff;
  uVar4 = (ulonglong)CONCAT16(g_TableBase5_x_minus_y[0x8d][uVar6],(int6)(uVar5 >> 0x10)) & 0xff;
  uVar1 = (uVar5 | (ulonglong)g_TableBase5_x_minus_y[0x7a][uVar1] << 8) +
          (ulonglong)g_TableBase6_x_<_y[0x92][uVar4] * -0x1000000;
  uVar5 = uVar1 >> 0x18 & 0xff;
  uVar4 = (uVar1 & 0xffffffffff00ffff | (ulonglong)g_TableBase5_x_minus_y[0x92][uVar4] << 0x10) -
          ((ulonglong)g_TableBase6_x_<_y[0x4c][uVar5] << 0x20);
  uVar1 = uVar4 >> 0x28 & 0xff;
  uVar4 = (uVar4 & 0xffffffff00ffffff | (ulonglong)g_TableBase5_x_minus_y[0x4c][uVar5] << 0x18) -
          ((ulonglong)g_TableBase6_x_<_y[0][uVar1] << 0x30);
  uVar5 = uVar4 >> 0x30 & 0xff;
  uVar4 = ((uVar4 & 0xffff00ffffffffff | (ulonglong)g_TableBase5_x_minus_y[0][uVar1] << 0x28) -
           ((ulonglong)g_TableBase6_x_<_y[0][uVar5] << 0x38) & 0xff00ffffffffffff |
          (ulonglong)g_TableBase5_x_minus_y[0][uVar5] << 0x30) + (g_MyInput._20_8_ & 0xff) * 0x3bd2e8;
  uVar5 = uVar4 & 0xff;
  uVar3 = (uint7)(uVar4 + (ulonglong)g_TableBase4_x_y>0x100[0xd3][uVar5] * 0x100 >> 8);
  uVar4 = (ulonglong)uVar3 & 0xff;
  uVar1 = CONCAT71(uVar3,g_TableBase3_x_add_y[0xd3][uVar5]) + (ulonglong)g_TableBase4_x_y>0x100[0xcf][uVar4] * 0x10000 &
          0xffffffffffff00ff;
  uVar5 = (ulonglong)CONCAT16(g_TableBase3_x_add_y[0xd3][uVar5],(int6)(uVar1 >> 0x10)) & 0xff;
  uVar4 = (uVar1 | (ulonglong)g_TableBase3_x_add_y[0xcf][uVar4] << 8) +
          (ulonglong)g_TableBase4_x_y>0x100[0x90][uVar5] * 0x1000000;
  uVar1 = uVar4 >> 0x18 & 0xff;
  uVar4 = (uVar4 & 0xffffffffff00ffff | (ulonglong)g_TableBase3_x_add_y[0x90][uVar5] << 0x10) +
          ((ulonglong)g_TableBase4_x_y>0x100[0xb7][uVar1] << 0x20);
  uVar5 = uVar4 >> 0x20 & 0xff;
  uVar4 = (uVar4 & 0xffffffff00ffffff | (ulonglong)g_TableBase3_x_add_y[0xb7][uVar1] << 0x18) +
          ((ulonglong)g_TableBase4_x_y>0x100[0][uVar5] << 0x28);
  uVar1 = uVar4 >> 0x28 & 0xff;
  uVar4 = (uVar4 & 0xffffff00ffffffff | (ulonglong)g_TableBase3_x_add_y[0][uVar5] << 0x20) +
          ((ulonglong)g_TableBase4_x_y>0x100[0][uVar1] << 0x30);
  uVar4 = (uVar4 & 0xff00ffffffffff | (ulonglong)g_TableBase3_x_add_y[0][uVar1] << 0x28 |
          (ulonglong)g_TableBase3_x_add_y[0][uVar4 >> 0x38] << 0x38) +
          ((ulonglong)g_MyInput._8_8_ >> 0x20 & 0xff) * -0x548c2b;
  uVar1 = uVar4 & 0xff;
  uVar7 = (uint7)(uVar4 + (ulonglong)g_TableBase4_x_y>0x100[0xcc][uVar1] * 0x100 >> 8);
  uVar3 = uVar7 & 0xff;
  uVar4 = CONCAT71(uVar7,g_TableBase3_x_add_y[0xcc][uVar1]) + (ulonglong)g_TableBase4_x_y>0x100[4][uVar3] * 0x10000;
  uVar5 = uVar4 >> 0x10 & 0xff;
  uVar4 = (uVar4 & 0xffffffffffff00ff | (ulonglong)g_TableBase3_x_add_y[4][uVar3] << 8) +
          (ulonglong)g_TableBase4_x_y>0x100[0xe][uVar5] * 0x1000000;
  uVar1 = uVar4 >> 0x18 & 0xff;
  uVar4 = (uVar4 & 0xffffffffff00ffff | (ulonglong)g_TableBase3_x_add_y[0xe][uVar5] << 0x10) +
          ((ulonglong)g_TableBase4_x_y>0x100[0x2a][uVar1] << 0x20);
  uVar5 = uVar4 >> 0x30 & 0xff;
  uVar4 = (uVar4 & 0xffffffff00ffffff | (ulonglong)g_TableBase3_x_add_y[0x2a][uVar1] << 0x18) +
          ((ulonglong)g_TableBase4_x_y>0x100[0][uVar5] << 0x38);
  uVar3 = (uint7)((uVar4 & 0xffffffffffff | (ulonglong)g_TableBase3_x_add_y[0][uVar5] << 0x30 |
                  (ulonglong)g_TableBase3_x_add_y[0][uVar4 >> 0x38] << 0x38) +
                  (ulonglong)g_TableBase6_x_<_y[0x92][uVar4 & 0xff] * -0x100 >> 8);
  uVar5 = (ulonglong)uVar3 & 0xff;
  uVar1 = CONCAT71(uVar3,g_TableBase5_x_minus_y[0x92][uVar4 & 0xff]) +
          (ulonglong)g_TableBase6_x_<_y[0x87][uVar5] * -0x10000;
  uVar4 = uVar1 >> 0x10 & 0xff;
  uVar1 = (uVar1 & 0xffffffffffff00ff | (ulonglong)g_TableBase5_x_minus_y[0x87][uVar5] << 8) +
          (ulonglong)g_TableBase6_x_<_y[0x32][uVar4] * -0x1000000;
  uVar5 = uVar1 >> 0x18 & 0xff;
  uVar4 = (uVar1 & 0xffffffffff00ffff | (ulonglong)g_TableBase5_x_minus_y[0x32][uVar4] << 0x10) -
          ((ulonglong)g_TableBase6_x_<_y[0x21][uVar5] << 0x20);
  uVar1 = uVar4 >> 0x20 & 0xff;
  uVar4 = (uVar4 & 0xffffffff00ffffff | (ulonglong)g_TableBase5_x_minus_y[0x21][uVar5] << 0x18) -
          ((ulonglong)g_TableBase6_x_<_y[2][uVar1] << 0x28);
  uVar5 = uVar4 >> 0x30 & 0xff;
  uVar4 = (uVar4 & 0xffffff00ffffffff | (ulonglong)g_TableBase5_x_minus_y[2][uVar1] << 0x20) -
          ((ulonglong)g_TableBase6_x_<_y[0][uVar5] << 0x38);
  UNRECOVERED_JUMPTABLE = (code *)0x180190743;
  if ((uVar4 & 0xffff | (ulonglong)g_TableBase2_x_or_y[0][uVar4 >> 0x10 & 0xff] << 0x10 |
       (ulonglong)g_TableBase2_x_or_y[0][uVar4 >> 0x18 & 0xff] << 0x18 |
       (ulonglong)g_TableBase2_x_or_y[0][(ulonglong)((uint)(uVar4 >> 0x20) & 0xff00ffff) & 0xff] << 0x20 |
       (ulonglong)g_TableBase2_x_or_y[0][uVar4 >> 0x28 & 0xff] << 0x28 |
       (ulonglong)g_TableBase2_x_or_y[0][g_TableBase5_x_minus_y[0][uVar5]] << 0x30 |
      (ulonglong)g_TableBase2_x_or_y[0][uVar4 >> 0x38] << 0x38) != 0) {
    UNRECOVERED_JUMPTABLE = MyPrintWrongKey;
  }
                    /* WARNING: Could not recover jumptable at 0x000180190740. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}


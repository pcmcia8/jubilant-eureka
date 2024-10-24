
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void Condition_4(void)

{
  ulonglong uVar1;
  uint7 uVar2;
  uint7 uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  code *UNRECOVERED_JUMPTABLE;
  uint7 uStack_147;
  uint7 uStack_e7;
  
  uVar1 = ((ulonglong)g_MyInput._8_8_ >> 0x20 & 0xff) * 0x640ba9;
  uVar4 = uVar1 & 0xff;
  uVar2 = (uint7)(uVar1 + (ulonglong)g_TableBase4_x_y>0x100[0x5c][uVar4] * 0x100 >> 8);
  uVar5 = (ulonglong)uVar2 & 0xff;
  uVar1 = CONCAT71(uVar2,g_TableBase3_x_add_y[0x5c][uVar4]) + (ulonglong)g_TableBase4_x_y>0x100[0x7a][uVar5] * 0x10000 &
          0xffffffffffff00ff;
  uVar4 = (ulonglong)CONCAT16(g_TableBase3_x_add_y[0x5c][uVar4],(int6)(uVar1 >> 0x10)) & 0xff;
  uVar1 = (uVar1 | (ulonglong)g_TableBase3_x_add_y[0x7a][uVar5] << 8) +
          (ulonglong)g_TableBase4_x_y>0x100[0x6c][uVar4] * 0x1000000;
  uVar5 = uVar1 >> 0x18 & 0xff;
  uVar1 = (uVar1 & 0xffffffffff00ffff | (ulonglong)g_TableBase3_x_add_y[0x6c][uVar4] << 0x10) +
          ((ulonglong)g_TableBase4_x_y>0x100[0x51][uVar5] << 0x20);
  uVar4 = uVar1 >> 0x20 & 0xff;
  uVar1 = ((uVar1 & 0xffffffff00ffffff | (ulonglong)g_TableBase3_x_add_y[0x51][uVar5] << 0x18) +
           ((ulonglong)g_TableBase4_x_y>0x100[0][uVar4] << 0x28) & 0xffffff00ffffffff |
           (ulonglong)g_TableBase3_x_add_y[0][uVar4] << 0x20 | (ulonglong)*g_TableBase3_x_add_y[0] << 0x38) +
          ((ulonglong)(uint)g_MyInput._0_4_ & 0xff) * -0xf1d9e5;
  uVar4 = uVar1 & 0xff;
  uVar3 = (uint7)(uVar1 + (ulonglong)g_TableBase4_x_y>0x100[0x6b][uVar4] * 0x100 >> 8);
  uVar2 = uVar3 & 0xff;
  uVar1 = CONCAT71(uVar3,g_TableBase3_x_add_y[0x6b][uVar4]) + (ulonglong)g_TableBase4_x_y>0x100[0x4d][uVar2] * 0x10000;
  uVar5 = uVar1 >> 0x10 & 0xff;
  uVar1 = (uVar1 & 0xffffffffffff00ff | (ulonglong)g_TableBase3_x_add_y[0x4d][uVar2] << 8) +
          (ulonglong)g_TableBase4_x_y>0x100[0x42][uVar5] * 0x1000000;
  uVar4 = uVar1 >> 0x18 & 0xff;
  uVar5 = (uVar1 & 0xffffffffff00ffff | (ulonglong)g_TableBase3_x_add_y[0x42][uVar5] << 0x10) +
          ((ulonglong)g_TableBase4_x_y>0x100[0x8b][uVar4] << 0x20);
  uVar1 = uVar5 >> 0x20 & 0xff;
  uVar5 = (uVar5 & 0xffffffff00ffffff | (ulonglong)g_TableBase3_x_add_y[0x8b][uVar4] << 0x18) +
          ((ulonglong)g_TableBase4_x_y>0x100[0][uVar1] << 0x28);
  uVar4 = uVar5 >> 0x28 & 0xff;
  uVar1 = ((uVar5 & 0xffffff00ffffffff | (ulonglong)g_TableBase3_x_add_y[0][uVar1] << 0x20) +
           ((ulonglong)g_TableBase4_x_y>0x100[0][uVar4] << 0x30) & 0xffff00ffffffffff |
          (ulonglong)g_TableBase3_x_add_y[0][uVar4] << 0x28) + ((ulonglong)(uint)g_MyInput._28_4_ & 0xff) * 0xd3e2f8;
  uVar4 = uVar1 & 0xff;
  uVar1 = uVar1 + (ulonglong)g_TableBase4_x_y>0x100[0x78][uVar4] * 0x100;
  uVar5 = uVar1 >> 8 & 0xff;
  uVar1 = CONCAT71((int7)(uVar1 >> 8),g_TableBase3_x_add_y[0x78][uVar4]) +
          (ulonglong)g_TableBase4_x_y>0x100[0xbe][uVar5] * 0x10000;
  uVar4 = uVar1 >> 0x10 & 0xff;
  uVar1 = (uVar1 & 0xffffffffffff00ff | (ulonglong)g_TableBase3_x_add_y[0xbe][uVar5] << 8) +
          (ulonglong)g_TableBase4_x_y>0x100[2][uVar4] * 0x1000000;
  uVar5 = uVar1 >> 0x18 & 0xff;
  uVar1 = (uVar1 & 0xffffffffff00ffff | (ulonglong)g_TableBase3_x_add_y[2][uVar4] << 0x10) +
          ((ulonglong)g_TableBase4_x_y>0x100[0x38][uVar5] << 0x20);
  uVar1 = (uVar1 & 0xffffff00ffffff | (ulonglong)g_TableBase3_x_add_y[0x38][uVar5] << 0x18 |
          (ulonglong)g_TableBase3_x_add_y[0][uVar1 >> 0x38] << 0x38) +
          ((ulonglong)(uint)g_MyInput._24_4_ & 0xff) * 0xb558ce;
  uVar5 = uVar1 & 0xff;
  uVar2 = (uint7)(uVar1 + (ulonglong)g_TableBase6_x_<_y[0x8e][uVar5] * -0x100 >> 8);
  uVar4 = (ulonglong)uVar2 & 0xff;
  uVar5 = CONCAT71(uVar2,g_TableBase5_x_minus_y[0x8e][uVar5]) + (ulonglong)g_TableBase6_x_<_y[0x8c][uVar4] * -0x10000;
  uVar1 = uVar5 >> 0x10 & 0xff;
  uVar4 = (uVar5 & 0xffffffffffff00ff | (ulonglong)g_TableBase5_x_minus_y[0x8c][uVar4] << 8) +
          (ulonglong)g_TableBase6_x_<_y[0x41][uVar1] * -0x1000000;
  uVar5 = uVar4 >> 0x18 & 0xff;
  uVar4 = (uVar4 & 0xffffffffff00ffff | (ulonglong)g_TableBase5_x_minus_y[0x41][uVar1] << 0x10) -
          ((ulonglong)g_TableBase6_x_<_y[0x33][uVar5] << 0x20);
  uVar1 = uVar4 >> 0x20 & 0xff;
  uVar4 = (uVar4 & 0xffffffff00ffffff | (ulonglong)g_TableBase5_x_minus_y[0x33][uVar5] << 0x18) -
          ((ulonglong)g_TableBase6_x_<_y[0][uVar1] << 0x28);
  uVar1 = (uVar4 & 0xffff00ffffffff | (ulonglong)g_TableBase5_x_minus_y[0][uVar1] << 0x20 |
          (ulonglong)g_TableBase5_x_minus_y[0][uVar4 >> 0x38] << 0x38) + (g_MyInput._8_8_ & 0xff) * -0x2f03a7;
  uStack_e7 = (uint7)(uVar1 >> 8);
  uVar1 = (CONCAT71(uStack_e7,g_TableBase1_x_xor_y[0x70][uVar1 & 0xff]) & 0xffff00ff000000ff |
           (ulonglong)g_TableBase1_x_xor_y[0xb1][(ulonglong)uStack_e7 & 0xff] << 8 |
           (ulonglong)
           g_TableBase1_x_xor_y[0x50]
           [(ulonglong)CONCAT16(g_TableBase1_x_xor_y[0x70][uVar1 & 0xff],(int6)(uVar1 >> 0x10)) & 0xff] << 0x10 |
           (ulonglong)g_TableBase1_x_xor_y[0xe0][uVar1 >> 0x18 & 0xff] << 0x18 |
          (ulonglong)g_TableBase1_x_xor_y[0][(ulonglong)(uStack_e7 >> 0x20) & 0xff] << 0x28) +
          ((ulonglong)(uint)g_MyInput._16_4_ & 0xff) * 0xb8fa61;
  uVar2 = (uint7)(uVar1 >> 8);
  uVar1 = (CONCAT71(uVar2,g_TableBase1_x_xor_y[0xf6][uVar1 & 0xff]) & 0xffffff00000000ff |
           (ulonglong)g_TableBase1_x_xor_y[0x2d][uVar1 >> 8 & 0xff] << 8 |
           (ulonglong)g_TableBase1_x_xor_y[0xc2][(ulonglong)(uVar2 >> 8) & 0xff] << 0x10 |
           (ulonglong)g_TableBase1_x_xor_y[0x1f][uVar1 >> 0x18 & 0xff] << 0x18 |
          (ulonglong)g_TableBase1_x_xor_y[0][(ulonglong)(uVar2 >> 0x18) & 0xff] << 0x20) +
          ((ulonglong)(uint)g_MyInput._20_4_ & 0xff) * -0xe0c507;
  uStack_147 = (uint7)(uVar1 >> 8);
  uVar4 = (CONCAT71(uStack_147,g_TableBase1_x_xor_y[0x57][uVar1 & 0xff]) & 0xff00000000ff |
           (ulonglong)g_TableBase1_x_xor_y[0x6e][(ulonglong)uStack_147 & 0xff] << 8 |
           (ulonglong)g_TableBase1_x_xor_y[0x37][uVar1 >> 0x10 & 0xff] << 0x10 |
           (ulonglong)g_TableBase1_x_xor_y[0xd8][(ulonglong)(uStack_147 >> 0x10) & 0xff] << 0x18 |
           (ulonglong)g_TableBase1_x_xor_y[0][uVar1 >> 0x20 & 0xff] << 0x20 |
           (ulonglong)g_TableBase1_x_xor_y[0][(ulonglong)(uStack_147 >> 0x28) & 0xff] << 0x30 |
          (ulonglong)g_TableBase1_x_xor_y[0][uVar1 >> 0x38] << 0x38) +
          ((ulonglong)(uint)g_MyInput._4_4_ & 0xff) * 0x8e354e;
  uVar1 = uVar4 & 0xff;
  uVar2 = (uint7)(uVar4 + (ulonglong)g_TableBase6_x_<_y[8][uVar1] * -0x100 >> 8);
  uVar5 = (ulonglong)uVar2 & 0xff;
  uVar4 = CONCAT71(uVar2,g_TableBase5_x_minus_y[8][uVar1]) + (ulonglong)g_TableBase6_x_<_y[0x31][uVar5] * -0x10000 &
          0xffffffffffff00ff;
  uVar6 = (ulonglong)CONCAT16(g_TableBase5_x_minus_y[8][uVar1],(int6)(uVar4 >> 0x10)) & 0xff;
  uVar1 = (uVar4 | (ulonglong)g_TableBase5_x_minus_y[0x31][uVar5] << 8) +
          (ulonglong)g_TableBase6_x_<_y[0xcb][uVar6] * -0x1000000;
  uVar4 = uVar1 >> 0x18 & 0xff;
  uVar1 = (uVar1 & 0xffffffffff00ffff | (ulonglong)g_TableBase5_x_minus_y[0xcb][uVar6] << 0x10) -
          ((ulonglong)g_TableBase6_x_<_y[0xd2][uVar4] << 0x20);
  uVar5 = uVar1 >> 0x30 & 0xff;
  uVar4 = (uVar1 & 0xffffffff00ffffff | (ulonglong)g_TableBase5_x_minus_y[0xd2][uVar4] << 0x18) -
          ((ulonglong)g_TableBase6_x_<_y[0][uVar5] << 0x38);
  uVar1 = uVar4 & 0xff;
  uVar3 = (uint7)((uVar4 & 0xff00ffffffffffff | (ulonglong)g_TableBase5_x_minus_y[0][uVar5] << 0x30) +
                  (ulonglong)g_TableBase6_x_<_y[0x80][uVar1] * -0x100 >> 8);
  uVar2 = uVar3 & 0xff;
  uVar1 = CONCAT71(uVar3,g_TableBase5_x_minus_y[0x80][uVar1]) + (ulonglong)g_TableBase6_x_<_y[0x90][uVar2] * -0x10000;
  uVar4 = uVar1 >> 0x10 & 0xff;
  uVar1 = (uVar1 & 0xffffffffffff00ff | (ulonglong)g_TableBase5_x_minus_y[0x90][uVar2] << 8) +
          (ulonglong)g_TableBase6_x_<_y[0xe7][uVar4] * -0x1000000;
  uVar5 = uVar1 >> 0x20 & 0xff;
  uVar1 = (uVar1 & 0xffffffffff00ffff | (ulonglong)g_TableBase5_x_minus_y[0xe7][uVar4] << 0x10) -
          ((ulonglong)g_TableBase6_x_<_y[1][uVar5] << 0x28);
  UNRECOVERED_JUMPTABLE = (code *)0x18007231c;
  if ((uVar1 & 0xff000000ff00ff | (ulonglong)g_TableBase5_x_minus_y[0][uVar1 >> 0x38] << 0x38 |
       (ulonglong)g_TableBase7_x_and_y[0xff][uVar1 >> 8 & 0xff] << 8 |
       (ulonglong)g_TableBase7_x_and_y[0xff][(ulonglong)((uint5)(uVar1 >> 0x18) & 0xffff00ff) & 0xff] << 0x18 |
       (ulonglong)g_TableBase7_x_and_y[0xff][g_TableBase5_x_minus_y[1][uVar5]] << 0x20 |
      (ulonglong)g_TableBase7_x_and_y[0xff][(uVar1 & 0xff0000000000) >> 0x28] << 0x28) != 0) {
    UNRECOVERED_JUMPTABLE = MyPrintWrongKey;
  }
                    /* WARNING: Could not recover jumptable at 0x000180072319. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* WARNING: Restarted to delay deadcode elimination for space: stack */

void Condition_20(void)

{
  byte bVar1;
  ulonglong uVar2;
  uint7 uVar3;
  ulonglong uVar4;
  code *UNRECOVERED_JUMPTABLE;
  ulonglong uVar5;
  ulonglong uVar6;
  uint7 uStack_77;
  
  uVar2 = ((ulonglong)(uint)g_MyInput._24_4_ & 0xff) * 0xb74a52;
  uVar2 = ((ulonglong)
           CONCAT13(g_TableBase1_x_xor_y[0x83][uVar2 >> 0x18],
                    CONCAT12(g_TableBase1_x_xor_y[0x54]
                             [(ulonglong)CONCAT16(g_TableBase1_x_xor_y[0xe8][uVar2 & 0xff],(int6)(uVar2 >> 0x10)) & 0xff
                             ],CONCAT11(g_TableBase1_x_xor_y[0xd4][uVar2 >> 8 & 0xff],
                                        g_TableBase1_x_xor_y[0xe8][uVar2 & 0xff]))) |
          (ulonglong)*g_TableBase1_x_xor_y[0] << 0x38) ^ ((ulonglong)(uint)g_MyInput._4_4_ & 0xff) * 0xf22ecd;
  uVar5 = uVar2 & 0xff;
  uVar3 = (uint7)(uVar2 + (ulonglong)g_TableBase6_x_<_y[0x3b][uVar5] * -0x100 >> 8);
  uVar4 = (ulonglong)uVar3 & 0xff;
  uVar2 = CONCAT71(uVar3,g_TableBase5_x_minus_y[0x3b][uVar5]) + (ulonglong)g_TableBase6_x_<_y[0xf2][uVar4] * -0x10000;
  uVar5 = uVar2 >> 0x10 & 0xff;
  uVar2 = (uVar2 & 0xffffffffffff00ff | (ulonglong)g_TableBase5_x_minus_y[0xf2][uVar4] << 8) +
          (ulonglong)g_TableBase6_x_<_y[0xcb][uVar5] * -0x1000000;
  uVar6 = uVar2 >> 0x18 & 0xff;
  uVar2 = (uVar2 & 0xffffffffff00ffff | (ulonglong)g_TableBase5_x_minus_y[0xcb][uVar5] << 0x10) -
          ((ulonglong)g_TableBase6_x_<_y[0x34][uVar6] << 0x20);
  uVar4 = uVar2 >> 0x20 & 0xff;
  uVar2 = (uVar2 & 0xffffffff00ffffff | (ulonglong)g_TableBase5_x_minus_y[0x34][uVar6] << 0x18) -
          ((ulonglong)g_TableBase6_x_<_y[0][uVar4] << 0x28);
  uVar5 = uVar2 >> 0x28 & 0xff;
  uVar2 = ((uVar2 & 0xffffff00ffffffff | (ulonglong)g_TableBase5_x_minus_y[0][uVar4] << 0x20) -
           ((ulonglong)g_TableBase6_x_<_y[0][uVar5] << 0x30) & 0xffff00ffffffffff |
          (ulonglong)g_TableBase5_x_minus_y[0][uVar5] << 0x28) + ((ulonglong)(uint)g_MyInput._20_4_ & 0xff) * 0xbef4be;
  uStack_77 = (uint7)(uVar2 >> 8);
  uVar4 = (CONCAT71(uStack_77,g_TableBase1_x_xor_y[0x9a][uVar2 & 0xff]) & 0xffffff00000000ff |
           (ulonglong)g_TableBase1_x_xor_y[0xc3][(ulonglong)uStack_77 & 0xff] << 8 |
           (ulonglong)
           g_TableBase1_x_xor_y[0xa6]
           [(ulonglong)CONCAT16(g_TableBase1_x_xor_y[0x9a][uVar2 & 0xff],(int6)(uVar2 >> 0x10)) & 0xff] << 0x10 |
           (ulonglong)g_TableBase1_x_xor_y[0x60][uVar2 >> 0x18 & 0xff] << 0x18 |
          (ulonglong)g_TableBase1_x_xor_y[0][(ulonglong)(uStack_77 >> 0x18) & 0xff] << 0x20) ^
          ((ulonglong)(uint)g_MyInput._8_4_ & 0xff) * 0x7fe215;
  uVar2 = uVar4 & 0xff;
  uVar4 = uVar4 + (ulonglong)g_TableBase4_x_y>0x100[0x17][uVar2] * 0x100;
  uVar5 = uVar4 >> 8 & 0xff;
  uVar4 = CONCAT71((int7)(uVar4 >> 8),g_TableBase3_x_add_y[0x17][uVar2]) +
          (ulonglong)g_TableBase4_x_y>0x100[0x73][uVar5] * 0x10000;
  uVar2 = uVar4 >> 0x10 & 0xff;
  uVar5 = (uVar4 & 0xffffffffffff00ff | (ulonglong)g_TableBase3_x_add_y[0x73][uVar5] << 8) +
          (ulonglong)g_TableBase4_x_y>0x100[0x4a][uVar2] * 0x1000000;
  uVar4 = uVar5 >> 0x18 & 0xff;
  uVar5 = (uVar5 & 0xffffffffff00ffff | (ulonglong)g_TableBase3_x_add_y[0x4a][uVar2] << 0x10) +
          ((ulonglong)g_TableBase4_x_y>0x100[0xb1][uVar4] << 0x20);
  uVar2 = uVar5 >> 0x28 & 0xff;
  uVar4 = (uVar5 & 0xffffffff00ffffff | (ulonglong)g_TableBase3_x_add_y[0xb1][uVar4] << 0x18) +
          ((ulonglong)g_TableBase4_x_y>0x100[0][uVar2] << 0x30);
  uVar5 = (uVar4 & 0xff00ffffffffff | (ulonglong)g_TableBase3_x_add_y[0][uVar2] << 0x28 |
          (ulonglong)g_TableBase3_x_add_y[0][uVar4 >> 0x38] << 0x38) +
          ((ulonglong)(uint)g_MyInput._16_4_ & 0xff) * -0xdb9f48;
  uVar2 = uVar5 & 0xff;
  uVar5 = uVar5 + (ulonglong)g_TableBase6_x_<_y[0xf2][uVar2] * -0x100;
  uVar4 = uVar5 >> 8 & 0xff;
  uVar2 = CONCAT71((int7)(uVar5 >> 8),g_TableBase5_x_minus_y[0xf2][uVar2]) +
          (ulonglong)g_TableBase6_x_<_y[5][uVar4] * -0x10000;
  uVar5 = uVar2 >> 0x10 & 0xff;
  uVar2 = (uVar2 & 0xffffffffffff00ff | (ulonglong)g_TableBase5_x_minus_y[5][uVar4] << 8) +
          (ulonglong)g_TableBase6_x_<_y[0xa9][uVar5] * -0x1000000;
  uVar4 = uVar2 >> 0x18 & 0xff;
  uVar2 = (uVar2 & 0xffffffffff00ffff | (ulonglong)g_TableBase5_x_minus_y[0xa9][uVar5] << 0x10) -
          ((ulonglong)g_TableBase6_x_<_y[0xbc][uVar4] << 0x20);
  uVar5 = uVar2 >> 0x20 & 0xff;
  uVar2 = (uVar2 & 0xffffffff00ffffff | (ulonglong)g_TableBase5_x_minus_y[0xbc][uVar4] << 0x18) -
          ((ulonglong)g_TableBase6_x_<_y[0][uVar5] << 0x28);
  uVar4 = uVar2 >> 0x28 & 0xff;
  uVar2 = (uVar2 & 0xffffff00ffffffff | (ulonglong)g_TableBase5_x_minus_y[0][uVar5] << 0x20) -
          ((ulonglong)g_TableBase6_x_<_y[0][uVar4] << 0x30);
  uVar5 = uVar2 >> 0x30 & 0xff;
  uVar4 = ((uVar2 & 0xffff00ffffffffff | (ulonglong)g_TableBase5_x_minus_y[0][uVar4] << 0x28) -
           ((ulonglong)g_TableBase6_x_<_y[0][uVar5] << 0x38) & 0xff00ffffffffffff |
          (ulonglong)g_TableBase5_x_minus_y[0][uVar5] << 0x30) + ((ulonglong)(uint)g_MyInput._28_4_ & 0xff) * -0xbb4276;
  uVar2 = uVar4 & 0xff;
  uVar3 = (uint7)(uVar4 + (ulonglong)g_TableBase6_x_<_y[0x48][uVar2] * -0x100 >> 8);
  uVar4 = (ulonglong)uVar3 & 0xff;
  uVar2 = CONCAT71(uVar3,g_TableBase5_x_minus_y[0x48][uVar2]) + (ulonglong)g_TableBase6_x_<_y[0x22][uVar4] * -0x10000;
  uVar5 = uVar2 >> 0x10 & 0xff;
  uVar2 = (uVar2 & 0xffffffffffff00ff | (ulonglong)g_TableBase5_x_minus_y[0x22][uVar4] << 8) +
          (ulonglong)g_TableBase6_x_<_y[0xe][uVar5] * -0x1000000;
  uVar4 = uVar2 >> 0x18 & 0xff;
  uVar2 = (uVar2 & 0xffffffffff00ffff | (ulonglong)g_TableBase5_x_minus_y[0xe][uVar5] << 0x10) -
          ((ulonglong)g_TableBase6_x_<_y[0x92][uVar4] << 0x20);
  uVar5 = uVar2 >> 0x20 & 0xff;
  uVar2 = (uVar2 & 0xffffffff00ffffff | (ulonglong)g_TableBase5_x_minus_y[0x92][uVar4] << 0x18) -
          ((ulonglong)g_TableBase6_x_<_y[0][uVar5] << 0x28);
  uVar4 = uVar2 >> 0x28 & 0xff;
  uVar5 = (uVar2 & 0xffffff00ffffffff | (ulonglong)g_TableBase5_x_minus_y[0][uVar5] << 0x20) -
          ((ulonglong)g_TableBase6_x_<_y[0][uVar4] << 0x30);
  uVar2 = uVar5 >> 0x30 & 0xff;
  uVar4 = (uVar5 & 0xffff00ffffffffff | (ulonglong)g_TableBase5_x_minus_y[0][uVar4] << 0x28) -
          ((ulonglong)g_TableBase6_x_<_y[0][uVar2] << 0x38);
  uVar2 = (uVar4 & 0xffffffffffff | (ulonglong)g_TableBase5_x_minus_y[0][uVar2] << 0x30 |
          (ulonglong)g_TableBase5_x_minus_y[0][uVar4 >> 0x38] << 0x38) ^
          ((ulonglong)(uint)g_MyInput._0_4_ & 0xff) * 0xa3fbef;
  uVar3 = (uint7)(uVar2 + (ulonglong)g_TableBase4_x_y>0x100[0xd3][uVar2 & 0xff] * 0x100 >> 8);
  uVar5 = (ulonglong)uVar3 & 0xff;
  uVar4 = CONCAT71(uVar3,g_TableBase3_x_add_y[0xd3][uVar2 & 0xff]) +
          (ulonglong)g_TableBase4_x_y>0x100[0xd2][uVar5] * 0x10000;
  uVar2 = uVar4 >> 0x10 & 0xff;
  uVar4 = (uVar4 & 0xffffffffffff00ff | (ulonglong)g_TableBase3_x_add_y[0xd2][uVar5] << 8) +
          (ulonglong)g_TableBase4_x_y>0x100[0x22][uVar2] * 0x1000000;
  uVar5 = uVar4 >> 0x18 & 0xff;
  uVar2 = (uVar4 & 0xffffffffff00ffff | (ulonglong)g_TableBase3_x_add_y[0x22][uVar2] << 0x10) +
          ((ulonglong)g_TableBase4_x_y>0x100[0x4c][uVar5] << 0x20);
  uVar4 = uVar2 >> 0x30 & 0xff;
  uVar2 = (uVar2 & 0xffffffff00ffffff | (ulonglong)g_TableBase3_x_add_y[0x4c][uVar5] << 0x18) +
          ((ulonglong)g_TableBase4_x_y>0x100[0][uVar4] << 0x38);
  uVar4 = (uVar2 & 0xffffffffffff | (ulonglong)g_TableBase3_x_add_y[0][uVar4] << 0x30 |
          (ulonglong)g_TableBase3_x_add_y[0][uVar2 >> 0x38] << 0x38) ^
          ((ulonglong)(uint)g_MyInput._12_4_ & 0xff) * 0xc5e883;
  bVar1 = g_TableBase1_x_xor_y[0xc9][uVar4 & 0xff];
  uVar3 = (uint7)(uVar4 >> 8);
  uVar3 = (uint7)((CONCAT71(uVar3,bVar1) & 0xffff00000000ff |
                   (ulonglong)g_TableBase1_x_xor_y[0xe5][(ulonglong)uVar3 & 0xff] << 8 |
                   (ulonglong)g_TableBase1_x_xor_y[0xa6][uVar4 >> 0x10 & 0xff] << 0x10 |
                   (ulonglong)g_TableBase1_x_xor_y[0x50][(ulonglong)(uVar3 >> 0x10) & 0xff] << 0x18 |
                   (ulonglong)g_TableBase1_x_xor_y[0][(uVar2 & 0xff00000000) >> 0x20] << 0x20 |
                  (ulonglong)g_TableBase1_x_xor_y[0][uVar3 >> 0x30] << 0x38) +
                  (ulonglong)g_TableBase6_x_<_y[0xc6][bVar1] * -0x100 >> 8);
  uVar5 = (ulonglong)uVar3 & 0xff;
  uVar4 = CONCAT71(uVar3,g_TableBase5_x_minus_y[0xc6][bVar1]) + (ulonglong)g_TableBase6_x_<_y[0xbd][uVar5] * -0x10000;
  uVar2 = uVar4 >> 0x10 & 0xff;
  uVar4 = (uVar4 & 0xffffffffffff00ff | (ulonglong)g_TableBase5_x_minus_y[0xbd][uVar5] << 8) +
          (ulonglong)g_TableBase6_x_<_y[0xe5][uVar2] * -0x1000000;
  uVar6 = uVar4 >> 0x18 & 0xff;
  uVar2 = (uVar4 & 0xffffffffff00ffff | (ulonglong)g_TableBase5_x_minus_y[0xe5][uVar2] << 0x10) -
          ((ulonglong)g_TableBase6_x_<_y[0xd8][uVar6] << 0x20);
  uVar5 = uVar2 >> 0x20 & 0xff;
  uVar4 = (uVar2 & 0xffffffff00ffffff | (ulonglong)g_TableBase5_x_minus_y[0xd8][uVar6] << 0x18) -
          ((ulonglong)g_TableBase6_x_<_y[0xff][uVar5] << 0x28);
  uVar2 = uVar4 >> 0x28 & 0xff;
  uVar5 = (uVar4 & 0xffffff00ffffffff | (ulonglong)g_TableBase5_x_minus_y[0xff][uVar5] << 0x20) -
          ((ulonglong)g_TableBase6_x_<_y[0xff][uVar2] << 0x30);
  uVar4 = uVar5 >> 0x30 & 0xff;
  uVar2 = (uVar5 & 0xffff00ffffffffff | (ulonglong)g_TableBase5_x_minus_y[0xff][uVar2] << 0x28) -
          ((ulonglong)g_TableBase6_x_<_y[0xff][uVar4] << 0x38);
  UNRECOVERED_JUMPTABLE = (code *)0x1801ece02;
  if ((uVar2 & 0xffff0000ffff | (ulonglong)g_TableBase5_x_minus_y[0xff][uVar2 >> 0x38] << 0x38 |
       (ulonglong)g_TableBase2_x_or_y[0][uVar2 >> 0x10 & 0xff] << 0x10 |
       (ulonglong)g_TableBase2_x_or_y[0][(uVar2 & 0xffffff00ffff) >> 0x18 & 0xff] << 0x18 |
      (ulonglong)g_TableBase2_x_or_y[0][g_TableBase5_x_minus_y[0xff][uVar4]] << 0x30) != 0) {
    UNRECOVERED_JUMPTABLE = MyPrintWrongKey;
  }
                    /* WARNING: Could not recover jumptable at 0x0001801ecdff. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}


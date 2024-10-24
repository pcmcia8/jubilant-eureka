
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void Condition_6(void)

{
  uint7 uVar1;
  ulonglong uVar2;
  uint7 uVar3;
  ulonglong uVar4;
  code *UNRECOVERED_JUMPTABLE;
  ulonglong uVar5;
  ulonglong uVar6;
  uint7 uStack_1ef;
  
  uVar2 = ((ulonglong)(uint)g_MyInput._22_4_ & 0xff) * 0xa6edf9;
  uVar3 = (uint7)(uVar2 >> 8);
  uVar5 = ((ulonglong)
           CONCAT14(*g_TableBase1_x_xor_y[0],
                    CONCAT13(g_TableBase1_x_xor_y[0x77][uVar3 >> 0x10],
                             CONCAT12(g_TableBase1_x_xor_y[0xc5][uVar2 >> 0x10 & 0xff],
                                      CONCAT11(g_TableBase1_x_xor_y[0x80][uVar3 & 0xff],
                                               g_TableBase1_x_xor_y[0x17][uVar2 & 0xff])))) |
           (ulonglong)*g_TableBase1_x_xor_y[0] << 0x30 | (ulonglong)*g_TableBase1_x_xor_y[0] << 0x38) +
          ((ulonglong)(uint)g_MyInput._18_4_ & 0xff) * -0xe87bf4;
  uVar2 = uVar5 & 0xff;
  uVar3 = (uint7)(uVar5 + (ulonglong)g_TableBase6_x_<_y[0x40][uVar2] * -0x100 >> 8);
  uVar5 = (ulonglong)uVar3 & 0xff;
  uVar2 = CONCAT71(uVar3,g_TableBase5_x_minus_y[0x40][uVar2]) + (ulonglong)g_TableBase6_x_<_y[0xd7][uVar5] * -0x10000;
  uVar4 = uVar2 >> 0x10 & 0xff;
  uVar2 = (uVar2 & 0xffffffffffff00ff | (ulonglong)g_TableBase5_x_minus_y[0xd7][uVar5] << 8) +
          (ulonglong)g_TableBase6_x_<_y[0x9b][uVar4] * -0x1000000;
  uVar5 = uVar2 >> 0x18 & 0xff;
  uVar4 = (uVar2 & 0xffffffffff00ffff | (ulonglong)g_TableBase5_x_minus_y[0x9b][uVar4] << 0x10) -
          ((ulonglong)g_TableBase6_x_<_y[0x99][uVar5] << 0x20);
  uVar2 = uVar4 >> 0x28 & 0xff;
  uVar5 = (uVar4 & 0xffffffff00ffffff | (ulonglong)g_TableBase5_x_minus_y[0x99][uVar5] << 0x18) -
          ((ulonglong)g_TableBase6_x_<_y[0][uVar2] << 0x30);
  uVar4 = uVar5 >> 0x30 & 0xff;
  uVar2 = ((uVar5 & 0xffff00ffffffffff | (ulonglong)g_TableBase5_x_minus_y[0][uVar2] << 0x28) -
           ((ulonglong)g_TableBase6_x_<_y[0][uVar4] << 0x38) & 0xff00ffffffffffff |
          (ulonglong)g_TableBase5_x_minus_y[0][uVar4] << 0x30) + (g_MyInput._2_8_ & 0xff) * -0x19864d;
  uVar5 = uVar2 & 0xff;
  uVar3 = (uint7)(uVar2 + (ulonglong)g_TableBase6_x_<_y[0xed][uVar5] * -0x100 >> 8);
  uVar2 = (ulonglong)uVar3 & 0xff;
  uVar4 = CONCAT71(uVar3,g_TableBase5_x_minus_y[0xed][uVar5]) + (ulonglong)g_TableBase6_x_<_y[0x4b][uVar2] * -0x10000 &
          0xffffffffffff00ff;
  uVar6 = (ulonglong)CONCAT16(g_TableBase5_x_minus_y[0xed][uVar5],(int6)(uVar4 >> 0x10)) & 0xff;
  uVar2 = (uVar4 | (ulonglong)g_TableBase5_x_minus_y[0x4b][uVar2] << 8) +
          (ulonglong)g_TableBase6_x_<_y[0x88][uVar6] * -0x1000000;
  uVar5 = uVar2 >> 0x18 & 0xff;
  uVar2 = (uVar2 & 0xffffffffff00ffff | (ulonglong)g_TableBase5_x_minus_y[0x88][uVar6] << 0x10) -
          ((ulonglong)g_TableBase6_x_<_y[0x41][uVar5] << 0x20);
  uVar4 = uVar2 >> 0x20 & 0xff;
  uVar2 = (uVar2 & 0xffffffff00ffffff | (ulonglong)g_TableBase5_x_minus_y[0x41][uVar5] << 0x18) -
          ((ulonglong)g_TableBase6_x_<_y[0][uVar4] << 0x28);
  uVar5 = uVar2 >> 0x30 & 0xff;
  uVar2 = ((uVar2 & 0xffffff00ffffffff | (ulonglong)g_TableBase5_x_minus_y[0][uVar4] << 0x20) -
           ((ulonglong)g_TableBase6_x_<_y[0][uVar5] << 0x38) & 0xff00ffffffffffff |
          (ulonglong)g_TableBase5_x_minus_y[0][uVar5] << 0x30) + ((ulonglong)g_MyInput._2_8_ >> 0x20 & 0xff) * 0x901524;
  uVar3 = (uint7)(uVar2 >> 8);
  uVar2 = (CONCAT71(uVar3,g_TableBase1_x_xor_y[0x95][uVar2 & 0xff]) & 0xff00ff00000000ff |
           (ulonglong)g_TableBase1_x_xor_y[0xf0][uVar3 & 0xff] << 8 |
           (ulonglong)g_TableBase1_x_xor_y[0x7b][uVar2 >> 0x10 & 0xff] << 0x10 |
           (ulonglong)g_TableBase1_x_xor_y[0x24][(ulonglong)(uVar3 >> 0x10) & 0xff] << 0x18 |
           (ulonglong)g_TableBase1_x_xor_y[0][(ulonglong)(uVar3 >> 0x18) & 0xff] << 0x20 |
          (ulonglong)g_TableBase1_x_xor_y[0][(ulonglong)(uVar3 >> 0x28) & 0xff] << 0x30) ^
          (g_MyInput._10_8_ & 0xff) * 0xc897cc;
  uVar3 = (uint7)(uVar2 >> 8);
  uVar5 = (CONCAT71(uVar3,g_TableBase1_x_xor_y[0xa8][uVar2 & 0xff]) & 0xffff0000000000ff |
           (ulonglong)g_TableBase1_x_xor_y[0xee][uVar3 & 0xff] << 8 |
           (ulonglong)g_TableBase1_x_xor_y[0xf7][(ulonglong)(uVar3 >> 8) & 0xff] << 0x10 |
           (ulonglong)g_TableBase1_x_xor_y[0xef][uVar2 >> 0x18 & 0xff] << 0x18 |
           (ulonglong)g_TableBase1_x_xor_y[0][(ulonglong)(uVar3 >> 0x18) & 0xff] << 0x20 |
          (ulonglong)g_TableBase1_x_xor_y[0][(((ulonglong)uVar3 & 0xff00000000) << 8) >> 0x28] << 0x28) ^
          ((ulonglong)g_MyInput._10_8_ >> 0x20 & 0xff) * 0x731197;
  uVar2 = uVar5 & 0xff;
  uVar5 = uVar5 + (ulonglong)g_TableBase4_x_y>0x100[0x62][uVar2] * 0x100;
  uVar4 = uVar5 >> 8 & 0xff;
  uVar2 = CONCAT71((int7)(uVar5 >> 8),g_TableBase3_x_add_y[0x62][uVar2]) +
          (ulonglong)g_TableBase4_x_y>0x100[0xd2][uVar4] * 0x10000;
  uVar5 = uVar2 >> 0x10 & 0xff;
  uVar2 = (uVar2 & 0xffffffffffff00ff | (ulonglong)g_TableBase3_x_add_y[0xd2][uVar4] << 8) +
          (ulonglong)g_TableBase4_x_y>0x100[0xa0][uVar5] * 0x1000000;
  uVar4 = uVar2 >> 0x18 & 0xff;
  uVar5 = (uVar2 & 0xffffffffff00ffff | (ulonglong)g_TableBase3_x_add_y[0xa0][uVar5] << 0x10) +
          ((ulonglong)g_TableBase4_x_y>0x100[0x67][uVar4] << 0x20);
  uVar2 = uVar5 >> 0x30 & 0xff;
  uVar5 = (uVar5 & 0xffffffff00ffffff | (ulonglong)g_TableBase3_x_add_y[0x67][uVar4] << 0x18) +
          ((ulonglong)g_TableBase4_x_y>0x100[0][uVar2] << 0x38);
  uVar5 = (uVar5 & 0xffffffffffff | (ulonglong)g_TableBase3_x_add_y[0][uVar2] << 0x30 |
          (ulonglong)g_TableBase3_x_add_y[0][uVar5 >> 0x38] << 0x38) +
          ((ulonglong)(uint)g_MyInput._30_4_ & 0xff) * 0x5f591c;
  uVar2 = uVar5 & 0xff;
  uVar3 = (uint7)(uVar5 + (ulonglong)g_TableBase4_x_y>0x100[0xf9][uVar2] * 0x100 >> 8);
  uVar4 = (ulonglong)uVar3 & 0xff;
  uVar2 = CONCAT71(uVar3,g_TableBase3_x_add_y[0xf9][uVar2]) + (ulonglong)g_TableBase4_x_y>0x100[0x61][uVar4] * 0x10000;
  uVar5 = uVar2 >> 0x10 & 0xff;
  uVar2 = (uVar2 & 0xffffffffffff00ff | (ulonglong)g_TableBase3_x_add_y[0x61][uVar4] << 8) +
          (ulonglong)g_TableBase4_x_y>0x100[0x66][uVar5] * 0x1000000;
  uVar4 = uVar2 >> 0x18 & 0xff;
  uVar2 = (uVar2 & 0xffffffffff00ffff | (ulonglong)g_TableBase3_x_add_y[0x66][uVar5] << 0x10) +
          ((ulonglong)g_TableBase4_x_y>0x100[0x31][uVar4] << 0x20);
  uVar5 = uVar2 >> 0x30 & 0xff;
  uVar2 = ((uVar2 & 0xffffffff00ffffff | (ulonglong)g_TableBase3_x_add_y[0x31][uVar4] << 0x18) +
           ((ulonglong)g_TableBase4_x_y>0x100[0][uVar5] << 0x38) & 0xff00ffffffffffff |
          (ulonglong)g_TableBase3_x_add_y[0][uVar5] << 0x30) + ((ulonglong)(uint)g_MyInput._26_4_ & 0xff) * 0x579d0e;
  uVar4 = uVar2 & 0xff;
  uVar3 = (uint7)(uVar2 + (ulonglong)g_TableBase6_x_<_y[0x1c][uVar4] * -0x100 >> 8);
  uVar2 = (ulonglong)uVar3 & 0xff;
  uVar5 = CONCAT71(uVar3,g_TableBase5_x_minus_y[0x1c][uVar4]) + (ulonglong)g_TableBase6_x_<_y[0xfa][uVar2] * -0x10000 &
          0xffffffffffff00ff;
  uVar4 = (ulonglong)CONCAT16(g_TableBase5_x_minus_y[0x1c][uVar4],(int6)(uVar5 >> 0x10)) & 0xff;
  uVar2 = (uVar5 | (ulonglong)g_TableBase5_x_minus_y[0xfa][uVar2] << 8) +
          (ulonglong)g_TableBase6_x_<_y[0x27][uVar4] * -0x1000000;
  uVar5 = uVar2 >> 0x18 & 0xff;
  uVar2 = (uVar2 & 0xffffffffff00ffff | (ulonglong)g_TableBase5_x_minus_y[0x27][uVar4] << 0x10) -
          ((ulonglong)g_TableBase6_x_<_y[0x34][uVar5] << 0x20);
  uVar4 = uVar2 >> 0x30 & 0xff;
  uVar2 = (uVar2 & 0xffffffff00ffffff | (ulonglong)g_TableBase5_x_minus_y[0x34][uVar5] << 0x18) -
          ((ulonglong)g_TableBase6_x_<_y[0][uVar4] << 0x38);
  uVar3 = (uint7)((uVar2 & 0xffffffffffff | (ulonglong)g_TableBase5_x_minus_y[0][uVar4] << 0x30 |
                  (ulonglong)g_TableBase5_x_minus_y[0][uVar2 >> 0x38] << 0x38) +
                  (ulonglong)g_TableBase6_x_<_y[0x4b][uVar2 & 0xff] * -0x100 >> 8);
  uVar1 = uVar3 & 0xff;
  uVar2 = CONCAT71(uVar3,g_TableBase5_x_minus_y[0x4b][uVar2 & 0xff]) +
          (ulonglong)g_TableBase6_x_<_y[0x74][uVar1] * -0x10000;
  uVar5 = uVar2 >> 0x10 & 0xff;
  uVar2 = (uVar2 & 0xffffffffffff00ff | (ulonglong)g_TableBase5_x_minus_y[0x74][uVar1] << 8) +
          (ulonglong)g_TableBase6_x_<_y[0xd][uVar5] * -0x1000000;
  uVar4 = uVar2 >> 0x18 & 0xff;
  uVar2 = (uVar2 & 0xffffffffff00ffff | (ulonglong)g_TableBase5_x_minus_y[0xd][uVar5] << 0x10) -
          ((ulonglong)g_TableBase6_x_<_y[0x90][uVar4] << 0x20);
  uVar5 = uVar2 >> 0x28 & 0xff;
  uVar2 = (uVar2 & 0xffffffff00ffffff | (ulonglong)g_TableBase5_x_minus_y[0x90][uVar4] << 0x18) -
          ((ulonglong)g_TableBase6_x_<_y[0][uVar5] << 0x30);
  uVar1 = (uint7)(uVar2 >> 8);
  uVar3 = uVar1 & 0xffff00ffffffff;
  uStack_1ef = uVar3 | (uint7)(((ulonglong)g_TableBase5_x_minus_y[0][uVar5] << 0x28) >> 8);
  UNRECOVERED_JUMPTABLE = (code *)0x1800a0df8;
  if ((CONCAT71(uStack_1ef,g_TableBase7_x_and_y[0xff][uVar2 & 0xff]) & 0xff00000000ff |
       (ulonglong)g_TableBase7_x_and_y[0xff][(ulonglong)uStack_1ef & 0xff] << 8 |
       (ulonglong)g_TableBase7_x_and_y[0xff][(byte)(uVar3 >> 8)] << 0x10 |
       (ulonglong)g_TableBase7_x_and_y[0xff][(ulonglong)(uint5)(uStack_1ef >> 0x10) & 0xff] << 0x18 |
       (ulonglong)g_TableBase7_x_and_y[0xff][(ulonglong)(uStack_1ef >> 0x18) & 0xff] << 0x20 |
       (ulonglong)g_TableBase7_x_and_y[0xff][(ulonglong)(ushort)(uVar3 >> 0x28) & 0xff] << 0x30 |
      (ulonglong)g_TableBase7_x_and_y[0xff][uVar1 >> 0x30] << 0x38) != 0) {
    UNRECOVERED_JUMPTABLE = MyPrintWrongKey;
  }
                    /* WARNING: Could not recover jumptable at 0x0001800a0df6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}


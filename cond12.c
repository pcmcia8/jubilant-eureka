
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void Condition_12(void)

{
  byte bVar1;
  ulonglong uVar2;
  code *UNRECOVERED_JUMPTABLE;
  ulonglong uVar3;
  uint7 uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  uint3 uStack_20b;
  
  uVar2 = ((ulonglong)(uint)g_MyInput._16_4_ & 0xff) * 0x336e91;
  uVar3 = uVar2 & 0xff;
  uVar4 = (uint7)(uVar2 + (ulonglong)g_TableBase4_x_y>0x100[0xe3][uVar3] * 0x100 >> 8);
  uVar2 = (ulonglong)uVar4 & 0xff;
  uVar5 = CONCAT71(uVar4,g_TableBase3_x_add_y[0xe3][uVar3]) + (ulonglong)g_TableBase4_x_y>0x100[0x20][uVar2] * 0x10000 &
          0xffffffffffff00ff;
  uVar6 = (ulonglong)CONCAT16(g_TableBase3_x_add_y[0xe3][uVar3],(int6)(uVar5 >> 0x10)) & 0xff;
  uVar2 = (uVar5 | (ulonglong)g_TableBase3_x_add_y[0x20][uVar2] << 8) +
          (ulonglong)g_TableBase4_x_y>0x100[0xeb][uVar6] * 0x1000000;
  uVar3 = uVar2 >> 0x18 & 0xff;
  uVar2 = (uVar2 & 0xffffffffff00ffff | (ulonglong)g_TableBase3_x_add_y[0xeb][uVar6] << 0x10) +
          ((ulonglong)g_TableBase4_x_y>0x100[0xa1][uVar3] << 0x20);
  uVar5 = uVar2 >> 0x20 & 0xff;
  uVar3 = (uVar2 & 0xffffffff00ffffff | (ulonglong)g_TableBase3_x_add_y[0xa1][uVar3] << 0x18) +
          ((ulonglong)g_TableBase4_x_y>0x100[0][uVar5] << 0x28);
  uVar2 = uVar3 >> 0x30;
  uVar3 = ((uVar3 & 0xffffff00ffffffff | (ulonglong)g_TableBase3_x_add_y[0][uVar5] << 0x20) +
           ((ulonglong)g_TableBase4_x_y>0x100[0][uVar2] << 0x38) & 0xff00ffffffffffff |
          (ulonglong)g_TableBase3_x_add_y[0][uVar2] << 0x30) + ((ulonglong)g_MyInput._0_8_ >> 0x20 & 0xff) * -0xd45de9;
  uVar2 = uVar3 & 0xff;
  uVar3 = uVar3 + (ulonglong)g_TableBase6_x_<_y[0x1a][uVar2] * -0x100;
  uVar5 = uVar3 >> 8 & 0xff;
  uVar2 = CONCAT71((int7)(uVar3 >> 8),g_TableBase5_x_minus_y[0x1a][uVar2]) +
          (ulonglong)g_TableBase6_x_<_y[199][uVar5] * -0x10000;
  uVar3 = uVar2 >> 0x10 & 0xff;
  uVar2 = (uVar2 & 0xffffffffffff00ff | (ulonglong)g_TableBase5_x_minus_y[199][uVar5] << 8) +
          (ulonglong)g_TableBase6_x_<_y[0x1a][uVar3] * -0x1000000;
  uVar5 = uVar2 >> 0x18 & 0xff;
  uVar2 = ((uVar2 & 0xffffffffff00ffff | (ulonglong)g_TableBase5_x_minus_y[0x1a][uVar3] << 0x10) -
           ((ulonglong)g_TableBase6_x_<_y[0x38][uVar5] << 0x20) & 0xffffffff00ffffff |
          (ulonglong)g_TableBase5_x_minus_y[0x38][uVar5] << 0x18) + ((ulonglong)(uint)g_MyInput._8_4_ & 0xff) * 0x76c8f8
  ;
  uVar4 = (uint7)(uVar2 >> 8);
  uVar3 = (CONCAT71(uVar4,g_TableBase1_x_xor_y[0xcd][uVar2 & 0xff]) & 0xff0000000000ff |
           (ulonglong)g_TableBase1_x_xor_y[0xa2][uVar2 >> 8 & 0xff] << 8 |
           (ulonglong)g_TableBase1_x_xor_y[0xca][(ulonglong)(uVar4 >> 8) & 0xff] << 0x10 |
           (ulonglong)g_TableBase1_x_xor_y[0xd8][uVar2 >> 0x18 & 0xff] << 0x18 |
           (ulonglong)g_TableBase1_x_xor_y[0][(ulonglong)(uVar4 >> 0x18) & 0xff] << 0x20 |
           (ulonglong)g_TableBase1_x_xor_y[0][uVar2 >> 0x28 & 0xff] << 0x28 |
          (ulonglong)g_TableBase1_x_xor_y[0][uVar2 >> 0x38] << 0x38) + (g_MyInput._20_8_ & 0xff) * -0x945339;
  uVar4 = (uint7)(uVar3 + (ulonglong)g_TableBase4_x_y>0x100[0xfa][uVar3 & 0xff] * 0x100 >> 8);
  uVar5 = (ulonglong)uVar4 & 0xff;
  uVar2 = CONCAT71(uVar4,g_TableBase3_x_add_y[0xfa][uVar3 & 0xff]) +
          (ulonglong)g_TableBase4_x_y>0x100[0x7e][uVar5] * 0x10000 & 0xffffffffffff00ff;
  uVar3 = (ulonglong)CONCAT16(g_TableBase3_x_add_y[0xfa][uVar3 & 0xff],(int6)(uVar2 >> 0x10)) & 0xff;
  uVar5 = (uVar2 | (ulonglong)g_TableBase3_x_add_y[0x7e][uVar5] << 8) +
          (ulonglong)g_TableBase4_x_y>0x100[0x4d][uVar3] * 0x1000000;
  uVar2 = uVar5 >> 0x18 & 0xff;
  uVar3 = (uVar5 & 0xffffffffff00ffff | (ulonglong)g_TableBase3_x_add_y[0x4d][uVar3] << 0x10) +
          ((ulonglong)g_TableBase4_x_y>0x100[0x52][uVar2] << 0x20);
  uVar5 = uVar3 >> 0x20 & 0xff;
  uVar2 = (uVar3 & 0xffffffff00ffffff | (ulonglong)g_TableBase3_x_add_y[0x52][uVar2] << 0x18) +
          ((ulonglong)g_TableBase4_x_y>0x100[0][uVar5] << 0x28);
  uVar6 = uVar2 >> 0x28 & 0xff;
  uVar3 = (uVar2 & 0xffffff00ffffffff | (ulonglong)g_TableBase3_x_add_y[0][uVar5] << 0x20) +
          ((ulonglong)g_TableBase4_x_y>0x100[0][uVar6] << 0x30);
  uVar2 = uVar3 >> 0x30 & 0xff;
  uVar3 = (uVar3 & 0xffff00ffffffffff | (ulonglong)g_TableBase3_x_add_y[0][uVar6] << 0x28) +
          ((ulonglong)g_TableBase4_x_y>0x100[0][uVar2] << 0x38);
  uVar3 = (uVar3 & 0xffffffffffff | (ulonglong)g_TableBase3_x_add_y[0][uVar2] << 0x30 |
          (ulonglong)g_TableBase3_x_add_y[0][uVar3 >> 0x38] << 0x38) +
          ((ulonglong)(uint)g_MyInput._12_4_ & 0xff) * 0x4474ec;
  uVar2 = uVar3 & 0xff;
  uVar3 = uVar3 + (ulonglong)g_TableBase6_x_<_y[0xcd][uVar2] * -0x100;
  uVar5 = uVar3 >> 8 & 0xff;
  uVar2 = CONCAT71((int7)(uVar3 >> 8),g_TableBase5_x_minus_y[0xcd][uVar2]) +
          (ulonglong)g_TableBase6_x_<_y[0x82][uVar5] * -0x10000;
  uVar3 = uVar2 >> 0x10 & 0xff;
  uVar2 = (uVar2 & 0xffffffffffff00ff | (ulonglong)g_TableBase5_x_minus_y[0x82][uVar5] << 8) +
          (ulonglong)g_TableBase6_x_<_y[0x7e][uVar3] * -0x1000000;
  uVar5 = uVar2 >> 0x18 & 0xff;
  uVar2 = (uVar2 & 0xffffffffff00ffff | (ulonglong)g_TableBase5_x_minus_y[0x7e][uVar3] << 0x10) -
          ((ulonglong)g_TableBase6_x_<_y[0xe4][uVar5] << 0x20);
  uVar3 = uVar2 >> 0x28 & 0xff;
  uVar2 = (uVar2 & 0xffffffff00ffffff | (ulonglong)g_TableBase5_x_minus_y[0xe4][uVar5] << 0x18) -
          ((ulonglong)g_TableBase6_x_<_y[0][uVar3] << 0x30);
  uVar5 = uVar2 >> 0x30 & 0xff;
  uVar2 = (uVar2 & 0xffff00ffffffffff | (ulonglong)g_TableBase5_x_minus_y[0][uVar3] << 0x28) -
          ((ulonglong)g_TableBase6_x_<_y[0][uVar5] << 0x38);
  uVar3 = (uVar2 & 0xff00ffffffffffff | (ulonglong)g_TableBase5_x_minus_y[0][uVar5] << 0x30) ^
          (g_MyInput._0_8_ & 0xff) * 0x51054f;
  uVar4 = (uint7)(uVar3 >> 8);
  uVar3 = (CONCAT71(uVar4,g_TableBase1_x_xor_y[0xb1][uVar3 & 0xff]) & 0xffff00000000ff |
           (ulonglong)g_TableBase1_x_xor_y[0xc9][uVar4 & 0xff] << 8 |
           (ulonglong)g_TableBase1_x_xor_y[0x21][(ulonglong)(uVar4 >> 8) & 0xff] << 0x10 |
           (ulonglong)g_TableBase1_x_xor_y[0x33][uVar3 >> 0x18 & 0xff] << 0x18 |
           (ulonglong)g_TableBase1_x_xor_y[0][(ulonglong)(uVar4 >> 0x18) & 0xff] << 0x20 |
          (ulonglong)g_TableBase1_x_xor_y[0][uVar2 >> 0x38] << 0x38) +
          ((ulonglong)g_MyInput._20_8_ >> 0x20 & 0xff) * -0xd7eb3b;
  uVar2 = uVar3 & 0xff;
  uVar4 = (uint7)(uVar3 + (ulonglong)g_TableBase4_x_y>0x100[0x9d][uVar2] * 0x100 >> 8);
  uVar3 = (ulonglong)uVar4 & 0xff;
  uVar5 = CONCAT71(uVar4,g_TableBase3_x_add_y[0x9d][uVar2]) + (ulonglong)g_TableBase4_x_y>0x100[0x82][uVar3] * 0x10000 &
          0xffffffffffff00ff;
  uVar2 = (ulonglong)CONCAT16(g_TableBase3_x_add_y[0x9d][uVar2],(int6)(uVar5 >> 0x10)) & 0xff;
  uVar3 = (uVar5 | (ulonglong)g_TableBase3_x_add_y[0x82][uVar3] << 8) +
          (ulonglong)g_TableBase4_x_y>0x100[0xf6][uVar2] * 0x1000000;
  uVar5 = uVar3 >> 0x18 & 0xff;
  uVar2 = (uVar3 & 0xffffffffff00ffff | (ulonglong)g_TableBase3_x_add_y[0xf6][uVar2] << 0x10) +
          ((ulonglong)g_TableBase4_x_y>0x100[0x36][uVar5] << 0x20);
  uVar2 = (uVar2 & 0xffffff00ffffff | (ulonglong)g_TableBase3_x_add_y[0x36][uVar5] << 0x18 |
          (ulonglong)g_TableBase3_x_add_y[0][uVar2 >> 0x38] << 0x38) +
          ((ulonglong)(uint)g_MyInput._28_4_ & 0xff) * -0xad52e1;
  bVar1 = g_TableBase1_x_xor_y[0x1a][uVar2 & 0xff];
  uVar4 = (uint7)(uVar2 >> 8);
  uVar2 = (CONCAT71(uVar4,bVar1) & 0xff0000ff000000ff | (ulonglong)g_TableBase1_x_xor_y[0x18][uVar2 >> 8 & 0xff] << 8 |
           (ulonglong)g_TableBase1_x_xor_y[0xe2][(ulonglong)(uVar4 >> 8) & 0xff] << 0x10 |
           (ulonglong)g_TableBase1_x_xor_y[0x6c][uVar2 >> 0x18 & 0xff] << 0x18 |
           (ulonglong)g_TableBase1_x_xor_y[0][uVar2 >> 0x28 & 0xff] << 0x28 |
          (ulonglong)g_TableBase1_x_xor_y[0][uVar2 >> 0x30 & 0xff] << 0x30) +
          (ulonglong)g_TableBase6_x_<_y[0x43][bVar1] * -0x100;
  uVar3 = uVar2 >> 8 & 0xff;
  uVar2 = CONCAT71((int7)(uVar2 >> 8),g_TableBase5_x_minus_y[0x43][bVar1]) +
          (ulonglong)g_TableBase6_x_<_y[0x44][uVar3] * -0x10000;
  uVar5 = uVar2 >> 0x10 & 0xff;
  uVar3 = (uVar2 & 0xffffffffffff00ff | (ulonglong)g_TableBase5_x_minus_y[0x44][uVar3] << 8) +
          (ulonglong)g_TableBase6_x_<_y[0x9b][uVar5] * -0x1000000;
  uVar2 = uVar3 >> 0x18 & 0xff;
  uVar3 = (uVar3 & 0xffffffffff00ffff | (ulonglong)g_TableBase5_x_minus_y[0x9b][uVar5] << 0x10) -
          ((ulonglong)g_TableBase6_x_<_y[0xf3][uVar2] << 0x20);
  uVar5 = uVar3 >> 0x20 & 0xff;
  uVar3 = (uVar3 & 0xffffffff00ffffff | (ulonglong)g_TableBase5_x_minus_y[0xf3][uVar2] << 0x18) -
          ((ulonglong)g_TableBase6_x_<_y[0xff][uVar5] << 0x28);
  uVar2 = uVar3 >> 0x28 & 0xff;
  uVar3 = (uVar3 & 0xffffff00ffffffff | (ulonglong)g_TableBase5_x_minus_y[0xff][uVar5] << 0x20) -
          ((ulonglong)g_TableBase6_x_<_y[0xff][uVar2] << 0x30);
  uVar5 = uVar3 >> 0x30 & 0xff;
  uVar2 = (uVar3 & 0xffff00ffffffffff | (ulonglong)g_TableBase5_x_minus_y[0xff][uVar2] << 0x28) -
          ((ulonglong)g_TableBase6_x_<_y[0xff][uVar5] << 0x38);
  uVar4 = (uint7)(uVar2 >> 8) & 0xffffffffff | (uint7)(((ulonglong)g_TableBase5_x_minus_y[0xff][uVar5] << 0x30) >> 8) |
          (uint7)(((ulonglong)g_TableBase5_x_minus_y[0xff][uVar2 >> 0x38] << 0x38) >> 8);
  uStack_20b = (uint3)(uVar4 >> 0x20);
  UNRECOVERED_JUMPTABLE = (code *)0x18012ce62;
  if ((CONCAT71(uVar4,g_TableBase2_x_or_y[0][uVar2 & 0xff]) & 0xffff00ffffffffff |
      (ulonglong)g_TableBase2_x_or_y[0][(ulonglong)uStack_20b & 0xff] << 0x28) != 0) {
    UNRECOVERED_JUMPTABLE = MyPrintWrongKey;
  }
                    /* WARNING: Could not recover jumptable at 0x00018012ce60. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}


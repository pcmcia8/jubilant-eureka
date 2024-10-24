
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void Condition_8(void)

{
  ulonglong uVar1;
  ulonglong uVar2;
  uint7 uVar3;
  uint7 uVar5;
  ulonglong uVar4;
  ulonglong uVar6;
  code *UNRECOVERED_JUMPTABLE;
  ushort uStack_216;
  uint7 uStack_167;
  
  uVar1 = ((ulonglong)(uint)g_MyInput._28_4_ & 0xff) * 0xac70b9;
  uVar2 = uVar1 & 0xff;
  uVar5 = (uint7)(uVar1 + (ulonglong)g_TableBase4_x_y>0x100[0x32][uVar2] * 0x100 >> 8);
  uVar3 = uVar5 & 0xff;
  uVar1 = CONCAT71(uVar5,g_TableBase3_x_add_y[0x32][uVar2]) + (ulonglong)g_TableBase4_x_y>0x100[0xa9][uVar3] * 0x10000;
  uVar2 = uVar1 >> 0x10 & 0xff;
  uVar4 = (uVar1 & 0xffffffffffff00ff | (ulonglong)g_TableBase3_x_add_y[0xa9][uVar3] << 8) +
          (ulonglong)g_TableBase4_x_y>0x100[0xe0][uVar2] * 0x1000000;
  uVar1 = uVar4 >> 0x18 & 0xff;
  uVar1 = ((uVar4 & 0xffffffffff00ffff | (ulonglong)g_TableBase3_x_add_y[0xe0][uVar2] << 0x10) +
           ((ulonglong)g_TableBase4_x_y>0x100[0xda][uVar1] << 0x20) & 0xffffffff00ffffff |
          (ulonglong)g_TableBase3_x_add_y[0xda][uVar1] << 0x18) + ((ulonglong)*g_TableBase4_x_y>0x100[0] << 0x38);
  uVar2 = (uVar1 & 0xffffffffffffff | (ulonglong)*g_TableBase3_x_add_y[0] << 0x30 |
          (ulonglong)g_TableBase3_x_add_y[0][uVar1 >> 0x38] << 0x38) ^
          ((ulonglong)(uint)g_MyInput._4_4_ & 0xff) * 0xc42b6f;
  uVar3 = (uint7)(uVar2 >> 8);
  uVar1 = (CONCAT71(uVar3,g_TableBase1_x_xor_y[0x4c][uVar2 & 0xff]) & 0xffff00ff000000ff |
           (ulonglong)g_TableBase1_x_xor_y[0x10][uVar3 & 0xff] << 8 |
           (ulonglong)g_TableBase1_x_xor_y[3][uVar2 >> 0x10 & 0xff] << 0x10 |
           (ulonglong)g_TableBase1_x_xor_y[0xbc][(ulonglong)(uVar3 >> 0x10) & 0xff] << 0x18 |
          (ulonglong)g_TableBase1_x_xor_y[0][(uVar1 & 0xff0000000000) >> 0x28] << 0x28) +
          ((ulonglong)(uint)g_MyInput._0_4_ & 0xff) * -0x867193;
  uVar2 = uVar1 & 0xff;
  uVar3 = (uint7)(uVar1 + (ulonglong)g_TableBase4_x_y>0x100[0x3a][uVar2] * 0x100 >> 8);
  uVar4 = (ulonglong)uVar3 & 0xff;
  uVar2 = CONCAT71(uVar3,g_TableBase3_x_add_y[0x3a][uVar2]) + (ulonglong)g_TableBase4_x_y>0x100[0xc6][uVar4] * 0x10000;
  uVar1 = uVar2 >> 0x10 & 0xff;
  uVar2 = (uVar2 & 0xffffffffffff00ff | (ulonglong)g_TableBase3_x_add_y[0xc6][uVar4] << 8) +
          (ulonglong)g_TableBase4_x_y>0x100[0x48][uVar1] * 0x1000000;
  uVar4 = uVar2 >> 0x18 & 0xff;
  uVar2 = (uVar2 & 0xffffffffff00ffff | (ulonglong)g_TableBase3_x_add_y[0x48][uVar1] << 0x10) +
          ((ulonglong)g_TableBase4_x_y>0x100[0xdc][uVar4] << 0x20);
  uVar1 = uVar2 >> 0x28 & 0xff;
  uVar4 = (uVar2 & 0xffffffff00ffffff | (ulonglong)g_TableBase3_x_add_y[0xdc][uVar4] << 0x18) +
          ((ulonglong)g_TableBase4_x_y>0x100[0][uVar1] << 0x30);
  uVar2 = uVar4 >> 0x30 & 0xff;
  uVar1 = ((uVar4 & 0xffff00ffffffffff | (ulonglong)g_TableBase3_x_add_y[0][uVar1] << 0x28) +
           ((ulonglong)g_TableBase4_x_y>0x100[0][uVar2] << 0x38) & 0xff00ffffffffffff |
          (ulonglong)g_TableBase3_x_add_y[0][uVar2] << 0x30) + ((ulonglong)(uint)g_MyInput._12_4_ & 0xff) * -0x6d31fe;
  uVar3 = (uint7)(uVar1 >> 8);
  uVar1 = (CONCAT71(uVar3,g_TableBase1_x_xor_y[0xd0][uVar1 & 0xff]) & 0xffff00000000ff |
           (ulonglong)g_TableBase1_x_xor_y[0xb6][uVar1 >> 8 & 0xff] << 8 |
           (ulonglong)g_TableBase1_x_xor_y[0xae][(ulonglong)(uVar3 >> 8) & 0xff] << 0x10 |
           (ulonglong)g_TableBase1_x_xor_y[0x4b][uVar1 >> 0x18 & 0xff] << 0x18 |
           (ulonglong)g_TableBase1_x_xor_y[0][(ulonglong)(uVar3 >> 0x18) & 0xff] << 0x20 |
          (ulonglong)g_TableBase1_x_xor_y[0][uVar3 >> 0x30] << 0x38) +
          ((ulonglong)(uint)g_MyInput._16_4_ & 0xff) * -0xaaae58;
  uVar2 = uVar1 & 0xff;
  uVar5 = (uint7)(uVar1 + (ulonglong)g_TableBase6_x_<_y[0xf8][uVar2] * -0x100 >> 8);
  uVar3 = uVar5 & 0xff;
  uVar1 = CONCAT71(uVar5,g_TableBase5_x_minus_y[0xf8][uVar2]) + (ulonglong)g_TableBase6_x_<_y[0x21][uVar3] * -0x10000;
  uVar4 = uVar1 >> 0x10 & 0xff;
  uVar2 = (uVar1 & 0xffffffffffff00ff | (ulonglong)g_TableBase5_x_minus_y[0x21][uVar3] << 8) +
          (ulonglong)g_TableBase6_x_<_y[0x71][uVar4] * -0x1000000;
  uVar1 = uVar2 >> 0x18 & 0xff;
  uVar2 = (uVar2 & 0xffffffffff00ffff | (ulonglong)g_TableBase5_x_minus_y[0x71][uVar4] << 0x10) -
          ((ulonglong)g_TableBase6_x_<_y[0xcd][uVar1] << 0x20);
  uVar4 = uVar2 >> 0x28 & 0xff;
  uVar1 = (uVar2 & 0xffffffff00ffffff | (ulonglong)g_TableBase5_x_minus_y[0xcd][uVar1] << 0x18) -
          ((ulonglong)g_TableBase6_x_<_y[0][uVar4] << 0x30);
  uVar2 = uVar1 >> 0x30 & 0xff;
  uVar1 = (uVar1 & 0xffff00ffffffffff | (ulonglong)g_TableBase5_x_minus_y[0][uVar4] << 0x28) -
          ((ulonglong)g_TableBase6_x_<_y[0][uVar2] << 0x38);
  uVar1 = (uVar1 & 0xffffffffffff | (ulonglong)g_TableBase5_x_minus_y[0][uVar2] << 0x30 |
          (ulonglong)g_TableBase5_x_minus_y[0][uVar1 >> 0x38] << 0x38) +
          ((ulonglong)(uint)g_MyInput._20_4_ & 0xff) * 0x9faa7a;
  uVar2 = uVar1 & 0xff;
  uVar3 = (uint7)(uVar1 + (ulonglong)g_TableBase4_x_y>0x100[0x9c][uVar2] * 0x100 >> 8);
  uVar1 = (ulonglong)uVar3 & 0xff;
  uVar4 = CONCAT71(uVar3,g_TableBase3_x_add_y[0x9c][uVar2]) + (ulonglong)g_TableBase4_x_y>0x100[0x2c][uVar1] * 0x10000;
  uVar2 = uVar4 >> 0x10 & 0xff;
  uVar1 = (uVar4 & 0xffffffffffff00ff | (ulonglong)g_TableBase3_x_add_y[0x2c][uVar1] << 8) +
          (ulonglong)g_TableBase4_x_y>0x100[10][uVar2] * 0x1000000;
  uVar4 = uVar1 >> 0x18 & 0xff;
  uVar2 = (uVar1 & 0xffffffffff00ffff | (ulonglong)g_TableBase3_x_add_y[10][uVar2] << 0x10) +
          ((ulonglong)g_TableBase4_x_y>0x100[0xbe][uVar4] << 0x20);
  uVar1 = uVar2 >> 0x28 & 0xff;
  uVar2 = (uVar2 & 0xffffffff00ffffff | (ulonglong)g_TableBase3_x_add_y[0xbe][uVar4] << 0x18) +
          ((ulonglong)g_TableBase4_x_y>0x100[0][uVar1] << 0x30);
  uVar4 = uVar2 >> 0x30 & 0xff;
  uVar1 = (uVar2 & 0xffff00ffffffffff | (ulonglong)g_TableBase3_x_add_y[0][uVar1] << 0x28) +
          ((ulonglong)g_TableBase4_x_y>0x100[0][uVar4] << 0x38);
  uVar1 = (uVar1 & 0xffffffffffff | (ulonglong)g_TableBase3_x_add_y[0][uVar4] << 0x30 |
          (ulonglong)g_TableBase3_x_add_y[0][uVar1 >> 0x38] << 0x38) +
          ((ulonglong)(uint)g_MyInput._24_4_ & 0xff) * 0x354ac6;
  uStack_167 = (uint7)(uVar1 >> 8);
  uVar1 = (CONCAT71(uStack_167,g_TableBase1_x_xor_y[0xf1][uVar1 & 0xff]) & 0xff00ffff000000ff |
           (ulonglong)g_TableBase1_x_xor_y[0x17][(ulonglong)uStack_167 & 0xff] << 8 |
           (ulonglong)g_TableBase1_x_xor_y[0xad][uVar1 >> 0x10 & 0xff] << 0x10 |
           (ulonglong)g_TableBase1_x_xor_y[0xd8][uVar1 >> 0x18 & 0xff] << 0x18 |
          (ulonglong)g_TableBase1_x_xor_y[0][(ulonglong)(uStack_167 >> 0x28) & 0xff] << 0x30) +
          ((ulonglong)(uint)g_MyInput._8_4_ & 0xff) * -0x3f2acb;
  uVar2 = uVar1 & 0xff;
  uVar3 = (uint7)(uVar1 + (ulonglong)g_TableBase6_x_<_y[0x89][uVar2] * -0x100 >> 8);
  uVar4 = (ulonglong)uVar3 & 0xff;
  uVar1 = CONCAT71(uVar3,g_TableBase5_x_minus_y[0x89][uVar2]) + (ulonglong)g_TableBase6_x_<_y[0x7d][uVar4] * -0x10000 &
          0xffffffffffff00ff;
  uVar2 = (ulonglong)CONCAT16(g_TableBase5_x_minus_y[0x89][uVar2],(int6)(uVar1 >> 0x10)) & 0xff;
  uVar4 = (uVar1 | (ulonglong)g_TableBase5_x_minus_y[0x7d][uVar4] << 8) +
          (ulonglong)g_TableBase6_x_<_y[0x6b][uVar2] * -0x1000000;
  uVar1 = uVar4 >> 0x18 & 0xff;
  uVar2 = (uVar4 & 0xffffffffff00ffff | (ulonglong)g_TableBase5_x_minus_y[0x6b][uVar2] << 0x10) -
          ((ulonglong)g_TableBase6_x_<_y[0x8b][uVar1] << 0x20);
  uVar4 = uVar2 >> 0x20 & 0xff;
  uVar1 = (uVar2 & 0xffffffff00ffffff | (ulonglong)g_TableBase5_x_minus_y[0x8b][uVar1] << 0x18) -
          ((ulonglong)g_TableBase6_x_<_y[0][uVar4] << 0x28);
  uVar2 = uVar1 >> 0x28 & 0xff;
  uVar1 = (uVar1 & 0xffffff00ffffffff | (ulonglong)g_TableBase5_x_minus_y[0][uVar4] << 0x20) -
          ((ulonglong)g_TableBase6_x_<_y[0][uVar2] << 0x30);
  uVar4 = uVar1 >> 0x30 & 0xff;
  uVar1 = (uVar1 & 0xffff00ffffffffff | (ulonglong)g_TableBase5_x_minus_y[0][uVar2] << 0x28) -
          ((ulonglong)g_TableBase6_x_<_y[0][uVar4] << 0x38);
  uVar3 = (uint7)((uVar1 & 0xffffffffffff | (ulonglong)g_TableBase5_x_minus_y[0][uVar4] << 0x30 |
                  (ulonglong)g_TableBase5_x_minus_y[0][uVar1 >> 0x38] << 0x38) +
                  (ulonglong)g_TableBase6_x_<_y[0x93][uVar1 & 0xff] * -0x100 >> 8);
  uVar4 = (ulonglong)uVar3 & 0xff;
  uVar1 = CONCAT71(uVar3,g_TableBase5_x_minus_y[0x93][uVar1 & 0xff]) +
          (ulonglong)g_TableBase6_x_<_y[0x37][uVar4] * -0x10000;
  uVar2 = uVar1 >> 0x10 & 0xff;
  uVar1 = (uVar1 & 0xffffffffffff00ff | (ulonglong)g_TableBase5_x_minus_y[0x37][uVar4] << 8) +
          (ulonglong)g_TableBase6_x_<_y[0xc1][uVar2] * -0x1000000;
  uVar4 = uVar1 >> 0x18 & 0xff;
  uVar1 = (uVar1 & 0xffffffffff00ffff | (ulonglong)g_TableBase5_x_minus_y[0xc1][uVar2] << 0x10) -
          ((ulonglong)g_TableBase6_x_<_y[99][uVar4] << 0x20);
  uVar6 = uVar1 >> 0x20 & 0xff;
  uVar2 = (uVar1 & 0xffffffff00ffffff | (ulonglong)g_TableBase5_x_minus_y[99][uVar4] << 0x18) -
          ((ulonglong)g_TableBase6_x_<_y[2][uVar6] << 0x28);
  uVar1 = uVar2 >> 0x30 & 0xff;
  uVar2 = (uVar2 & 0xffffff00ffffffff | (ulonglong)g_TableBase5_x_minus_y[2][uVar6] << 0x20) -
          ((ulonglong)g_TableBase6_x_<_y[0][uVar1] << 0x38);
  uVar5 = (uint7)(uVar2 >> 8);
  uVar3 = uVar5 & 0xffffffffff;
  uStack_216 = (ushort)(uVar3 >> 8);
  UNRECOVERED_JUMPTABLE = (code *)0x1800d0753;
  if ((CONCAT71(uVar5,g_TableBase7_x_and_y[0xff][uVar2 & 0xff]) & 0xff00ff00ffff |
       (ulonglong)g_TableBase7_x_and_y[0xff][(ulonglong)uStack_216 & 0xff] << 0x10 |
       (ulonglong)g_TableBase7_x_and_y[0xff][(ulonglong)(ushort)(uVar3 >> 0x18) & 0xff] << 0x20 |
       (ulonglong)g_TableBase7_x_and_y[0xff][g_TableBase5_x_minus_y[0][uVar1]] << 0x30 |
      (ulonglong)g_TableBase7_x_and_y[0xff][g_TableBase5_x_minus_y[0][uVar2 >> 0x38]] << 0x38) != 0) {
    UNRECOVERED_JUMPTABLE = MyPrintWrongKey;
  }
                    /* WARNING: Could not recover jumptable at 0x0001800d0750. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}


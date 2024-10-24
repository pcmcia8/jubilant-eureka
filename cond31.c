
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void Condition_31(void)

{
  byte bVar1;
  ulonglong uVar2;
  uint7 uVar3;
  ulonglong uVar4;
  uint7 uVar5;
  ulonglong uVar6;
  code *UNRECOVERED_JUMPTABLE;
  ulonglong uVar7;
  uint3 uStack_207;
  uint7 uStack_197;
  
  uVar2 = ((ulonglong)g_MyInput._15_8_ >> 0x20 & 0xff) * 0x390b78;
  uVar4 = uVar2 & 0xff;
  uVar3 = (uint7)(uVar2 + (ulonglong)g_TableBase4_x_y>0x100[0xa4][uVar4] * 0x100 >> 8);
  uVar6 = (ulonglong)uVar3 & 0xff;
  uVar2 = CONCAT71(uVar3,g_TableBase3_x_add_y[0xa4][uVar4]) + (ulonglong)g_TableBase4_x_y>0x100[0xee][uVar6] * 0x10000 &
          0xffffffffffff00ff;
  uVar4 = (ulonglong)CONCAT16(g_TableBase3_x_add_y[0xa4][uVar4],(int6)(uVar2 >> 0x10)) & 0xff;
  uVar2 = (uVar2 | (ulonglong)g_TableBase3_x_add_y[0xee][uVar6] << 8) +
          (ulonglong)g_TableBase4_x_y>0x100[0x5d][uVar4] * 0x1000000;
  uVar6 = uVar2 >> 0x18 & 0xff;
  uVar2 = (uVar2 & 0xffffffffff00ffff | (ulonglong)g_TableBase3_x_add_y[0x5d][uVar4] << 0x10) +
          ((ulonglong)g_TableBase4_x_y>0x100[0x7d][uVar6] << 0x20);
  uVar4 = uVar2 >> 0x20 & 0xff;
  uVar6 = (uVar2 & 0xffffffff00ffffff | (ulonglong)g_TableBase3_x_add_y[0x7d][uVar6] << 0x18) +
          ((ulonglong)g_TableBase4_x_y>0x100[0][uVar4] << 0x28);
  uVar2 = uVar6 >> 0x30;
  uVar4 = (uVar6 & 0xffffff00ffffffff | (ulonglong)g_TableBase3_x_add_y[0][uVar4] << 0x20) +
          ((ulonglong)g_TableBase4_x_y>0x100[0][uVar2] << 0x38);
  uVar2 = (uVar4 & 0xffffffffffff | (ulonglong)g_TableBase3_x_add_y[0][uVar2] << 0x30 |
          (ulonglong)g_TableBase3_x_add_y[0][uVar4 >> 0x38] << 0x38) + (g_MyInput._15_8_ & 0xff) * -0x70e6c8;
  uVar3 = (uint7)(uVar2 + (ulonglong)g_TableBase6_x_<_y[0xe2][uVar2 & 0xff] * -0x100 >> 8);
  uVar4 = (ulonglong)uVar3 & 0xff;
  uVar6 = CONCAT71(uVar3,g_TableBase5_x_minus_y[0xe2][uVar2 & 0xff]) +
          (ulonglong)g_TableBase6_x_<_y[0x39][uVar4] * -0x10000;
  uVar2 = uVar6 >> 0x10 & 0xff;
  uVar4 = (uVar6 & 0xffffffffffff00ff | (ulonglong)g_TableBase5_x_minus_y[0x39][uVar4] << 8) +
          (ulonglong)g_TableBase6_x_<_y[0xa3][uVar2] * -0x1000000;
  uVar6 = uVar4 >> 0x18 & 0xff;
  uVar2 = (uVar4 & 0xffffffffff00ffff | (ulonglong)g_TableBase5_x_minus_y[0xa3][uVar2] << 0x10) -
          ((ulonglong)g_TableBase6_x_<_y[0x6e][uVar6] << 0x20);
  uVar4 = uVar2 >> 0x28 & 0xff;
  uVar2 = ((uVar2 & 0xffffffff00ffffff | (ulonglong)g_TableBase5_x_minus_y[0x6e][uVar6] << 0x18) -
           ((ulonglong)g_TableBase6_x_<_y[0][uVar4] << 0x30) & 0xffff00ffffffffff |
          (ulonglong)g_TableBase5_x_minus_y[0][uVar4] << 0x28) ^ ((ulonglong)(uint)g_MyInput._27_4_ & 0xff) * 0xd8a292;
  uVar7 = uVar2 & 0xff;
  uVar3 = (uint7)(uVar2 + (ulonglong)g_TableBase6_x_<_y[0xc5][uVar7] * -0x100 >> 8);
  uVar4 = (ulonglong)uVar3 & 0xff;
  uVar2 = CONCAT71(uVar3,g_TableBase5_x_minus_y[0xc5][uVar7]) + (ulonglong)g_TableBase6_x_<_y[0x6e][uVar4] * -0x10000;
  uVar6 = uVar2 & 0xffffffffffff00ff;
  uVar4 = (uVar6 | (ulonglong)g_TableBase5_x_minus_y[0x6e][uVar4] << 8) +
          (ulonglong)
          g_TableBase6_x_<_y[0x8d]
          [(ulonglong)CONCAT16(g_TableBase5_x_minus_y[0xc5][uVar7],(int6)(uVar6 >> 0x10)) & 0xff] * -0x1000000;
  uVar6 = uVar4 >> 0x18 & 0xff;
  uVar4 = (uVar4 & 0xffffffffff00ffff | (ulonglong)g_TableBase5_x_minus_y[0x8d][uVar2 >> 0x10 & 0xff] << 0x10) -
          ((ulonglong)g_TableBase6_x_<_y[0x28][uVar6] << 0x20);
  uVar2 = uVar4 >> 0x20 & 0xff;
  uVar4 = (uVar4 & 0xffffffff00ffffff | (ulonglong)g_TableBase5_x_minus_y[0x28][uVar6] << 0x18) -
          ((ulonglong)g_TableBase6_x_<_y[0][uVar2] << 0x28);
  uVar6 = uVar4 >> 0x28 & 0xff;
  uVar4 = ((uVar4 & 0xffffff00ffffffff | (ulonglong)g_TableBase5_x_minus_y[0][uVar2] << 0x20) -
           ((ulonglong)g_TableBase6_x_<_y[0][uVar6] << 0x30) & 0xffff00ffffffffff |
          (ulonglong)g_TableBase5_x_minus_y[0][uVar6] << 0x28) + ((ulonglong)(uint)g_MyInput._23_4_ & 0xff) * -0x978c71;
  uVar2 = uVar4 & 0xff;
  uVar3 = (uint7)(uVar4 + (ulonglong)g_TableBase6_x_<_y[0xd8][uVar2] * -0x100 >> 8);
  uVar4 = (ulonglong)uVar3 & 0xff;
  uVar2 = CONCAT71(uVar3,g_TableBase5_x_minus_y[0xd8][uVar2]) + (ulonglong)g_TableBase6_x_<_y[0x5e][uVar4] * -0x10000;
  uVar6 = uVar2 >> 0x10 & 0xff;
  uVar2 = (uVar2 & 0xffffffffffff00ff | (ulonglong)g_TableBase5_x_minus_y[0x5e][uVar4] << 8) +
          (ulonglong)g_TableBase6_x_<_y[0xd8][uVar6] * -0x1000000;
  uVar4 = uVar2 >> 0x18 & 0xff;
  uVar2 = (uVar2 & 0xffffffffff00ffff | (ulonglong)g_TableBase5_x_minus_y[0xd8][uVar6] << 0x10) -
          ((ulonglong)g_TableBase6_x_<_y[0xe5][uVar4] << 0x20);
  uVar4 = (uVar2 & 0xffffff00ffffff | (ulonglong)g_TableBase5_x_minus_y[0xe5][uVar4] << 0x18 |
          (ulonglong)g_TableBase5_x_minus_y[0][uVar2 >> 0x38] << 0x38) + (g_MyInput._31_8_ & 0xff) * 0x9a14d4;
  uVar2 = uVar4 & 0xff;
  uVar3 = (uint7)(uVar4 + (ulonglong)g_TableBase6_x_<_y[0xcc][uVar2] * -0x100 >> 8);
  uVar6 = (ulonglong)uVar3 & 0xff;
  uVar2 = CONCAT71(uVar3,g_TableBase5_x_minus_y[0xcc][uVar2]) + (ulonglong)g_TableBase6_x_<_y[0x70][uVar6] * -0x10000;
  uVar4 = uVar2 >> 0x10 & 0xff;
  uVar2 = (uVar2 & 0xffffffffffff00ff | (ulonglong)g_TableBase5_x_minus_y[0x70][uVar6] << 8) +
          (ulonglong)g_TableBase6_x_<_y[0x96][uVar4] * -0x1000000;
  uVar6 = uVar2 >> 0x18 & 0xff;
  uVar4 = (uVar2 & 0xffffffffff00ffff | (ulonglong)g_TableBase5_x_minus_y[0x96][uVar4] << 0x10) -
          ((ulonglong)g_TableBase6_x_<_y[0xb6][uVar6] << 0x20);
  uVar2 = uVar4 >> 0x20 & 0xff;
  uVar4 = (uVar4 & 0xffffffff00ffffff | (ulonglong)g_TableBase5_x_minus_y[0xb6][uVar6] << 0x18) -
          ((ulonglong)g_TableBase6_x_<_y[0][uVar2] << 0x28);
  uVar6 = uVar4 >> 0x28 & 0xff;
  uVar4 = (uVar4 & 0xffffff00ffffffff | (ulonglong)g_TableBase5_x_minus_y[0][uVar2] << 0x20) -
          ((ulonglong)g_TableBase6_x_<_y[0][uVar6] << 0x30);
  uVar2 = uVar4 >> 0x30 & 0xff;
  uVar4 = ((uVar4 & 0xffff00ffffffffff | (ulonglong)g_TableBase5_x_minus_y[0][uVar6] << 0x28) -
           ((ulonglong)g_TableBase6_x_<_y[0][uVar2] << 0x38) & 0xff00ffffffffffff |
          (ulonglong)g_TableBase5_x_minus_y[0][uVar2] << 0x30) ^ (g_MyInput._7_8_ & 0xff) * 0x995144;
  uVar2 = uVar4 & 0xff;
  uVar3 = (uint7)(uVar4 + (ulonglong)g_TableBase6_x_<_y[0x42][uVar2] * -0x100 >> 8);
  uVar4 = (ulonglong)uVar3 & 0xff;
  uVar2 = CONCAT71(uVar3,g_TableBase5_x_minus_y[0x42][uVar2]) + (ulonglong)g_TableBase6_x_<_y[0x73][uVar4] * -0x10000;
  uVar7 = uVar2 >> 0x10 & 0xff;
  uVar2 = (uVar2 & 0xffffffffffff00ff | (ulonglong)g_TableBase5_x_minus_y[0x73][uVar4] << 8) +
          (ulonglong)g_TableBase6_x_<_y[0xe7][uVar7] * -0x1000000;
  uVar6 = uVar2 >> 0x18 & 0xff;
  uVar2 = (uVar2 & 0xffffffffff00ffff | (ulonglong)g_TableBase5_x_minus_y[0xe7][uVar7] << 0x10) -
          ((ulonglong)g_TableBase6_x_<_y[0xd2][uVar6] << 0x20);
  uVar4 = uVar2 >> 0x20 & 0xff;
  uVar2 = (uVar2 & 0xffffffff00ffffff | (ulonglong)g_TableBase5_x_minus_y[0xd2][uVar6] << 0x18) -
          ((ulonglong)g_TableBase6_x_<_y[0][uVar4] << 0x28);
  uVar6 = uVar2 >> 0x30 & 0xff;
  uVar2 = (uVar2 & 0xffffff00ffffffff | (ulonglong)g_TableBase5_x_minus_y[0][uVar4] << 0x20) -
          ((ulonglong)g_TableBase6_x_<_y[0][uVar6] << 0x38);
  uVar2 = (uVar2 & 0xffffffffffff | (ulonglong)g_TableBase5_x_minus_y[0][uVar6] << 0x30 |
          (ulonglong)g_TableBase5_x_minus_y[0][uVar2 >> 0x38] << 0x38) ^
          ((ulonglong)g_MyInput._7_8_ >> 0x20 & 0xff) * 0x811c39;
  uVar4 = uVar2 & 0xff;
  uVar5 = (uint7)(uVar2 + (ulonglong)g_TableBase6_x_<_y[0x65][uVar4] * -0x100 >> 8);
  uVar3 = uVar5 & 0xff;
  uVar2 = CONCAT71(uVar5,g_TableBase5_x_minus_y[0x65][uVar4]) + (ulonglong)g_TableBase6_x_<_y[0x35][uVar3] * -0x10000;
  uVar6 = uVar2 >> 0x10 & 0xff;
  uVar2 = (uVar2 & 0xffffffffffff00ff | (ulonglong)g_TableBase5_x_minus_y[0x35][uVar3] << 8) +
          (ulonglong)g_TableBase6_x_<_y[0xd0][uVar6] * -0x1000000;
  uVar4 = uVar2 >> 0x18 & 0xff;
  uVar2 = (uVar2 & 0xffffffffff00ffff | (ulonglong)g_TableBase5_x_minus_y[0xd0][uVar6] << 0x10) -
          ((ulonglong)g_TableBase6_x_<_y[0x2d][uVar4] << 0x20);
  uVar2 = (uVar2 & 0xffffff00ffffff | (ulonglong)g_TableBase5_x_minus_y[0x2d][uVar4] << 0x18 |
          (ulonglong)g_TableBase5_x_minus_y[0][uVar2 >> 0x38] << 0x38) ^
          ((ulonglong)(uint)g_MyInput._3_4_ & 0xff) * 0x9953d7;
  uStack_197 = (uint7)(uVar2 >> 8);
  bVar1 = g_TableBase1_x_xor_y[0x69][uVar2 & 0xff];
  uVar3 = (uint7)((CONCAT71(uStack_197,bVar1) & 0xffff00ff000000ff |
                   (ulonglong)g_TableBase1_x_xor_y[0x76][(ulonglong)uStack_197 & 0xff] << 8 |
                   (ulonglong)g_TableBase1_x_xor_y[0x87][(ulonglong)CONCAT16(bVar1,(int6)(uVar2 >> 0x10)) & 0xff] <<
                   0x10 | (ulonglong)g_TableBase1_x_xor_y[0x80][uVar2 >> 0x18 & 0xff] << 0x18 |
                  (ulonglong)g_TableBase1_x_xor_y[0][(ulonglong)(uStack_197 >> 0x20) & 0xff] << 0x28) +
                  (ulonglong)g_TableBase6_x_<_y[0x78][bVar1] * -0x100 >> 8);
  uVar4 = (ulonglong)uVar3 & 0xff;
  uVar2 = CONCAT71(uVar3,g_TableBase5_x_minus_y[0x78][bVar1]) + (ulonglong)g_TableBase6_x_<_y[0x24][uVar4] * -0x10000 &
          0xffffffffffff00ff;
  uVar6 = (ulonglong)CONCAT16(g_TableBase5_x_minus_y[0x78][bVar1],(int6)(uVar2 >> 0x10)) & 0xff;
  uVar2 = (uVar2 | (ulonglong)g_TableBase5_x_minus_y[0x24][uVar4] << 8) +
          (ulonglong)g_TableBase6_x_<_y[0x42][uVar6] * -0x1000000;
  uVar7 = uVar2 >> 0x18 & 0xff;
  uVar2 = (uVar2 & 0xffffffffff00ffff | (ulonglong)g_TableBase5_x_minus_y[0x42][uVar6] << 0x10) -
          ((ulonglong)g_TableBase6_x_<_y[0xf9][uVar7] << 0x20);
  uVar4 = uVar2 >> 0x20 & 0xff;
  uVar6 = (uVar2 & 0xffffffff00ffffff | (ulonglong)g_TableBase5_x_minus_y[0xf9][uVar7] << 0x18) -
          ((ulonglong)g_TableBase6_x_<_y[0xfd][uVar4] << 0x28);
  uVar2 = uVar6 >> 0x28 & 0xff;
  uVar4 = (uVar6 & 0xffffff00ffffffff | (ulonglong)g_TableBase5_x_minus_y[0xfd][uVar4] << 0x20) -
          ((ulonglong)g_TableBase6_x_<_y[0xff][uVar2] << 0x30);
  uVar6 = uVar4 >> 0x30 & 0xff;
  uVar2 = (uVar4 & 0xffff00ffffffffff | (ulonglong)g_TableBase5_x_minus_y[0xff][uVar2] << 0x28) -
          ((ulonglong)g_TableBase6_x_<_y[0xff][uVar6] << 0x38);
  uVar5 = (uint7)(uVar2 >> 8) & 0xffffffffff;
  uVar3 = uVar5 | (uint7)(((ulonglong)g_TableBase5_x_minus_y[0xff][uVar6] << 0x30) >> 8);
  uStack_207 = (uint3)uVar5;
  UNRECOVERED_JUMPTABLE = (code *)0x1802e4ba0;
  if ((CONCAT71(uVar3,g_TableBase2_x_or_y[0][uVar2 & 0xff]) & 0xff0000ffff00ff |
       (ulonglong)g_TableBase2_x_or_y[0][(ulonglong)uStack_207 & 0xff] << 8 |
       (ulonglong)g_TableBase2_x_or_y[0][(ulonglong)(uint)(uVar3 >> 0x18) & 0xff] << 0x20 |
       (ulonglong)g_TableBase2_x_or_y[0][(ulonglong)(uVar3 >> 0x20) & 0xff] << 0x28 |
      (ulonglong)g_TableBase2_x_or_y[0][g_TableBase5_x_minus_y[0xff][uVar2 >> 0x38]] << 0x38) != 0) {
    UNRECOVERED_JUMPTABLE = MyPrintWrongKey;
  }
                    /* WARNING: Could not recover jumptable at 0x0001802e4b9d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}


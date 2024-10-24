
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void Condition_28(void)

{
  uint5 uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  uint7 uVar4;
  ulonglong uVar5;
  code *UNRECOVERED_JUMPTABLE;
  ulonglong uVar6;
  undefined2 uStack_220;
  undefined uStack_21e;
  uint5 uStack_21d;
  uint7 uStack_20f;
  uint5 uStack_135;
  uint7 uStack_127;
  uint7 uStack_e7;
  
  uVar2 = ((ulonglong)(uint)g_MyInput._0_4_ & 0xff) * 0x53a4e0;
  uVar3 = uVar2 & 0xff;
  uVar2 = uVar2 + (ulonglong)g_TableBase6_x_<_y[0x3e][uVar3] * -0x100;
  uVar6 = uVar2 >> 8 & 0xff;
  uVar2 = CONCAT71((int7)(uVar2 >> 8),g_TableBase5_x_minus_y[0x3e][uVar3]) +
          (ulonglong)g_TableBase6_x_<_y[0x80][uVar6] * -0x10000;
  uVar3 = uVar2 >> 0x10 & 0xff;
  uVar2 = (uVar2 & 0xffffffffffff00ff | (ulonglong)g_TableBase5_x_minus_y[0x80][uVar6] << 8) +
          (ulonglong)g_TableBase6_x_<_y[0x61][uVar3] * -0x1000000;
  uVar6 = uVar2 >> 0x18 & 0xff;
  uVar2 = (uVar2 & 0xffffffffff00ffff | (ulonglong)g_TableBase5_x_minus_y[0x61][uVar3] << 0x10) -
          ((ulonglong)g_TableBase6_x_<_y[0x60][uVar6] << 0x20);
  uVar5 = uVar2 >> 0x20 & 0xff;
  uVar2 = (uVar2 & 0xffffffff00ffffff | (ulonglong)g_TableBase5_x_minus_y[0x60][uVar6] << 0x18) -
          ((ulonglong)g_TableBase6_x_<_y[0][uVar5] << 0x28);
  uVar3 = uVar2 >> 0x30 & 0xff;
  uVar3 = ((uVar2 & 0xffffff00ffffffff | (ulonglong)g_TableBase5_x_minus_y[0][uVar5] << 0x20) -
           ((ulonglong)g_TableBase6_x_<_y[0][uVar3] << 0x38) & 0xff00ffffffffffff |
          (ulonglong)g_TableBase5_x_minus_y[0][uVar3] << 0x30) + ((ulonglong)(uint)g_MyInput._16_4_ & 0xff) * -0x9bbfda;
  uVar2 = uVar3 & 0xff;
  uVar4 = (uint7)(uVar3 + (ulonglong)g_TableBase4_x_y>0x100[0xf1][uVar2] * 0x100 >> 8);
  uVar3 = (ulonglong)uVar4 & 0xff;
  uVar2 = CONCAT71(uVar4,g_TableBase3_x_add_y[0xf1][uVar2]) + (ulonglong)g_TableBase4_x_y>0x100[0x83][uVar3] * 0x10000;
  uVar6 = uVar2 >> 0x10 & 0xff;
  uVar2 = (uVar2 & 0xffffffffffff00ff | (ulonglong)g_TableBase3_x_add_y[0x83][uVar3] << 8) +
          (ulonglong)g_TableBase4_x_y>0x100[0xb3][uVar6] * 0x1000000;
  uVar3 = uVar2 >> 0x18 & 0xff;
  uVar2 = ((uVar2 & 0xffffffffff00ffff | (ulonglong)g_TableBase3_x_add_y[0xb3][uVar6] << 0x10) +
           ((ulonglong)g_TableBase4_x_y>0x100[0x69][uVar3] << 0x20) & 0xffffffff00ffffff |
          (ulonglong)g_TableBase3_x_add_y[0x69][uVar3] << 0x18) + ((ulonglong)(uint)g_MyInput._24_4_ & 0xff) * -0x6b38aa
  ;
  uVar3 = uVar2 & 0xff;
  uVar4 = (uint7)(uVar2 + (ulonglong)g_TableBase6_x_<_y[0xa0][uVar3] * -0x100 >> 8);
  uVar2 = (ulonglong)uVar4 & 0xff;
  uVar5 = CONCAT71(uVar4,g_TableBase5_x_minus_y[0xa0][uVar3]) + (ulonglong)g_TableBase6_x_<_y[0x17][uVar2] * -0x10000 &
          0xffffffffffff00ff;
  uVar6 = (ulonglong)CONCAT16(g_TableBase5_x_minus_y[0xa0][uVar3],(int6)(uVar5 >> 0x10)) & 0xff;
  uVar3 = (uVar5 | (ulonglong)g_TableBase5_x_minus_y[0x17][uVar2] << 8) +
          (ulonglong)g_TableBase6_x_<_y[0x13][uVar6] * -0x1000000;
  uVar2 = uVar3 >> 0x18 & 0xff;
  uVar3 = (uVar3 & 0xffffffffff00ffff | (ulonglong)g_TableBase5_x_minus_y[0x13][uVar6] << 0x10) -
          ((ulonglong)g_TableBase6_x_<_y[0x97][uVar2] << 0x20);
  uVar6 = uVar3 >> 0x20 & 0xff;
  uVar2 = (uVar3 & 0xffffffff00ffffff | (ulonglong)g_TableBase5_x_minus_y[0x97][uVar2] << 0x18) -
          ((ulonglong)g_TableBase6_x_<_y[0][uVar6] << 0x28);
  uVar3 = uVar2 >> 0x28 & 0xff;
  uVar2 = (uVar2 & 0xffffff00ffffffff | (ulonglong)g_TableBase5_x_minus_y[0][uVar6] << 0x20) -
          ((ulonglong)g_TableBase6_x_<_y[0][uVar3] << 0x30);
  uVar2 = (uVar2 & 0xff00ffffffffff | (ulonglong)g_TableBase5_x_minus_y[0][uVar3] << 0x28 |
          (ulonglong)g_TableBase5_x_minus_y[0][uVar2 >> 0x38] << 0x38) +
          ((ulonglong)(uint)g_MyInput._20_4_ & 0xff) * 0x5d266f;
  uVar3 = uVar2 & 0xff;
  uVar4 = (uint7)(uVar2 + (ulonglong)g_TableBase4_x_y>0x100[0x60][uVar3] * 0x100 >> 8);
  uVar6 = (ulonglong)uVar4 & 0xff;
  uVar2 = CONCAT71(uVar4,g_TableBase3_x_add_y[0x60][uVar3]) + (ulonglong)g_TableBase4_x_y>0x100[0xe][uVar6] * 0x10000 &
          0xffffffffffff00ff;
  uVar5 = (ulonglong)CONCAT16(g_TableBase3_x_add_y[0x60][uVar3],(int6)(uVar2 >> 0x10)) & 0xff;
  uVar2 = (uVar2 | (ulonglong)g_TableBase3_x_add_y[0xe][uVar6] << 8) +
          (ulonglong)g_TableBase4_x_y>0x100[0x4b][uVar5] * 0x1000000;
  uVar3 = uVar2 >> 0x18 & 0xff;
  uVar6 = (uVar2 & 0xffffffffff00ffff | (ulonglong)g_TableBase3_x_add_y[0x4b][uVar5] << 0x10) +
          ((ulonglong)g_TableBase4_x_y>0x100[0x5a][uVar3] << 0x20);
  uVar2 = uVar6 >> 0x30 & 0xff;
  uVar3 = (uVar6 & 0xffffffff00ffffff | (ulonglong)g_TableBase3_x_add_y[0x5a][uVar3] << 0x18) +
          ((ulonglong)g_TableBase4_x_y>0x100[0][uVar2] << 0x38);
  uVar3 = (uVar3 & 0xffffffffffff | (ulonglong)g_TableBase3_x_add_y[0][uVar2] << 0x30 |
          (ulonglong)g_TableBase3_x_add_y[0][uVar3 >> 0x38] << 0x38) +
          ((ulonglong)(uint)g_MyInput._8_4_ & 0xff) * -0xedc3d3;
  uStack_e7 = (uint7)(uVar3 >> 8);
  uVar2 = CONCAT71(uStack_e7,g_TableBase1_x_xor_y[0xf6][uVar3 & 0xff]) & 0xffffffff000000ff;
  uVar1 = (uint5)(uVar2 >> 0x18);
  uStack_135 = uVar1 | g_TableBase1_x_xor_y[0x93][uVar3 >> 0x18 & 0xff];
  uVar2 = (CONCAT53(uStack_135,
                    (uint3)uVar2 | (uint3)g_TableBase1_x_xor_y[0x9a][(ulonglong)uStack_e7 & 0xff] << 8 |
                    (uint3)g_TableBase1_x_xor_y[0xe5]
                           [(ulonglong)CONCAT16(g_TableBase1_x_xor_y[0xf6][uVar3 & 0xff],(int6)(uVar3 >> 0x10)) & 0xff]
                    << 0x10) & 0xff000000ffffffff |
           (ulonglong)g_TableBase1_x_xor_y[0][(ulonglong)(uStack_e7 >> 0x18) & 0xff] << 0x20 |
           (ulonglong)g_TableBase1_x_xor_y[0][(ulonglong)(uVar1 >> 0x10) & 0xff] << 0x28 |
          (ulonglong)g_TableBase1_x_xor_y[0][(ulonglong)(uStack_e7 >> 0x28) & 0xff] << 0x30) +
          ((ulonglong)(uint)g_MyInput._4_4_ & 0xff) * -0xb1f16c;
  uStack_127 = (uint7)(uVar2 >> 8);
  uVar2 = (CONCAT71(uStack_127,g_TableBase1_x_xor_y[0xa9][uVar2 & 0xff]) & 0xff000000000000ff |
           (ulonglong)g_TableBase1_x_xor_y[0xb9][(ulonglong)uStack_127 & 0xff] << 8 |
           (ulonglong)
           g_TableBase1_x_xor_y[0xd2]
           [(ulonglong)CONCAT16(g_TableBase1_x_xor_y[0xa9][uVar2 & 0xff],(int6)(uVar2 >> 0x10)) & 0xff] << 0x10 |
           (ulonglong)g_TableBase1_x_xor_y[0xe8][uVar2 >> 0x18 & 0xff] << 0x18 |
           (ulonglong)g_TableBase1_x_xor_y[0][(ulonglong)(uStack_127 >> 0x18) & 0xff] << 0x20 |
           (ulonglong)g_TableBase1_x_xor_y[0][uVar2 >> 0x28 & 0xff] << 0x28 |
          (ulonglong)g_TableBase1_x_xor_y[0][uVar2 >> 0x30 & 0xff] << 0x30) +
          ((ulonglong)(uint)g_MyInput._12_4_ & 0xff) * 0x1c8e5b;
  uVar3 = uVar2 & 0xff;
  uVar4 = (uint7)(uVar2 + (ulonglong)g_TableBase6_x_<_y[0x83][uVar3] * -0x100 >> 8);
  uVar2 = (ulonglong)uVar4 & 0xff;
  uVar6 = CONCAT71(uVar4,g_TableBase5_x_minus_y[0x83][uVar3]) + (ulonglong)g_TableBase6_x_<_y[0x92][uVar2] * -0x10000 &
          0xffffffffffff00ff;
  uVar3 = (ulonglong)CONCAT16(g_TableBase5_x_minus_y[0x83][uVar3],(int6)(uVar6 >> 0x10)) & 0xff;
  uVar2 = (uVar6 | (ulonglong)g_TableBase5_x_minus_y[0x92][uVar2] << 8) +
          (ulonglong)g_TableBase6_x_<_y[0x83][uVar3] * -0x1000000;
  uVar6 = uVar2 >> 0x18 & 0xff;
  uVar3 = (uVar2 & 0xffffffffff00ffff | (ulonglong)g_TableBase5_x_minus_y[0x83][uVar3] << 0x10) -
          ((ulonglong)g_TableBase6_x_<_y[0x68][uVar6] << 0x20);
  uVar2 = uVar3 >> 0x28 & 0xff;
  uVar2 = ((uVar3 & 0xffffffff00ffffff | (ulonglong)g_TableBase5_x_minus_y[0x68][uVar6] << 0x18) -
           ((ulonglong)g_TableBase6_x_<_y[0][uVar2] << 0x30) & 0xffff00ffffffffff |
          (ulonglong)g_TableBase5_x_minus_y[0][uVar2] << 0x28) + ((ulonglong)(uint)g_MyInput._28_4_ & 0xff) * 0x78f67b;
  uVar3 = uVar2 & 0xff;
  uVar4 = (uint7)(uVar2 + (ulonglong)g_TableBase6_x_<_y[0x89][uVar3] * -0x100 >> 8);
  uVar6 = (ulonglong)uVar4 & 0xff;
  uVar3 = CONCAT71(uVar4,g_TableBase5_x_minus_y[0x89][uVar3]) + (ulonglong)g_TableBase6_x_<_y[0xd8][uVar6] * -0x10000;
  uVar2 = uVar3 >> 0x10 & 0xff;
  uVar3 = (uVar3 & 0xffffffffffff00ff | (ulonglong)g_TableBase5_x_minus_y[0xd8][uVar6] << 8) +
          (ulonglong)g_TableBase6_x_<_y[0x3d][uVar2] * -0x1000000;
  uVar5 = uVar3 >> 0x18 & 0xff;
  uVar2 = (uVar3 & 0xffffffffff00ffff | (ulonglong)g_TableBase5_x_minus_y[0x3d][uVar2] << 0x10) -
          ((ulonglong)g_TableBase6_x_<_y[0xf5][uVar5] << 0x20);
  uVar6 = uVar2 >> 0x28 & 0xff;
  uVar2 = (uVar2 & 0xffffffff00ffffff | (ulonglong)g_TableBase5_x_minus_y[0xf5][uVar5] << 0x18) -
          ((ulonglong)g_TableBase6_x_<_y[0][uVar6] << 0x30);
  uVar3 = uVar2 >> 0x30 & 0xff;
  uVar6 = (uVar2 & 0xffff00ffffffffff | (ulonglong)g_TableBase5_x_minus_y[0][uVar6] << 0x28) -
          ((ulonglong)g_TableBase6_x_<_y[0][uVar3] << 0x38);
  uVar2 = (uVar6 & 0xffffffffffff | (ulonglong)g_TableBase5_x_minus_y[0][uVar3] << 0x30 |
          (ulonglong)g_TableBase5_x_minus_y[0][uVar6 >> 0x38] << 0x38) +
          (ulonglong)g_TableBase6_x_<_y[0x5d][uVar6 & 0xff] * -0x100;
  uVar3 = uVar2 >> 8 & 0xff;
  uVar2 = CONCAT71((int7)(uVar2 >> 8),g_TableBase5_x_minus_y[0x5d][uVar6 & 0xff]) +
          (ulonglong)g_TableBase6_x_<_y[0x22][uVar3] * -0x10000;
  uVar6 = uVar2 >> 0x10 & 0xff;
  uVar2 = (uVar2 & 0xffffffffffff00ff | (ulonglong)g_TableBase5_x_minus_y[0x22][uVar3] << 8) +
          (ulonglong)g_TableBase6_x_<_y[0xab][uVar6] * -0x1000000;
  uVar3 = uVar2 >> 0x18 & 0xff;
  uVar2 = (uVar2 & 0xffffffffff00ffff | (ulonglong)g_TableBase5_x_minus_y[0xab][uVar6] << 0x10) -
          ((ulonglong)g_TableBase6_x_<_y[0x4e][uVar3] << 0x20);
  uVar6 = uVar2 >> 0x20 & 0xff;
  uVar3 = (uVar2 & 0xffffffff00ffffff | (ulonglong)g_TableBase5_x_minus_y[0x4e][uVar3] << 0x18) -
          ((ulonglong)g_TableBase6_x_<_y[0xfe][uVar6] << 0x28);
  uVar2 = uVar3 >> 0x28 & 0xff;
  uVar6 = (uVar3 & 0xffffff00ffffffff | (ulonglong)g_TableBase5_x_minus_y[0xfe][uVar6] << 0x20) -
          ((ulonglong)g_TableBase6_x_<_y[0xff][uVar2] << 0x30);
  uVar3 = uVar6 >> 0x30 & 0xff;
  uVar6 = (uVar6 & 0xffff00ffffffffff | (ulonglong)g_TableBase5_x_minus_y[0xff][uVar2] << 0x28) -
          ((ulonglong)g_TableBase6_x_<_y[0xff][uVar3] << 0x38);
  uVar2 = uVar6 & 0xffffffffffff;
  uStack_20f = (uint7)(uVar2 >> 8);
  uStack_220 = (undefined2)CONCAT71(uStack_20f,g_TableBase2_x_or_y[0][uVar6 & 0xff]);
  uStack_21e = (undefined)(uVar2 >> 0x10);
  uStack_21d = (uint5)(uVar2 >> 0x18);
  uVar2 = CONCAT53(uStack_21d,CONCAT12(uStack_21e,uStack_220));
  UNRECOVERED_JUMPTABLE = (code *)0x18029e569;
  if ((uVar2 & 0xff00000000ff | (ulonglong)g_TableBase2_x_or_y[0][(ulonglong)uStack_20f & 0xff] << 8 |
       (ulonglong)
       g_TableBase2_x_or_y[0][(ulonglong)CONCAT16(g_TableBase2_x_or_y[0][uVar6 & 0xff],(int6)(uVar2 >> 0x10)) & 0xff] <<
       0x10 | (ulonglong)g_TableBase2_x_or_y[0][(ulonglong)uStack_21d & 0xff] << 0x18 |
       (ulonglong)g_TableBase2_x_or_y[0][(ulonglong)(uStack_21d >> 8) & 0xff] << 0x20 |
       (ulonglong)g_TableBase2_x_or_y[0][g_TableBase5_x_minus_y[0xff][uVar3]] << 0x30 |
      (ulonglong)g_TableBase2_x_or_y[0][g_TableBase5_x_minus_y[0xff][uVar6 >> 0x38]] << 0x38) != 0) {
    UNRECOVERED_JUMPTABLE = MyPrintWrongKey;
  }
                    /* WARNING: Could not recover jumptable at 0x00018029e566. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}


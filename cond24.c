
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void Condition_24(void)

{
  byte bVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  code *UNRECOVERED_JUMPTABLE;
  uint7 uVar5;
  ulonglong uVar6;
  uint7 uStack_16f;
  
  uVar2 = ((ulonglong)(uint)g_MyInput._4_4_ & 0xff) * 0xf56c62;
  uVar5 = (uint7)(uVar2 >> 8);
  uVar2 = (ulonglong)
          CONCAT13(g_TableBase1_x_xor_y[0x6c][uVar2 >> 0x18],
                   CONCAT12(g_TableBase1_x_xor_y[0x7d][(ulonglong)(uVar5 >> 8) & 0xff],
                            CONCAT11(g_TableBase1_x_xor_y[0x1f][uVar5 & 0xff],g_TableBase1_x_xor_y[0x41][uVar2 & 0xff]))
                  ) + ((ulonglong)(uint)g_MyInput._16_4_ & 0xff) * 0x615605;
  uVar3 = uVar2 & 0xff;
  uVar5 = (uint7)(uVar2 + (ulonglong)g_TableBase4_x_y>0x100[0xee][uVar3] * 0x100 >> 8);
  uVar2 = (ulonglong)uVar5 & 0xff;
  uVar4 = CONCAT71(uVar5,g_TableBase3_x_add_y[0xee][uVar3]) + (ulonglong)g_TableBase4_x_y>0x100[0xf6][uVar2] * 0x10000 &
          0xffffffffffff00ff;
  uVar3 = (ulonglong)CONCAT16(g_TableBase3_x_add_y[0xee][uVar3],(int6)(uVar4 >> 0x10)) & 0xff;
  uVar2 = (uVar4 | (ulonglong)g_TableBase3_x_add_y[0xf6][uVar2] << 8) +
          (ulonglong)g_TableBase4_x_y>0x100[0x52][uVar3] * 0x1000000;
  uVar4 = uVar2 >> 0x18 & 0xff;
  uVar3 = (uVar2 & 0xffffffffff00ffff | (ulonglong)g_TableBase3_x_add_y[0x52][uVar3] << 0x10) +
          ((ulonglong)g_TableBase4_x_y>0x100[0x5b][uVar4] << 0x20);
  uVar2 = uVar3 >> 0x28;
  uVar3 = (uVar3 & 0xffffffff00ffffff | (ulonglong)g_TableBase3_x_add_y[0x5b][uVar4] << 0x18) +
          ((ulonglong)g_TableBase4_x_y>0x100[0][uVar2] << 0x30);
  uVar4 = uVar3 >> 0x30 & 0xff;
  uVar2 = (uVar3 & 0xffff00ffffffffff | (ulonglong)g_TableBase3_x_add_y[0][uVar2] << 0x28) +
          ((ulonglong)g_TableBase4_x_y>0x100[0][uVar4] << 0x38);
  uVar2 = (uVar2 & 0xffffffffffff | (ulonglong)g_TableBase3_x_add_y[0][uVar4] << 0x30 |
          (ulonglong)g_TableBase3_x_add_y[0][uVar2 >> 0x38] << 0x38) +
          ((ulonglong)(uint)g_MyInput._20_4_ & 0xff) * 0x828456;
  uVar5 = (uint7)(uVar2 >> 8);
  uVar2 = (CONCAT71(uVar5,g_TableBase1_x_xor_y[0x59][uVar2 & 0xff]) & 0xffffffff000000ff |
           (ulonglong)g_TableBase1_x_xor_y[0x97][uVar5 & 0xff] << 8 |
           (ulonglong)g_TableBase1_x_xor_y[5][(ulonglong)(uVar5 >> 8) & 0xff] << 0x10 |
          (ulonglong)g_TableBase1_x_xor_y[0x6f][uVar2 >> 0x18 & 0xff] << 0x18) +
          ((ulonglong)g_MyInput._24_8_ >> 0x20 & 0xff) * -0x50484b;
  uVar3 = uVar2 & 0xff;
  uVar5 = (uint7)(uVar2 + (ulonglong)g_TableBase4_x_y>0x100[0xaf][uVar3] * 0x100 >> 8);
  uVar6 = (ulonglong)uVar5 & 0xff;
  uVar2 = CONCAT71(uVar5,g_TableBase3_x_add_y[0xaf][uVar3]) + (ulonglong)g_TableBase4_x_y>0x100[0x22][uVar6] * 0x10000 &
          0xffffffffffff00ff;
  uVar4 = (ulonglong)CONCAT16(g_TableBase3_x_add_y[0xaf][uVar3],(int6)(uVar2 >> 0x10)) & 0xff;
  uVar3 = (uVar2 | (ulonglong)g_TableBase3_x_add_y[0x22][uVar6] << 8) +
          (ulonglong)g_TableBase4_x_y>0x100[0xe2][uVar4] * 0x1000000;
  uVar2 = uVar3 >> 0x18 & 0xff;
  uVar3 = (uVar3 & 0xffffffffff00ffff | (ulonglong)g_TableBase3_x_add_y[0xe2][uVar4] << 0x10) +
          ((ulonglong)g_TableBase4_x_y>0x100[0x84][uVar2] << 0x20);
  uVar4 = uVar3 >> 0x20 & 0xff;
  uVar2 = (uVar3 & 0xffffffff00ffffff | (ulonglong)g_TableBase3_x_add_y[0x84][uVar2] << 0x18) +
          ((ulonglong)g_TableBase4_x_y>0x100[0][uVar4] << 0x28);
  uVar3 = uVar2 >> 0x28 & 0xff;
  uVar2 = (uVar2 & 0xffffff00ffffffff | (ulonglong)g_TableBase3_x_add_y[0][uVar4] << 0x20) +
          ((ulonglong)g_TableBase4_x_y>0x100[0][uVar3] << 0x30);
  uVar4 = uVar2 >> 0x30 & 0xff;
  uVar2 = (uVar2 & 0xffff00ffffffffff | (ulonglong)g_TableBase3_x_add_y[0][uVar3] << 0x28) +
          ((ulonglong)g_TableBase4_x_y>0x100[0][uVar4] << 0x38);
  uVar2 = (uVar2 & 0xffffffffffff | (ulonglong)g_TableBase3_x_add_y[0][uVar4] << 0x30 |
          (ulonglong)g_TableBase3_x_add_y[0][uVar2 >> 0x38] << 0x38) ^
          ((ulonglong)(uint)g_MyInput._8_4_ & 0xff) * 0x89d640;
  uVar4 = uVar2 & 0xff;
  uVar2 = uVar2 + (ulonglong)g_TableBase4_x_y>0x100[0x5b][uVar4] * 0x100;
  uVar3 = uVar2 >> 8 & 0xff;
  uVar2 = CONCAT71((int7)(uVar2 >> 8),g_TableBase3_x_add_y[0x5b][uVar4]) +
          (ulonglong)g_TableBase4_x_y>0x100[0x34][uVar3] * 0x10000;
  uVar4 = uVar2 >> 0x10 & 0xff;
  uVar2 = (uVar2 & 0xffffffffffff00ff | (ulonglong)g_TableBase3_x_add_y[0x34][uVar3] << 8) +
          (ulonglong)g_TableBase4_x_y>0x100[0x21][uVar4] * 0x1000000;
  uVar3 = uVar2 >> 0x18 & 0xff;
  uVar2 = (uVar2 & 0xffffffffff00ffff | (ulonglong)g_TableBase3_x_add_y[0x21][uVar4] << 0x10) +
          ((ulonglong)g_TableBase4_x_y>0x100[0xfd][uVar3] << 0x20);
  uVar3 = (uVar2 & 0xffffff00ffffff | (ulonglong)g_TableBase3_x_add_y[0xfd][uVar3] << 0x18 |
          (ulonglong)g_TableBase3_x_add_y[0][uVar2 >> 0x38] << 0x38) + (g_MyInput._24_8_ & 0xff) * -0xe4b191;
  uVar2 = uVar3 & 0xff;
  uVar5 = (uint7)(uVar3 + (ulonglong)g_TableBase4_x_y>0x100[0x89][uVar2] * 0x100 >> 8);
  uVar4 = (ulonglong)uVar5 & 0xff;
  uVar3 = CONCAT71(uVar5,g_TableBase3_x_add_y[0x89][uVar2]) + (ulonglong)g_TableBase4_x_y>0x100[0xa7][uVar4] * 0x10000;
  uVar2 = uVar3 >> 0x10 & 0xff;
  uVar3 = (uVar3 & 0xffffffffffff00ff | (ulonglong)g_TableBase3_x_add_y[0xa7][uVar4] << 8) +
          (ulonglong)g_TableBase4_x_y>0x100[0x15][uVar2] * 0x1000000;
  uVar4 = uVar3 >> 0x18 & 0xff;
  uVar2 = (uVar3 & 0xffffffffff00ffff | (ulonglong)g_TableBase3_x_add_y[0x15][uVar2] << 0x10) +
          ((ulonglong)g_TableBase4_x_y>0x100[0xfe][uVar4] << 0x20);
  uVar3 = uVar2 >> 0x20 & 0xff;
  uVar2 = ((uVar2 & 0xffffffff00ffffff | (ulonglong)g_TableBase3_x_add_y[0xfe][uVar4] << 0x18) +
           ((ulonglong)g_TableBase4_x_y>0x100[0][uVar3] << 0x28) & 0xffffff00ffffffff |
          (ulonglong)g_TableBase3_x_add_y[0][uVar3] << 0x20) ^ ((ulonglong)(uint)g_MyInput._0_4_ & 0xff) * 0x8c58c1;
  uVar5 = (uint7)(uVar2 >> 8);
  uVar2 = (CONCAT71(uVar5,g_TableBase1_x_xor_y[0x9f][uVar2 & 0xff]) & 0xffffffff000000ff |
           (ulonglong)g_TableBase1_x_xor_y[9][uVar5 & 0xff] << 8 |
           (ulonglong)g_TableBase1_x_xor_y[0x49][(ulonglong)(uVar5 >> 8) & 0xff] << 0x10 |
          (ulonglong)g_TableBase1_x_xor_y[0x4c][uVar2 >> 0x18 & 0xff] << 0x18) +
          ((ulonglong)(uint)g_MyInput._12_4_ & 0xff) * 0xa13c4c;
  uStack_16f = (uint7)(uVar2 >> 8);
  bVar1 = g_TableBase1_x_xor_y[0x8e][uVar2 & 0xff];
  uVar5 = (uint7)((CONCAT71(uStack_16f,bVar1) & 0xffff00ff000000ff |
                   (ulonglong)g_TableBase1_x_xor_y[0x28][(ulonglong)uStack_16f & 0xff] << 8 |
                   (ulonglong)g_TableBase1_x_xor_y[0xc5][(ulonglong)CONCAT16(bVar1,(int6)(uVar2 >> 0x10)) & 0xff] <<
                   0x10 | (ulonglong)g_TableBase1_x_xor_y[0x27][uVar2 >> 0x18 & 0xff] << 0x18 |
                  (ulonglong)g_TableBase1_x_xor_y[0][(ulonglong)(uStack_16f >> 0x20) & 0xff] << 0x28) +
                  (ulonglong)g_TableBase6_x_<_y[0xb][bVar1] * -0x100 >> 8);
  uVar2 = (ulonglong)uVar5 & 0xff;
  uVar3 = CONCAT71(uVar5,g_TableBase5_x_minus_y[0xb][bVar1]) + (ulonglong)g_TableBase6_x_<_y[0xdb][uVar2] * -0x10000 &
          0xffffffffffff00ff;
  uVar6 = (ulonglong)CONCAT16(g_TableBase5_x_minus_y[0xb][bVar1],(int6)(uVar3 >> 0x10)) & 0xff;
  uVar2 = (uVar3 | (ulonglong)g_TableBase5_x_minus_y[0xdb][uVar2] << 8) +
          (ulonglong)g_TableBase6_x_<_y[0x98][uVar6] * -0x1000000;
  uVar4 = uVar2 >> 0x20 & 0xff;
  uVar3 = (uVar2 & 0xffffffffff00ffff | (ulonglong)g_TableBase5_x_minus_y[0x98][uVar6] << 0x10) -
          ((ulonglong)g_TableBase6_x_<_y[3][uVar4] << 0x28);
  uVar2 = uVar3 >> 0x28 & 0xff;
  uVar3 = (uVar3 & 0xffffff00ffffffff | (ulonglong)g_TableBase5_x_minus_y[3][uVar4] << 0x20) -
          ((ulonglong)g_TableBase6_x_<_y[0][uVar2] << 0x30);
  uVar4 = uVar3 >> 0x30 & 0xff;
  uVar2 = (uVar3 & 0xffff00ffffffffff | (ulonglong)g_TableBase5_x_minus_y[0][uVar2] << 0x28) -
          ((ulonglong)g_TableBase6_x_<_y[0][uVar4] << 0x38);
  uVar5 = (uint7)(uVar2 >> 8) & 0xffffffffff | (uint7)(((ulonglong)g_TableBase5_x_minus_y[0][uVar4] << 0x30) >> 8) |
          (uint7)(((ulonglong)g_TableBase5_x_minus_y[0][uVar2 >> 0x38] << 0x38) >> 8);
  UNRECOVERED_JUMPTABLE = (code *)0x180243e58;
  if ((CONCAT71(uVar5,g_TableBase7_x_and_y[0xff][uVar2 & 0xff]) & 0xffff0000ffff00ff |
       (ulonglong)g_TableBase7_x_and_y[0xff][(uVar2 & 0xff00) >> 8] << 8 |
       (ulonglong)g_TableBase7_x_and_y[0xff][(ulonglong)(uVar5 >> 0x18) & 0xff] << 0x20 |
      (ulonglong)g_TableBase7_x_and_y[0xff][(uVar2 & 0xff0000000000) >> 0x28] << 0x28) != 0) {
    UNRECOVERED_JUMPTABLE = MyPrintWrongKey;
  }
                    /* WARNING: Could not recover jumptable at 0x000180243e55. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}


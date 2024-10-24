
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void Condition_5(void)

{
  ulonglong uVar1;
  longlong lVar2;
  uint7 uVar3;
  code *UNRECOVERED_JUMPTABLE;
  uint7 uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  undefined5 uStack_fd;
  uint5 uStack_c5;
  uint7 uStack_b7;
  uint5 uStack_8d;
  uint7 uStack_7f;
  
  uVar1 = ((ulonglong)(uint)g_MyInput._17_4_ & 0xff) * 0xa9b448;
  uVar5 = ((ulonglong)
           CONCAT14(*g_TableBase1_x_xor_y[0],
                    CONCAT13(g_TableBase1_x_xor_y[0x9f][uVar1 >> 0x18],
                             CONCAT12(g_TableBase1_x_xor_y[0x93][uVar1 >> 0x10 & 0xff],
                                      CONCAT11(g_TableBase1_x_xor_y[0x84][uVar1 >> 8 & 0xff],
                                               g_TableBase1_x_xor_y[0x99][uVar1 & 0xff])))) |
          (ulonglong)*g_TableBase1_x_xor_y[0] << 0x30) + (g_MyInput._5_8_ & 0xff) * 0x906550;
  uVar1 = uVar5 & 0xff;
  uVar3 = (uint7)(uVar5 + (ulonglong)g_TableBase4_x_y>0x100[0xaf][uVar1] * 0x100 >> 8);
  uVar4 = uVar3 & 0xff;
  uVar1 = CONCAT71(uVar3,g_TableBase3_x_add_y[0xaf][uVar1]) + (ulonglong)g_TableBase4_x_y>0x100[0x21][uVar4] * 0x10000;
  uVar5 = uVar1 >> 0x10 & 0xff;
  uVar1 = (uVar1 & 0xffffffffffff00ff | (ulonglong)g_TableBase3_x_add_y[0x21][uVar4] << 8) +
          (ulonglong)g_TableBase4_x_y>0x100[0x70][uVar5] * 0x1000000;
  uVar7 = uVar1 >> 0x18 & 0xff;
  uVar5 = (uVar1 & 0xffffffffff00ffff | (ulonglong)g_TableBase3_x_add_y[0x70][uVar5] << 0x10) +
          ((ulonglong)g_TableBase4_x_y>0x100[0x40][uVar7] << 0x20);
  uVar1 = uVar5 >> 0x30 & 0xff;
  uVar5 = (uVar5 & 0xffffffff00ffffff | (ulonglong)g_TableBase3_x_add_y[0x40][uVar7] << 0x18) +
          ((ulonglong)g_TableBase4_x_y>0x100[0][uVar1] << 0x38);
  uVar1 = (uVar5 & 0xffffffffffff | (ulonglong)g_TableBase3_x_add_y[0][uVar1] << 0x30 |
          (ulonglong)g_TableBase3_x_add_y[0][uVar5 >> 0x38] << 0x38) ^
          ((ulonglong)(uint)g_MyInput._13_4_ & 0xff) * 0xaa5ad2;
  uStack_7f = (uint7)(uVar1 >> 8);
  uStack_8d = (uint5)(uVar1 >> 0x18);
  uVar1 = CONCAT53(uStack_8d,(int3)CONCAT71(uStack_7f,g_TableBase1_x_xor_y[0xa7][uVar1 & 0xff])) & 0xffffffff000000ff;
  uStack_c5 = (uint5)(uVar1 >> 0x18) | (uint5)g_TableBase1_x_xor_y[0x77][(ulonglong)uStack_8d & 0xff];
  uVar1 = (CONCAT53(uStack_c5,
                    (uint3)uVar1 | (uint3)g_TableBase1_x_xor_y[0x83][(ulonglong)uStack_7f & 0xff] << 8 |
                    (uint3)g_TableBase1_x_xor_y[0xcf][(((ulonglong)uStack_7f & 0xff00) << 8) >> 0x10] << 0x10) &
           0xffffffffffff | (ulonglong)g_TableBase1_x_xor_y[0][(ulonglong)(uStack_8d >> 0x18) & 0xff] << 0x30 |
          (ulonglong)g_TableBase1_x_xor_y[0][uStack_8d >> 0x20] << 0x38) ^
          ((ulonglong)(uint)g_MyInput._29_4_ & 0xff) * 0xc49349;
  uStack_b7 = (uint7)(uVar1 >> 8);
  uVar1 = (CONCAT71(uStack_b7,g_TableBase1_x_xor_y[0xe7][uVar1 & 0xff]) & 0xff00ff000000ff |
           (ulonglong)g_TableBase1_x_xor_y[0xf4][(ulonglong)uStack_b7 & 0xff] << 8 |
           (ulonglong)
           g_TableBase1_x_xor_y[0x67]
           [(ulonglong)CONCAT16(g_TableBase1_x_xor_y[0xe7][uVar1 & 0xff],(int6)(uVar1 >> 0x10)) & 0xff] << 0x10 |
           (ulonglong)g_TableBase1_x_xor_y[0x30][uVar1 >> 0x18 & 0xff] << 0x18 |
           (ulonglong)g_TableBase1_x_xor_y[0][(((ulonglong)uStack_c5 & 0xff0000) << 0x18) >> 0x28] << 0x28 |
          (ulonglong)g_TableBase1_x_xor_y[0][uStack_b7 >> 0x30] << 0x38) +
          ((ulonglong)g_MyInput._5_8_ >> 0x20 & 0xff) * 0x314f8e;
  uVar5 = uVar1 & 0xff;
  lVar2 = uVar1 + (ulonglong)g_TableBase4_x_y>0x100[0x3b][uVar5] * 0x100;
  uVar4 = (uint7)((ulonglong)lVar2 >> 8);
  uStack_fd = (undefined5)((ulonglong)lVar2 >> 0x18);
  uVar1 = (ulonglong)uVar4 & 0xff;
  uVar5 = CONCAT53(uStack_fd,(int3)CONCAT71(uVar4,g_TableBase3_x_add_y[0x3b][uVar5])) +
          (ulonglong)g_TableBase4_x_y>0x100[0x5f][uVar1] * 0x10000;
  uVar7 = uVar5 >> 0x10 & 0xff;
  uVar1 = (uVar5 & 0xffffffffffff00ff | (ulonglong)g_TableBase3_x_add_y[0x5f][uVar1] << 8) +
          (ulonglong)g_TableBase4_x_y>0x100[0x97][uVar7] * 0x1000000;
  uVar5 = uVar1 >> 0x18 & 0xff;
  uVar1 = (uVar1 & 0xffffffffff00ffff | (ulonglong)g_TableBase3_x_add_y[0x97][uVar7] << 0x10) +
          ((ulonglong)g_TableBase4_x_y>0x100[0xcd][uVar5] << 0x20);
  uVar7 = uVar1 >> 0x20 & 0xff;
  uVar5 = (uVar1 & 0xffffffff00ffffff | (ulonglong)g_TableBase3_x_add_y[0xcd][uVar5] << 0x18) +
          ((ulonglong)g_TableBase4_x_y>0x100[0][uVar7] << 0x28);
  uVar1 = uVar5 >> 0x28 & 0xff;
  uVar5 = (uVar5 & 0xffffff00ffffffff | (ulonglong)g_TableBase3_x_add_y[0][uVar7] << 0x20) +
          ((ulonglong)g_TableBase4_x_y>0x100[0][uVar1] << 0x30);
  uVar7 = uVar5 >> 0x30 & 0xff;
  uVar1 = (uVar5 & 0xffff00ffffffffff | (ulonglong)g_TableBase3_x_add_y[0][uVar1] << 0x28) +
          ((ulonglong)g_TableBase4_x_y>0x100[0][uVar7] << 0x38);
  uVar5 = (uVar1 & 0xffffffffffff | (ulonglong)g_TableBase3_x_add_y[0][uVar7] << 0x30 |
          (ulonglong)g_TableBase3_x_add_y[0][uVar1 >> 0x38] << 0x38) ^
          ((ulonglong)(uint)g_MyInput._21_4_ & 0xff) * 0x81968b;
  uVar1 = uVar5 & 0xff;
  uVar5 = uVar5 + (ulonglong)g_TableBase4_x_y>0x100[0xb][uVar1] * 0x100;
  uVar7 = uVar5 >> 8 & 0xff;
  uVar1 = CONCAT71((int7)(uVar5 >> 8),g_TableBase3_x_add_y[0xb][uVar1]) +
          (ulonglong)g_TableBase4_x_y>0x100[0x2e][uVar7] * 0x10000;
  uVar6 = uVar1 >> 0x10 & 0xff;
  uVar1 = (uVar1 & 0xffffffffffff00ff | (ulonglong)g_TableBase3_x_add_y[0x2e][uVar7] << 8) +
          (ulonglong)g_TableBase4_x_y>0x100[0x3d][uVar6] * 0x1000000;
  uVar5 = uVar1 >> 0x18 & 0xff;
  uVar1 = (uVar1 & 0xffffffffff00ffff | (ulonglong)g_TableBase3_x_add_y[0x3d][uVar6] << 0x10) +
          ((ulonglong)g_TableBase4_x_y>0x100[0x89][uVar5] << 0x20);
  uVar7 = uVar1 >> 0x28 & 0xff;
  uVar5 = (uVar1 & 0xffffffff00ffffff | (ulonglong)g_TableBase3_x_add_y[0x89][uVar5] << 0x18) +
          ((ulonglong)g_TableBase4_x_y>0x100[0][uVar7] << 0x30);
  uVar1 = uVar5 >> 0x30 & 0xff;
  uVar1 = ((uVar5 & 0xffff00ffffffffff | (ulonglong)g_TableBase3_x_add_y[0][uVar7] << 0x28) +
           ((ulonglong)g_TableBase4_x_y>0x100[0][uVar1] << 0x38) & 0xff00ffffffffffff |
          (ulonglong)g_TableBase3_x_add_y[0][uVar1] << 0x30) + ((ulonglong)(uint)g_MyInput._25_4_ & 0xff) * -0x5ffbac;
  uVar4 = (uint7)(uVar1 >> 8);
  uVar1 = (CONCAT71(uVar4,g_TableBase1_x_xor_y[0x3a][uVar1 & 0xff]) & 0xff00ff000000ff |
           (ulonglong)g_TableBase1_x_xor_y[0x8e][uVar4 & 0xff] << 8 |
           (ulonglong)g_TableBase1_x_xor_y[0x37][uVar1 >> 0x10 & 0xff] << 0x10 |
           (ulonglong)g_TableBase1_x_xor_y[0xf3][(ulonglong)(uVar4 >> 0x10) & 0xff] << 0x18 |
           (ulonglong)g_TableBase1_x_xor_y[0][uVar1 >> 0x28 & 0xff] << 0x28 |
          (ulonglong)g_TableBase1_x_xor_y[0][uVar1 >> 0x38] << 0x38) +
          ((ulonglong)(uint)g_MyInput._1_4_ & 0xff) * -0xf63c8e;
  uVar5 = uVar1 & 0xff;
  uVar1 = uVar1 + (ulonglong)g_TableBase6_x_<_y[0x2b][uVar5] * -0x100;
  uVar7 = uVar1 >> 8 & 0xff;
  uVar5 = CONCAT71((int7)(uVar1 >> 8),g_TableBase5_x_minus_y[0x2b][uVar5]) +
          (ulonglong)g_TableBase6_x_<_y[0x88][uVar7] * -0x10000;
  uVar1 = uVar5 >> 0x10 & 0xff;
  uVar5 = (uVar5 & 0xffffffffffff00ff | (ulonglong)g_TableBase5_x_minus_y[0x88][uVar7] << 8) +
          (ulonglong)g_TableBase6_x_<_y[0x1d][uVar1] * -0x1000000;
  uVar7 = uVar5 >> 0x18 & 0xff;
  uVar5 = (uVar5 & 0xffffffffff00ffff | (ulonglong)g_TableBase5_x_minus_y[0x1d][uVar1] << 0x10) -
          ((ulonglong)g_TableBase6_x_<_y[0x1c][uVar7] << 0x20);
  uVar1 = uVar5 & 0xff;
  uVar3 = (uint7)((uVar5 & 0xffffffff00ffffff | (ulonglong)g_TableBase5_x_minus_y[0x1c][uVar7] << 0x18) +
                  (ulonglong)g_TableBase6_x_<_y[0x8d][uVar1] * -0x100 >> 8);
  uVar4 = uVar3 & 0xff;
  uVar1 = CONCAT71(uVar3,g_TableBase5_x_minus_y[0x8d][uVar1]) + (ulonglong)g_TableBase6_x_<_y[0xb4][uVar4] * -0x10000;
  uVar5 = uVar1 >> 0x10 & 0xff;
  uVar7 = (uVar1 & 0xffffffffffff00ff | (ulonglong)g_TableBase5_x_minus_y[0xb4][uVar4] << 8) +
          (ulonglong)g_TableBase6_x_<_y[0x5e][uVar5] * -0x1000000;
  uVar1 = uVar7 >> 0x18 & 0xff;
  uVar5 = (uVar7 & 0xffffffffff00ffff | (ulonglong)g_TableBase5_x_minus_y[0x5e][uVar5] << 0x10) -
          ((ulonglong)g_TableBase6_x_<_y[0x8e][uVar1] << 0x20);
  uVar7 = uVar5 >> 0x20 & 0xff;
  uVar1 = (uVar5 & 0xffffffff00ffffff | (ulonglong)g_TableBase5_x_minus_y[0x8e][uVar1] << 0x18) -
          ((ulonglong)g_TableBase6_x_<_y[2][uVar7] << 0x28);
  uVar5 = uVar1 >> 0x30 & 0xff;
  uVar1 = (uVar1 & 0xffffff00ffffffff | (ulonglong)g_TableBase5_x_minus_y[2][uVar7] << 0x20) -
          ((ulonglong)g_TableBase6_x_<_y[0][uVar5] << 0x38);
  UNRECOVERED_JUMPTABLE = (code *)0x18008918b;
  if ((uVar1 & 0xff00ff00ff | (ulonglong)g_TableBase5_x_minus_y[0][uVar5] << 0x30 |
       (ulonglong)g_TableBase7_x_and_y[0xff][(uVar1 & 0xff00) >> 8] << 8 |
       (ulonglong)g_TableBase7_x_and_y[0xff][uVar1 >> 0x18 & 0xff] << 0x18 |
       (ulonglong)g_TableBase7_x_and_y[0xff][(ulonglong)((uint3)(uVar1 >> 0x28) & 0xff00ff) & 0xff] << 0x28 |
      (ulonglong)g_TableBase7_x_and_y[0xff][uVar1 >> 0x38] << 0x38) != 0) {
    UNRECOVERED_JUMPTABLE = MyPrintWrongKey;
  }
                    /* WARNING: Could not recover jumptable at 0x000180089189. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* WARNING: Restarted to delay deadcode elimination for space: stack */

void Condition_18(void)

{
  uint7 uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  uint7 uVar6;
  code *UNRECOVERED_JUMPTABLE;
  uint7 uStack_1ef;
  uint7 uStack_147;
  uint7 uStack_9f;
  
  uVar2 = ((ulonglong)(uint)g_MyInput._10_4_ & 0xff) * 0x52f44d;
  uVar3 = ((ulonglong)
           CONCAT13(g_TableBase1_x_xor_y[0x33][uVar2 >> 0x18],
                    CONCAT12(g_TableBase1_x_xor_y[0xb3][uVar2 >> 0x10 & 0xff],
                             CONCAT11(g_TableBase1_x_xor_y[0xd0][(uint7)(uVar2 >> 8) & 0xff],
                                      g_TableBase1_x_xor_y[0xe4][uVar2 & 0xff]))) |
          (ulonglong)*g_TableBase1_x_xor_y[0] << 0x38) ^ ((ulonglong)g_MyInput._26_8_ >> 0x20 & 0xff) * 0xe6e66e;
  uVar2 = uVar3 & 0xff;
  uVar3 = uVar3 + (ulonglong)g_TableBase6_x_<_y[0xb0][uVar2] * -0x100;
  uVar4 = uVar3 >> 8 & 0xff;
  uVar2 = CONCAT71((int7)(uVar3 >> 8),g_TableBase5_x_minus_y[0xb0][uVar2]) +
          (ulonglong)g_TableBase6_x_<_y[0x79][uVar4] * -0x10000;
  uVar5 = uVar2 >> 0x10 & 0xff;
  uVar3 = (uVar2 & 0xffffffffffff00ff | (ulonglong)g_TableBase5_x_minus_y[0x79][uVar4] << 8) +
          (ulonglong)g_TableBase6_x_<_y[0x5d][uVar5] * -0x1000000;
  uVar2 = uVar3 >> 0x18 & 0xff;
  uVar2 = ((uVar3 & 0xffffffffff00ffff | (ulonglong)g_TableBase5_x_minus_y[0x5d][uVar5] << 0x10) -
           ((ulonglong)g_TableBase6_x_<_y[0x27][uVar2] << 0x20) & 0xffffffff00ffffff |
          (ulonglong)g_TableBase5_x_minus_y[0x27][uVar2] << 0x18) +
          ((ulonglong)(uint)g_MyInput._6_4_ & 0xff) * -0xf98017;
  uVar6 = (uint7)(uVar2 >> 8);
  uVar2 = (CONCAT71(uVar6,g_TableBase1_x_xor_y[0x1d][uVar2 & 0xff]) & 0xffff0000000000ff |
           (ulonglong)g_TableBase1_x_xor_y[0x6c][(ulonglong)uVar6 & 0xff] << 8 |
           (ulonglong)g_TableBase1_x_xor_y[0x6e][uVar2 >> 0x10 & 0xff] << 0x10 |
           (ulonglong)g_TableBase1_x_xor_y[0x45][(ulonglong)(uVar6 >> 0x10) & 0xff] << 0x18 |
           (ulonglong)g_TableBase1_x_xor_y[0][(ulonglong)(uVar6 >> 0x18) & 0xff] << 0x20 |
          (ulonglong)g_TableBase1_x_xor_y[0][uVar2 >> 0x28 & 0xff] << 0x28) +
          ((ulonglong)(uint)g_MyInput._14_4_ & 0xff) * -0x34fcb0;
  uStack_9f = (uint7)(uVar2 >> 8);
  uVar3 = (CONCAT71(uStack_9f,g_TableBase1_x_xor_y[0xd8][uVar2 & 0xff]) & 0xff00ff00000000ff |
           (ulonglong)g_TableBase1_x_xor_y[0x9c][(ulonglong)uStack_9f & 0xff] << 8 |
           (ulonglong)g_TableBase1_x_xor_y[0x70][uVar2 >> 0x10 & 0xff] << 0x10 |
           (ulonglong)g_TableBase1_x_xor_y[0x28][(ulonglong)(uStack_9f >> 0x10) & 0xff] << 0x18 |
           (ulonglong)g_TableBase1_x_xor_y[0][(ulonglong)(uStack_9f >> 0x18) & 0xff] << 0x20 |
          (ulonglong)g_TableBase1_x_xor_y[0][(ulonglong)(uStack_9f >> 0x28) & 0xff] << 0x30) ^
          ((ulonglong)(uint)g_MyInput._2_4_ & 0xff) * 0x4d8ba9;
  uVar2 = uVar3 & 0xff;
  uVar3 = uVar3 + (ulonglong)g_TableBase4_x_y>0x100[0x53][uVar2] * 0x100;
  uVar4 = uVar3 >> 8 & 0xff;
  uVar2 = CONCAT71((int7)(uVar3 >> 8),g_TableBase3_x_add_y[0x53][uVar2]) +
          (ulonglong)g_TableBase4_x_y>0x100[0x2f][uVar4] * 0x10000;
  uVar5 = uVar2 >> 0x10 & 0xff;
  uVar2 = (uVar2 & 0xffffffffffff00ff | (ulonglong)g_TableBase3_x_add_y[0x2f][uVar4] << 8) +
          (ulonglong)g_TableBase4_x_y>0x100[0x48][uVar5] * 0x1000000;
  uVar3 = uVar2 >> 0x18 & 0xff;
  uVar2 = (uVar2 & 0xffffffffff00ffff | (ulonglong)g_TableBase3_x_add_y[0x48][uVar5] << 0x10) +
          ((ulonglong)g_TableBase4_x_y>0x100[0xb5][uVar3] << 0x20);
  uVar4 = uVar2 >> 0x20 & 0xff;
  uVar3 = (uVar2 & 0xffffffff00ffffff | (ulonglong)g_TableBase3_x_add_y[0xb5][uVar3] << 0x18) +
          ((ulonglong)g_TableBase4_x_y>0x100[0][uVar4] << 0x28);
  uVar2 = uVar3 >> 0x30 & 0xff;
  uVar2 = ((uVar3 & 0xffffff00ffffffff | (ulonglong)g_TableBase3_x_add_y[0][uVar4] << 0x20) +
           ((ulonglong)g_TableBase4_x_y>0x100[0][uVar2] << 0x38) & 0xff00ffffffffffff |
          (ulonglong)g_TableBase3_x_add_y[0][uVar2] << 0x30) ^ ((ulonglong)(uint)g_MyInput._18_4_ & 0xff) * 0x6c7e92;
  uVar4 = uVar2 & 0xff;
  uVar6 = (uint7)(uVar2 + (ulonglong)g_TableBase4_x_y>0x100[0x41][uVar4] * 0x100 >> 8);
  uVar3 = (ulonglong)uVar6 & 0xff;
  uVar2 = CONCAT71(uVar6,g_TableBase3_x_add_y[0x41][uVar4]) + (ulonglong)g_TableBase4_x_y>0x100[0xd7][uVar3] * 0x10000 &
          0xffffffffffff00ff;
  uVar4 = (ulonglong)CONCAT16(g_TableBase3_x_add_y[0x41][uVar4],(int6)(uVar2 >> 0x10)) & 0xff;
  uVar2 = (uVar2 | (ulonglong)g_TableBase3_x_add_y[0xd7][uVar3] << 8) +
          (ulonglong)g_TableBase4_x_y>0x100[0xf1][uVar4] * 0x1000000;
  uVar3 = uVar2 >> 0x18 & 0xff;
  uVar2 = (uVar2 & 0xffffffffff00ffff | (ulonglong)g_TableBase3_x_add_y[0xf1][uVar4] << 0x10) +
          ((ulonglong)g_TableBase4_x_y>0x100[0x2a][uVar3] << 0x20);
  uVar4 = uVar2 >> 0x30 & 0xff;
  uVar2 = (uVar2 & 0xffffffff00ffffff | (ulonglong)g_TableBase3_x_add_y[0x2a][uVar3] << 0x18) +
          ((ulonglong)g_TableBase4_x_y>0x100[0][uVar4] << 0x38);
  uVar2 = (uVar2 & 0xffffffffffff | (ulonglong)g_TableBase3_x_add_y[0][uVar4] << 0x30 |
          (ulonglong)g_TableBase3_x_add_y[0][uVar2 >> 0x38] << 0x38) +
          ((ulonglong)(uint)g_MyInput._22_4_ & 0xff) * 0xa4711e;
  uStack_147 = (uint7)(uVar2 >> 8);
  uVar2 = CONCAT17(g_TableBase1_x_xor_y[0][uVar2 >> 0x38],
                   CONCAT16(g_TableBase1_x_xor_y[0][uVar2 >> 0x30 & 0xff],
                            CONCAT15(g_TableBase1_x_xor_y[0][uVar2 >> 0x28 & 0xff],
                                     CONCAT14(g_TableBase1_x_xor_y[0][(ulonglong)(uStack_147 >> 0x18) & 0xff],
                                              CONCAT13(g_TableBase1_x_xor_y[0x22][uVar2 >> 0x18 & 0xff],
                                                       CONCAT12(g_TableBase1_x_xor_y[0xe7][uVar2 >> 0x10 & 0xff],
                                                                CONCAT11(g_TableBase1_x_xor_y[0x9a]
                                                                         [(ulonglong)uStack_147 & 0xff],
                                                                         g_TableBase1_x_xor_y[0xf6][uVar2 & 0xff])))))))
          + (g_MyInput._26_8_ & 0xff) * 0x33d374;
  uVar3 = uVar2 & 0xff;
  uVar6 = (uint7)(uVar2 + (ulonglong)g_TableBase6_x_<_y[0xe][uVar3] * -0x100 >> 8);
  uVar4 = (ulonglong)uVar6 & 0xff;
  uVar3 = CONCAT71(uVar6,g_TableBase5_x_minus_y[0xe][uVar3]) + (ulonglong)g_TableBase6_x_<_y[0xfc][uVar4] * -0x10000;
  uVar2 = uVar3 >> 0x10 & 0xff;
  uVar4 = (uVar3 & 0xffffffffffff00ff | (ulonglong)g_TableBase5_x_minus_y[0xfc][uVar4] << 8) +
          (ulonglong)g_TableBase6_x_<_y[0x7e][uVar2] * -0x1000000;
  uVar3 = uVar4 >> 0x18 & 0xff;
  uVar2 = (uVar4 & 0xffffffffff00ffff | (ulonglong)g_TableBase5_x_minus_y[0x7e][uVar2] << 0x10) -
          ((ulonglong)g_TableBase6_x_<_y[0x11][uVar3] << 0x20);
  uVar4 = uVar2 >> 0x20 & 0xff;
  uVar3 = (uVar2 & 0xffffffff00ffffff | (ulonglong)g_TableBase5_x_minus_y[0x11][uVar3] << 0x18) -
          ((ulonglong)g_TableBase6_x_<_y[0][uVar4] << 0x28);
  uVar2 = uVar3 >> 0x28 & 0xff;
  uVar4 = (uVar3 & 0xffffff00ffffffff | (ulonglong)g_TableBase5_x_minus_y[0][uVar4] << 0x20) -
          ((ulonglong)g_TableBase6_x_<_y[0][uVar2] << 0x30);
  uVar3 = uVar4 >> 0x30 & 0xff;
  uVar4 = (uVar4 & 0xffff00ffffffffff | (ulonglong)g_TableBase5_x_minus_y[0][uVar2] << 0x28) -
          ((ulonglong)g_TableBase6_x_<_y[0][uVar3] << 0x38);
  uVar6 = (uint7)((uVar4 & 0xffffffffffff | (ulonglong)g_TableBase5_x_minus_y[0][uVar3] << 0x30 |
                  (ulonglong)g_TableBase5_x_minus_y[0][uVar4 >> 0x38] << 0x38) +
                  (ulonglong)g_TableBase6_x_<_y[0x8e][uVar4 & 0xff] * -0x100 >> 8);
  uVar2 = (ulonglong)uVar6 & 0xff;
  uVar3 = CONCAT71(uVar6,g_TableBase5_x_minus_y[0x8e][uVar4 & 0xff]) +
          (ulonglong)g_TableBase6_x_<_y[0x43][uVar2] * -0x10000 & 0xffffffffffff00ff;
  uVar4 = (ulonglong)CONCAT16(g_TableBase5_x_minus_y[0x8e][uVar4 & 0xff],(int6)(uVar3 >> 0x10)) & 0xff;
  uVar2 = (uVar3 | (ulonglong)g_TableBase5_x_minus_y[0x43][uVar2] << 8) +
          (ulonglong)g_TableBase6_x_<_y[0x79][uVar4] * -0x1000000;
  uVar3 = uVar2 >> 0x18 & 0xff;
  uVar2 = (uVar2 & 0xffffffffff00ffff | (ulonglong)g_TableBase5_x_minus_y[0x79][uVar4] << 0x10) -
          ((ulonglong)g_TableBase6_x_<_y[0x93][uVar3] << 0x20);
  uVar1 = (uint7)(uVar2 >> 8);
  uVar6 = uVar1 & 0xffffffff00ffff;
  uStack_1ef = uVar6 | (uint7)(((ulonglong)g_TableBase5_x_minus_y[0x93][uVar3] << 0x18) >> 8);
  UNRECOVERED_JUMPTABLE = (code *)0x1801bc76d;
  if ((CONCAT71(uStack_1ef,g_TableBase7_x_and_y[0xff][uVar2 & 0xff]) & 0xffffff0000ff |
       (ulonglong)g_TableBase7_x_and_y[0xff][(ulonglong)uStack_1ef & 0xff] << 8 |
       (ulonglong)
       g_TableBase7_x_and_y[0xff]
       [(ulonglong)CONCAT16(g_TableBase7_x_and_y[0xff][uVar2 & 0xff],(int6)(uStack_1ef >> 8)) & 0xff] << 0x10 |
       (ulonglong)g_TableBase7_x_and_y[0xff][(ulonglong)(ushort)(uVar6 >> 0x28) & 0xff] << 0x30 |
      (ulonglong)g_TableBase7_x_and_y[0xff][uVar1 >> 0x30] << 0x38) != 0) {
    UNRECOVERED_JUMPTABLE = MyPrintWrongKey;
  }
                    /* WARNING: Could not recover jumptable at 0x0001801bc76b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}


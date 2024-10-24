
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void Condition_3(void)

{
  ulonglong uVar1;
  longlong lVar2;
  ulonglong uVar3;
  uint7 uVar4;
  code *UNRECOVERED_JUMPTABLE;
  ulonglong uVar5;
  ulonglong uVar6;
  uint7 uVar7;
  undefined2 uStack_1b8;
  undefined uStack_1b6;
  undefined5 uStack_1b5;
  uint7 uStack_127;
  uint7 uStack_3f;
  
  uVar1 = ((ulonglong)(uint)g_MyInput._11_4_ & 0xff) * 0x67dda4;
  uVar3 = uVar1 & 0xff;
  uVar1 = uVar1 + (ulonglong)g_TableBase4_x_y>0x100[0xfc][uVar3] * 0x100;
  uVar6 = uVar1 >> 8 & 0xff;
  uVar3 = CONCAT71((int7)(uVar1 >> 8),g_TableBase3_x_add_y[0xfc][uVar3]) +
          (ulonglong)g_TableBase4_x_y>0x100[0x3a][uVar6] * 0x10000;
  uVar1 = uVar3 >> 0x10 & 0xff;
  uVar3 = (uVar3 & 0xffffffffffff00ff | (ulonglong)g_TableBase3_x_add_y[0x3a][uVar6] << 8) +
          (ulonglong)g_TableBase4_x_y>0x100[0x75][uVar1] * 0x1000000;
  uVar6 = uVar3 >> 0x18 & 0xff;
  uVar3 = (uVar3 & 0xffffffffff00ffff | (ulonglong)g_TableBase3_x_add_y[0x75][uVar1] << 0x10) +
          ((ulonglong)g_TableBase4_x_y>0x100[0xf4][uVar6] << 0x20);
  uVar1 = uVar3 >> 0x20 & 0xff;
  uVar3 = ((uVar3 & 0xffffffff00ffffff | (ulonglong)g_TableBase3_x_add_y[0xf4][uVar6] << 0x18) +
           ((ulonglong)g_TableBase4_x_y>0x100[0][uVar1] << 0x28) & 0xffffff00ffffffff |
          (ulonglong)g_TableBase3_x_add_y[0][uVar1] << 0x20) + ((ulonglong)(uint)g_MyInput._31_4_ & 0xff) * 0x5bb860;
  uStack_3f = (uint7)(uVar3 >> 8);
  uVar1 = CONCAT17(*g_TableBase1_x_xor_y[0],
                   CONCAT16(g_TableBase1_x_xor_y[0][uVar3 >> 0x30],
                            CONCAT15(g_TableBase1_x_xor_y[0][uVar3 >> 0x28 & 0xff],
                                     CONCAT14(g_TableBase1_x_xor_y[0][(ulonglong)(uStack_3f >> 0x18) & 0xff],
                                              CONCAT13(g_TableBase1_x_xor_y[0xc1][uVar3 >> 0x18 & 0xff],
                                                       CONCAT12(g_TableBase1_x_xor_y[0xd4]
                                                                [(ulonglong)
                                                                 CONCAT16(g_TableBase1_x_xor_y[0xc9][uVar3 & 0xff],
                                                                          (int6)(uVar3 >> 0x10)) & 0xff],
                                                                CONCAT11(g_TableBase1_x_xor_y[0x7f]
                                                                         [(ulonglong)uStack_3f & 0xff],
                                                                         g_TableBase1_x_xor_y[0xc9][uVar3 & 0xff])))))))
          ^ ((ulonglong)(uint)g_MyInput._23_4_ & 0xff) * 0xab0ce5;
  uVar3 = uVar1 & 0xff;
  uVar1 = uVar1 + (ulonglong)g_TableBase4_x_y>0x100[0x77][uVar3] * 0x100;
  uVar6 = uVar1 >> 8 & 0xff;
  uVar3 = CONCAT71((int7)(uVar1 >> 8),g_TableBase3_x_add_y[0x77][uVar3]) +
          (ulonglong)g_TableBase4_x_y>0x100[0xf9][uVar6] * 0x10000;
  uVar1 = uVar3 >> 0x10 & 0xff;
  uVar3 = (uVar3 & 0xffffffffffff00ff | (ulonglong)g_TableBase3_x_add_y[0xf9][uVar6] << 8) +
          (ulonglong)g_TableBase4_x_y>0x100[0x4f][uVar1] * 0x1000000;
  uVar6 = uVar3 >> 0x18 & 0xff;
  uVar3 = (uVar3 & 0xffffffffff00ffff | (ulonglong)g_TableBase3_x_add_y[0x4f][uVar1] << 0x10) +
          ((ulonglong)g_TableBase4_x_y>0x100[0x54][uVar6] << 0x20);
  uVar1 = uVar3 >> 0x28 & 0xff;
  uVar3 = (uVar3 & 0xffffffff00ffffff | (ulonglong)g_TableBase3_x_add_y[0x54][uVar6] << 0x18) +
          ((ulonglong)g_TableBase4_x_y>0x100[0][uVar1] << 0x30);
  uVar3 = (uVar3 & 0xff00ffffffffff | (ulonglong)g_TableBase3_x_add_y[0][uVar1] << 0x28 |
          (ulonglong)g_TableBase3_x_add_y[0][uVar3 >> 0x38] << 0x38) +
          ((ulonglong)(uint)g_MyInput._7_4_ & 0xff) * 0x148e94;
  uVar6 = uVar3 & 0xff;
  uVar4 = (uint7)(uVar3 + (ulonglong)g_TableBase6_x_<_y[0x19][uVar6] * -0x100 >> 8);
  uVar1 = (ulonglong)uVar4 & 0xff;
  uVar3 = CONCAT71(uVar4,g_TableBase5_x_minus_y[0x19][uVar6]) + (ulonglong)g_TableBase6_x_<_y[0xe4][uVar1] * -0x10000;
  uVar6 = uVar3 >> 0x10 & 0xff;
  uVar3 = (uVar3 & 0xffffffffffff00ff | (ulonglong)g_TableBase5_x_minus_y[0xe4][uVar1] << 8) +
          (ulonglong)g_TableBase6_x_<_y[0xb3][uVar6] * -0x1000000;
  uVar1 = uVar3 >> 0x18 & 0xff;
  uVar3 = (uVar3 & 0xffffffffff00ffff | (ulonglong)g_TableBase5_x_minus_y[0xb3][uVar6] << 0x10) -
          ((ulonglong)g_TableBase6_x_<_y[0x9c][uVar1] << 0x20);
  uVar6 = uVar3 >> 0x20 & 0xff;
  uVar3 = (uVar3 & 0xffffffff00ffffff | (ulonglong)g_TableBase5_x_minus_y[0x9c][uVar1] << 0x18) -
          ((ulonglong)g_TableBase6_x_<_y[0][uVar6] << 0x28);
  uVar1 = uVar3 >> 0x28 & 0xff;
  uVar1 = ((uVar3 & 0xffffff00ffffffff | (ulonglong)g_TableBase5_x_minus_y[0][uVar6] << 0x20) -
           ((ulonglong)g_TableBase6_x_<_y[0][uVar1] << 0x30) & 0xffff00ffffffffff |
          (ulonglong)g_TableBase5_x_minus_y[0][uVar1] << 0x28) + ((ulonglong)(uint)g_MyInput._15_4_ & 0xff) * -0x9e06ae;
  uVar3 = uVar1 & 0xff;
  uVar4 = (uint7)(uVar1 + (ulonglong)g_TableBase6_x_<_y[100][uVar3] * -0x100 >> 8);
  uVar1 = (ulonglong)uVar4 & 0xff;
  uVar3 = CONCAT71(uVar4,g_TableBase5_x_minus_y[100][uVar3]) + (ulonglong)g_TableBase6_x_<_y[0x20][uVar1] * -0x10000;
  uVar6 = uVar3 >> 0x10 & 0xff;
  uVar3 = (uVar3 & 0xffffffffffff00ff | (ulonglong)g_TableBase5_x_minus_y[0x20][uVar1] << 8) +
          (ulonglong)g_TableBase6_x_<_y[0xc6][uVar6] * -0x1000000;
  uVar5 = uVar3 >> 0x18 & 0xff;
  uVar3 = (uVar3 & 0xffffffffff00ffff | (ulonglong)g_TableBase5_x_minus_y[0xc6][uVar6] << 0x10) -
          ((ulonglong)g_TableBase6_x_<_y[0xad][uVar5] << 0x20);
  uVar1 = uVar3 >> 0x20 & 0xff;
  uVar3 = ((uVar3 & 0xffffffff00ffffff | (ulonglong)g_TableBase5_x_minus_y[0xad][uVar5] << 0x18) -
           ((ulonglong)g_TableBase6_x_<_y[0][uVar1] << 0x28) & 0xffffff00ffffffff |
          (ulonglong)g_TableBase5_x_minus_y[0][uVar1] << 0x20) ^ ((ulonglong)(uint)g_MyInput._3_4_ & 0xff) * 0xfb9de1;
  uStack_127 = (uint7)(uVar3 >> 8);
  uVar3 = (CONCAT71(uStack_127,g_TableBase1_x_xor_y[0xf7][uVar3 & 0xff]) & 0xffffffff000000ff |
           (ulonglong)g_TableBase1_x_xor_y[0x33][(ulonglong)uStack_127 & 0xff] << 8 |
           (ulonglong)g_TableBase1_x_xor_y[0x36][uVar3 >> 0x10 & 0xff] << 0x10 |
          (ulonglong)g_TableBase1_x_xor_y[0x4e][uVar3 >> 0x18 & 0xff] << 0x18) +
          ((ulonglong)(uint)g_MyInput._27_4_ & 0xff) * -0xa8a511;
  uVar4 = (uint7)(uVar3 >> 8);
  uVar3 = (CONCAT71(uVar4,g_TableBase1_x_xor_y[8][uVar3 & 0xff]) & 0xff00ffff000000ff |
           (ulonglong)g_TableBase1_x_xor_y[0x92][uVar3 >> 8 & 0xff] << 8 |
           (ulonglong)g_TableBase1_x_xor_y[0x1f][(ulonglong)(uVar4 >> 8) & 0xff] << 0x10 |
           (ulonglong)g_TableBase1_x_xor_y[0xa6][uVar3 >> 0x18 & 0xff] << 0x18 |
          (ulonglong)g_TableBase1_x_xor_y[0][uVar3 >> 0x30 & 0xff] << 0x30) +
          ((ulonglong)(uint)g_MyInput._19_4_ & 0xff) * 0xd3468d;
  uVar1 = uVar3 & 0xff;
  uVar7 = (uint7)(uVar3 + (ulonglong)g_TableBase4_x_y>0x100[0x48][uVar1] * 0x100 >> 8);
  uVar4 = uVar7 & 0xff;
  uVar1 = CONCAT71(uVar7,g_TableBase3_x_add_y[0x48][uVar1]) + (ulonglong)g_TableBase4_x_y>0x100[0x7b][uVar4] * 0x10000;
  uVar3 = uVar1 >> 0x10 & 0xff;
  uVar6 = (uVar1 & 0xffffffffffff00ff | (ulonglong)g_TableBase3_x_add_y[0x7b][uVar4] << 8) +
          (ulonglong)g_TableBase4_x_y>0x100[0x5d][uVar3] * 0x1000000;
  uVar1 = uVar6 >> 0x18 & 0xff;
  uVar3 = (uVar6 & 0xffffffffff00ffff | (ulonglong)g_TableBase3_x_add_y[0x5d][uVar3] << 0x10) +
          ((ulonglong)g_TableBase4_x_y>0x100[0x4a][uVar1] << 0x20);
  lVar2 = (uVar3 & 0xffffff00ffffff | (ulonglong)g_TableBase3_x_add_y[0x4a][uVar1] << 0x18 |
          (ulonglong)g_TableBase3_x_add_y[0][uVar3 >> 0x38] << 0x38) +
          (ulonglong)g_TableBase6_x_<_y[0xa2][uVar3 & 0xff] * -0x100;
  uVar4 = (uint7)((ulonglong)lVar2 >> 8);
  uStack_1b8 = (undefined2)CONCAT71(uVar4,g_TableBase5_x_minus_y[0xa2][uVar3 & 0xff]);
  uStack_1b6 = (undefined)((ulonglong)lVar2 >> 0x10);
  uStack_1b5 = (undefined5)((ulonglong)lVar2 >> 0x18);
  uVar1 = (ulonglong)uVar4 & 0xff;
  uVar6 = CONCAT53(uStack_1b5,CONCAT12(uStack_1b6,uStack_1b8)) + (ulonglong)g_TableBase6_x_<_y[0x12][uVar1] * -0x10000 &
          0xffffffffffff00ff;
  uVar3 = (ulonglong)CONCAT16(g_TableBase5_x_minus_y[0xa2][uVar3 & 0xff],(int6)(uVar6 >> 0x10)) & 0xff;
  uVar6 = (uVar6 | (ulonglong)g_TableBase5_x_minus_y[0x12][uVar1] << 8) +
          (ulonglong)g_TableBase6_x_<_y[100][uVar3] * -0x1000000;
  uVar1 = uVar6 >> 0x18 & 0xff;
  uVar3 = (uVar6 & 0xffffffffff00ffff | (ulonglong)g_TableBase5_x_minus_y[100][uVar3] << 0x10) -
          ((ulonglong)g_TableBase6_x_<_y[0xef][uVar1] << 0x20);
  uVar6 = uVar3 >> 0x20 & 0xff;
  uVar3 = (uVar3 & 0xffffffff00ffffff | (ulonglong)g_TableBase5_x_minus_y[0xef][uVar1] << 0x18) -
          ((ulonglong)g_TableBase6_x_<_y[0xff][uVar6] << 0x28);
  uVar1 = uVar3 >> 0x28 & 0xff;
  uVar3 = (uVar3 & 0xffffff00ffffffff | (ulonglong)g_TableBase5_x_minus_y[0xff][uVar6] << 0x20) -
          ((ulonglong)g_TableBase6_x_<_y[0xff][uVar1] << 0x30);
  uVar6 = uVar3 >> 0x30 & 0xff;
  uVar3 = (uVar3 & 0xffff00ffffffffff | (ulonglong)g_TableBase5_x_minus_y[0xff][uVar1] << 0x28) -
          ((ulonglong)g_TableBase6_x_<_y[0xff][uVar6] << 0x38);
  UNRECOVERED_JUMPTABLE = (code *)0x18005d2de;
  if ((uVar3 & 0xffffff | (ulonglong)g_TableBase5_x_minus_y[0xff][uVar6] << 0x30 |
       (ulonglong)g_TableBase7_x_and_y[0xff][(uVar3 & 0xff000000) >> 0x18] << 0x18 |
       (ulonglong)g_TableBase7_x_and_y[0xff][uVar3 >> 0x20 & 0xff] << 0x20 |
       (ulonglong)g_TableBase7_x_and_y[0xff][(uint3)(uVar3 >> 0x28) & 0xff] << 0x28 |
      (ulonglong)g_TableBase7_x_and_y[0xff][g_TableBase5_x_minus_y[0xff][uVar3 >> 0x38]] << 0x38) != 0) {
    UNRECOVERED_JUMPTABLE = MyPrintWrongKey;
  }
                    /* WARNING: Could not recover jumptable at 0x00018005d2db. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}


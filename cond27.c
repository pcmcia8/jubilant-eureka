
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void Condition_27(void)

{
  ulonglong uVar1;
  uint7 uVar2;
  uint7 uVar3;
  ulonglong uVar4;
  longlong lVar5;
  code *UNRECOVERED_JUMPTABLE;
  ulonglong uVar6;
  ulonglong uVar7;
  undefined2 uStack_1d8;
  undefined6 uStack_1ce;
  uint3 uStack_e0;
  uint uStack_dd;
  
  uVar1 = ((ulonglong)(uint)g_MyInput._27_4_ & 0xff) * 0x7239e9;
  uVar7 = uVar1 & 0xff;
  uVar1 = uVar1 + (ulonglong)g_TableBase6_x_<_y[0xda][uVar7] * -0x100;
  uVar4 = uVar1 >> 8 & 0xff;
  uVar7 = CONCAT71((int7)(uVar1 >> 8),g_TableBase5_x_minus_y[0xda][uVar7]) +
          (ulonglong)g_TableBase6_x_<_y[0x5a][uVar4] * -0x10000;
  uVar6 = uVar7 >> 0x10 & 0xff;
  uVar1 = (uVar7 & 0xffffffffffff00ff | (ulonglong)g_TableBase5_x_minus_y[0x5a][uVar4] << 8) +
          (ulonglong)g_TableBase6_x_<_y[0xe][uVar6] * -0x1000000;
  uVar7 = (uVar1 & 0xff000000) >> 0x18;
  uVar1 = (uVar1 & 0xffffffffff00ffff | (ulonglong)g_TableBase5_x_minus_y[0xe][uVar6] << 0x10) -
          ((ulonglong)g_TableBase6_x_<_y[0x76][uVar7] << 0x20);
  uVar4 = uVar1 >> 0x20 & 0xff;
  uVar7 = (uVar1 & 0xffffffff00ffffff | (ulonglong)g_TableBase5_x_minus_y[0x76][uVar7] << 0x18) -
          ((ulonglong)g_TableBase6_x_<_y[0][uVar4] << 0x28);
  uVar1 = uVar7 >> 0x30 & 0xff;
  uVar1 = ((uVar7 & 0xffffff00ffffffff | (ulonglong)g_TableBase5_x_minus_y[0][uVar4] << 0x20) -
           ((ulonglong)g_TableBase6_x_<_y[0][uVar1] << 0x38) & 0xff00ffffffffffff |
          (ulonglong)g_TableBase5_x_minus_y[0][uVar1] << 0x30) + ((ulonglong)(uint)g_MyInput._3_4_ & 0xff) * -0xf1c3d1;
  uVar7 = uVar1 & 0xff;
  uVar2 = (uint7)(uVar1 + (ulonglong)g_TableBase6_x_<_y[0x68][uVar7] * -0x100 >> 8);
  uVar1 = (ulonglong)uVar2 & 0xff;
  uVar6 = CONCAT71(uVar2,g_TableBase5_x_minus_y[0x68][uVar7]) + (ulonglong)g_TableBase6_x_<_y[0xa0][uVar1] * -0x10000 &
          0xffffffffffff00ff;
  uVar4 = (ulonglong)CONCAT16(g_TableBase5_x_minus_y[0x68][uVar7],(int6)(uVar6 >> 0x10)) & 0xff;
  uVar7 = (uVar6 | (ulonglong)g_TableBase5_x_minus_y[0xa0][uVar1] << 8) +
          (ulonglong)g_TableBase6_x_<_y[0x28][uVar4] * -0x1000000;
  uVar1 = uVar7 >> 0x18 & 0xff;
  uVar4 = (uVar7 & 0xffffffffff00ffff | (ulonglong)g_TableBase5_x_minus_y[0x28][uVar4] << 0x10) -
          ((ulonglong)g_TableBase6_x_<_y[0xef][uVar1] << 0x20);
  uVar7 = uVar4 >> 0x20 & 0xff;
  uVar4 = (uVar4 & 0xffffffff00ffffff | (ulonglong)g_TableBase5_x_minus_y[0xef][uVar1] << 0x18) -
          ((ulonglong)g_TableBase6_x_<_y[0][uVar7] << 0x28);
  uVar1 = uVar4 >> 0x28 & 0xff;
  uVar7 = ((uVar4 & 0xffffff00ffffffff | (ulonglong)g_TableBase5_x_minus_y[0][uVar7] << 0x20) -
           ((ulonglong)g_TableBase6_x_<_y[0][uVar1] << 0x30) & 0xffff00ffffffffff |
          (ulonglong)g_TableBase5_x_minus_y[0][uVar1] << 0x28) ^ ((ulonglong)(uint)g_MyInput._11_4_ & 0xff) * 0x1b1367;
  uVar2 = (uint7)(uVar7 >> 8);
  uStack_e0 = (uint3)CONCAT71(uVar2,g_TableBase1_x_xor_y[0x5a][uVar7 & 0xff]) & 0xff |
              (uint3)g_TableBase1_x_xor_y[0xd][uVar2 & 0xff] << 8 |
              (uint3)g_TableBase1_x_xor_y[0xe0][uVar7 >> 0x10 & 0xff] << 0x10;
  uStack_dd = (uint)g_TableBase1_x_xor_y[0x31][(ulonglong)(uVar2 >> 0x10) & 0xff] |
              (uint)(((ulonglong)g_TableBase1_x_xor_y[0][(ulonglong)(uVar2 >> 0x18) & 0xff] << 0x20) >> 0x18) |
              (uint)(((ulonglong)g_TableBase1_x_xor_y[0][(((ulonglong)uVar2 & 0xff00000000) << 8) >> 0x28] << 0x28) >>
                    0x18) |
              (uint)(((ulonglong)g_TableBase1_x_xor_y[0][(((ulonglong)uVar2 & 0xff0000000000) << 8) >> 0x30] << 0x30) >>
                    0x18);
  uVar7 = CONCAT17(g_TableBase1_x_xor_y[0][uVar2 >> 0x30],CONCAT43(uStack_dd,uStack_e0)) ^
          ((ulonglong)(uint)g_MyInput._19_4_ & 0xff) * 0x8038b3;
  uVar1 = uVar7 & 0xff;
  uVar3 = (uint7)(uVar7 + (ulonglong)g_TableBase4_x_y>0x100[0x47][uVar1] * 0x100 >> 8);
  uVar2 = uVar3 & 0xff;
  uVar7 = CONCAT71(uVar3,g_TableBase3_x_add_y[0x47][uVar1]) + (ulonglong)g_TableBase4_x_y>0x100[0x34][uVar2] * 0x10000;
  uVar4 = uVar7 >> 0x10 & 0xff;
  uVar1 = (uVar7 & 0xffffffffffff00ff | (ulonglong)g_TableBase3_x_add_y[0x34][uVar2] << 8) +
          (ulonglong)g_TableBase4_x_y>0x100[0x16][uVar4] * 0x1000000;
  uVar7 = uVar1 >> 0x18 & 0xff;
  uVar1 = (uVar1 & 0xffffffffff00ffff | (ulonglong)g_TableBase3_x_add_y[0x16][uVar4] << 0x10) +
          ((ulonglong)g_TableBase4_x_y>0x100[0xb5][uVar7] << 0x20);
  uVar7 = (uVar1 & 0xffffff00ffffff | (ulonglong)g_TableBase3_x_add_y[0xb5][uVar7] << 0x18 |
          (ulonglong)g_TableBase3_x_add_y[0][uVar1 >> 0x38] << 0x38) +
          ((ulonglong)(uint)g_MyInput._31_4_ & 0xff) * 0x65fac9;
  uVar4 = uVar7 & 0xff;
  uVar2 = (uint7)(uVar7 + (ulonglong)g_TableBase4_x_y>0x100[0x9a][uVar4] * 0x100 >> 8);
  uVar1 = (ulonglong)uVar2 & 0xff;
  uVar7 = CONCAT71(uVar2,g_TableBase3_x_add_y[0x9a][uVar4]) + (ulonglong)g_TableBase4_x_y>0x100[0x88][uVar1] * 0x10000;
  uVar4 = uVar7 >> 0x10 & 0xff;
  uVar7 = (uVar7 & 0xffffffffffff00ff | (ulonglong)g_TableBase3_x_add_y[0x88][uVar1] << 8) +
          (ulonglong)g_TableBase4_x_y>0x100[0x4a][uVar4] * 0x1000000;
  uVar1 = uVar7 >> 0x18 & 0xff;
  uVar7 = (uVar7 & 0xffffffffff00ffff | (ulonglong)g_TableBase3_x_add_y[0x4a][uVar4] << 0x10) +
          ((ulonglong)g_TableBase4_x_y>0x100[0xe0][uVar1] << 0x20);
  uVar4 = uVar7 >> 0x20 & 0xff;
  uVar7 = (uVar7 & 0xffffffff00ffffff | (ulonglong)g_TableBase3_x_add_y[0xe0][uVar1] << 0x18) +
          ((ulonglong)g_TableBase4_x_y>0x100[0][uVar4] << 0x28);
  uVar1 = uVar7 >> 0x30 & 0xff;
  uVar7 = ((uVar7 & 0xffffff00ffffffff | (ulonglong)g_TableBase3_x_add_y[0][uVar4] << 0x20) +
           ((ulonglong)g_TableBase4_x_y>0x100[0][uVar1] << 0x38) & 0xff00ffffffffffff |
          (ulonglong)g_TableBase3_x_add_y[0][uVar1] << 0x30) + ((ulonglong)(uint)g_MyInput._23_4_ & 0xff) * -0xd845ca;
  uVar1 = uVar7 & 0xff;
  uVar3 = (uint7)(uVar7 + (ulonglong)g_TableBase6_x_<_y[0x58][uVar1] * -0x100 >> 8);
  uVar2 = uVar3 & 0xff;
  uVar7 = CONCAT71(uVar3,g_TableBase5_x_minus_y[0x58][uVar1]) + (ulonglong)g_TableBase6_x_<_y[0x1c][uVar2] * -0x10000;
  uVar1 = uVar7 >> 0x10 & 0xff;
  uVar7 = (uVar7 & 0xffffffffffff00ff | (ulonglong)g_TableBase5_x_minus_y[0x1c][uVar2] << 8) +
          (ulonglong)g_TableBase6_x_<_y[0x7d][uVar1] * -0x1000000;
  uVar4 = uVar7 >> 0x18 & 0xff;
  uVar7 = (uVar7 & 0xffffffffff00ffff | (ulonglong)g_TableBase5_x_minus_y[0x7d][uVar1] << 0x10) -
          ((ulonglong)g_TableBase6_x_<_y[0xab][uVar4] << 0x20);
  uVar1 = uVar7 >> 0x20 & 0xff;
  uVar7 = (uVar7 & 0xffffffff00ffffff | (ulonglong)g_TableBase5_x_minus_y[0xab][uVar4] << 0x18) -
          ((ulonglong)g_TableBase6_x_<_y[0][uVar1] << 0x28);
  uVar4 = uVar7 >> 0x28 & 0xff;
  uVar7 = (uVar7 & 0xffffff00ffffffff | (ulonglong)g_TableBase5_x_minus_y[0][uVar1] << 0x20) -
          ((ulonglong)g_TableBase6_x_<_y[0][uVar4] << 0x30);
  uVar7 = (uVar7 & 0xff00ffffffffff | (ulonglong)g_TableBase5_x_minus_y[0][uVar4] << 0x28 |
          (ulonglong)g_TableBase5_x_minus_y[0][uVar7 >> 0x38] << 0x38) +
          ((ulonglong)(uint)g_MyInput._15_4_ & 0xff) * 0xb2bbbc;
  uVar2 = (uint7)(uVar7 >> 8);
  uVar7 = (CONCAT71(uVar2,g_TableBase1_x_xor_y[0x92][uVar7 & 0xff]) & 0xffffffff000000ff |
           (ulonglong)g_TableBase1_x_xor_y[0x7b][uVar2 & 0xff] << 8 |
           (ulonglong)g_TableBase1_x_xor_y[1][uVar7 >> 0x10 & 0xff] << 0x10 |
          (ulonglong)g_TableBase1_x_xor_y[0x3a][(ulonglong)(uVar2 >> 0x10) & 0xff] << 0x18) ^
          ((ulonglong)(uint)g_MyInput._7_4_ & 0xff) * 0x33c8bd;
  uVar6 = uVar7 & 0xff;
  uVar2 = (uint7)(uVar7 + (ulonglong)g_TableBase4_x_y>0x100[0xe3][uVar6] * 0x100 >> 8);
  uVar4 = (ulonglong)uVar2 & 0xff;
  uVar1 = CONCAT71(uVar2,g_TableBase3_x_add_y[0xe3][uVar6]) + (ulonglong)g_TableBase4_x_y>0x100[0x76][uVar4] * 0x10000 &
          0xffffffffffff00ff;
  uVar7 = (ulonglong)CONCAT16(g_TableBase3_x_add_y[0xe3][uVar6],(int6)(uVar1 >> 0x10)) & 0xff;
  uVar4 = (uVar1 | (ulonglong)g_TableBase3_x_add_y[0x76][uVar4] << 8) +
          (ulonglong)g_TableBase4_x_y>0x100[3][uVar7] * 0x1000000;
  uVar1 = uVar4 >> 0x18 & 0xff;
  uVar7 = (uVar4 & 0xffffffffff00ffff | (ulonglong)g_TableBase3_x_add_y[3][uVar7] << 0x10) +
          ((ulonglong)g_TableBase4_x_y>0x100[0x54][uVar1] << 0x20);
  uVar4 = uVar7 >> 0x28 & 0xff;
  uVar7 = (uVar7 & 0xffffffff00ffffff | (ulonglong)g_TableBase3_x_add_y[0x54][uVar1] << 0x18) +
          ((ulonglong)g_TableBase4_x_y>0x100[0][uVar4] << 0x30);
  lVar5 = (uVar7 & 0xff00ffffffffff | (ulonglong)g_TableBase3_x_add_y[0][uVar4] << 0x28 |
          (ulonglong)g_TableBase3_x_add_y[0][uVar7 >> 0x38] << 0x38) +
          (ulonglong)g_TableBase6_x_<_y[0x93][uVar7 & 0xff] * -0x100;
  uStack_1ce = (undefined6)((ulonglong)lVar5 >> 0x10);
  uVar2 = (uint7)((ulonglong)lVar5 >> 8);
  uStack_1d8 = (undefined2)CONCAT71(uVar2,g_TableBase5_x_minus_y[0x93][uVar7 & 0xff]);
  uVar6 = (ulonglong)uVar2 & 0xff;
  uVar1 = CONCAT62(uStack_1ce,uStack_1d8) + (ulonglong)g_TableBase6_x_<_y[0xc][uVar6] * -0x10000 & 0xffffffffffff00ff;
  uVar4 = (ulonglong)CONCAT16(g_TableBase5_x_minus_y[0x93][uVar7 & 0xff],(int6)(uVar1 >> 0x10)) & 0xff;
  uVar1 = (uVar1 | (ulonglong)g_TableBase5_x_minus_y[0xc][uVar6] << 8) +
          (ulonglong)g_TableBase6_x_<_y[0xe8][uVar4] * -0x1000000;
  uVar7 = uVar1 >> 0x18 & 0xff;
  uVar4 = (uVar1 & 0xffffffffff00ffff | (ulonglong)g_TableBase5_x_minus_y[0xe8][uVar4] << 0x10) -
          ((ulonglong)g_TableBase6_x_<_y[0xb0][uVar7] << 0x20);
  uVar1 = uVar4 >> 0x20 & 0xff;
  uVar4 = (uVar4 & 0xffffffff00ffffff | (ulonglong)g_TableBase5_x_minus_y[0xb0][uVar7] << 0x18) -
          ((ulonglong)g_TableBase6_x_<_y[0xff][uVar1] << 0x28);
  uVar7 = uVar4 >> 0x28 & 0xff;
  uVar1 = (uVar4 & 0xffffff00ffffffff | (ulonglong)g_TableBase5_x_minus_y[0xff][uVar1] << 0x20) -
          ((ulonglong)g_TableBase6_x_<_y[0xff][uVar7] << 0x30);
  uVar4 = uVar1 >> 0x30 & 0xff;
  uVar7 = (uVar1 & 0xffff00ffffffffff | (ulonglong)g_TableBase5_x_minus_y[0xff][uVar7] << 0x28) -
          ((ulonglong)g_TableBase6_x_<_y[0xff][uVar4] << 0x38);
  UNRECOVERED_JUMPTABLE = (code *)0x180285d1b;
  if ((uVar7 & 0xffffff00ff | (ulonglong)g_TableBase5_x_minus_y[0xff][uVar4] << 0x30 |
       (ulonglong)g_TableBase5_x_minus_y[0xff][uVar7 >> 0x38] << 0x38 |
       (ulonglong)g_TableBase7_x_and_y[0xff][uVar7 >> 8 & 0xff] << 8 |
      (ulonglong)g_TableBase7_x_and_y[0xff][(uVar7 & 0xff0000000000) >> 0x28] << 0x28) != 0) {
    UNRECOVERED_JUMPTABLE = MyPrintWrongKey;
  }
                    /* WARNING: Could not recover jumptable at 0x000180285d19. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}


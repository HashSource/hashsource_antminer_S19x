_DWORD *__fastcall sub_158838(int a1)
{
  _DWORD *v2; // r5
  int v3; // r0
  int v4; // r0
  int v5; // r0
  int v6; // r0
  int v7; // r0
  int v8; // r6
  int v9; // r0
  int v10; // r6
  int v11; // r0
  int v12; // r6
  int v13; // r0

  v2 = (_DWORD *)sub_163938(a1, 0x38u);
  v2[13] = ((int (__fastcall *)(int, int, int, char *))loc_177328)(a1, 10, 8, "VOID");
  *v2 = sub_1773C4(a1, 8, 0, "character");
  v2[4] = sub_17741C(a1, 8, 1, "logical*1");
  v3 = ((int (__fastcall *)(int))loc_165DF0)(a1);
  v2[2] = sub_1773C4(a1, v3, 0, "integer*2");
  v4 = ((int (__fastcall *)(int))loc_165DF0)(a1);
  v2[5] = sub_17741C(a1, v4, 1, "logical*2");
  v5 = ((int (__fastcall *)(int))loc_165F58)(a1);
  v2[6] = sub_17741C(a1, v5, 1, "logical*8");
  v6 = ((int (__fastcall *)(int))loc_165E68)(a1);
  v2[1] = sub_1773C4(a1, v6, 0, "integer");
  v7 = ((int (__fastcall *)(int))loc_165E68)(a1);
  v2[3] = sub_17741C(a1, v7, 1, "logical*4");
  v8 = ((int (__fastcall *)(int))loc_166138)(a1);
  v9 = ((int (__fastcall *)(int))loc_1661B0)(a1);
  v2[7] = sub_177448(a1, v8, "real", v9);
  v10 = ((int (__fastcall *)(int))loc_166228)(a1);
  v11 = ((int (__fastcall *)(int))loc_1662A0)(a1);
  v2[8] = sub_177448(a1, v10, "real*8", v11);
  v12 = ((int (__fastcall *)(int))loc_166318)(a1);
  v13 = ((int (__fastcall *)(int))loc_166390)(a1);
  v2[9] = sub_177448(a1, v12, "real*16", v13);
  v2[10] = sub_177B9C(a1, "complex*8", v2[7]);
  v2[11] = sub_177B9C(a1, "complex*16", v2[8]);
  v2[12] = sub_177B9C(a1, "complex*32", v2[9]);
  return v2;
}

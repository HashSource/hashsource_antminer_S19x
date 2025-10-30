int __fastcall sub_9BBAC(int a1, int *a2)
{
  _DWORD *v4; // r6
  int v5; // r0
  _DWORD *v6; // r7
  int v7; // r0
  _DWORD *v8; // r7
  int v9; // r0
  _DWORD *v10; // r8
  int v11; // r0
  _DWORD *v12; // r7
  int v13; // r0
  int v14; // r8
  int v15; // r0
  _DWORD *v16; // r7
  int v17; // r8
  int v18; // r0
  _DWORD *v19; // r7
  int v20; // r0
  _DWORD *v21; // r7
  int v22; // r8
  int v23; // r0
  _DWORD *v24; // r7
  int v25; // r0
  _DWORD *v26; // r7
  int v27; // r0
  _DWORD *v28; // r7
  int v29; // r0
  _DWORD *v30; // r12
  int v31; // r0
  _DWORD *v32; // r8
  int v33; // r0
  _DWORD *v34; // r7
  int v35; // lr
  int v36; // r1
  int result; // r0
  __int64 v38; // r2

  v4 = (_DWORD *)sub_1780B4(a1);
  *a2 = sub_163938(a1, 0x38u);
  v5 = ((int (__fastcall *)(int))loc_165E68)(a1);
  v6 = (_DWORD *)*a2;
  *v6 = sub_1773C4(a1, v5, 0, "integer");
  v7 = ((int (__fastcall *)(int))loc_165EE0)(a1);
  v8 = (_DWORD *)*a2;
  v8[1] = sub_1773C4(a1, v7, 0, "long_integer");
  v9 = ((int (__fastcall *)(int))loc_165DF0)(a1);
  v10 = (_DWORD *)*a2;
  v11 = sub_1773C4(a1, v9, 0, "short_integer");
  v12 = (_DWORD *)*a2;
  v10[2] = v11;
  v13 = sub_1773F0(a1, 8, 0, "character");
  v12[3] = v13;
  a2[2] = v13;
  v14 = ((int (__fastcall *)(int))loc_166138)(a1);
  v15 = ((int (__fastcall *)(int))loc_1661B0)(a1);
  v16 = (_DWORD *)*a2;
  v16[4] = sub_177448(a1, v14, "float", v15);
  v17 = ((int (__fastcall *)(int))loc_166228)(a1);
  v18 = ((int (__fastcall *)(int))loc_1662A0)(a1);
  v19 = (_DWORD *)*a2;
  v19[5] = sub_177448(a1, v17, "long_float", v18);
  v20 = ((int (__fastcall *)(int))loc_165F58)(a1);
  v21 = (_DWORD *)*a2;
  v21[7] = sub_1773C4(a1, v20, 0, "long_long_integer");
  v22 = ((int (__fastcall *)(int))loc_166318)(a1);
  v23 = ((int (__fastcall *)(int))loc_166390)(a1);
  v24 = (_DWORD *)*a2;
  v24[8] = sub_177448(a1, v22, "long_long_float", v23);
  v25 = ((int (__fastcall *)(int))loc_165E68)(a1);
  v26 = (_DWORD *)*a2;
  v26[9] = sub_1773C4(a1, v25, 0, "natural");
  v27 = ((int (__fastcall *)(int))loc_165E68)(a1);
  v28 = (_DWORD *)*a2;
  v29 = sub_1773C4(a1, v27, 0, "positive");
  v30 = (_DWORD *)*a2;
  v28[10] = v29;
  v30[6] = *v4;
  v31 = ((int (__fastcall *)(int, int, int, char *))loc_177328)(a1, 10, 8, "void");
  v32 = (_DWORD *)*a2;
  v33 = sub_1700C0(v31);
  v34 = (_DWORD *)*a2;
  v32[11] = v33;
  v35 = v34[11];
  v36 = *(_DWORD *)(v35 + 20);
  *(_DWORD *)(*(_DWORD *)(v35 + 24) + 8) = "system__address";
  result = sub_1773C4(a1, 8 * v36, 0, "storage_offset");
  v34[12] = result;
  LODWORD(v38) = 0;
  HIDWORD(v38) = v4[16];
  *(_QWORD *)(a2 + 3) = v38;
  return result;
}

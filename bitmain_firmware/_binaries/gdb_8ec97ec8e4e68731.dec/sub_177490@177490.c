_DWORD *__fastcall sub_177490(int a1)
{
  _DWORD *v2; // r5
  int v3; // r6
  int v4; // r0
  int v5; // r12
  int v6; // r0
  int v7; // r0
  int v8; // r0
  int v9; // r0
  int v10; // r0
  int v11; // r0
  int v12; // r0
  int v13; // r0
  int v14; // r0
  int v15; // r0
  int v16; // r0
  int v17; // r0
  int v18; // r0
  int v19; // r6
  int v20; // r0
  int v21; // r6
  int v22; // r0
  int v23; // r6
  int v24; // r0
  int v25; // r0
  int v26; // r7
  int v27; // r0
  int v28; // r6
  int v29; // r2
  int v30; // r0
  int v31; // r0
  int v32; // r0
  int v33; // r0
  int v34; // r0
  int v35; // r0
  int v36; // r0
  int v37; // r6
  int v38; // lr
  int v39; // r0
  int v40; // r0
  int v41; // r7
  int v42; // r6
  int v43; // r0
  _DWORD *v44; // r3
  _DWORD *v45; // r1
  _DWORD *v46; // r0
  _DWORD *v47; // r1
  _DWORD *v49; // r0

  v2 = sub_163938(a1, 0xACu);
  *v2 = ((int (__fastcall *)(int, int, int, char *))loc_177328)(a1, 10, 8, "void");
  v3 = ((int (__fastcall *)(int))loc_1667C4)(a1);
  v4 = ((int (__fastcall *)(int, int, int, char *))loc_177328)(a1, 8, 8, "char");
  v5 = *(_DWORD *)(v4 + 24);
  if ( !v3 )
    *(_BYTE *)(v5 + 1) |= 1u;
  v2[1] = v4;
  *(_BYTE *)(v5 + 1) |= 2u;
  v2[5] = ((int (__fastcall *)(int, int, int, const char *))loc_177328)(a1, 8, 8, "signed char");
  v6 = ((int (__fastcall *)(int, int, int, const char *))loc_177328)(a1, 8, 8, "unsigned char");
  *(_BYTE *)(*(_DWORD *)(v6 + 24) + 1) |= 1u;
  v2[6] = v6;
  v7 = ((int (__fastcall *)(int))loc_165DF0)(a1);
  v2[2] = ((int (__fastcall *)(int, int, int, const char *))loc_177328)(a1, 8, v7, "short");
  v8 = ((int (__fastcall *)(int))loc_165DF0)(a1);
  v9 = ((int (__fastcall *)(int, int, int, const char *))loc_177328)(a1, 8, v8, "unsigned short");
  *(_BYTE *)(*(_DWORD *)(v9 + 24) + 1) |= 1u;
  v2[7] = v9;
  v10 = ((int (__fastcall *)(int))loc_165E68)(a1);
  v2[3] = ((int (__fastcall *)(int, int, int, char *))loc_177328)(a1, 8, v10, "int");
  v11 = ((int (__fastcall *)(int))loc_165E68)(a1);
  v12 = ((int (__fastcall *)(int, int, int, const char *))loc_177328)(a1, 8, v11, "unsigned int");
  *(_BYTE *)(*(_DWORD *)(v12 + 24) + 1) |= 1u;
  v2[8] = v12;
  v13 = ((int (__fastcall *)(int))loc_165EE0)(a1);
  v2[4] = ((int (__fastcall *)(int, int, int, const char *))loc_177328)(a1, 8, v13, "long");
  v14 = ((int (__fastcall *)(int))loc_165EE0)(a1);
  v15 = ((int (__fastcall *)(int, int, int, const char *))loc_177328)(a1, 8, v14, "unsigned long");
  *(_BYTE *)(*(_DWORD *)(v15 + 24) + 1) |= 1u;
  v2[9] = v15;
  v16 = ((int (__fastcall *)(int))loc_165F58)(a1);
  v2[17] = ((int (__fastcall *)(int, int, int, const char *))loc_177328)(a1, 8, v16, "long long");
  v17 = ((int (__fastcall *)(int))loc_165F58)(a1);
  v18 = ((int (__fastcall *)(int, int, int, const char *))loc_177328)(a1, 8, v17, "unsigned long long");
  *(_BYTE *)(*(_DWORD *)(v18 + 24) + 1) |= 1u;
  v2[18] = v18;
  v19 = ((int (__fastcall *)(int))loc_166138)(a1);
  v20 = ((int (__fastcall *)(int))loc_1661B0)(a1);
  v2[10] = sub_177448(a1, v19, (int)"float", v20);
  v21 = ((int (__fastcall *)(int))loc_166228)(a1);
  v22 = ((int (__fastcall *)(int))loc_1662A0)(a1);
  v2[11] = sub_177448(a1, v21, (int)"double", v22);
  v23 = ((int (__fastcall *)(int))loc_166318)(a1);
  v24 = ((int (__fastcall *)(int))loc_166390)(a1);
  v25 = sub_177448(a1, v23, (int)"long double", v24);
  v26 = v2[10];
  v2[12] = v25;
  v27 = ((int (__fastcall *)(int, int, int, char *))loc_177328)(a1, 22, 16 * *(_DWORD *)(v26 + 20), "complex");
  v28 = v2[11];
  v29 = *(_DWORD *)(v28 + 20);
  *(_DWORD *)(*(_DWORD *)(v27 + 24) + 20) = v26;
  v2[13] = v27;
  v30 = ((int (__fastcall *)(int, int, int, const char *))loc_177328)(a1, 22, 16 * v29, "double complex");
  *(_DWORD *)(*(_DWORD *)(v30 + 24) + 20) = v28;
  v2[14] = v30;
  v2[15] = ((int (__fastcall *)(int, int, int, char *))loc_177328)(a1, 13, 8, "string");
  v2[16] = ((int (__fastcall *)(int, int, int, const char *))loc_177328)(a1, 21, 8, "bool");
  v2[19] = ((int (__fastcall *)(int, int, int, const char *))loc_177328)(a1, 25, 32, "_Decimal32");
  v2[20] = ((int (__fastcall *)(int, int, int, const char *))loc_177328)(a1, 25, 64, "_Decimal64");
  v2[21] = ((int (__fastcall *)(int, int, int, const char *))loc_177328)(a1, 25, 128, "_Decimal128");
  v2[22] = ((int (__fastcall *)(int, int, int, const char *))loc_177328)(a1, 20, 8, "true character");
  v31 = ((int (__fastcall *)(int, int, int, const char *))loc_177328)(a1, 20, 8, "true character");
  *(_BYTE *)(*(_DWORD *)(v31 + 24) + 1) |= 1u;
  v2[23] = v31;
  v2[24] = ((int (__fastcall *)(int, int, _DWORD, const char *))loc_177328)(a1, 8, 0, "int0_t");
  v2[25] = ((int (__fastcall *)(int, int, int, const char *))loc_177328)(a1, 8, 8, "int8_t");
  v32 = ((int (__fastcall *)(int, int, int, const char *))loc_177328)(a1, 8, 8, "uint8_t");
  *(_BYTE *)(*(_DWORD *)(v32 + 24) + 1) |= 1u;
  v2[26] = v32;
  v2[27] = ((int (__fastcall *)(int, int, int, const char *))loc_177328)(a1, 8, 16, "int16_t");
  v33 = ((int (__fastcall *)(int, int, int, const char *))loc_177328)(a1, 8, 16, "uint16_t");
  *(_BYTE *)(*(_DWORD *)(v33 + 24) + 1) |= 1u;
  v2[28] = v33;
  v2[29] = ((int (__fastcall *)(int, int, int, const char *))loc_177328)(a1, 8, 32, "int32_t");
  v34 = ((int (__fastcall *)(int, int, int, const char *))loc_177328)(a1, 8, 32, "uint32_t");
  *(_BYTE *)(*(_DWORD *)(v34 + 24) + 1) |= 1u;
  v2[30] = v34;
  v2[31] = ((int (__fastcall *)(int, int, int, const char *))loc_177328)(a1, 8, 64, "int64_t");
  v35 = ((int (__fastcall *)(int, int, int, const char *))loc_177328)(a1, 8, 64, "uint64_t");
  *(_BYTE *)(*(_DWORD *)(v35 + 24) + 1) |= 1u;
  v2[32] = v35;
  v2[33] = ((int (__fastcall *)(int, int, int, const char *))loc_177328)(a1, 8, 128, "int128_t");
  v36 = ((int (__fastcall *)(int, int, int, const char *))loc_177328)(a1, 8, 128, "uint128_t");
  *(_BYTE *)(*(_DWORD *)(v36 + 24) + 1) |= 1u;
  v37 = v2[25];
  v38 = v2[26];
  v2[34] = v36;
  *(_DWORD *)(v37 + 16) |= 0x40u;
  *(_DWORD *)(v38 + 16) |= 0x40u;
  v39 = ((int (__fastcall *)(int, int, int, const char *))loc_177328)(a1, 8, 16, "char16_t");
  *(_BYTE *)(*(_DWORD *)(v39 + 24) + 1) |= 1u;
  v2[35] = v39;
  v40 = ((int (__fastcall *)(int, int, int, const char *))loc_177328)(a1, 8, 32, "char32_t");
  *(_BYTE *)(*(_DWORD *)(v40 + 24) + 1) |= 1u;
  v2[36] = v40;
  v41 = ((int (__fastcall *)(int))loc_166408)(a1);
  v42 = ((int (__fastcall *)(int))loc_166480)(a1);
  v43 = ((int (__fastcall *)(int, int, int, const char *))loc_177328)(a1, 8, v41, "wchar_t");
  if ( !v42 )
    *(_BYTE *)(*(_DWORD *)(v43 + 24) + 1) |= 1u;
  v44 = (_DWORD *)*v2;
  v2[37] = v43;
  v45 = (_DWORD *)*v44;
  if ( !*v44 )
  {
    v49 = sub_16FF74(v44, 0);
    v44 = (_DWORD *)*v2;
    v45 = v49;
  }
  v2[38] = v45;
  v46 = (_DWORD *)sub_170244((int)v44, 0);
  v47 = (_DWORD *)*v46;
  if ( !*v46 )
    v47 = sub_16FF74(v46, 0);
  v2[39] = v47;
  v2[40] = sub_170244((int)v47, 0);
  v2[41] = ((int (__fastcall *)(int, int, _DWORD, const char *))loc_177328)(a1, 27, 0, "<internal function>");
  v2[42] = ((int (__fastcall *)(int, int, _DWORD, const char *))loc_177328)(a1, 28, 0, "<xmethod>");
  return v2;
}

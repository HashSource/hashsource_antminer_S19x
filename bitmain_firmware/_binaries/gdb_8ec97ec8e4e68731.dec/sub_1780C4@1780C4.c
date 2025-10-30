int __fastcall sub_1780C4(int a1)
{
  int result; // r0
  int v3; // r1
  int v4; // r3
  char v5; // r2
  _DWORD *v6; // r5
  _DWORD *v7; // r3
  int v8; // r0
  bool v9; // zf
  int v10; // r3
  int v11; // r6
  int v12; // r8
  int v13; // r0
  int v14; // r12
  int v15; // r0
  int v16; // r0
  int v17; // r0
  int v18; // r0
  int v19; // r0
  int v20; // r0
  int v21; // r0
  int v22; // r0
  int v23; // r0
  int v24; // r0
  int v25; // r0
  int v26; // r0
  int v27; // r0
  int v28; // r8
  int v29; // r0
  int v30; // r8
  int v31; // r0
  int v32; // r8
  int v33; // r0
  int v34; // r0
  int v35; // r8
  int v36; // r0
  int v37; // r3
  int v38; // r0
  int v39; // r9
  int v40; // r0
  int v41; // r12
  char v42; // lr
  int v43; // r0
  int v44; // r0
  int v45; // r1

  result = sub_1B6B24(a1, dword_487828);
  if ( !result )
  {
    v3 = *(_DWORD *)(a1 + 64);
    v4 = *(_DWORD *)(a1 + 60);
    v5 = v3 - v4;
    if ( (unsigned int)(v3 - v4) <= 0x5B )
    {
      obstack_newchunk((struct obstack *)(a1 + 48), 92);
      v4 = *(_DWORD *)(a1 + 60);
      v3 = *(_DWORD *)(a1 + 64);
    }
    v6 = *(_DWORD **)(a1 + 56);
    v7 = (_DWORD *)(v4 + 92);
    v8 = *(_DWORD *)(a1 + 72);
    *(_DWORD *)(a1 + 60) = v7;
    v9 = v7 == v6;
    if ( v7 == v6 )
      v5 = *(_BYTE *)(a1 + 88);
    v10 = ((unsigned int)v7 + v8) & ~v8;
    *(_DWORD *)(a1 + 60) = v10;
    if ( v9 )
      *(_BYTE *)(a1 + 88) = v5 | 2;
    if ( v10 - *(_DWORD *)(a1 + 52) > (unsigned int)(v3 - *(_DWORD *)(a1 + 52)) )
    {
      v10 = v3;
      *(_DWORD *)(a1 + 60) = v3;
    }
    *(_DWORD *)(a1 + 56) = v10;
    memset(v6, 0, 0x5Cu);
    v11 = sub_1B7250(a1);
    *v6 = ((int (__fastcall *)(int, int, int, char *))loc_1734E0)(a1, 10, 8, "void");
    v12 = ((int (__fastcall *)(int))loc_1667C4)(v11);
    v13 = ((int (__fastcall *)(int, int, int, char *))loc_1734E0)(a1, 8, 8, "char");
    v14 = *(_DWORD *)(v13 + 24);
    if ( !v12 )
      *(_BYTE *)(v14 + 1) |= 1u;
    v6[1] = v13;
    *(_BYTE *)(v14 + 1) |= 2u;
    v6[6] = ((int (__fastcall *)(int, int, int, const char *))loc_1734E0)(a1, 8, 8, "signed char");
    v15 = ((int (__fastcall *)(int, int, int, const char *))loc_1734E0)(a1, 8, 8, "unsigned char");
    *(_BYTE *)(*(_DWORD *)(v15 + 24) + 1) |= 1u;
    v6[7] = v15;
    v16 = ((int (__fastcall *)(int))loc_165DF0)(v11);
    v6[2] = ((int (__fastcall *)(int, int, int, const char *))loc_1734E0)(a1, 8, v16, "short");
    v17 = ((int (__fastcall *)(int))loc_165DF0)(v11);
    v18 = ((int (__fastcall *)(int, int, int, const char *))loc_1734E0)(a1, 8, v17, "unsigned short");
    *(_BYTE *)(*(_DWORD *)(v18 + 24) + 1) |= 1u;
    v6[8] = v18;
    v19 = ((int (__fastcall *)(int))loc_165E68)(v11);
    v6[3] = ((int (__fastcall *)(int, int, int, char *))loc_1734E0)(a1, 8, v19, "int");
    v20 = ((int (__fastcall *)(int))loc_165E68)(v11);
    v21 = ((int (__fastcall *)(int, int, int, const char *))loc_1734E0)(a1, 8, v20, "unsigned int");
    *(_BYTE *)(*(_DWORD *)(v21 + 24) + 1) |= 1u;
    v6[9] = v21;
    v22 = ((int (__fastcall *)(int))loc_165EE0)(v11);
    v6[4] = ((int (__fastcall *)(int, int, int, const char *))loc_1734E0)(a1, 8, v22, "long");
    v23 = ((int (__fastcall *)(int))loc_165EE0)(v11);
    v24 = ((int (__fastcall *)(int, int, int, const char *))loc_1734E0)(a1, 8, v23, "unsigned long");
    *(_BYTE *)(*(_DWORD *)(v24 + 24) + 1) |= 1u;
    v6[10] = v24;
    v25 = ((int (__fastcall *)(int))loc_165F58)(v11);
    v6[5] = ((int (__fastcall *)(int, int, int, const char *))loc_1734E0)(a1, 8, v25, "long long");
    v26 = ((int (__fastcall *)(int))loc_165F58)(v11);
    v27 = ((int (__fastcall *)(int, int, int, const char *))loc_1734E0)(a1, 8, v26, "unsigned long long");
    *(_BYTE *)(*(_DWORD *)(v27 + 24) + 1) |= 1u;
    v6[11] = v27;
    v28 = ((int (__fastcall *)(int))loc_166138)(v11);
    v29 = ((int (__fastcall *)(int))loc_1661B0)(v11);
    v6[12] = sub_1735E8(a1, v28, (int)"float", v29);
    v30 = ((int (__fastcall *)(int))loc_166228)(v11);
    v31 = ((int (__fastcall *)(int))loc_1662A0)(v11);
    v6[13] = sub_1735E8(a1, v30, (int)"double", v31);
    v32 = ((int (__fastcall *)(int))loc_166318)(v11);
    v33 = ((int (__fastcall *)(int))loc_166390)(v11);
    v6[14] = sub_1735E8(a1, v32, (int)"long double", v33);
    v6[16] = ((int (__fastcall *)(int, int, _DWORD, const char *))loc_1734E0)(a1, 14, 0, "<unknown type>");
    v6[17] = ((int (__fastcall *)(int, int, int, const char *))loc_1734E0)(a1, 7, 8, "<text variable, no debug info>");
    v6[18] = ((int (__fastcall *)(int, int, int, const char *))loc_1734E0)(
               a1,
               7,
               8,
               "<text gnu-indirect-function variable, no debug info>");
    v34 = ((int (__fastcall *)(int))loc_16666C)(v11);
    v35 = *(_DWORD *)(v6[18] + 24);
    v36 = ((int (__fastcall *)(int, int, int, const char *))loc_1734E0)(a1, 8, v34, "__IFUNC_RESOLVER_RET");
    *(_BYTE *)(*(_DWORD *)(v36 + 24) + 1) |= 1u;
    v37 = v6[18];
    *(_DWORD *)(v35 + 20) = v36;
    *(_BYTE *)(*(_DWORD *)(v37 + 24) + 2) |= 4u;
    v38 = ((int (__fastcall *)(int))loc_16666C)(v11);
    v39 = v6[17];
    v40 = ((int (__fastcall *)(int, int, int, const char *))loc_1734E0)(
            a1,
            1,
            v38,
            "<text from jump slot in .got.plt, no debug info>");
    v41 = *(_DWORD *)(v40 + 24);
    v42 = *(_BYTE *)(v41 + 1);
    *(_DWORD *)(v41 + 20) = v39;
    *(_BYTE *)(v41 + 1) = v42 | 1;
    v6[19] = v40;
    v6[20] = ((int (__fastcall *)(int, int, _DWORD, const char *))loc_1734E0)(
               a1,
               14,
               0,
               "<data variable, no debug info>");
    v6[21] = ((int (__fastcall *)(int, int, _DWORD, const char *))loc_1734E0)(
               a1,
               14,
               0,
               "<variable (not text or data), no debug info>");
    v6[22] = ((int (__fastcall *)(int, int, _DWORD, const char *))loc_1734E0)(
               a1,
               14,
               0,
               "<thread local variable, no debug info>");
    v43 = ((int (__fastcall *)(int))loc_16666C)(v11);
    v44 = ((int (__fastcall *)(int, int, int, const char *))loc_1734E0)(a1, 8, v43, "__CORE_ADDR");
    v45 = dword_487828;
    *(_BYTE *)(*(_DWORD *)(v44 + 24) + 1) |= 1u;
    v6[15] = v44;
    sub_1B6B1C(a1, v45, v6);
    return (int)v6;
  }
  return result;
}

int __fastcall sub_109634(int a1, const char *a2, const char *a3, const char *a4)
{
  int *v5; // r6
  int v9; // r10
  int v10; // r8
  int result; // r0
  int v12; // r7
  void *v13; // r0
  int v14; // r9
  _DWORD *v15; // r0
  int v16; // r3
  int v17; // r9
  int v18; // r1
  int v19; // r0
  int v20; // r1
  int v21; // r0
  int v22; // r9
  int v23; // r0
  int v24; // r11
  int v25; // r0
  int v26; // r9
  int v27; // r1
  int v28; // r0
  int v29; // r1
  int v30; // r0
  int v31; // r1
  int v32; // r8
  unsigned __int64 v33; // r0
  int v34; // r8
  int v35; // r0
  int v36; // r2
  int v37; // r1
  unsigned int v38; // r9
  int v39; // r12
  int v40; // r1
  int v41; // lr
  int v42; // r0
  int v43; // r3
  int v44; // r1
  int v45; // r0
  int v46; // r1
  void *v47; // r5
  int v48; // r0
  int v49; // r0
  int v50; // r0

  v5 = *(int **)(a1 + 36);
  v9 = *v5;
  v10 = sub_2AD7AC(v5, a2);
  result = sub_2AD7AC(v5, a3);
  if ( v10 )
  {
    v12 = result;
    if ( !result )
      sub_946E0("stabsect_build_psymtabs:  Found stabs (%s), but not string section (%s)", a2, a3);
    v13 = sub_93094(1u, 0x40u);
    sub_1B6B1C(a1, dword_47B26C, v13);
    v14 = sub_2AD7AC(v5, a4);
    if ( !v14 )
      sub_946E0("Can't find %s section in symbol file", a4);
    v15 = (_DWORD *)sub_1B6B24(a1, dword_47B26C);
    v16 = *(_DWORD *)(v14 + 28);
    v17 = *(_DWORD *)(v14 + 36);
    v18 = dword_47B26C;
    *v15 = v16;
    v19 = sub_1B6B24(a1, v18);
    v20 = dword_47B26C;
    *(_DWORD *)(v19 + 4) = v17;
    v21 = sub_1B6B24(a1, v20);
    v22 = *(_DWORD *)(v10 + 36);
    *(_DWORD *)(v21 + 32) = 12;
    v23 = sub_1B6B24(a1, dword_47B26C);
    v24 = sub_347418(v22, *(_DWORD *)(v23 + 32));
    v25 = sub_1B6B24(a1, dword_47B26C);
    v26 = *(_DWORD *)(v12 + 36);
    v27 = dword_47B26C;
    *(_DWORD *)(v25 + 8) = v24;
    v28 = sub_1B6B24(a1, v27);
    v29 = dword_47B26C;
    *(_DWORD *)(v28 + 16) = v26;
    v30 = sub_1B6B24(a1, v29);
    v31 = dword_47B26C;
    *(_QWORD *)(v30 + 24) = *(_QWORD *)(v10 + 80);
    v32 = *(_DWORD *)(sub_1B6B24(a1, v31) + 16);
    LODWORD(v33) = sub_2A8BE8(v5);
    if ( v32 > v33 )
    {
      v50 = sub_1B6B24(a1, dword_47B26C);
      sub_946E0("ridiculous string table size: %d bytes", *(_DWORD *)(v50 + 16));
    }
    v34 = sub_1B6B24(a1, dword_47B26C);
    v35 = sub_1B6B24(a1, dword_47B26C);
    v36 = *(_DWORD *)(a1 + 64);
    v37 = *(_DWORD *)(a1 + 60);
    v38 = *(_DWORD *)(v35 + 16) + 1;
    if ( v38 > v36 - v37 )
    {
      obstack_newchunk((struct obstack *)(a1 + 48), *(_DWORD *)(v35 + 16) + 1);
      v37 = *(_DWORD *)(a1 + 60);
      v36 = *(_DWORD *)(a1 + 64);
    }
    v39 = *(_DWORD *)(a1 + 56);
    v40 = v37 + v38;
    v41 = *(_DWORD *)(a1 + 72);
    v42 = *(_DWORD *)(a1 + 52);
    *(_DWORD *)(a1 + 60) = v40;
    if ( v40 == v39 )
      *(_BYTE *)(a1 + 88) |= 2u;
    v43 = (v40 + v41) & ~v41;
    *(_DWORD *)(a1 + 60) = v43;
    v44 = dword_47B26C;
    if ( v43 - v42 > (unsigned int)(v36 - v42) )
    {
      v43 = v36;
      *(_DWORD *)(a1 + 60) = v36;
    }
    *(_DWORD *)(a1 + 56) = v43;
    *(_DWORD *)(v34 + 12) = v39;
    v45 = sub_1B6B24(a1, v44);
    v46 = dword_47B26C;
    *(_DWORD *)(a1 + 204) += *(_DWORD *)(v45 + 16) + 1;
    v47 = *(void **)(sub_1B6B24(a1, v46) + 12);
    v48 = sub_1B6B24(a1, dword_47B26C);
    if ( !sub_2ADEDC((int)v5, v12, v47, *(_DWORD *)(v48 + 16), 0, 0, *(_DWORD *)(v48 + 16)) )
      sub_258B04(v9);
    v49 = sub_20C158();
    sub_E6A20(v49);
    if ( dword_489444 )
    {
      free((void *)dword_489444);
      dword_489444 = 0;
    }
    dword_48966C = 10;
    dword_489444 = (int)sub_93028(0x28u);
    byte_47898C = 1;
    return sub_107848((_DWORD *)a1);
  }
  return result;
}

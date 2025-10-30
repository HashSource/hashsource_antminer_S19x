void __fastcall sub_139CE8(int a1, int a2, _WORD *a3)
{
  int v3; // r6
  int v4; // r8
  int v6; // r4
  int v7; // r0
  int v8; // r10
  int v9; // r3
  int v10; // r0
  _DWORD *v11; // r0
  _DWORD *v12; // r11
  _DWORD *v13; // r5
  int v14; // r1
  int v15; // r3
  char v16; // r2
  _DWORD *v17; // r9
  _DWORD *v18; // r3
  int v19; // r0
  bool v20; // zf
  int v21; // r3
  int v22; // r12
  int v23; // r1
  int v24; // r3
  int v25; // r2
  int v26; // r7
  int v27; // r6
  int v28; // r3
  int v29; // r0
  int v30; // r2
  int v31; // r3
  int v32; // r1
  unsigned int v33; // r3
  int v34; // r7
  unsigned int v35; // r4
  int v36; // r0
  _BYTE *v37; // r2
  int v38; // r3
  int v39; // r1
  _DWORD *v40; // r6
  int v41; // r11
  _BYTE *v42; // r0
  bool v43; // zf
  int v44; // r3
  _DWORD *v45; // r2
  void *v46; // r0
  void *v47; // r0
  void *v48; // r0
  int v49; // r0
  _DWORD *v50; // [sp+14h] [bp-28h] BYREF
  int v51; // [sp+18h] [bp-24h] BYREF
  int v52; // [sp+1Ch] [bp-20h]
  void *ptr; // [sp+20h] [bp-1Ch]
  char v54; // [sp+28h] [bp-14h] BYREF

  v3 = *(_DWORD *)(a1 + 4);
  v4 = *(_DWORD *)(v3 + 136);
  if ( (*(_BYTE *)(v4 + 10) & 4) != 0 )
  {
    v49 = sub_94700(
            (int)"dwarf2read.c",
            3895,
            "%s: Assertion `%s' failed.",
            "void dw2_get_file_names_reader(const die_reader_specs*, const gdb_byte*, die_info*, int, void*)",
            "! this_cu->is_debug_types");
    sub_338FFC(v49);
  }
  if ( *a3 == 60 )
    goto LABEL_3;
  v6 = *(_DWORD *)(dword_4872D8 + 344);
  v7 = sub_12E694((int)a3, 16, *(_DWORD *)(a1 + 4));
  if ( !v7 )
    goto LABEL_3;
  v8 = *(_DWORD *)(v7 + 8);
  v9 = *(_DWORD *)(v3 + 172);
  v10 = *(_DWORD *)(dword_4872D8 + 428);
  v52 = v8;
  v51 = v9;
  v11 = (_DWORD *)sub_324030(v10, &v51, 1);
  v12 = v11;
  if ( *v11 )
  {
    **(_DWORD **)(v4 + 24) = *v11;
    return;
  }
  ((void (__fastcall *)(_DWORD **, int, int))loc_1394C0)(&v50, v8, v3);
  v13 = v50;
  if ( !v50 )
  {
LABEL_3:
    *(_BYTE *)(*(_DWORD *)(v4 + 24) + 8) |= 2u;
    return;
  }
  v14 = *(_DWORD *)(v6 + 64);
  v15 = *(_DWORD *)(v6 + 60);
  v16 = v14 - v15;
  if ( (unsigned int)(v14 - v15) <= 0x13 )
  {
    obstack_newchunk((struct obstack *)(v6 + 48), 20);
    v15 = *(_DWORD *)(v6 + 60);
    v14 = *(_DWORD *)(v6 + 64);
  }
  v17 = *(_DWORD **)(v6 + 56);
  v18 = (_DWORD *)(v15 + 20);
  v19 = *(_DWORD *)(v6 + 72);
  *(_DWORD *)(v6 + 60) = v18;
  v20 = v18 == v17;
  if ( v18 == v17 )
    v16 = *(_BYTE *)(v6 + 88);
  v21 = ((unsigned int)v18 + v19) & ~v19;
  *(_DWORD *)(v6 + 60) = v21;
  if ( v20 )
    *(_BYTE *)(v6 + 88) = v16 | 2;
  v22 = *(_DWORD *)(v3 + 172);
  if ( v21 - *(_DWORD *)(v6 + 52) > (unsigned int)(v14 - *(_DWORD *)(v6 + 52)) )
  {
    v21 = v14;
    *(_DWORD *)(v6 + 60) = v14;
  }
  *(_DWORD *)(v6 + 56) = v21;
  v17[1] = v8;
  *v17 = v22;
  *v12 = v17;
  sub_12E82C((int)&v51, (int)a3, v3);
  v23 = *(_DWORD *)(v6 + 64);
  v24 = *(_DWORD *)(v6 + 60);
  v25 = -1431655765 * ((v13[13] - v13[12]) >> 3);
  v26 = -1431655764 * ((v13[13] - v13[12]) >> 3);
  v17[2] = v25;
  if ( 4 * v25 > (unsigned int)(v23 - v24) )
  {
    obstack_newchunk((struct obstack *)(v6 + 48), 4 * v25);
    v24 = *(_DWORD *)(v6 + 60);
    v23 = *(_DWORD *)(v6 + 64);
  }
  v27 = *(_DWORD *)(v6 + 56);
  v28 = v24 + v26;
  v29 = *(_DWORD *)(v6 + 52);
  *(_DWORD *)(v6 + 60) = v28;
  if ( v28 == v27 )
    *(_BYTE *)(v6 + 88) |= 2u;
  v30 = (v28 + *(_DWORD *)(v6 + 72)) & ~*(_DWORD *)(v6 + 72);
  *(_DWORD *)(v6 + 60) = v30;
  v31 = v13[13];
  if ( v30 - v29 > (unsigned int)(v23 - v29) )
  {
    v30 = v23;
    *(_DWORD *)(v6 + 60) = v23;
  }
  v32 = v13[12];
  *(_DWORD *)(v6 + 56) = v30;
  v17[3] = v27;
  v33 = -1431655765 * ((v31 - v32) >> 3);
  if ( v33 )
  {
    v34 = 0;
    v35 = 0;
    while ( 1 )
    {
      ++v35;
      v40 = (_DWORD *)(v27 + v34);
      if ( v35 > v33 )
        break;
      v41 = v52;
      v42 = (_BYTE *)sub_11D870(v35, v13);
      v37 = v42;
      v43 = v41 == 0;
      if ( v41 )
        v43 = *v42 == 47;
      v44 = v43;
      if ( !v43 )
      {
        v36 = sub_31E338(v42, v41, &word_398974, v42, v44);
        goto LABEL_25;
      }
LABEL_26:
      v38 = v13[13];
      v34 += 4;
      v39 = v13[12];
      *v40 = v37;
      v33 = -1431655765 * ((v38 - v39) >> 3);
      if ( v33 <= v35 )
        goto LABEL_36;
      v27 = v17[3];
    }
    v36 = sub_11D870(v35, v13);
LABEL_25:
    v37 = (_BYTE *)v36;
    goto LABEL_26;
  }
LABEL_36:
  v45 = *(_DWORD **)(v4 + 24);
  v17[4] = 0;
  *v45 = v17;
  if ( ptr != &v54 )
    sub_339E64(ptr);
  v46 = (void *)v13[12];
  if ( v46 )
    sub_339E64(v46);
  v47 = (void *)v13[9];
  if ( v47 )
    sub_339E64(v47);
  v48 = (void *)v13[8];
  if ( v48 )
    sub_33AC00(v48);
  sub_33AC04(v13);
}

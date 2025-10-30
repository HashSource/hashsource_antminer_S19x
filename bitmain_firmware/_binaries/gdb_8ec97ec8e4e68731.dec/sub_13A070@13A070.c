void __fastcall sub_13A070(int a1, int a2, _DWORD *a3, int a4, _DWORD *a5)
{
  int *v6; // r5
  int v8; // r6
  int v9; // r0
  int v10; // r2
  int v11; // r9
  int v12; // r8
  int v13; // r11
  int v14; // r0
  char *v15; // r1
  int v16; // r4
  int v17; // r0
  int v18; // r3
  int v19; // r11
  unsigned int v20; // r1
  int v21; // r0
  unsigned int v22; // r1
  char v23; // r1
  int *v24; // r3
  int v25; // r3
  int v26; // r0
  int v27; // r9
  int v28; // r2
  _DWORD *v29; // r3
  _DWORD *v30; // r2
  int v31; // r12
  bool v32; // zf
  int v33; // r2
  int v34; // r9
  _DWORD *v35; // r2
  _DWORD *v36; // r0
  _DWORD *v37; // r2
  int v38; // t1
  void *v39; // r0
  int v40; // r0
  _DWORD *v41; // r7
  void *v42; // r0
  void *v43; // r0
  void *v44; // r0
  const char *v45; // r5
  int v46; // r6
  int v47; // r7
  int v48; // r9
  const char *v49; // r8
  const char *v50; // r0
  int v51; // r0
  int v52; // r0
  int v54; // [sp+18h] [bp-24h]
  int (__fastcall ***v56)(_DWORD); // [sp+20h] [bp-1Ch]
  unsigned int v57; // [sp+28h] [bp-14h] BYREF
  unsigned int v58; // [sp+2Ch] [bp-10h] BYREF
  int v59; // [sp+30h] [bp-Ch] BYREF
  int v60; // [sp+34h] [bp-8h] BYREF

  v6 = *(int **)(a1 + 4);
  v8 = *v6;
  v9 = sub_1B7250(*v6);
  v10 = *(unsigned __int16 *)a3;
  v11 = v9;
  v12 = v6[34];
  v57 = 0;
  v58 = 0;
  if ( v10 == 60 && !*a5 )
    return;
  v13 = *(_BYTE *)(v12 + 10) & 4;
  if ( (*(_BYTE *)(v12 + 10) & 4) != 0 )
  {
    sub_94700(
      (int)"dwarf2read.c",
      8258,
      "%s: Assertion `%s' failed.",
      "void process_psymtab_comp_unit_reader(const die_reader_specs*, const gdb_byte*, die_info*, int, void*)",
      "! per_cu->is_debug_types");
    goto LABEL_49;
  }
  sub_12EA68(v6, (int)a3, a5[1]);
  v6[19] = (int)&dword_4788F0;
  v14 = sub_12E748((int)a3, 3, v6);
  v15 = "";
  if ( v14 )
    v15 = (char *)v14;
  v16 = sub_1D070C(*(_DWORD *)(v12 + 20), v15, v13, *(_DWORD *)(v12 + 20) + 108, *(_DWORD *)(v12 + 20) + 120);
  *(_BYTE *)(v16 + 53) = 1;
  *(_DWORD *)(v16 + 60) = sub_148108;
  *(_DWORD *)(v16 + 64) = v12;
  *(_DWORD *)(v12 + 24) = v16;
  v17 = sub_12E748((int)a3, 27, v6);
  v18 = *(_DWORD *)(v8 + 152);
  *(_DWORD *)(v16 + 12) = v17;
  if ( v18 == -1 )
  {
LABEL_49:
    sub_94700((int)"dwarf2read.c", 8274, "sect_index_text not initialized");
    sub_15E08(a3);
    sub_338FFC(v52);
  }
  v19 = *(_DWORD *)(*(_DWORD *)(v8 + 144) + 4 * v18);
  sub_12EED8((int)a3, (int)v6);
  v54 = sub_12EF34(a3, &v57, &v58, v6, v16);
  if ( v54 == 3 && v57 < v58 )
  {
    v56 = *(int (__fastcall ****)(_DWORD))(v8 + 28);
    ((void (__fastcall *)(int, unsigned int))loc_16A938)(v11, v57 + v19);
    ((void (__fastcall *)(int, unsigned int))loc_16A938)(v11, v19 + v58);
    sub_B71D8(v56);
  }
  if ( !a4 )
    goto LABEL_8;
  v59 = -1;
  v60 = 0;
  v51 = ((int (__fastcall *)(int, int, int))loc_128798)(a1, a2, 1);
  sub_137B20(v51, (unsigned int *)&v59, (unsigned int *)&v60, v54 <= 1, v6);
  if ( v59 == -1 )
    v59 = v60;
  if ( v54 <= 1 )
  {
    v20 = v59;
    v57 = v59;
    v58 = v60;
  }
  else
  {
LABEL_8:
    v20 = v57;
  }
  v21 = ((int (__fastcall *)(int, unsigned int))loc_16A938)(v11, v19 + v20);
  v22 = v58;
  *(_DWORD *)(v16 + 16) = v21;
  *(_DWORD *)(v16 + 20) = ((int (__fastcall *)(int, unsigned int))loc_16A938)(v11, v19 + v22);
  sub_1D047C(v8, v16);
  v24 = *(int **)(v6[34] + 28);
  if ( v24 )
  {
    v25 = *v24;
    if ( v25 )
    {
      v26 = *(_DWORD *)(v8 + 64);
      v27 = 4 * v25;
      v28 = *(_DWORD *)(v8 + 60);
      *(_DWORD *)(v16 + 32) = v25;
      if ( 4 * v25 > (unsigned int)(v26 - v28) )
      {
        obstack_newchunk((struct obstack *)(v8 + 48), v27);
        v28 = *(_DWORD *)(v8 + 60);
        v26 = *(_DWORD *)(v8 + 64);
      }
      v29 = *(_DWORD **)(v8 + 56);
      v30 = (_DWORD *)(v28 + v27);
      v31 = *(_DWORD *)(v8 + 72);
      *(_DWORD *)(v8 + 60) = v30;
      v32 = v30 == v29;
      if ( v30 == v29 )
        v23 = *(_BYTE *)(v8 + 88);
      v33 = ((unsigned int)v30 + v31) & ~v31;
      *(_DWORD *)(v8 + 60) = v33;
      if ( v32 )
        *(_BYTE *)(v8 + 88) = v23 | 2;
      v34 = v6[34];
      if ( v33 - *(_DWORD *)(v8 + 52) > (unsigned int)(v26 - *(_DWORD *)(v8 + 52)) )
      {
        v33 = v26;
        *(_DWORD *)(v8 + 60) = v26;
      }
      *(_DWORD *)(v8 + 56) = v33;
      v35 = *(_DWORD **)(v34 + 28);
      *(_DWORD *)(v16 + 28) = v29;
      if ( v35 && *v35 )
      {
        v36 = &v29[*v35];
        v37 = v35 + 1;
        do
        {
          v38 = v37[1];
          ++v37;
          *v29++ = *(_DWORD *)(v38 + 24);
        }
        while ( v36 != v29 );
      }
      v39 = *(void **)(v34 + 28);
      if ( v39 )
        free(v39);
      *(_DWORD *)(v34 + 28) = 0;
    }
  }
  v40 = sub_12E694((int)a3, 16, (int)v6);
  if ( v40 )
  {
    ((void (__fastcall *)(int *, _DWORD, int *))loc_1394C0)(&v60, *(_DWORD *)(v40 + 8), v6);
    v41 = (_DWORD *)v60;
    if ( v60 )
    {
      sub_138924(v60, *(_DWORD *)(v16 + 12), v6, v16, *(_DWORD *)(v16 + 16), 1);
      v42 = (void *)v41[12];
      if ( v42 )
        sub_339E64(v42);
      v43 = (void *)v41[9];
      if ( v43 )
        sub_339E64(v43);
      v44 = (void *)v41[8];
      if ( v44 )
        sub_33AC00(v44);
      sub_33AC04(v41);
    }
  }
  if ( dword_4872F4 )
  {
    v45 = "type";
    v46 = sub_1B7250(v8);
    v47 = *(_DWORD *)sub_242FC8(v46);
    v48 = *(_DWORD *)v12;
    if ( (*(_BYTE *)(v12 + 10) & 4) == 0 )
      v45 = "comp";
    v49 = (const char *)sub_25AC8C(v46, *(_DWORD *)(v16 + 16));
    v50 = (const char *)sub_25AC8C(v46, *(_DWORD *)(v16 + 20));
    sub_2594B0(
      v47,
      "Psymtab for %s unit @0x%x: %s - %s, %d global, %d static syms\n",
      v45,
      v48,
      v49,
      v50,
      *(_DWORD *)(v16 + 40),
      *(_DWORD *)(v16 + 48));
  }
}

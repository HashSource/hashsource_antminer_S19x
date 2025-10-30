void __fastcall sub_196FB4(const char *a1, int a2, int a3, _DWORD *a4)
{
  char *v7; // r1
  unsigned int v8; // r5
  _BYTE *v9; // r0
  int v10; // r1
  _DWORD *v11; // r12
  _DWORD **v12; // r2
  bool v13; // zf
  int v14; // r3
  int *v15; // r2
  unsigned int *v16; // r3
  _DWORD *v17; // r0
  unsigned int v18; // r6
  int v19; // r12
  _DWORD *v20; // r3
  int v21; // r3
  int v22; // r3
  int i; // r4
  _DWORD *v24; // r3
  int v25; // r0
  _DWORD *v26; // [sp+10h] [bp-11Ch]
  _DWORD v27[2]; // [sp+1Ch] [bp-110h] BYREF
  _DWORD *v28; // [sp+24h] [bp-108h] BYREF
  _DWORD *v29; // [sp+28h] [bp-104h]
  int (*v30)(); // [sp+2Ch] [bp-100h]
  _DWORD **v31; // [sp+30h] [bp-FCh] BYREF
  int (*v32)(); // [sp+34h] [bp-F8h]
  _DWORD v33[4]; // [sp+38h] [bp-F4h] BYREF
  int v34; // [sp+48h] [bp-E4h] BYREF
  char v35; // [sp+4Ch] [bp-E0h]
  char v36; // [sp+4Dh] [bp-DFh]
  void *ptr; // [sp+50h] [bp-DCh]
  int (*v38)(); // [sp+54h] [bp-D8h]
  _DWORD v39[4]; // [sp+58h] [bp-D4h] BYREF
  void *v40; // [sp+68h] [bp-C4h]
  char v41; // [sp+70h] [bp-BCh] BYREF
  char v42; // [sp+84h] [bp-A8h]
  void *v43; // [sp+88h] [bp-A4h]
  char v44; // [sp+90h] [bp-9Ch] BYREF
  char v45; // [sp+A0h] [bp-8Ch]
  void *v46; // [sp+A4h] [bp-88h]
  char v47; // [sp+ACh] [bp-80h] BYREF
  char v48; // [sp+BCh] [bp-70h]
  void *v49; // [sp+C0h] [bp-6Ch]
  char v50; // [sp+C8h] [bp-64h] BYREF
  char v51; // [sp+D8h] [bp-54h]
  int v52; // [sp+118h] [bp-14h]
  int v53; // [sp+11Ch] [bp-10h]
  _DWORD v54[2]; // [sp+120h] [bp-Ch]

  v27[0] = a3;
  if ( !a1 )
    a3 = -1;
  v31 = (_DWORD **)v33;
  if ( a1 )
    a3 = (int)&a1[strlen(a1)];
  v7 = (char *)a1;
  v8 = 0;
  v9 = sub_195F6C(&v31, v7, a3);
  v12 = v31;
  v35 = 0;
  v36 = 0;
  v13 = v31 == v33;
  ptr = v39;
  if ( v31 == v33 )
  {
    v9 = (_BYTE *)v33[0];
    v10 = v33[1];
    v12 = (_DWORD **)v33[2];
    v14 = v33[3];
    v11 = v39;
  }
  else
  {
    v14 = v33[0];
    ptr = v31;
  }
  if ( v31 == v33 )
  {
    *v11 = v9;
    v11[1] = v10;
    v11[2] = v12;
    v11[3] = v14;
  }
  v15 = (int *)v27[0];
  if ( !v13 )
    v39[0] = v14;
  v16 = *(unsigned int **)(v27[0] + 4);
  v54[0] = 0;
  v34 = a2;
  v42 = 0;
  v45 = 0;
  v48 = 0;
  v51 = 0;
  v52 = 0;
  v53 = 0;
  *(_DWORD *)((char *)v54 + 3) = 0;
  v38 = v32;
  if ( !v16 || !*v16 )
  {
LABEL_24:
    if ( v45 )
      goto LABEL_41;
    goto LABEL_25;
  }
  do
  {
    v18 = v16[v8 + 2];
    if ( v18 )
    {
      v17 = *(_DWORD **)(*(_DWORD *)(*(_DWORD *)(v18 + 4) + 4) + 16);
      if ( a4 && a4 != v17 )
        goto LABEL_17;
      v20 = (_DWORD *)v15[2];
      if ( v20 )
        v20 = (_DWORD *)*v20;
      v26 = v20;
      if ( v17[6] )
      {
        sub_94700(
          (int)"linespec.c",
          4583,
          "%s: Assertion `%s' failed.",
          "void add_matching_symbols_to_info(const char*, symbol_name_match_type, search_domain, collect_info*, program_space*)",
          "!SYMTAB_PSPACE (elt)->executing_startup");
        v25 = sub_AF570((int)&v34);
        sub_338FFC(v25);
      }
      ((void (*)(void))loc_1CD290)();
      v21 = *(_DWORD *)(v18 + 4);
      v29 = &v31;
      v22 = *(_DWORD *)(v21 + 32);
      v30 = sub_197404;
      v31 = (_DWORD **)v27;
      for ( i = *(_DWORD *)(v22 + 12); i; i = *(_DWORD *)(i + 12) )
        (*((void (__fastcall **)(int, int *, int, _DWORD *, int (*)()))off_46D5A4[0] + 37))(i, &v34, 1, v29, v30);
      v15 = (int *)v27[0];
      v24 = *(_DWORD **)(v27[0] + 8);
      if ( v24 )
        v24 = (_DWORD *)*v24;
      if ( v26 != v24 || *(_DWORD *)(v18 + 24) != 9 )
      {
LABEL_17:
        v16 = (unsigned int *)v15[1];
        ++v8;
        if ( !v16 )
          break;
        continue;
      }
      ((void (__fastcall *)(_DWORD, int *, _DWORD *, unsigned int))loc_196298)(v27[0], &v34, a4, v18);
    }
    else
    {
      v19 = *v15;
      v28 = v27;
      v32 = sub_1973F8;
      v31 = &v28;
      sub_195D10(v19, (int)&v34, 1, 1, a4, 1, (int)&v28, (int)sub_1973F8);
      ((void (__fastcall *)(_DWORD, int *, _DWORD *, _DWORD))loc_196298)(v27[0], &v34, a4, 0);
    }
    v15 = (int *)v27[0];
    ++v8;
    v16 = *(unsigned int **)(v27[0] + 4);
    if ( !v16 )
      break;
  }
  while ( v8 < *v16 );
  if ( v51 )
  {
    v51 = 0;
    if ( v49 != &v50 )
      sub_339E64(v49);
  }
  if ( !v48 )
    goto LABEL_24;
  v48 = 0;
  if ( v46 == &v47 )
    goto LABEL_24;
  sub_339E64(v46);
  if ( v45 )
  {
LABEL_41:
    v45 = 0;
    if ( v43 != &v44 )
    {
      sub_339E64(v43);
      if ( v42 )
        goto LABEL_43;
      goto LABEL_26;
    }
  }
LABEL_25:
  if ( v42 )
  {
LABEL_43:
    v42 = 0;
    if ( v40 != &v41 )
      sub_339E64(v40);
  }
LABEL_26:
  if ( ptr != v39 )
    sub_339E64(ptr);
}

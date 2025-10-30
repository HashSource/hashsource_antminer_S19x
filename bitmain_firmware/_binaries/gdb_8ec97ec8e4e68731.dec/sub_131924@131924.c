int __fastcall sub_131924(_DWORD *a1)
{
  void *v2; // r0
  int v3; // r2
  int v4; // r3
  _DWORD *v5; // r0
  int v6; // r3
  int v7; // r6
  int v8; // r0
  int v9; // r0
  int *v10; // r6
  int v11; // r0
  _DWORD *v12; // r0
  int v13; // r0
  _DWORD *v14; // r0
  int v15; // r0
  _DWORD *v16; // r0
  int v17; // r0
  _DWORD *v18; // r0
  int v19; // r0
  _DWORD *v20; // r0
  int v21; // r0
  _DWORD *v22; // r0
  int v23; // r0
  _DWORD *v24; // r0
  int v25; // r6
  int v26; // r12
  int v27; // r0
  int *v28; // r3
  int *v29; // r0
  int v30; // r2
  int v31; // t1
  int v32; // r0
  int v33; // r4
  const char *v34; // r0
  int v36; // r0
  int v37; // r0
  void *v38; // r0
  _DWORD *v39; // r2
  void *v40; // r11
  _DWORD *v41; // r9
  int v42; // r7
  int v43; // r6
  int v44; // r6
  int v45; // r2
  int v46; // r2
  int v47; // r0
  int *v48; // r3
  int **v49; // r10
  int v50; // r6
  int *v51; // r3
  int v52; // r8
  int v53; // r6
  const char *v54; // r0
  int v55; // r7
  _DWORD *v56; // r8
  int v57; // r9
  char *v58; // r6
  _DWORD *v59; // r0
  __int64 v60; // r0
  __int64 v61; // r4
  _DWORD *v62; // r4
  _DWORD *v63; // r0
  int v64; // r0
  int v65; // r0
  int v66; // r0
  int v67; // [sp+Ch] [bp-58h]
  void *v68; // [sp+10h] [bp-54h]
  int v69; // [sp+14h] [bp-50h]
  int v70; // [sp+18h] [bp-4Ch]
  void *v71; // [sp+1Ch] [bp-48h]
  char *v72; // [sp+24h] [bp-40h] BYREF
  int v73; // [sp+28h] [bp-3Ch] BYREF
  _DWORD v74[2]; // [sp+2Ch] [bp-38h] BYREF
  struct obstack obstack; // [sp+34h] [bp-30h] BYREF

  if ( a1[29] == a1[27] && a1[32] == a1[30] )
    sub_1D0830(a1, 1024);
  v2 = sub_92E28();
  v3 = a1[6];
  v67 = (int)v2;
  v74[0] = a1;
  v74[1] = v3;
  if ( dword_4872F4 )
  {
    v53 = *(_DWORD *)sub_242FC8(v2);
    v54 = (const char *)sub_1B87A8(a1);
    sub_2594B0(v53, "Building psymtabs of objfile %s ...\n", v54);
  }
  v4 = *(unsigned __int8 *)(dword_4872D8 + 16);
  *(_BYTE *)(dword_4872D8 + 432) = 1;
  if ( !v4 )
    ((void (__fastcall *)(_DWORD *))loc_11FFD0)(a1);
  v68 = sub_9253C((int)sub_11EAE4, 0);
  if ( !((int (*)(void))loc_125148)() )
    goto LABEL_7;
  v70 = dword_4872D8;
  if ( *(_DWORD *)(dword_4872D8 + 368) )
  {
    v65 = sub_94700(
            (int)"dwarf2read.c",
            8494,
            "%s: Assertion `%s' failed.",
            "void build_type_psymtabs_1()",
            "dwarf2_per_objfile->type_unit_groups == NULL");
    v66 = sub_339EF8(v65);
    sub_338FFC(v66);
  }
  v37 = *(_DWORD *)(dword_4872D8 + 356);
  if ( !v37 )
    goto LABEL_7;
  if ( dword_4872F4 )
  {
    v59 = (_DWORD *)sub_242FC8(v37);
    sub_2594B0(*v59, "Building type unit groups ...\n");
    v37 = *(_DWORD *)(dword_4872D8 + 356);
  }
  v38 = sub_93028(8 * v37);
  v39 = (_DWORD *)dword_4872D8;
  v40 = v38;
  if ( *(int *)(dword_4872D8 + 356) <= 0 )
  {
LABEL_49:
    v71 = sub_9253C((int)&loc_11C838, (int)v40);
    qsort(v40, *(_DWORD *)(dword_4872D8 + 356), 8u, (__compar_fn_t)sub_11C410);
    v72 = 0;
    sub_9253C((int)sub_11C93C, (int)&v72);
    if ( *(int *)(dword_4872D8 + 356) > 0 )
    {
      v55 = 0;
      v56 = v40;
      v57 = -1;
      while ( 1 )
      {
        v58 = v72;
        if ( !v72 )
          break;
        if ( v57 != v56[1] )
        {
          obstack_free((struct obstack *)(v72 + 4), 0);
          free(v58);
          v57 = v56[1];
          v72 = 0;
LABEL_53:
          v58 = (char *)sub_1210E8(dword_4872D8 + 20, v57);
          v72 = v58;
          ++*(_DWORD *)(v70 + 376);
        }
        ((void (__fastcall *)(_DWORD, char *, _DWORD, _DWORD, void *, _DWORD))loc_12DAAC)(
          *((_DWORD *)v40 + 2 * v55++),
          v58,
          0,
          0,
          &loc_137EE8,
          0);
        v56 += 2;
        if ( *(_DWORD *)(dword_4872D8 + 356) <= v55 )
          goto LABEL_57;
      }
      v57 = v56[1];
      goto LABEL_53;
    }
LABEL_57:
    sub_92620(v71);
LABEL_7:
    sub_12A670((int)a1);
    obstack_begin(&obstack, 0, 0, (void *(*)(int))sub_93028, (void (*)(void *))&loc_11C838);
    v5 = sub_B7220((int)&obstack);
    v6 = dword_4872D8;
    a1[7] = v5;
    if ( *(int *)(v6 + 352) > 0 )
    {
      v7 = 0;
      do
      {
        v8 = ((int (__fastcall *)(int))loc_11E164)(v7);
        sub_131890(v8, 0, 13);
        ++v7;
      }
      while ( *(_DWORD *)(dword_4872D8 + 352) > v7 );
    }
    v9 = sub_126598();
    v10 = (int *)dword_4872D8;
    if ( !v9 )
    {
      v36 = *(_DWORD *)(dword_4872D8 + 400);
      if ( v36 )
      {
        sub_324138(v36, sub_11D960, a1);
        v10 = (int *)dword_4872D8;
      }
    }
    v11 = v10[92];
    if ( v11 )
    {
      v11 = sub_324138(v11, &loc_11CA18, 0);
      v10 = (int *)dword_4872D8;
    }
    if ( dword_4872F4 )
    {
      v12 = (_DWORD *)sub_242FC8(v11);
      v13 = sub_2594B0(*v12, "Type unit statistics:\n");
      v14 = (_DWORD *)sub_242FC8(v13);
      v15 = sub_2594B0(*v14, "  %d TUs\n", *(_DWORD *)(dword_4872D8 + 356));
      v16 = (_DWORD *)sub_242FC8(v15);
      v17 = sub_2594B0(*v16, "  %d uniq abbrev tables\n", v10[94]);
      v18 = (_DWORD *)sub_242FC8(v17);
      v19 = sub_2594B0(*v18, "  %d symtabs from stmt_list entries\n", v10[95]);
      v20 = (_DWORD *)sub_242FC8(v19);
      v21 = sub_2594B0(*v20, "  %d symtab sharers\n", v10[96]);
      v22 = (_DWORD *)sub_242FC8(v21);
      v23 = sub_2594B0(*v22, "  %d type units without a stmt_list\n", v10[97]);
      v24 = (_DWORD *)sub_242FC8(v23);
      sub_2594B0(*v24, "  %d all_type_units reallocs\n", v10[98]);
      v10 = (int *)dword_4872D8;
    }
    if ( v10[88] > 0 )
    {
      v25 = 0;
      do
      {
        v26 = *(_DWORD *)(((int (__fastcall *)(int))loc_11E164)(v25) + 24);
        if ( v26 )
        {
          v27 = *(_DWORD *)(v26 + 32);
          if ( v27 > 0 )
          {
            v28 = *(int **)(v26 + 28);
            v29 = &v28[v27];
            do
            {
              v31 = *v28++;
              v30 = v31;
              if ( !*(_DWORD *)(v31 + 24) )
                *(_DWORD *)(v30 + 24) = v26;
            }
            while ( v28 != v29 );
          }
        }
        ++v25;
      }
      while ( *(_DWORD *)(dword_4872D8 + 352) > v25 );
    }
    a1[7] = sub_B71FC(a1[7]);
    sub_92620(v68);
    if ( dword_4872F4 )
    {
      v33 = *(_DWORD *)sub_242FC8(v32);
      v34 = (const char *)sub_1B87A8(a1);
      sub_2594B0(v33, "Done building psymtabs of %s\n", v34);
    }
    obstack_free(&obstack, 0);
    v74[0] = 0;
    ((void (__fastcall *)(_DWORD *))loc_14834C)(v74);
    return sub_92E40(v67);
  }
  v41 = v38;
  v42 = 0;
  while ( 1 )
  {
    v48 = *(int **)(v39[91] + 4 * v42);
    v49 = (int **)v48[3];
    *((_DWORD *)v40 + 2 * v42) = v48;
    v50 = *v48;
    v51 = *v49;
    if ( *((_BYTE *)v49 + 17) )
      break;
LABEL_47:
    v52 = v51[37];
    if ( !*((_BYTE *)v49 + 16) )
      ((void (__fastcall *)(_DWORD, int **))loc_11FFD0)(v39[86], v49);
    v43 = (int)v49[1] + v50;
    sub_11E018(v52 + 4, v43, &v73);
    v44 = v43 + v73;
    if ( v73 == 4 )
      v45 = 4;
    else
      v45 = 8;
    v69 = v45;
    if ( (*(unsigned __int16 (__fastcall **)(int))(*(_DWORD *)(v52 + 4) + 52))(v44) > 4u )
      v46 = v44 + 4;
    else
      v46 = v44 + 2;
    v47 = sub_11E4C0(*(const char **)v52, v52 + 4, v46, v69);
    v39 = (_DWORD *)dword_4872D8;
    ++v42;
    v41[1] = v47;
    v41 += 2;
    if ( v39[89] <= v42 )
      goto LABEL_49;
  }
  if ( !*((_BYTE *)v51 + 17) )
  {
    v51 = (int *)*v51;
    goto LABEL_47;
  }
  v60 = ((__int64 (*)(void))loc_11E090)();
  a1[7] = v42;
  v61 = v60;
  obstack_free(&obstack, 0);
  ((void (__fastcall *)(_DWORD *))loc_14834C)(v74);
  sub_92E40(v67);
  if ( HIDWORD(v61) != 1 )
  {
    sub_339E78(v61);
    sub_92E60();
  }
  v62 = (_DWORD *)sub_339E78(v61);
  v63 = (_DWORD *)sub_242FB4(v62);
  v64 = sub_154B38(*v63, *v62, v62[1], v62[2]);
  return sub_339EF8(v64);
}

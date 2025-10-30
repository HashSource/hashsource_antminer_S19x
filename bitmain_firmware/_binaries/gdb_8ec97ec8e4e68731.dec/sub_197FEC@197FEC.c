void __fastcall sub_197FEC(_DWORD *a1, unsigned int j, char *a3, int a4, void **a5, void **a6)
{
  char *v6; // r8
  void *v8; // r11
  unsigned int *v9; // r5
  _DWORD *v10; // r10
  char *v11; // r5
  char *v12; // r4
  char *v13; // r0
  _BYTE *v14; // r3
  int v15; // r2
  size_t v16; // r0
  char *v17; // r5
  int v18; // r2
  _BYTE *v19; // r0
  _DWORD *v20; // r12
  int *v21; // r2
  int v22; // r1
  _DWORD *v23; // r3
  bool v24; // zf
  unsigned int v25; // r8
  size_t *v26; // r4
  unsigned int v27; // r11
  int v28; // r7
  int v29; // t1
  int v30; // r3
  int v31; // r4
  int v32; // r3
  int i; // r4
  char *v34; // r6
  unsigned int v35; // r4
  const char *v36; // t1
  char *v37; // r11
  size_t *v38; // r4
  void *v39; // r0
  size_t v40; // r1
  void *v41; // r0
  size_t v42; // r9
  int v43; // r5
  int v44; // r0
  _DWORD *v45; // r7
  int v46; // r0
  size_t *v47; // r6
  size_t v48; // r5
  const char *v49; // t1
  unsigned int *v50; // r3
  unsigned int *v51; // r6
  int v52; // r10
  unsigned int *v53; // r5
  unsigned int v54; // r4
  int v55; // t1
  unsigned int *v56; // r3
  _DWORD *v57; // r2
  void *v58; // r0
  __int64 v59; // r4
  int *v60; // r0
  int *v62; // [sp+18h] [bp-1BCh]
  unsigned int *v64; // [sp+1Ch] [bp-1B8h]
  unsigned int *v65; // [sp+20h] [bp-1B4h]
  void (__fastcall *v66)(void **); // [sp+28h] [bp-1ACh]
  void *v67; // [sp+2Ch] [bp-1A8h]
  void *v68; // [sp+30h] [bp-1A4h]
  void (*v69)(); // [sp+34h] [bp-1A0h]
  void *v70; // [sp+38h] [bp-19Ch]
  void *v71; // [sp+3Ch] [bp-198h]
  size_t *v72; // [sp+40h] [bp-194h] BYREF
  unsigned int *v73; // [sp+44h] [bp-190h] BYREF
  unsigned int *v74; // [sp+48h] [bp-18Ch] BYREF
  unsigned int *v75; // [sp+4Ch] [bp-188h] BYREF
  int v76; // [sp+50h] [bp-184h] BYREF
  size_t *v77; // [sp+54h] [bp-180h]
  int *v78; // [sp+58h] [bp-17Ch]
  int (__fastcall *v79)(_DWORD *, unsigned int); // [sp+5Ch] [bp-178h]
  int *v80; // [sp+60h] [bp-174h]
  int (__fastcall *v81)(_DWORD *, unsigned int); // [sp+64h] [bp-170h]
  _DWORD v82[2]; // [sp+68h] [bp-16Ch] BYREF
  _DWORD *v83; // [sp+70h] [bp-164h]
  _DWORD *v84; // [sp+74h] [bp-160h]
  void *v85[2]; // [sp+78h] [bp-15Ch] BYREF
  _BYTE v86[16]; // [sp+80h] [bp-154h] BYREF
  void *v87; // [sp+90h] [bp-144h] BYREF
  int v88; // [sp+94h] [bp-140h]
  _DWORD v89[4]; // [sp+98h] [bp-13Ch] BYREF
  void *p_ptr; // [sp+A8h] [bp-12Ch] BYREF
  int v91; // [sp+ACh] [bp-128h]
  void *ptr; // [sp+B0h] [bp-124h] BYREF
  void *v93; // [sp+B4h] [bp-120h]
  void *v94; // [sp+C0h] [bp-114h] BYREF
  int v95; // [sp+C4h] [bp-110h]
  _DWORD v96[4]; // [sp+C8h] [bp-10Ch] BYREF
  int *v97; // [sp+D8h] [bp-FCh] BYREF
  int (__fastcall *v98)(_DWORD *, unsigned int); // [sp+DCh] [bp-F8h]
  _DWORD v99[4]; // [sp+E0h] [bp-F4h] BYREF
  int v100; // [sp+F0h] [bp-E4h] BYREF
  char v101; // [sp+F4h] [bp-E0h]
  char v102; // [sp+F5h] [bp-DFh]
  void *v103; // [sp+F8h] [bp-DCh]
  int (__fastcall *v104)(_DWORD *, unsigned int); // [sp+FCh] [bp-D8h]
  _DWORD v105[4]; // [sp+100h] [bp-D4h] BYREF
  void *v106; // [sp+110h] [bp-C4h]
  char v107; // [sp+118h] [bp-BCh] BYREF
  char v108; // [sp+12Ch] [bp-A8h]
  void *v109; // [sp+130h] [bp-A4h]
  char v110; // [sp+138h] [bp-9Ch] BYREF
  char v111; // [sp+148h] [bp-8Ch]
  void *v112; // [sp+14Ch] [bp-88h]
  char v113; // [sp+154h] [bp-80h] BYREF
  char v114; // [sp+164h] [bp-70h]
  void *v115; // [sp+168h] [bp-6Ch]
  char v116; // [sp+170h] [bp-64h] BYREF
  char v117; // [sp+180h] [bp-54h]
  int v118; // [sp+1C0h] [bp-14h]
  int v119; // [sp+1C4h] [bp-10h]
  _DWORD v120[2]; // [sp+1C8h] [bp-Ch]

  v6 = a3;
  sub_FFE2C(v85, a3);
  v87 = 0;
  if ( v85[1] )
    v6 = (char *)v85[0];
  v8 = sub_9253C(1659900, (int)&v87);
  p_ptr = a1;
  v91 = j;
  ptr = 0;
  v93 = 0;
  ((void (__fastcall *)(char *, void **))loc_1B57B8)(v6, &v87);
  v9 = (unsigned int *)v87;
  v10 = (_DWORD *)a1[2];
  if ( v87 && *(_DWORD *)v87 )
  {
    v34 = (char *)v87 + 4;
    v35 = 0;
    do
    {
      v36 = (const char *)*((_DWORD *)v34 + 1);
      v34 += 4;
      sub_196FB4(v36, 1, (int)&p_ptr, v10);
      ++v35;
    }
    while ( v35 < *v9 );
  }
  else
  {
    sub_196FB4(v6, a4, (int)&p_ptr, (_DWORD *)a1[2]);
  }
  sub_92620(v8);
  if ( !ptr )
    goto LABEL_9;
  if ( !*(_DWORD *)ptr )
  {
    free(ptr);
LABEL_9:
    ptr = 0;
    *a5 = 0;
    goto LABEL_10;
  }
  *a5 = ptr;
LABEL_10:
  if ( !v93 )
  {
LABEL_13:
    *a6 = 0;
    goto LABEL_14;
  }
  if ( !*(_DWORD *)v93 )
  {
    free(v93);
    goto LABEL_13;
  }
  *a6 = v93;
LABEL_14:
  if ( *a5 && *(_DWORD *)*a5 )
    goto LABEL_16;
  if ( *a6 && *(_DWORD *)*a6 )
    goto LABEL_16;
  v87 = v89;
  v88 = 0;
  LOBYTE(v89[0]) = 0;
  v91 = 0;
  LOBYTE(ptr) = 0;
  p_ptr = &ptr;
  v11 = sub_197F94(v6);
  if ( !v11 )
    goto LABEL_16;
  while ( 1 )
  {
    v12 = v11 + 2;
    v13 = sub_197F94(v11 + 2);
    if ( !v13 )
      break;
    v11 = v13;
  }
  v94 = v96;
  sub_195F6C(&v94, v6, (int)v11);
  v14 = v87;
  if ( v94 == v96 )
  {
    sub_33B48C(&v87, &v94);
    v14 = v94;
    goto LABEL_29;
  }
  if ( v87 == v89 )
  {
    v87 = v94;
    v88 = v95;
    v89[0] = v96[0];
    goto LABEL_129;
  }
  v87 = v94;
  v88 = v95;
  v15 = v89[0];
  v89[0] = v96[0];
  if ( !v14 )
  {
LABEL_129:
    v94 = v96;
    v14 = v96;
    goto LABEL_29;
  }
  v94 = v14;
  v96[0] = v15;
LABEL_29:
  v95 = 0;
  *v14 = 0;
  if ( v94 != v96 )
    sub_339E64(v94);
  v16 = strlen(v12);
  sub_33BC54((int)&p_ptr, 0, v91, v12, v16);
  v77 = 0;
  v17 = (char *)v87;
  v76 = sub_323AE0(1, off_4714A0, off_47149C[0], 0, sub_93094, sub_1953F0);
  if ( !v17 )
    v18 = -1;
  v97 = v99;
  if ( v17 )
    v18 = (int)&v17[strlen(v17)];
  v19 = sub_195F6C(&v97, v17, v18);
  v21 = v97;
  v22 = 1;
  v101 = 0;
  v102 = 0;
  v23 = v105;
  v24 = v97 == v99;
  v103 = v105;
  v100 = 1;
  if ( v97 == v99 )
  {
    v20 = v105;
    v19 = (_BYTE *)v99[0];
    v22 = v99[1];
    v21 = (int *)v99[2];
    v23 = (_DWORD *)v99[3];
  }
  v25 = 0;
  if ( v97 == v99 )
  {
    *v20 = v19;
    v20[1] = v22;
    v20[2] = v21;
    v20[3] = v23;
  }
  else
  {
    v23 = (_DWORD *)v99[0];
    v103 = v21;
  }
  if ( !v24 )
    v105[0] = v23;
  v120[0] = 0;
  v108 = 0;
  v111 = 0;
  v114 = 0;
  v117 = 0;
  v118 = 0;
  v119 = 0;
  *(_DWORD *)((char *)v120 + 3) = 0;
  v104 = v98;
  if ( j )
  {
    if ( *(_DWORD *)j )
    {
      v27 = j + 4;
      do
      {
        v29 = *(_DWORD *)(v27 + 4);
        v27 += 4;
        v28 = v29;
        if ( v29 )
        {
          if ( *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(*(_DWORD *)(v28 + 4) + 4) + 16) + 24) )
          {
            sub_94700(
              (int)"linespec.c",
              3628,
              "%s: Assertion `%s' failed.",
              "VEC_symbolp* lookup_prefix_sym(linespec_state*, VEC_symtab_ptr*, const char*)",
              "!SYMTAB_PSPACE (elt)->executing_startup");
            sub_AF570((int)&v100);
            if ( v76 )
              sub_323B84(v76);
            if ( p_ptr != &ptr )
              sub_339E64(p_ptr);
            if ( v87 != v89 )
              sub_339E64(v87);
            v58 = v85[0];
            if ( v85[0] != v86 )
              sub_339E64(v85[0]);
            sub_338FFC(v58);
          }
          v62 = &v100;
          ((void (*)(void))loc_1CD290)();
          v30 = *(_DWORD *)(v28 + 4);
          v81 = sub_19613C;
          v80 = &v76;
          v31 = *(_DWORD *)(*(_DWORD *)(v30 + 32) + 12);
          if ( v31 )
          {
            v62 = &v100;
            do
            {
              (*((void (__fastcall **)(int, int *, int, int *, int (__fastcall *)(_DWORD *, unsigned int)))off_46D5A4[0]
               + 37))(
                v31,
                &v100,
                2,
                v80,
                v81);
              v31 = *(_DWORD *)(v31 + 12);
            }
            while ( v31 );
            v32 = *(_DWORD *)(v28 + 4);
            v78 = &v76;
            v79 = sub_19613C;
            for ( i = *(_DWORD *)(*(_DWORD *)(v32 + 32) + 12); i; i = *(_DWORD *)(i + 12) )
              (*((void (__fastcall **)(int, int *, int, int *, int (__fastcall *)(_DWORD *, unsigned int)))off_46D5A4[0]
               + 37))(
                i,
                &v100,
                1,
                v78,
                v79);
          }
          else
          {
            v78 = &v76;
            v79 = sub_19613C;
          }
        }
        else
        {
          v98 = sub_19613C;
          v97 = &v76;
          v62 = &v100;
          sub_195D10((int)a1, (int)&v100, 2, 3, 0, 0, (int)&v76, (int)sub_19613C);
          v97 = &v76;
          v98 = sub_19613C;
          sub_195D10((int)a1, (int)&v100, 1, 3, 0, 0, (int)&v76, (int)sub_19613C);
        }
        ++v25;
      }
      while ( v25 < *(_DWORD *)j );
      v26 = v77;
      v77 = 0;
      if ( v117 )
      {
        v117 = 0;
        if ( v115 != &v116 )
          sub_339E64(v115);
      }
    }
    else
    {
      v26 = v77;
      v77 = 0;
    }
  }
  else
  {
    v26 = v77;
    v77 = 0;
  }
  if ( v114 )
  {
    v114 = 0;
    if ( v112 != &v113 )
      sub_339E64(v112);
  }
  if ( v111 )
  {
    v111 = 0;
    if ( v109 != &v110 )
      sub_339E64(v109);
  }
  if ( v108 )
  {
    v108 = 0;
    if ( v106 != &v107 )
      sub_339E64(v106);
  }
  if ( v103 != v105 )
    sub_339E64(v103);
  if ( v76 )
    sub_323B84(v76);
  v72 = v26;
  v67 = sub_9253C((int)sub_1953CC, (int)&v72);
  if ( v72 && *v72 )
  {
    v70 = sub_92E28();
    v37 = (char *)p_ptr;
    v38 = v72;
    v65 = v72;
    v39 = sub_9253C((int)nullsub_39, 0);
    if ( !v38 )
      v40 = (size_t)v65;
    v71 = v39;
    if ( v38 )
    {
      v41 = v38 + 2;
      v40 = *v38;
    }
    else
    {
      v41 = (void *)v40;
    }
    qsort(v41, v40, 4u, (__compar_fn_t)sub_1959F8);
    v73 = 0;
    v82[0] = a1;
    v84 = 0;
    v82[1] = j;
    v83 = 0;
    sub_9253C((int)sub_195420, (int)&v73);
    v74 = 0;
    sub_9253C((int)sub_1953FC, (int)&v74);
    if ( !v65 || !*v65 )
      goto LABEL_123;
    v42 = 0;
    v69 = nullsub_39;
    v62 = (int *)(v65 + 2);
    v66 = sub_195420;
    for ( j = 1; ; ++j )
    {
      v43 = *v62++;
      v38 = (size_t *)(j - 1);
      v44 = sub_2209DC(v43);
      v45 = *(_DWORD **)(*(_DWORD *)(*(_DWORD *)(v44 + 4) + 4) + 16);
      if ( v45[6] )
        goto LABEL_149;
      ((void (__fastcall *)(_DWORD))loc_1CD290)(*(_DWORD *)(*(_DWORD *)(*(_DWORD *)(v44 + 4) + 4) + 16));
      v46 = sub_171258(*(_DWORD **)(v43 + 24));
      sub_196AD0(v46, *(_BYTE *)(v43 + 20) & 0x1F, v37, &v74, &v73);
      if ( v38 == (size_t *)(*v65 - 1) )
        goto LABEL_95;
      if ( j >= *v65 )
        break;
      if ( v45 != *(_DWORD **)(*(_DWORD *)(*(_DWORD *)(sub_2209DC(*v62) + 4) + 4) + 16) )
      {
LABEL_95:
        v38 = v74;
        if ( v74 )
        {
          v64 = (unsigned int *)*v74;
          if ( *v74 != v42 )
            goto LABEL_97;
          v51 = v73;
          v52 = *(_BYTE *)(v43 + 20) & 0x1F;
        }
        else
        {
          v51 = v73;
          if ( v42 )
          {
            if ( v73 )
              *v73 = (unsigned int)v74;
            goto LABEL_109;
          }
          v64 = 0;
          v52 = *(_BYTE *)(v43 + 20) & 0x1F;
        }
        v68 = sub_9253C((int)v69, 0);
        do
        {
          v75 = 0;
          sub_9253C((int)v66, (int)&v75);
          if ( v51 && *v51 )
          {
            v53 = v51 + 1;
            v54 = 0;
            do
            {
              v55 = v53[1];
              ++v53;
              sub_196AD0(v55, v52, v37, &v74, &v75);
              ++v54;
            }
            while ( v54 < *v51 );
          }
          v56 = v74;
          if ( v74 )
            v56 = (unsigned int *)*v74;
          if ( v56 != v64 )
            break;
          v51 = v75;
          if ( !v75 )
            break;
        }
        while ( *v75 );
        sub_92620(v68);
        v38 = v74;
        if ( !v74 )
          goto LABEL_145;
        v64 = (unsigned int *)*v74;
LABEL_97:
        if ( v64 )
        {
          v47 = v38 + 1;
          v48 = 0;
          do
          {
            v49 = (const char *)v47[1];
            ++v47;
            sub_196FB4(v49, 1, (int)v82, v45);
            ++v48;
          }
          while ( v48 < *v38 );
          v50 = v73;
          v38 = v74;
          if ( v73 )
LABEL_101:
            *v50 = 0;
          if ( !v38 )
            goto LABEL_109;
        }
        else
        {
          v50 = v73;
          if ( v73 )
            goto LABEL_101;
        }
        v42 = *v38;
      }
      while ( j >= *v65 )
      {
LABEL_123:
        v57 = v84;
        if ( v83 && *v83 || v84 && *v84 )
        {
          *a5 = v83;
          *a6 = v57;
          sub_92620(v71);
          sub_92E40((int)v70);
          goto LABEL_64;
        }
        sub_92F64(2, "see caller, this text doesn't matter", v84);
LABEL_145:
        if ( v73 )
          *v73 = (unsigned int)v38;
LABEL_109:
        v42 = 0;
      }
    }
    sub_94700(
      (int)"linespec.c",
      3811,
      "%s: Assertion `%s' failed.",
      "symbol* VEC_symbolp_index(const VEC_symbolp*, unsigned int, const char*, unsigned int)",
      "index");
LABEL_149:
    v59 = sub_94700(
            (int)"linespec.c",
            3800,
            "%s: Assertion `%s' failed.",
            "void find_method(linespec_state*, VEC_symtab_ptr*, const char*, const char*, VEC_symbolp*, VEC_symbolp**, VE"
            "C_bound_minimal_symbol_d**)",
            "!pspace->executing_startup");
    sub_92E40((int)v70);
    if ( HIDWORD(v59) != 1 )
    {
      sub_339E78(v59);
      sub_92E60();
    }
    v60 = (int *)sub_339E78(v59);
    if ( v60[1] != 2 )
      sub_92F1C(*v60, v60[1], v60[2]);
    sub_339EF8(v60);
  }
LABEL_64:
  sub_92620(v67);
  if ( p_ptr != &ptr )
    sub_339E64(p_ptr);
  if ( v87 != v89 )
    sub_339E64(v87);
LABEL_16:
  if ( v85[0] != v86 )
    sub_339E64(v85[0]);
}

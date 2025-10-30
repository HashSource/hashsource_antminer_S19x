void **__fastcall sub_19966C(void **a1, _DWORD *a2, int a3)
{
  unsigned int v3; // r8
  unsigned int *v4; // r9
  int v8; // r9
  int v9; // r11
  const char *v10; // r0
  int v11; // r7
  int v12; // r1
  int v13; // r3
  int v14; // r8
  int v15; // r0
  int v16; // r7
  int v17; // r1
  int v18; // r3
  void *v20; // r5
  size_t *v21; // r8
  unsigned int *v22; // r3
  unsigned int v23; // r8
  int v24; // r9
  int v25; // r11
  size_t *v26; // r7
  unsigned int *v27; // r3
  unsigned int v28; // r8
  unsigned int *v29; // r7
  _DWORD *v30; // r10
  unsigned int v31; // r7
  int v32; // r3
  int v33; // r2
  int v34; // r1
  int v35; // r2
  bool v36; // cc
  int v37; // r0
  int v38; // r3
  int v39; // r1
  const char *v40; // r0
  _DWORD *v41; // r3
  int v42; // r0
  int v43; // r0
  int v44; // r3
  const char *v45; // r0
  int v46; // r11
  __int64 v47; // r0
  int v48; // r11
  int v49; // r0
  int v50; // r8
  _DWORD *v51; // r3
  int v52; // r2
  int v53; // r3
  int v54; // r3
  int v55; // r11
  unsigned int v56; // r9
  int *v57; // r7
  _DWORD *v58; // r8
  int v59; // r8
  int v60; // r0
  int v61; // r12
  int v62; // r12
  unsigned int *v63; // r3
  void *v64; // r0
  void *v65; // r3
  void *v66; // r2
  bool v67; // zf
  void *v68; // r0
  void *v69; // r0
  void *v70; // r2
  int v71; // r0
  int v72; // r1
  int v73; // r3
  unsigned int v74; // r0
  char *v75; // r0
  int v76; // r3
  unsigned int v77; // r0
  char *v78; // r0
  int v79; // r3
  char *v80; // r9
  char *v81; // r10
  unsigned int v82; // r8
  int v83; // r7
  int *v84; // r0
  int v85; // r2
  unsigned int v86; // r2
  unsigned int v87; // lr
  int i; // r12
  int v89; // r10
  int v90; // r8
  char *v91; // r1
  unsigned int v92; // r3
  int v93; // t1
  char *v94; // r10
  int v95; // r8
  int *v96; // r7
  const char *v97; // r3
  int v98; // t1
  int v99; // r0
  void *v100; // r0
  int v101; // r2
  int v102; // r0
  int v103; // r7
  _DWORD *v104; // r0
  void *v105; // r0
  int v106; // [sp+8h] [bp-114h]
  int v107; // [sp+8h] [bp-114h]
  int v108; // [sp+Ch] [bp-110h]
  char *v109; // [sp+10h] [bp-10Ch]
  void *v110; // [sp+18h] [bp-104h]
  char *v111; // [sp+18h] [bp-104h]
  _DWORD v112[9]; // [sp+20h] [bp-FCh] BYREF
  int v113; // [sp+44h] [bp-D8h]
  int v114; // [sp+4Ch] [bp-D0h] BYREF
  int v115; // [sp+50h] [bp-CCh] BYREF
  void *ptr; // [sp+54h] [bp-C8h] BYREF
  void *v117; // [sp+58h] [bp-C4h]
  void *v118; // [sp+5Ch] [bp-C0h]
  void *v119; // [sp+60h] [bp-BCh] BYREF
  int v120; // [sp+64h] [bp-B8h]
  int v121; // [sp+68h] [bp-B4h]
  void *v122; // [sp+6Ch] [bp-B0h] BYREF
  void *v123; // [sp+70h] [bp-ACh]
  void *v124; // [sp+74h] [bp-A8h]
  int v125[20]; // [sp+78h] [bp-A4h] BYREF
  _DWORD v126[10]; // [sp+C8h] [bp-54h] BYREF
  int s[11]; // [sp+F0h] [bp-2Ch] BYREF

  v3 = 0;
  v4 = *(unsigned int **)(a3 + 36);
  *a1 = 0;
  a1[1] = 0;
  a1[2] = 0;
  if ( !v4 )
  {
    v21 = *(size_t **)(a3 + 28);
    if ( v21 )
    {
      memset(s, 0, 0x28u);
      qsort(v21 + 2, *v21, 4u, (__compar_fn_t)sub_1959F8);
      v22 = *(unsigned int **)(a3 + 28);
      if ( v22 && *v22 )
      {
        v23 = 0;
        do
        {
          v24 = v22[v23 + 2];
          v25 = *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(sub_2209DC(v24) + 4) + 4) + 16);
          ((void (__fastcall *)(int))loc_1CD290)(v25);
          if ( sub_195850(s, a2[5], v24) && sub_195990(a2[9], v25, s[5]) )
          {
            v45 = (const char *)sub_21B3C4(v24);
            sub_199334((int)a2, (int)a1, s, v45, 0);
          }
          v22 = *(unsigned int **)(a3 + 28);
          ++v23;
        }
        while ( v22 && v23 < *v22 );
      }
      v26 = *(size_t **)(a3 + 32);
      if ( !v26 )
        goto LABEL_9;
      goto LABEL_31;
    }
    v26 = *(size_t **)(a3 + 32);
    if ( v26 )
    {
      memset(s, *(_DWORD *)(a3 + 28), 0x28u);
LABEL_31:
      qsort(v26 + 2, *v26, 8u, (__compar_fn_t)sub_1952E0);
      v27 = *(unsigned int **)(a3 + 32);
      if ( !v27 || !*v27 )
        goto LABEL_9;
      v28 = 0;
      while ( 1 )
      {
        v29 = &v27[2 * v28];
        ((void (__fastcall *)(_DWORD))loc_1CD290)(*(_DWORD *)(v29[3] + 16));
        v30 = (_DWORD *)v29[3];
        v31 = v29[2];
        memset(v125, 0, 0x28u);
        if ( !sub_1B122C(v30, v31, &v114) )
        {
          v32 = *(__int16 *)(v31 + 22);
          v33 = *(_DWORD *)(v31 + 8);
          v125[9] = (int)v30;
          if ( v32 == -1 )
            goto LABEL_178;
          v34 = *(_DWORD *)(v30[36] + 4 * v32);
          v125[0] = dword_487D2C;
          v35 = v33 + v34;
          v125[5] = v35;
          goto LABEL_40;
        }
        sub_21DF08(v112, v114, 0);
        v46 = a2[5];
        v125[0] = v112[0];
        v125[1] = v112[1];
        v125[2] = v112[2];
        v125[3] = v112[3];
        v125[4] = v112[4];
        v125[5] = v112[5];
        v125[6] = v112[6];
        v125[7] = v112[7];
        v34 = v113;
        v125[8] = v112[8];
        v125[9] = v113;
        if ( v46 )
        {
          if ( v125[1] && ((*(_BYTE *)(*(_DWORD *)(v125[1] + 4) + 40) & 1) != 0 || *(_DWORD *)(v125[1] + 24) == 9) )
          {
            v47 = sub_1B7250(v30);
            v48 = v47;
            v125[5] = v114;
            v49 = ((int (__fastcall *)(_DWORD, _DWORD))loc_168F04)(v47, HIDWORD(v47));
            v35 = v125[5];
            if ( v49 )
            {
              v35 = ((int (__fastcall *)(int, int))loc_168F50)(v48, v125[5]);
              v125[5] = v35;
            }
            v32 = *(__int16 *)(v31 + 22);
            goto LABEL_40;
          }
          sub_21E6D0(v125);
        }
        v32 = *(__int16 *)(v31 + 22);
        v35 = v125[5];
LABEL_40:
        v36 = v32 < 0;
        v37 = a2[9];
        if ( v32 < 0 )
        {
          v38 = 0;
        }
        else
        {
          v34 = v30[42];
          v38 = 3 * v32;
        }
        if ( !v36 )
          v38 = v34 + 4 * v38;
        v39 = v30[4];
        v125[3] = v38;
        if ( sub_195990(v37, v39, v35) )
        {
          v40 = (const char *)sub_21B3C4(v31);
          sub_199334((int)a2, (int)a1, v125, v40, 0);
        }
        v27 = *(unsigned int **)(a3 + 32);
        ++v28;
        if ( !v27 || v28 >= *v27 )
          goto LABEL_9;
      }
    }
    v50 = *(_DWORD *)(a3 + 20);
    if ( v50 == 3 )
      return a1;
    v51 = *(_DWORD **)(a3 + 24);
    if ( v51 )
    {
      if ( *v51 == 1 && !v51[2] )
      {
        v102 = ((int (__fastcall *)(_DWORD))loc_1CD290)(a2[1]);
        sub_20324C(v102);
        if ( !a2[3] )
          goto LABEL_170;
        while ( 1 )
        {
          v103 = sub_204308(a2[3]);
          v104 = *(_DWORD **)(a3 + 24);
          if ( *v104 )
            break;
          sub_94700(
            (int)"linespec.c",
            2159,
            "%s: Assertion `%s' failed.",
            "symtab* VEC_symtab_ptr_pop(VEC_symtab_ptr*, const char*, unsigned int)",
            "pop");
LABEL_170:
          sub_203210(v126);
          *(_QWORD *)(a2 + 3) = __PAIR64__(v126[4], v126[1]);
        }
        free(v104);
        *(_DWORD *)(a3 + 24) = 0;
        *(_DWORD *)(a3 + 24) = sub_195604(v103, a2[2]);
        v26 = (size_t *)1;
        v50 = *(_DWORD *)(a3 + 20);
      }
    }
    else
    {
      v26 = 0;
    }
    memset(&v125[10], 0, 0x28u);
    v108 = *(_DWORD *)(a3 + 16);
    if ( v50 == 1 )
    {
      if ( v108 )
        v101 = *(_DWORD *)(a3 + 16);
      else
        v101 = 5;
      v108 = v101;
      if ( v26 )
        v108 = v101 + a2[4];
    }
    else if ( v50 == 2 )
    {
      if ( v108 )
        v52 = *(_DWORD *)(a3 + 16);
      else
        v52 = 15;
      if ( v26 )
        v53 = a2[4];
      else
        v53 = v52;
      if ( v26 )
        v54 = v53 - v52;
      else
        v54 = -v53;
      v108 = v54;
    }
    v55 = a2[6];
    v56 = 0;
    ptr = 0;
    v117 = 0;
    v118 = 0;
    if ( !v55 )
    {
      v126[0] = 0;
      sub_19949C((int)s, (unsigned int **)(a3 + 24), v108, (int)v126);
      v57 = (int *)s[0];
      v106 = s[1];
      if ( s[0] == s[1] && v126[0] )
      {
        sub_19949C((int)&v119, (unsigned int **)(a3 + 24), *(_DWORD *)v126[0], (int)v126);
        v105 = (void *)s[0];
        v57 = (int *)v119;
        v72 = v120;
        v67 = s[0] == 0;
        s[0] = (int)v119;
        s[1] = v120;
        s[2] = v121;
        v119 = 0;
        v120 = 0;
        v121 = 0;
        if ( !v67 )
        {
          sub_339E64(v105);
          if ( v119 )
            sub_339E64(v119);
          v57 = (int *)s[0];
        }
        v106 = s[1];
      }
      v73 = (v106 - (int)v57) >> 3;
      v74 = -858993459 * v73;
      if ( !(-858993459 * v73) )
        goto LABEL_165;
      if ( v74 > 0x3FFFFFFF )
        sub_33D01C(v74, v72);
      v75 = (char *)sub_9836C(858993460 * v73);
      v57 = (int *)s[0];
      v111 = v75;
      v106 = s[1];
      goto LABEL_104;
    }
    v57 = s;
    v58 = *(_DWORD **)(a3 + 24);
    v122 = 0;
    v125[14] = v108;
    v123 = 0;
    v124 = 0;
    s[0] = v125[10];
    s[1] = v125[11];
    s[2] = v125[12];
    s[3] = v125[13];
    s[4] = v108;
    s[5] = v125[15];
    s[6] = v125[16];
    s[7] = v125[17];
    s[8] = v125[18];
    s[9] = v125[19];
    if ( !v58 || !*v58 )
      goto LABEL_93;
    v59 = v58[2];
    if ( !v59 )
    {
LABEL_177:
      sub_94700(
        (int)"linespec.c",
        4216,
        "%s: Assertion `%s' failed.",
        "std::vector<symtab_and_line> decode_digits_list_mode(linespec_state*, linespec_p, symtab_and_line)",
        "elt != NULL");
LABEL_178:
      sub_94700((int)"linespec.c", 4366, "Section index is uninitialized");
      if ( v110 )
        sub_339E64(v110);
      if ( s[0] )
        sub_339E64((void *)s[0]);
      goto LABEL_141;
    }
    v55 = 1;
    while ( 1 )
    {
      ((void (__fastcall *)(_DWORD))loc_1CD290)(*(_DWORD *)(*(_DWORD *)(*(_DWORD *)(v59 + 4) + 4) + 16));
      v60 = sub_21E260(v59, s[4], 0);
      v61 = *(_DWORD *)(v59 + 4);
      if ( !v60 )
        v60 = v59;
      s[1] = v60;
      v62 = *(_DWORD *)(*(_DWORD *)(v61 + 4) + 16);
      s[5] = 0;
      s[0] = v62;
      BYTE1(s[7]) = 1;
      sub_199334((int)a2, (int)&v122, s, 0, 0);
      v63 = *(unsigned int **)(a3 + 24);
      ++v56;
      if ( !v63 || v56 >= *v63 )
        break;
      v59 = v63[v56 + 2];
      if ( !v59 )
        goto LABEL_177;
    }
    v64 = ptr;
    v65 = v122;
    v66 = v123;
    v67 = ptr == 0;
    ptr = v122;
    v117 = v123;
    v118 = v124;
    v122 = 0;
    v123 = 0;
    v124 = 0;
    if ( v67 )
      goto LABEL_94;
    sub_339E64(v64);
    v68 = v122;
    if ( v122 )
    {
LABEL_92:
      sub_339E64(v68);
      goto LABEL_93;
    }
    while ( 1 )
    {
LABEL_93:
      v65 = ptr;
      v66 = v117;
LABEL_94:
      if ( v65 != v66 )
      {
        v69 = *a1;
        a1[1] = v66;
        v70 = v118;
        *a1 = v65;
        ptr = 0;
        a1[2] = v70;
        v117 = 0;
        v118 = 0;
        if ( v69 )
        {
          sub_339E64(v69);
          if ( ptr )
            sub_339E64(ptr);
        }
        if ( !*(_DWORD *)a3 )
        {
          v71 = sub_204308(a2[3]);
          *(_DWORD *)a3 = sub_327254(v71);
        }
        goto LABEL_9;
      }
      if ( *(_DWORD *)a3 )
      {
        sub_92F64(2, "No line %d in file \"%s\".", v108, *(const char **)a3);
LABEL_141:
        if ( ptr )
          sub_339E64(ptr);
        goto LABEL_143;
      }
      v74 = sub_92F64(2, "No line %d in the current file.", v108);
LABEL_165:
      v111 = (char *)v74;
LABEL_104:
      v76 = (v106 - (int)v57) >> 3;
      v77 = -858993459 * v76;
      if ( -858993459 * v76 )
      {
        if ( v77 > 0x3FFFFFFF )
          sub_33D01C(v77, v72);
        v78 = (char *)sub_9836C(858993460 * v76);
        v79 = s[0];
        v80 = v78;
        if ( s[0] == s[1] )
          goto LABEL_153;
      }
      else
      {
        v79 = (int)v57;
        if ( v57 == (int *)v106 )
          goto LABEL_135;
        v80 = 0;
      }
      v81 = v80 - 4;
      v82 = 0;
      v109 = v111 - 4;
      do
      {
        ((void (__fastcall *)(_DWORD))loc_1CD290)(*(_DWORD *)(v79 + 40 * v82));
        v83 = s[0] + 40 * v82;
        *((_DWORD *)v109 + 1) = 1;
        v109 += 4;
        v84 = sub_C2550(*(_DWORD *)(v83 + 20), *(_DWORD *)(v83 + 12));
        ++v82;
        v57 = (int *)s[0];
        v106 = s[1];
        v85 = s[1] - s[0];
        *((_DWORD *)v81 + 1) = v84;
        v81 += 4;
        v79 = (int)v57;
        v86 = -858993459 * (v85 >> 3);
      }
      while ( v86 > v82 );
      if ( v86 )
      {
        v87 = 0;
        for ( i = *(_DWORD *)v80; ; i = *(_DWORD *)&v80[4 * v87] )
        {
          while ( 1 )
          {
            ++v87;
            if ( !i )
              break;
            if ( v86 <= v87 )
              goto LABEL_121;
            v89 = *(_DWORD *)&v80[4 * v87];
            v90 = 4 * v87;
            if ( v89 == i )
            {
LABEL_120:
              *(_DWORD *)&v111[v90] = 0;
            }
            else
            {
              v91 = &v80[v90 + 4];
              v92 = v87;
              while ( v86 > ++v92 )
              {
                v90 = v91 - v80;
                v93 = *(_DWORD *)v91;
                v91 += 4;
                if ( v93 == i )
                  goto LABEL_120;
              }
            }
            i = v89;
          }
          if ( v86 <= v87 )
            break;
        }
      }
LABEL_121:
      if ( (int *)v106 != v57 )
      {
        v94 = v111 - 4;
        while ( 2 )
        {
          v98 = *((_DWORD *)v94 + 1);
          v94 += 4;
          if ( !v98 )
            goto LABEL_127;
          v99 = *(_DWORD *)&v80[4 * v55];
          if ( v99 )
          {
            v95 = 40 * v55;
            v107 = sub_C23DC(v99);
            v96 = (int *)(s[0] + 40 * v55);
            if ( a2[5] )
              goto LABEL_133;
          }
          else
          {
            v97 = (const char *)a2[5];
            v95 = 40 * v55;
            v96 = &v57[10 * v55];
            if ( !v97 )
            {
              v96[4] = v108;
              goto LABEL_126;
            }
            v107 = *(_DWORD *)&v80[4 * v55];
LABEL_133:
            sub_21E6D0(v96);
            v96 = (int *)(s[0] + v95);
          }
          v96[4] = v108;
          if ( v107 )
            v97 = (const char *)sub_21B3C4(v107);
          else
            v97 = 0;
LABEL_126:
          sub_199334((int)a2, (int)&ptr, v96, v97, 0);
          v57 = (int *)s[0];
          v106 = s[1];
LABEL_127:
          if ( -858993459 * ((v106 - (int)v57) >> 3) <= (unsigned int)++v55 )
            break;
          continue;
        }
      }
      if ( v80 )
LABEL_153:
        sub_339E64(v80);
LABEL_135:
      if ( v111 )
        sub_339E64(v111);
      v68 = (void *)s[0];
      if ( s[0] )
        goto LABEL_92;
    }
  }
  memset(s, 0, 0x28u);
  if ( *v4 )
  {
    do
    {
      v8 = v4[v3 + 2];
      v9 = *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(sub_2209DC(v8) + 4) + 4) + 16);
      if ( sub_195850(s, a2[5], v8) && sub_195990(a2[9], v9, s[5]) )
      {
        v10 = (const char *)sub_21B3C4(v8);
        sub_199334((int)a2, (int)a1, s, v10, 0);
        v4 = *(unsigned int **)(a3 + 36);
        ++v3;
        if ( !v4 )
          break;
      }
      else
      {
        v4 = *(unsigned int **)(a3 + 36);
        ++v3;
        if ( !v4 )
          break;
      }
    }
    while ( v3 < *v4 );
  }
LABEL_9:
  v11 = a2[7];
  if ( v11 )
  {
    sub_19D0B8(&v115, a3);
    v12 = *(_DWORD *)(v11 + 4);
    v13 = v115;
    v115 = 0;
    *(_DWORD *)(v11 + 4) = v13;
    if ( v12 )
    {
      ((void (__fastcall *)(int))loc_19D154)(v11 + 4);
      if ( v115 )
        ((void (__fastcall *)(int *))loc_19D154)(&v115);
    }
    v14 = *(_DWORD *)(a2[7] + 4);
    v15 = ((int (__fastcall *)(int))loc_19CEBC)(v14);
    v16 = v15;
    if ( !*(_DWORD *)(v15 + 12) || (v17 = *(_DWORD *)(v15 + 4), *(_BYTE *)a2[7] = 1, v17) )
    {
      if ( !a2[10] )
        goto LABEL_16;
LABEL_20:
      v20 = (void *)sub_19CF58(v16);
      sub_19DC94(v14, v20);
      if ( v20 )
        free(v20);
      goto LABEL_16;
    }
    v41 = *(_DWORD **)(a3 + 40);
    if ( v41 && *v41 == 1 )
    {
      v42 = sub_21B3C4(v41[2]);
      v43 = sub_327254(v42);
      v44 = a2[10];
      *(_DWORD *)(v16 + 4) = v43;
      if ( !v44 )
        goto LABEL_16;
      goto LABEL_20;
    }
    sub_94700(
      (int)"linespec.c",
      2117,
      "%s: Assertion `%s' failed.",
      "void canonicalize_linespec(linespec_state*, linespec_p)",
      "ls->labels.function_symbols != NULL && (VEC_length (symbolp, ls->labels.function_symbols) == 1)");
LABEL_143:
    v100 = *a1;
    if ( *a1 )
      sub_339E64(v100);
    sub_338FFC(v100);
  }
LABEL_16:
  if ( *a1 != a1[1] )
  {
    v18 = a2[7];
    if ( v18 )
      *(_BYTE *)(v18 + 1) = 1;
  }
  return a1;
}

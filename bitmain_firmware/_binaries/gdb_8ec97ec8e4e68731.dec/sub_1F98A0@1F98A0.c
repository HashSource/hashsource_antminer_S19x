int __fastcall sub_1F98A0(int a1, int *a2, int a3, int a4, int a5, int a6)
{
  int v9; // r7
  char v10; // r3
  int v11; // r9
  int v12; // r8
  char *v13; // r6
  char v14; // r3
  size_t v15; // r0
  int v16; // r7
  char *v17; // r6
  int v18; // r3
  int v19; // r3
  __int64 v20; // r0
  int *v21; // r5
  int v22; // r2
  int v23; // r0
  int v24; // r1
  int v25; // r2
  int v26; // r12
  int *v27; // lr
  bool v28; // zf
  int v29; // r3
  size_t v30; // r2
  int v31; // r0
  int v32; // r1
  int v33; // r2
  int **v34; // r12
  int *v35; // r3
  int *v36; // lr
  bool v37; // zf
  void *v38; // r2
  _BYTE *v39; // r3
  __int64 v40; // r0
  int v41; // r2
  int v43; // r8
  int v44; // r3
  int v45; // r6
  int v46; // r3
  int v47; // r2
  _QWORD *v48; // r3
  int *v49; // r0
  int v50; // r7
  int v51; // r1
  int v52; // r0
  unsigned int v53; // r2
  unsigned __int64 v54; // kr00_8
  int v55; // r1
  _BYTE *v56; // r3
  __int64 v57; // r0
  int v58; // r2
  const char *v59; // r8
  char *v60; // r0
  const char *v61; // r5
  int v62; // r7
  int v63; // r9
  const char *v64; // r0
  char *v65; // r1
  int v66; // r2
  int v67; // r0
  int v68; // r1
  int v69; // r2
  int v70; // r12
  int *v71; // lr
  bool v72; // zf
  int v73; // r3
  int v74; // r2
  char *v75; // r0
  const char *v76; // r5
  size_t v77; // r2
  int v78; // r0
  int v79; // r1
  int v80; // r2
  int **v81; // r12
  int *v82; // r3
  int *v83; // lr
  bool v84; // zf
  char *v85; // r0
  char *v86; // r6
  const char *v87; // r5
  int v88; // r2
  int v89; // r0
  int v90; // r1
  int v91; // r2
  int v92; // r12
  int *v93; // lr
  bool v94; // zf
  int v95; // r3
  size_t v96; // r2
  int v97; // r0
  int v98; // r1
  int v99; // r2
  int **v100; // r12
  int *v101; // r3
  int *v102; // lr
  bool v103; // zf
  _BYTE *v104; // r3
  __int64 v105; // r0
  int v106; // r2
  char v107; // r3
  _BYTE *v108; // [sp+10h] [bp-C4h]
  char *save_ptr; // [sp+18h] [bp-BCh] BYREF
  unsigned int v111; // [sp+1Ch] [bp-B8h] BYREF
  void *v112; // [sp+20h] [bp-B4h] BYREF
  _BYTE v113[16]; // [sp+28h] [bp-ACh] BYREF
  void *v114; // [sp+38h] [bp-9Ch] BYREF
  int v115; // [sp+3Ch] [bp-98h]
  _BYTE v116[16]; // [sp+40h] [bp-94h] BYREF
  void *v117; // [sp+50h] [bp-84h] BYREF
  int v118; // [sp+54h] [bp-80h]
  _DWORD v119[4]; // [sp+58h] [bp-7Ch] BYREF
  void *ptr; // [sp+68h] [bp-6Ch] BYREF
  _BYTE v121[24]; // [sp+6Ch] [bp-68h] BYREF
  _DWORD v122[19]; // [sp+84h] [bp-50h] BYREF

  v108 = (_BYTE *)(a1 + 8);
  *(_DWORD *)a1 = a1 + 8;
  *(_DWORD *)(a1 + 4) = 0;
  *(_BYTE *)(a1 + 8) = 0;
  sub_266608(v122);
  v9 = *a2;
  v10 = *(_BYTE *)(a1 + 28);
  *(_DWORD *)(a1 + 24) = -1;
  v11 = *(__int16 *)(v9 + 4);
  *(_BYTE *)(a1 + 28) = v10 & 0xFE;
  if ( !v11 )
    sub_946E0("Encountered void enum value");
  v12 = *(_DWORD *)(v9 + 24);
  v13 = *(char **)(v12 + 16);
  if ( !strncmp(v13, "RUST$ENCODED$ENUM$", 0x12u) )
  {
    v14 = *(_BYTE *)(a1 + 28);
    save_ptr = 0;
    *(_BYTE *)(a1 + 28) = v14 | 1;
    if ( v11 != 1 )
      sub_946E0("Only expected one field in %s type", "RUST$ENCODED$ENUM$");
    v112 = v113;
    v15 = strlen(v13);
    v16 = *(_DWORD *)(v12 + 12);
    sub_1F955C(&v112, v13, (int)&v13[v15]);
    v17 = strtok_r((char *)v112 + 18, "$", &save_ptr);
    if ( !v17 )
LABEL_62:
      sub_946E0("Invalid form for %s", "RUST$ENCODED$ENUM$");
    while ( sscanf(v17, "%lu", &v111) == 1 )
    {
      v18 = *(_DWORD *)(v16 + 24);
      if ( *(__int16 *)(v18 + 4) <= v111 )
        sub_946E0("%s refers to field after end of member type", "RUST$ENCODED$ENUM$");
      v19 = *(_DWORD *)(v18 + 24);
      v16 = *(_DWORD *)(v19 + 24 * v111 + 12);
      a4 += ((((*(int *)(v19 + 24 * v111 + 4) >> 31) & 7u) + *(_DWORD *)(v19 + 24 * v111)) >> 3)
          | ((*(_DWORD *)(v19 + 24 * v111 + 4)
            + __CFADD__((*(int *)(v19 + 24 * v111 + 4) >> 31) & 7, *(_DWORD *)(v19 + 24 * v111))) << 29);
      v17 = strtok_r(0, "$", &save_ptr);
      if ( !v17 )
        goto LABEL_62;
    }
    v20 = sub_26D134(v16, a3 + a4);
    v21 = *(int **)(*a2 + 8);
    if ( v20 )
    {
      *(_DWORD *)(a1 + 24) = 0;
      v114 = v116;
      if ( v21 )
        v66 = (int)v21 + strlen((const char *)v21);
      else
        v66 = -1;
      sub_1F955C(&v114, v21, v66);
      if ( v115 == 2147483646 || v115 == 0x7FFFFFFF )
        sub_33D184("basic_string::append");
      v67 = sub_33C320(&v114, "::", 2);
      v117 = v119;
      v70 = v67;
      v71 = (int *)(v67 + 8);
      v72 = *(_DWORD *)v67 == v67 + 8;
      if ( *(_DWORD *)v67 == v67 + 8 )
      {
        v67 = *v71;
        v21 = v119;
        v68 = v71[1];
        v69 = v71[2];
        v73 = v71[3];
      }
      else
      {
        v117 = *(void **)v67;
        v73 = *(_DWORD *)(v67 + 8);
      }
      if ( v72 )
      {
        *v21 = v67;
        v21[1] = v68;
        v21[2] = v69;
        v21[3] = v73;
      }
      else
      {
        v119[0] = v73;
      }
      v118 = *(_DWORD *)(v70 + 4);
      *(_BYTE *)(v70 + 8) = 0;
      v74 = *a2;
      *(_DWORD *)(v70 + 4) = 0;
      *(_DWORD *)v70 = v71;
      v75 = strrchr(*(const char **)(*(_DWORD *)(*(_DWORD *)(*(_DWORD *)(v74 + 24) + 12) + 24) + 8), 58);
      v76 = v75;
      if ( v75 )
        v76 = v75 + 1;
      v77 = strlen(v76);
      if ( 0x7FFFFFFF - v118 < v77 )
        sub_33D184("basic_string::append");
      v78 = sub_33C320(&v117, v76, v77);
      ptr = &v121[4];
      v81 = (int **)v78;
      v83 = (int *)(v78 + 8);
      v82 = *(int **)v78;
      v84 = *(_DWORD *)v78 == v78 + 8;
      if ( *(_DWORD *)v78 == v78 + 8 )
      {
        v17 = &v121[4];
        v79 = *(_DWORD *)(v78 + 12);
        v80 = *(_DWORD *)(v78 + 16);
        v82 = *(int **)(v78 + 20);
        v78 = *v83;
      }
      else
      {
        ptr = *(void **)v78;
      }
      if ( v84 )
      {
        *(_DWORD *)v17 = v78;
        *((_DWORD *)v17 + 1) = v79;
        *((_DWORD *)v17 + 2) = v80;
        *((_DWORD *)v17 + 3) = v82;
      }
      else
      {
        v82 = v81[2];
      }
      if ( !v84 )
        *(_DWORD *)&v121[4] = v82;
      *(_DWORD *)v121 = v81[1];
      *v81 = v83;
      v81[1] = 0;
      *((_BYTE *)v81 + 8) = 0;
      v38 = ptr;
      v39 = *(_BYTE **)a1;
      if ( ptr != &v121[4] )
      {
LABEL_31:
        v40 = *(_QWORD *)v121;
        if ( v108 == v39 )
        {
          *(_DWORD *)a1 = v38;
          *(_QWORD *)(a1 + 4) = v40;
        }
        else
        {
          *(_DWORD *)a1 = v38;
          *(_DWORD *)(a1 + 4) = v40;
          v41 = *(_DWORD *)(a1 + 8);
          *(_DWORD *)(a1 + 8) = HIDWORD(v40);
          if ( v39 )
          {
            ptr = v39;
            *(_DWORD *)&v121[4] = v41;
LABEL_34:
            *(_DWORD *)v121 = 0;
            *v39 = 0;
            if ( ptr != &v121[4] )
              sub_339E64(ptr);
            if ( v117 != v119 )
              sub_339E64(v117);
            if ( v114 != v116 )
              sub_339E64(v114);
            if ( v112 != v113 )
              sub_339E64(v112);
            return a1;
          }
        }
        ptr = &v121[4];
        v39 = &v121[4];
        goto LABEL_34;
      }
    }
    else
    {
      *(_DWORD *)(a1 + 24) = 1;
      v114 = v116;
      if ( v21 )
        v22 = (int)v21 + strlen((const char *)v21);
      else
        v22 = -1;
      sub_1F955C(&v114, v21, v22);
      if ( v115 == 2147483646 || v115 == 0x7FFFFFFF )
        sub_33D184("basic_string::append");
      v23 = sub_33C320(&v114, "::", 2);
      v117 = v119;
      v26 = v23;
      v27 = (int *)(v23 + 8);
      v28 = *(_DWORD *)v23 == v23 + 8;
      if ( *(_DWORD *)v23 == v23 + 8 )
      {
        v23 = *v27;
        v21 = v119;
        v24 = v27[1];
        v25 = v27[2];
        v29 = v27[3];
      }
      else
      {
        v117 = *(void **)v23;
        v29 = *(_DWORD *)(v23 + 8);
      }
      if ( v28 )
      {
        *v21 = v23;
        v21[1] = v24;
        v21[2] = v25;
        v21[3] = v29;
      }
      else
      {
        v119[0] = v29;
      }
      v118 = *(_DWORD *)(v26 + 4);
      *(_DWORD *)(v26 + 4) = 0;
      *(_BYTE *)(v26 + 8) = 0;
      *(_DWORD *)v26 = v27;
      v30 = strlen(v17);
      if ( 0x7FFFFFFF - v118 < v30 )
        sub_33D184("basic_string::append");
      v31 = sub_33C320(&v117, v17, v30);
      ptr = &v121[4];
      v34 = (int **)v31;
      v36 = (int *)(v31 + 8);
      v35 = *(int **)v31;
      v37 = *(_DWORD *)v31 == v31 + 8;
      if ( *(_DWORD *)v31 == v31 + 8 )
      {
        v17 = &v121[4];
        v32 = *(_DWORD *)(v31 + 12);
        v33 = *(_DWORD *)(v31 + 16);
        v35 = *(int **)(v31 + 20);
        v31 = *v36;
      }
      else
      {
        ptr = *(void **)v31;
      }
      if ( v37 )
      {
        *(_DWORD *)v17 = v31;
        *((_DWORD *)v17 + 1) = v32;
        *((_DWORD *)v17 + 2) = v33;
        *((_DWORD *)v17 + 3) = v35;
      }
      else
      {
        v35 = v34[2];
      }
      if ( !v37 )
        *(_DWORD *)&v121[4] = v35;
      *(_DWORD *)v121 = v34[1];
      *v34 = v36;
      v34[1] = 0;
      *((_BYTE *)v34 + 8) = 0;
      v38 = ptr;
      v39 = *(_BYTE **)a1;
      if ( ptr != &v121[4] )
        goto LABEL_31;
    }
    sub_33B48C(a1, &ptr);
    v39 = ptr;
    goto LABEL_34;
  }
  v43 = *(_DWORD *)(v12 + 12);
  v44 = *(_DWORD *)(v43 + 24);
  if ( !*(_WORD *)(v44 + 4) )
    sub_946E0("Could not find enum discriminant field");
  if ( v11 == 1 )
  {
    v85 = strrchr(*(const char **)(v44 + 8), 58);
    v86 = *(char **)(v9 + 8);
    v87 = v85;
    if ( v85 )
      v87 = v85 + 1;
    v114 = v116;
    if ( v86 )
      v88 = (int)&v86[strlen(v86)];
    else
      v88 = -1;
    sub_1F955C(&v114, v86, v88);
    if ( v115 == 2147483646 || v115 == 0x7FFFFFFF )
      sub_33D184("basic_string::append");
    v89 = sub_33C320(&v114, "::", 2);
    v117 = v119;
    v92 = v89;
    v93 = (int *)(v89 + 8);
    v94 = *(_DWORD *)v89 == v89 + 8;
    if ( *(_DWORD *)v89 == v89 + 8 )
    {
      v89 = *v93;
      v86 = (char *)v119;
      v90 = v93[1];
      v91 = v93[2];
      v95 = v93[3];
    }
    else
    {
      v117 = *(void **)v89;
      v95 = *(_DWORD *)(v89 + 8);
    }
    if ( v94 )
    {
      *(_DWORD *)v86 = v89;
      *((_DWORD *)v86 + 1) = v90;
      *((_DWORD *)v86 + 2) = v91;
      *((_DWORD *)v86 + 3) = v95;
      v86 += 16;
    }
    else
    {
      v119[0] = v95;
    }
    v118 = *(_DWORD *)(v92 + 4);
    *(_DWORD *)(v92 + 4) = 0;
    *(_BYTE *)(v92 + 8) = 0;
    *(_DWORD *)v92 = v93;
    v96 = strlen(v87);
    if ( 0x7FFFFFFF - v118 < v96 )
      sub_33D184("basic_string::append");
    v97 = sub_33C320(&v117, v87, v96);
    ptr = &v121[4];
    v100 = (int **)v97;
    v102 = (int *)(v97 + 8);
    v101 = *(int **)v97;
    v103 = *(_DWORD *)v97 == v97 + 8;
    if ( *(_DWORD *)v97 == v97 + 8 )
    {
      v86 = &v121[4];
      v98 = *(_DWORD *)(v97 + 12);
      v99 = *(_DWORD *)(v97 + 16);
      v101 = *(int **)(v97 + 20);
      v97 = *v102;
    }
    else
    {
      ptr = *(void **)v97;
    }
    if ( v103 )
    {
      *(_DWORD *)v86 = v97;
      *((_DWORD *)v86 + 1) = v98;
      *((_DWORD *)v86 + 2) = v99;
      *((_DWORD *)v86 + 3) = v101;
    }
    else
    {
      v101 = v100[2];
    }
    if ( !v103 )
      *(_DWORD *)&v121[4] = v101;
    *(_DWORD *)v121 = v100[1];
    *v100 = v102;
    v100[1] = 0;
    *((_BYTE *)v100 + 8) = 0;
    v104 = *(_BYTE **)a1;
    if ( ptr == &v121[4] )
    {
      sub_33B48C(a1, &ptr);
      v104 = ptr;
      goto LABEL_113;
    }
    v105 = *(_QWORD *)v121;
    if ( v108 == v104 )
    {
      *(_DWORD *)a1 = ptr;
      *(_QWORD *)(a1 + 4) = v105;
    }
    else
    {
      *(_DWORD *)a1 = ptr;
      *(_DWORD *)(a1 + 4) = v105;
      v106 = *(_DWORD *)(a1 + 8);
      *(_DWORD *)(a1 + 8) = HIDWORD(v105);
      if ( v104 )
      {
        ptr = v104;
        *(_DWORD *)&v121[4] = v106;
LABEL_113:
        *(_DWORD *)v121 = 0;
        *v104 = 0;
        if ( ptr != &v121[4] )
          sub_339E64(ptr);
        if ( v117 != v119 )
          sub_339E64(v117);
        if ( v114 != v116 )
          sub_339E64(v114);
        v107 = *(_BYTE *)(a1 + 28);
        *(_DWORD *)(a1 + 24) = 0;
        *(_BYTE *)(a1 + 28) = v107 | 1;
        return a1;
      }
    }
    ptr = &v121[4];
    v104 = &v121[4];
    goto LABEL_113;
  }
  v45 = strcmp(*(const char **)(*(_DWORD *)(v44 + 24) + 16), "RUST$ENUM$DISR");
  if ( v45 )
    sub_946E0("Rust debug format has changed");
  sub_256760(&ptr);
  v46 = *a2;
  v121[8] = 0;
  v47 = *(_DWORD *)(v43 + 24);
  v48 = *(_QWORD **)(v46 + 24);
  *(_DWORD *)&v121[4] = 0;
  v49 = *(int **)(v47 + 24);
  v50 = v49[1];
  v51 = *v49;
  v52 = v49[3];
  v53 = (((v50 >> 31) & 7u) + v51) >> 3;
  v54 = ((v50 >> 31) & 7) + __PAIR64__(v50, v51);
  v55 = a4 + *v48 / 8LL;
  ptr = &off_3F2924;
  *(_DWORD *)v121 = &v121[8];
  sub_EC124(v52, v55 + (v53 | (HIDWORD(v54) << 29)), a5, (int)&ptr, 0, a6, v122);
  v56 = *(_BYTE **)a1;
  if ( *(_BYTE **)v121 == &v121[8] )
  {
    sub_33B48C(a1, v121);
    v56 = *(_BYTE **)v121;
  }
  else
  {
    v57 = *(_QWORD *)&v121[4];
    if ( v108 == v56 )
    {
      *(_DWORD *)a1 = *(_DWORD *)v121;
      *(_QWORD *)(a1 + 4) = v57;
    }
    else
    {
      *(_DWORD *)a1 = *(_DWORD *)v121;
      *(_DWORD *)(a1 + 4) = v57;
      v58 = *(_DWORD *)(a1 + 8);
      *(_DWORD *)(a1 + 8) = HIDWORD(v57);
      if ( v56 )
      {
        *(_DWORD *)v121 = v56;
        *(_DWORD *)&v121[8] = v58;
        goto LABEL_50;
      }
    }
    *(_DWORD *)v121 = &v121[8];
    v56 = &v121[8];
  }
LABEL_50:
  *(_DWORD *)&v121[4] = 0;
  *v56 = 0;
  v59 = *(const char **)a1;
  v60 = strrchr(*(const char **)a1, 58);
  if ( !v60 || (v61 = v60 + 1, v60 == (char *)-1) || (v62 = *(__int16 *)(*a2 + 4), v62 <= 0) )
  {
LABEL_59:
    if ( *(_DWORD *)(a1 + 24) == -1 && *(_DWORD *)(a1 + 4) )
      sub_946E0("Could not find variant of %s with discriminant %s", *(const char **)(*a2 + 12), v59);
  }
  else
  {
    v63 = *(_DWORD *)(*a2 + 24);
    while ( 1 )
    {
      v64 = *(const char **)(*(_DWORD *)(*(_DWORD *)(v63 + 12) + 24) + 8);
      if ( v64 )
      {
        v65 = strrchr(v64, 58);
        if ( v65 )
          ++v65;
        if ( !strcmp(v61, v65) )
          break;
      }
      ++v45;
      v63 += 24;
      if ( v45 == v62 )
        goto LABEL_59;
    }
    *(_DWORD *)(a1 + 24) = v45;
  }
  sub_256478(&ptr);
  return a1;
}

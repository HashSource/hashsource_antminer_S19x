int __fastcall sub_2E95CC(int *a1, int a2)
{
  int v3; // r2
  int v5; // r0
  int v6; // r2
  int v7; // r3
  int v8; // r3
  unsigned int v9; // r4
  char ***v10; // r5
  unsigned int v11; // r7
  _DWORD *v12; // r6
  char **v13; // r3
  char *v14; // r3
  int v15; // r2
  bool v16; // zf
  int v17; // r2
  char *v18; // r9
  int v19; // r2
  int v20; // r1
  int v21; // r2
  int v22; // r3
  int v23; // r1
  int v24; // r0
  const char *v25; // r3
  int v26; // r1
  int v27; // r2
  int v28; // r2
  int v29; // r8
  int v30; // r0
  unsigned int v31; // r1
  int v32; // r0
  _BYTE *v33; // r1
  char v34; // r2
  int v36; // r1
  int v37; // r0
  int v38; // r9
  int v39; // r3
  bool v40; // zf
  char v41; // r3
  int v42; // r3
  int v43; // r3
  int v44; // r11
  int v45; // r3
  size_t v46; // r0
  const void *v47; // r1
  char v48; // r2
  size_t v49; // r2
  bool v50; // cc
  int (__fastcall *v51)(int, int, int, void *); // r4
  int v52; // r5
  unsigned int v53; // r4
  int *v54; // r12
  int v55; // r2
  size_t v56; // r4
  const char *v57; // r5
  int v58; // r3
  bool v59; // zf
  int v60; // r3
  int (__fastcall *v61)(int); // r3
  _DWORD *v62; // r7
  _DWORD *j; // r4
  bool v64; // zf
  char **v65; // r5
  bool v66; // zf
  unsigned int v67; // r5
  char ***v68; // r8
  char **v69; // r3
  int v70; // r2
  char v71; // r6
  int v72; // r6
  int v73; // r6
  int v74; // r3
  int k; // r2
  unsigned int v76; // r6
  size_t v77; // r4
  int v78; // r0
  int v79; // r3
  __int64 v80; // r6
  int i; // r2
  int v82; // r0
  int v83; // r3
  int v84; // r2
  unsigned int v85; // r0
  int v86; // r0
  int v87; // r5
  int v88; // r6
  int v89; // r7
  int v90; // r4
  int v91; // r1
  int v92; // r0
  unsigned int v93; // r8
  int v94; // r7
  _DWORD *v95; // r4
  int v96; // r1
  unsigned int v97; // r11
  _BYTE *v98; // r2
  unsigned int v99; // lr
  unsigned int v100; // r5
  int v101; // r3
  int *v102; // r12
  int v103; // r0
  int v104; // r1
  int v105; // r2
  int v106; // r3
  int v107; // r6
  int v108; // r6
  unsigned int v109; // r0
  int v110; // r1
  int v111; // r1
  char **v112; // r0
  int v113; // r1
  int v114; // r6
  int m; // r5
  int v116; // r6
  int v117; // r1
  int v118; // r3
  int v119; // r2
  int v120; // r3
  int v121; // r0
  int v122; // r1
  int v123; // r0
  int v124; // r2
  int v125; // r0
  int v126; // r1
  int v127; // r2
  int v128; // r3
  int v129; // r6
  int v130; // r3
  int v131; // r12
  int v132; // r1
  int v133; // r7
  char *v134; // r6
  char *v135; // r1
  int v136; // r6
  int v137; // r0
  int v138; // r2
  unsigned int v139; // r2
  int v140; // [sp+14h] [bp-BCh]
  int v141; // [sp+18h] [bp-B8h]
  unsigned int v142; // [sp+1Ch] [bp-B4h]
  int v143; // [sp+20h] [bp-B0h]
  int v144; // [sp+20h] [bp-B0h]
  unsigned int v145; // [sp+24h] [bp-ACh]
  char v146; // [sp+28h] [bp-A8h]
  int v147; // [sp+2Ch] [bp-A4h]
  int v148; // [sp+2Ch] [bp-A4h]
  int v149; // [sp+2Ch] [bp-A4h]
  _DWORD *v150; // [sp+30h] [bp-A0h]
  _DWORD *v151; // [sp+34h] [bp-9Ch]
  char *v152; // [sp+38h] [bp-98h]
  int v153; // [sp+3Ch] [bp-94h]
  int v154; // [sp+40h] [bp-90h]
  unsigned int v155; // [sp+44h] [bp-8Ch]
  _BYTE *v156; // [sp+48h] [bp-88h]
  char *v157; // [sp+48h] [bp-88h]
  int v158; // [sp+50h] [bp-80h]
  int v159; // [sp+54h] [bp-7Ch]
  _DWORD *v160; // [sp+58h] [bp-78h]
  size_t n; // [sp+60h] [bp-70h]
  int (__fastcall *v162)(int, int, int, int, void *, _DWORD *, unsigned int, int); // [sp+64h] [bp-6Ch]
  int v163; // [sp+70h] [bp-60h]
  int v164; // [sp+74h] [bp-5Ch]
  int v165; // [sp+78h] [bp-58h]
  int v166; // [sp+7Ch] [bp-54h]
  _DWORD *v167; // [sp+80h] [bp-50h]
  _DWORD *v168; // [sp+84h] [bp-4Ch]
  void *src; // [sp+8Ch] [bp-44h] BYREF
  char **v170; // [sp+90h] [bp-40h] BYREF
  int v171; // [sp+94h] [bp-3Ch] BYREF
  int v172; // [sp+98h] [bp-38h]
  int v173; // [sp+9Ch] [bp-34h]
  int v174; // [sp+A0h] [bp-30h]
  int v175; // [sp+A4h] [bp-2Ch]

  if ( ((*(_DWORD *)(a2 + 40) >> 5) & 0x40) != 0 )
    return 1;
  v3 = a1[1];
  v5 = *(_DWORD *)(a2 + 160);
  v140 = v3;
  v141 = v5;
  v6 = *(_DWORD *)(*(_DWORD *)(v3 + 4) + 444);
  v153 = v5 + 72;
  v147 = v6;
  if ( (*(_BYTE *)(v5 + 2341) & 0x40) != 0 )
  {
    v155 = 0;
    v142 = sub_347418(*(_DWORD *)(v5 + 96), *(unsigned __int8 *)(*(_DWORD *)(v6 + 392) + 5));
  }
  else
  {
    v142 = *(_DWORD *)(v5 + 104);
    v155 = v142;
  }
  v7 = v142;
  v145 = *(_DWORD *)(v141 + 120);
  if ( v142 )
    v7 = 1;
  if ( *(_DWORD *)(v141 + 120) )
    v7 = 0;
  v162 = *(int (__fastcall **)(int, int, int, int, void *, _DWORD *, unsigned int, int))(v147 + 148);
  if ( !v7 )
  {
    v8 = v141;
    goto LABEL_11;
  }
  v85 = sub_2CDA08(a2, v153, v142, 0, a1[10], (char *)a1[8], (char *)a1[9]);
  v145 = v85;
  if ( v85 )
  {
    v8 = *(_DWORD *)(a2 + 160);
LABEL_11:
    v9 = v145;
    v10 = (char ***)a1[12];
    v11 = v145 + 20 * v142;
    if ( v145 < v11 )
    {
      v12 = (_DWORD *)(a1[11] - 4);
      v143 = 0;
      while ( 1 )
      {
        v12[1] = -1;
        ++v12;
        if ( (*(_BYTE *)(v8 + 2341) & 0x40) != 0 && *(unsigned __int8 *)(v9 + 12) >> 4 )
        {
          *v10 = 0;
          goto LABEL_40;
        }
        v31 = *(_DWORD *)(v9 + 16);
        if ( v31 )
        {
          if ( v31 == -15 )
          {
            v13 = &off_470950;
            v170 = &off_470950;
          }
          else if ( v31 == -14 )
          {
            v13 = &off_470800;
            v170 = &off_470800;
          }
          else
          {
            v32 = sub_2CFEF4(a2, v31);
            v170 = (char **)v32;
            v13 = (char **)v32;
            if ( !v32 )
            {
              *v10 = 0;
              goto LABEL_40;
            }
            if ( (*(_WORD *)(v32 + 24) & 0x380) == 0x100 && (*(_BYTE *)(v9 + 12) & 0xF) != 3 )
            {
              v37 = sub_30061C(v140, &v170, *(_DWORD *)(*(_DWORD *)(v32 + 140) + 136), *(_DWORD *)v9);
              v13 = v170;
              *(_DWORD *)v9 = v37;
            }
          }
        }
        else
        {
          v13 = &off_4708A8;
          v170 = &off_4708A8;
        }
        *v10 = v13;
        if ( v170 == &off_4708A8
          || (*(_BYTE *)(v9 + 12) & 0xF) == 3
          || (*(_BYTE *)(*a1 + 1) & 0x60) == 0x60
          || (*(_DWORD *)*a1 & 0x18000) == 0x18000 )
        {
          goto LABEL_40;
        }
        if ( (unsigned int)(*(_DWORD *)(v9 + 16) - 1) <= 0xFFFFFEFE )
        {
          v14 = v170[15];
          v15 = *((_DWORD *)v14 + 3);
          v16 = v15 == 0;
          if ( v15 )
            v17 = *(_DWORD *)(v15 + 16);
          else
            v17 = v140;
          if ( v16 )
            v17 = *(_DWORD *)(v17 + 104);
          if ( (char *)v17 != v14 )
            goto LABEL_40;
        }
        v18 = sub_2CD844(a2, *(_DWORD *)(v141 + 100), *(_DWORD *)(v9 + 8));
        if ( !v18 )
          return 0;
        v19 = *a1;
        if ( (*(_BYTE *)(*a1 + 1) & 0x60) == 0x40 )
        {
          if ( !sub_2AAC2C(*(_DWORD **)(v19 + 32), v18, 0, 0) )
            goto LABEL_40;
          v19 = *a1;
        }
        if ( (*(_DWORD *)v19 & 0x18000) != 0 )
          break;
        if ( ((unsigned int)v170[5] & 0x800000) != 0 && (*(_BYTE *)v19 & 3) != 2 )
          goto LABEL_30;
LABEL_31:
        if ( (*(_BYTE *)(v9 + 12) & 0xF) != 4 )
          goto LABEL_32;
LABEL_56:
        if ( (*(_BYTE *)(a2 + 44) & 0x40) == 0 )
        {
          ++a1[14];
LABEL_33:
          v20 = *(_DWORD *)(v9 + 4);
          v21 = *(_DWORD *)(v9 + 8);
          v22 = *(_DWORD *)(v9 + 12);
          v171 = *(_DWORD *)v9;
          v172 = v20;
          v173 = v21;
          v174 = v22;
          v23 = (int)v170[15];
          v175 = *(_DWORD *)(v9 + 16);
          v175 = sub_2D4B7C(v140, v23);
          if ( v175 == -257 )
            return 0;
          v24 = *a1;
          v25 = (const char *)v170;
          v26 = *(_BYTE *)*a1 & 3;
          v27 = (int)&v170[14][v171];
          v171 = v27;
          if ( v26 != 2 )
          {
            v28 = v27 + *((_DWORD *)v170[15] + 7);
            v171 = v28;
            if ( (v174 & 0xF) == 6 )
            {
              v36 = *(_DWORD *)(*(_DWORD *)(v24 + 28) + 204);
              if ( !v36 )
              {
                sub_2A6BBC("elflink.c", 10365);
                v28 = v171;
                v25 = (const char *)v170;
                v36 = *(_DWORD *)(*(_DWORD *)(*a1 + 28) + 204);
              }
              v171 = v28 - *(_DWORD *)(v36 + 28);
            }
          }
          v29 = *(_DWORD *)(v140 + 124);
          v30 = sub_2DCC48(a1, v18, &v171, (int)v25, 0);
          if ( !v30 )
            return 0;
          if ( v30 == 1 )
            *v12 = v29;
          v143 = 1;
        }
LABEL_40:
        v9 += 20;
        ++v10;
        v8 = *(_DWORD *)(a2 + 160);
        if ( v11 <= v9 )
          goto LABEL_71;
      }
      if ( (*(_DWORD *)v19 & 0x18000) != 0x10000 )
      {
        if ( (*(_BYTE *)(v9 + 12) & 0xF) != 4 )
        {
LABEL_32:
          if ( !v143 )
          {
            v33 = 0;
            v34 = *(_BYTE *)(a2 + 44);
            ++a1[14];
            v171 = 0;
            v172 = 0;
            v173 = 0;
            v174 = 0;
            v175 = -15;
            if ( (v34 & 0x40) == 0 )
              v33 = *(_BYTE **)a2;
            LOBYTE(v174) = 4;
            if ( (v34 & 0x40) != 0 )
              v33 = 0;
            if ( !sub_2DCC48(a1, v33, &v171, (int)&off_470950, 0) )
              return 0;
          }
          goto LABEL_33;
        }
        goto LABEL_56;
      }
LABEL_30:
      if ( (*(int (__fastcall **)(int, char *))(*(_DWORD *)(a2 + 4) + 284))(a2, v18) )
        goto LABEL_40;
      goto LABEL_31;
    }
LABEL_71:
    v38 = *(_DWORD *)(a2 + 100);
    v158 = *(_DWORD *)(v8 + 536);
    v39 = *(unsigned __int8 *)(*(_DWORD *)(v147 + 392) + 10);
    v40 = v39 == 32;
    if ( v39 == 32 )
      v41 = 8;
    else
      v41 = 32;
    v146 = v41;
    if ( v40 )
      v42 = 255;
    else
      v42 = -1;
    v159 = v42;
    if ( v40 )
      v43 = 4;
    else
      v43 = 8;
    n = v43;
    if ( !v38 )
      return 1;
    v144 = a2;
    v44 = v147;
    v163 = v43;
LABEL_82:
    if ( (*(_BYTE *)(v38 + 24) & 2) == 0 )
      goto LABEL_99;
    v45 = *(_DWORD *)(v38 + 20);
    if ( (*(_BYTE *)(*a1 + 1) & 0x10) == 0 && (v45 & 0x2100000) == 0x2000000 )
    {
      v52 = *(_DWORD *)(v38 + 60);
      v53 = *(_DWORD *)(*(_DWORD *)(v38 + 140) + 32);
      if ( (*(_BYTE *)*a1 & 3) != 2 )
        sub_2A6BBC("elflink.c", 10411);
      if ( v142 <= v53 || (*(_BYTE *)(*(_DWORD *)(v144 + 160) + 2341) & 0x40) != 0 && !*(_DWORD *)(a1[12] + 4 * v53) )
      {
        for ( i = *(_DWORD *)(v158 + 4 * (v53 - v155));
              (unsigned int)*(unsigned __int8 *)(i + 12) - 6 <= 1;
              i = *(_DWORD *)(i + 20) )
        {
          ;
        }
        v82 = *(_DWORD *)(v52 + 140);
        *(_DWORD *)(i + 28) = -2;
        v45 = *(_DWORD *)(v38 + 20);
        *(_DWORD *)(v82 + 32) = -2;
      }
      else
      {
        v54 = (int *)(v145 + 20 * v53);
        if ( (v54[3] & 0xF) == 3 )
        {
          v45 = *(_DWORD *)(v38 + 20);
          *(_DWORD *)(*(_DWORD *)(v52 + 140) + 32) = *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(a1[12] + 4 * v53) + 60) + 136);
        }
        else
        {
          v55 = *(_DWORD *)(a1[11] + 4 * v53);
          if ( v55 == -1 )
          {
            v126 = v54[1];
            v127 = v54[2];
            v128 = v54[3];
            v129 = a1[12];
            v171 = *v54;
            v172 = v126;
            v173 = v127;
            v174 = v128;
            v130 = v54[4];
            v131 = *(_DWORD *)(v129 + 4 * v53);
            v132 = *(_DWORD *)(v141 + 100);
            v175 = v130;
            v133 = *(_DWORD *)(v131 + 60);
            v134 = sub_2CD844(v144, v132, v127);
            if ( !v134 )
              return 0;
            v175 = sub_2D4B7C(v140, v133);
            if ( v175 == -257 )
              return 0;
            v135 = v134;
            v136 = *(_DWORD *)(v140 + 124);
            v171 += *(_DWORD *)(v38 + 56);
            v137 = sub_2DCC48(a1, v135, &v171, v38, 0);
            if ( !v137 )
              return 0;
            if ( v137 != 1 )
              sub_2A6BF0((int)"elflink.c", 10462, (int)"elf_link_input_bfd");
            v55 = v136;
            *(_DWORD *)(a1[11] + 4 * v53) = v136;
          }
          v45 = *(_DWORD *)(v38 + 20);
          *(_DWORD *)(*(_DWORD *)(v52 + 140) + 32) = v55;
        }
      }
    }
    if ( (v45 & 0x100) == 0 )
      goto LABEL_99;
    v46 = *(_DWORD *)(v38 + 36);
    if ( !v46 && (v45 & 4) == 0 )
      goto LABEL_99;
    if ( (v45 & 0x100000) != 0 )
      goto LABEL_99;
    v47 = *(const void **)(*(_DWORD *)(v38 + 140) + 48);
    if ( v47 )
    {
      v48 = *(_BYTE *)(v44 + 467);
      src = *(void **)(*(_DWORD *)(v38 + 140) + 48);
      if ( (v48 & 2) != 0 )
      {
        v49 = *(_DWORD *)(v38 + 40);
        v50 = v49 != 0;
        if ( v49 )
          v50 = v46 > v49;
        if ( v50 )
        {
          memcpy((void *)a1[5], v47, v49);
          v45 = *(_DWORD *)(v38 + 20);
          src = (void *)a1[5];
        }
      }
    }
    else
    {
      src = (void *)a1[5];
      if ( !sub_2A9680(v144, v38, (int *)&src) )
        return 0;
      v45 = *(_DWORD *)(v38 + 20);
    }
    if ( (v45 & 4) == 0 )
      goto LABEL_96;
    v160 = sub_2E2758(v144, v38, a1[6], (_DWORD *)a1[7], 0);
    if ( !v160 && *(_DWORD *)(v38 + 76) )
      return 0;
    v56 = *(_DWORD *)(v38 + 36);
    if ( v56 > n )
    {
      if ( (v57 = *(const char **)v38, !strncmp(*(const char **)v38, ".ctors", 6u))
        && !strcmp(**(const char ***)(v38 + 60), ".init_array")
        || !strncmp(v57, ".dtors", 6u) && !strcmp(**(const char ***)(v38 + 60), ".fini_array") )
      {
        v58 = *((unsigned __int8 *)v57 + 6);
        v59 = v58 == 46;
        if ( v58 != 46 )
          v59 = v58 == 0;
        if ( v59 )
        {
          if ( v56 * *(unsigned __int8 *)(*(_DWORD *)(v44 + 392) + 9) != *(_DWORD *)(v38 + 76) * n )
          {
            sub_2A6A5C("error: %B: size of section %A is not multiple of address size", v144, v38);
            ((void (__fastcall *)(int))loc_2A6C48)(17);
            return 0;
          }
          *(_DWORD *)(v38 + 20) |= 0x4000000u;
        }
      }
    }
    v60 = (*(unsigned __int16 *)(v38 + 24) >> 7) & 7;
    if ( v60 == 3
      || v60 == 6
      || v60 == 1
      || (v61 = *(int (__fastcall **)(int))(*(_DWORD *)(*(_DWORD *)(*(_DWORD *)(v38 + 148) + 4) + 444) + 292)) != 0
      && v61(v38) )
    {
      v148 = -1;
    }
    else
    {
      v148 = (*(int (__fastcall **)(int))(v44 + 296))(v38);
    }
    v62 = &v160[3 * *(_DWORD *)(v38 + 76)];
    if ( v160 < v62 )
    {
      for ( j = v160; v62 > j; j += 3 )
      {
        v67 = j[1] >> v146;
        if ( v67 )
        {
          if ( v142 <= v67
            || (v68 = (char ***)(a1[12] + 4 * v67), v69 = *v68, (*(_BYTE *)(*(_DWORD *)(v144 + 160) + 2341) & 0x40) != 0)
            && !v69 )
          {
            v83 = *(_DWORD *)(v158 + 4 * (v67 - v155));
            if ( !v83 )
            {
              sub_2A6A5C(
                "error: %B contains a reloc (%#Lx) for section %A that references a non-existent global symbol",
                v144);
              ((void (__fastcall *)(int))loc_2A6C48)(17);
              return 0;
            }
            while ( 1 )
            {
              v84 = *(unsigned __int8 *)(v83 + 12);
              if ( (unsigned int)(v84 - 6) > 1 )
                break;
              v83 = *(_DWORD *)(v83 + 20);
            }
            v72 = *(unsigned __int8 *)(v83 + 48);
            if ( (*(_BYTE *)(v83 + 13) & 3) != 0
              && (unsigned int)(v84 - 3) <= 1
              && (v110 = *(_DWORD *)(v83 + 20), (*(_DWORD *)(v110 + 20) & 0x100000) == 0)
              && (v111 = *(_DWORD *)(v110 + 148)) != 0
              && (*(_DWORD *)(v111 + 40) & 0x200000) != 0 )
            {
              *(_DWORD *)(v83 + 20) = v111;
              v68 = 0;
              *(_BYTE *)(v83 + 12) = 1;
            }
            else if ( (unsigned int)*(unsigned __int8 *)(v83 + 12) - 3 > 1 )
            {
              v68 = 0;
            }
            else
            {
              v68 = (char ***)(v83 + 20);
            }
            v170 = *(char ***)(v83 + 4);
          }
          else
          {
            v70 = v145 + 20 * v67;
            v71 = *(_BYTE *)(v70 + 12);
            v170 = (char **)sub_2CDDA8(v144, v153, v70, (int)v69);
            v72 = v71 & 0xF;
          }
          if ( (unsigned int)(v72 - 8) > 1 || (*(_BYTE *)*a1 & 3) == 2 )
          {
            v64 = v68 == 0;
            if ( v68 )
              v64 = v148 == -1;
            if ( !v64 )
            {
              v65 = *v68;
              v66 = *v68 == &off_470950;
              if ( *v68 != &off_470950 )
                v66 = v65 == 0;
              if ( !v66 && v65[15] == (char *)&off_470950 && ((((_WORD)v65[6] & 0x380) - 256) & 0xFEFF) != 0 )
              {
                if ( (v148 & 1) != 0 )
                  (*(void (__fastcall **)(const char *, char **, int, int, char **, char *))(*(_DWORD *)(*a1 + 24) + 44))(
                    "%X`%s' referenced in section `%A' of %B: defined in discarded section `%A' of %B\n",
                    v170,
                    v38,
                    v144,
                    *v68,
                    v65[37]);
                if ( (v148 & 2) != 0 )
                {
                  v112 = (char **)sub_2E9524(v65, *a1);
                  if ( v112 )
                    *v68 = v112;
                }
              }
            }
            continue;
          }
          if ( !sub_2DDB08(
                  &v171,
                  (const char **)&v170,
                  v144,
                  (int)a1,
                  *(_DWORD *)(*(_DWORD *)(v38 + 60) + 28) + *(_DWORD *)(v38 + 56) + *j,
                  v145,
                  v142,
                  v72 == 9) )
            return 0;
          v73 = v171;
          if ( v142 <= v67 )
          {
            v67 -= v142;
            v74 = *(_DWORD *)(v144 + 160);
LABEL_146:
            for ( k = *(_DWORD *)(*(_DWORD *)(v74 + 536) + 4 * v67);
                  (unsigned int)*(unsigned __int8 *)(k + 12) - 6 <= 1;
                  k = *(_DWORD *)(k + 20) )
            {
              ;
            }
            *(_DWORD *)(k + 24) = v73;
            *(_BYTE *)(k + 12) = 3;
            *(_DWORD *)(k + 20) = &off_470950;
            continue;
          }
          v139 = v145 + 20 * v67;
          if ( *(unsigned __int8 *)(v139 + 12) >> 4 )
          {
            v74 = *(_DWORD *)(v144 + 160);
            if ( (*(_BYTE *)(v74 + 2341) & 0x40) == 0 )
            {
              sub_2A6BBC("elflink.c", 8087);
              v74 = *(_DWORD *)(v144 + 160);
            }
            goto LABEL_146;
          }
          *(_DWORD *)(v139 + 16) = -15;
          *(_DWORD *)(v145 + 20 * v67) = v73;
        }
      }
    }
    v86 = v162(v140, *a1, v144, v38, src, v160, v145, a1[12]);
    if ( !v86 )
      return 0;
    v87 = *a1;
    v88 = *(_BYTE *)*a1 & 3;
    if ( v86 != 2 && v88 != 2 && (*(_BYTE *)(v87 + 3) & 8) == 0 )
      goto LABEL_96;
    v89 = *(_DWORD *)(v38 + 60);
    v90 = *(_DWORD *)(*(_DWORD *)(v38 + 140) + 60);
    v166 = *(_DWORD *)(v38 + 140);
    v168 = *(_DWORD **)(v89 + 140);
    v151 = &v160[3 * *(_DWORD *)(v38 + 76)];
    v165 = v168[18] + 4 * v168[16];
    if ( v90 )
    {
      v91 = *(_DWORD *)(v90 + 40);
      if ( v91 )
        v92 = sub_347418(*(_DWORD *)(v90 + 24), v91);
      else
        v92 = 0;
      v152 = (char *)v160 + v92 * 12 * *(unsigned __int8 *)(*(_DWORD *)(v44 + 392) + 9);
    }
    else
    {
      v152 = (char *)v160;
    }
    v93 = *(_DWORD *)(v38 + 56);
    if ( v88 != 2 )
      v93 += *(_DWORD *)(v89 + 28);
    if ( v160 >= v151 )
    {
      v167 = 0;
      goto LABEL_259;
    }
    v164 = 0;
    v94 = 0;
    v167 = 0;
    v95 = v160 + 3;
    v96 = v87;
    v150 = (_DWORD *)v165;
    v149 = v44;
    v97 = v93;
    while ( 1 )
    {
      if ( *(unsigned __int8 *)(*(_DWORD *)(v149 + 392) + 9) == v94 )
      {
        v94 = 0;
        ++v150;
      }
      if ( v152 == (char *)(v95 - 3) )
      {
        v150 = (_DWORD *)(v168[22] + 4 * v168[20]);
        v167 = v150;
        v164 = (*(unsigned __int8 *)(v149 + 464) >> 6) & 1;
      }
      v109 = sub_2DB2EC(v140, v96, v38, *(v95 - 3));
      *(v95 - 3) = v109;
      if ( v109 <= 0xFFFFFFFD )
      {
        v98 = (_BYTE *)*a1;
        v99 = *(v95 - 2);
        v97 = v109 + *(_DWORD *)(v38 + 56);
        *(v95 - 3) = v97;
        v156 = v98;
        if ( (*v98 & 3) != 2 )
        {
          v97 += *(_DWORD *)(*(_DWORD *)(v38 + 60) + 28);
          *(v95 - 3) = v97;
        }
        v100 = v99 >> v146;
        if ( v99 >> v146 )
        {
          v101 = *(_DWORD *)(v144 + 160);
          if ( v142 > v100 )
          {
            v154 = *(_DWORD *)(a1[12] + 4 * v100);
            if ( (*(_BYTE *)(v101 + 2341) & 0x40) == 0 || *(_DWORD *)(a1[12] + 4 * v100) )
            {
              v102 = (int *)(v145 + 20 * v100);
              v103 = *v102;
              v104 = v102[1];
              v105 = v102[2];
              v106 = v102[3];
              *v150 = 0;
              v171 = v103;
              v172 = v104;
              v173 = v105;
              v174 = v106;
              v175 = v102[4];
              if ( (v106 & 0xF) != 3 )
              {
                v107 = *(_DWORD *)(a1[11] + 4 * v100);
                if ( v107 == -1 )
                {
                  if ( (v156[1] & 0x60) == 0x60 )
                  {
                    ((void (__fastcall *)(int))loc_2A6C48)(5);
                    return 0;
                  }
                  v157 = sub_2CD844(v144, *(_DWORD *)(v141 + 100), v173);
                  if ( !v157 )
                    return 0;
                  v116 = *(_DWORD *)(v154 + 60);
                  v175 = sub_2D4B7C(v140, v116);
                  if ( v175 == -257 )
                    return 0;
                  v117 = *a1;
                  v118 = v171 + *(_DWORD *)(v154 + 56);
                  v119 = *(_BYTE *)*a1 & 3;
                  v171 = v118;
                  if ( v119 != 2 )
                  {
                    v120 = v118 + *(_DWORD *)(v116 + 28);
                    v171 = v120;
                    if ( (v174 & 0xF) == 6 )
                    {
                      v138 = *(_DWORD *)(*(_DWORD *)(v117 + 28) + 204);
                      if ( !v138 )
                      {
                        sub_2A6BBC("elflink.c", 10925);
                        v120 = v171;
                        v138 = *(_DWORD *)(*(_DWORD *)(*a1 + 28) + 204);
                      }
                      v171 = v120 - *(_DWORD *)(v138 + 28);
                    }
                  }
                  v107 = *(_DWORD *)(v140 + 124);
                  v121 = sub_2DCC48(a1, v157, &v171, v154, 0);
                  if ( !v121 )
                    return 0;
                  if ( v121 != 1 )
                    sub_2A6BF0((int)"elflink.c", 10940, (int)"elf_link_input_bfd");
                  *(_DWORD *)(a1[11] + 4 * v100) = v107;
                  v99 = *(v95 - 2);
                }
                v108 = v107 << v146;
                goto LABEL_210;
              }
              if ( (char **)v154 == &off_470950 )
                goto LABEL_256;
              if ( !v154 || !*(_DWORD *)(v154 + 148) )
              {
                ((void (__fastcall *)(int))loc_2A6C48)(17);
                return 0;
              }
              v113 = *(_DWORD *)(v154 + 60);
              if ( (char **)v113 != &off_470950 )
              {
LABEL_235:
                v114 = *(_DWORD *)(v113 + 136);
                if ( !v114 )
                {
                  *(v95 - 1) += *(_DWORD *)(v113 + 28);
                  v125 = sub_2FF1FC(v140);
                  v114 = *(_DWORD *)(v125 + 136);
                  v99 = *(v95 - 2);
                  *(v95 - 1) -= *(_DWORD *)(v125 + 28);
                }
                v108 = v114 << v146;
                goto LABEL_238;
              }
              v108 = *(_DWORD *)(v154 + 124);
              if ( v108 )
              {
                v113 = *(_DWORD *)(v108 + 60);
                if ( v113 )
                {
                  *(v95 - 1) -= *(_DWORD *)(v113 + 28);
                  if ( (char **)v113 != &off_470950 )
                    goto LABEL_235;
                }
LABEL_256:
                v108 = 0;
              }
LABEL_238:
              if ( v164 )
                *(v95 - 1) += *(_DWORD *)(v154 + 56);
LABEL_210:
              *(v95 - 2) = v99 & v159 | v108;
              goto LABEL_211;
            }
          }
          for ( m = *(_DWORD *)(*(_DWORD *)(v101 + 536) + 4 * (v100 - v155));
                (unsigned int)*(unsigned __int8 *)(m + 12) - 6 <= 1;
                m = *(_DWORD *)(m + 20) )
          {
            ;
          }
          if ( *(int *)(m + 28) >= 0 )
            sub_2A6BBC("elflink.c", 10822);
          *(_DWORD *)(m + 28) = -2;
          *v150 = m;
        }
      }
      else
      {
        *(v95 - 3) = v97;
        *(v95 - 2) = 0;
        *(v95 - 1) = 0;
      }
LABEL_211:
      ++v94;
      if ( v95 >= v151 )
      {
        v44 = v149;
        v90 = *(_DWORD *)(v166 + 60);
LABEL_259:
        if ( v90 && *(_DWORD *)(v90 + 24) )
        {
          if ( !(*(int (__fastcall **)(int, int, int, _DWORD *, int))(v44 + 244))(v140, v38, v90, v160, v165) )
            return 0;
          v122 = *(_DWORD *)(v90 + 40);
          if ( v122 )
            v123 = sub_347418(*(_DWORD *)(v90 + 24), v122);
          else
            v123 = 0;
          v160 = (_DWORD *)((char *)v160 + v123 * 12 * *(unsigned __int8 *)(*(_DWORD *)(v44 + 392) + 9));
        }
        v124 = *(_DWORD *)(v166 + 76);
        if ( v124
          && *(_DWORD *)(v124 + 24)
          && !(*(int (__fastcall **)(int, int, int, _DWORD *, _DWORD *))(v44 + 244))(v140, v38, v124, v160, v167) )
        {
          return 0;
        }
LABEL_96:
        v51 = *(int (__fastcall **)(int, int, int, void *))(v44 + 316);
        if ( !v51 || !v51(v140, *a1, v38, src) )
        {
          switch ( (*(unsigned __int16 *)(v38 + 24) >> 7) & 7 )
          {
            case 1:
              if ( !sub_302730(v140, *(_DWORD *)(*a1 + 28) + 132, v38, *(_DWORD *)(v38 + 140) + 136, src) )
                return 0;
              break;
            case 2:
              if ( !sub_3003C4(v140, v38, *(_DWORD *)(*(_DWORD *)(v38 + 140) + 136)) )
                return 0;
              break;
            case 3:
              if ( !sub_2F4260(v140, *a1, v38, src) )
                return 0;
              break;
            case 6:
              if ( !sub_2F4028(v140, *a1, v38, src) )
                return 0;
              break;
            default:
              if ( (*(_DWORD *)(v38 + 20) & 0x8000) != 0 )
                break;
              v76 = *(_DWORD *)(v38 + 56);
              v77 = *(_DWORD *)(v38 + 36);
              v78 = sub_2A6904(v140);
              v79 = *(_DWORD *)(v38 + 20);
              v80 = (unsigned int)v78 * (unsigned __int64)v76;
              if ( (v79 & 0x4000000) != 0 )
              {
                while ( 1 )
                {
                  v77 -= n;
                  if ( !sub_2ADDE8(v140, *(_DWORD **)(v38 + 60), (char *)src + v77, v79, v80, n) )
                    return 0;
                  if ( !v77 )
                    goto LABEL_99;
                  v80 += (unsigned int)v163;
                }
              }
              if ( !sub_2ADDE8(v140, *(_DWORD **)(v38 + 60), src, v79, v80, v77) )
                return 0;
              break;
          }
        }
LABEL_99:
        v38 = *(_DWORD *)(v38 + 12);
        if ( !v38 )
          return 1;
        goto LABEL_82;
      }
      v96 = *a1;
      v95 += 3;
    }
  }
  return 0;
}

int __fastcall sub_302EB0(
        const char **a1,
        int a2,
        int a3,
        int a4,
        _DWORD *a5,
        const char **a6,
        unsigned int *a7,
        _DWORD *a8,
        void **a9)
{
  const char *v11; // lr
  _DWORD **v13; // r7
  _DWORD *v14; // r3
  unsigned int *v15; // r4
  unsigned int v16; // r6
  int v17; // r12
  int v18; // r1
  _DWORD *v19; // r0
  int v20; // r3
  int v21; // r5
  int v22; // r2
  signed int v24; // r3
  const char *v25; // r11
  unsigned int v26; // r5
  unsigned int v27; // r1
  int v28; // r8
  unsigned int v29; // r10
  int v30; // r0
  _DWORD *v31; // r12
  unsigned int v32; // r3
  unsigned int v33; // r12
  bool v34; // cf
  unsigned int v35; // r0
  unsigned int v36; // r6
  char v37; // r8
  unsigned int v38; // r6
  bool v39; // zf
  unsigned int v40; // r5
  char *v41; // r0
  size_t v42; // r5
  const char *v43; // r0
  size_t v44; // r6
  _DWORD *v45; // r0
  char *v46; // r0
  int v47; // r3
  bool v48; // zf
  unsigned int v49; // r2
  int v50; // r0
  _DWORD *v51; // r2
  bool v52; // zf
  signed int v53; // r0
  signed int v54; // r8
  char *v55; // r10
  _BOOL4 v56; // r8
  int v57; // r0
  _DWORD *v58; // r4
  unsigned int v59; // r11
  int v60; // r3
  bool v61; // zf
  int (__fastcall *v62)(char *); // r8
  int v63; // r0
  int v64; // r0
  int v65; // r4
  void (__fastcall *v66)(int, char *); // r8
  int v67; // r0
  _DWORD *v68; // r3
  int v69; // r2
  bool v70; // zf
  unsigned int v71; // r3
  unsigned int v72; // r8
  unsigned int v73; // r11
  unsigned int v74; // r4
  int v75; // r2
  _DWORD *v76; // r3
  _DWORD *v77; // r3
  int v78; // r0
  unsigned int v79; // r8
  unsigned int v80; // r4
  unsigned int v81; // r5
  unsigned int v82; // r6
  unsigned int v83; // r10
  _DWORD *v84; // r3
  unsigned int v85; // r1
  unsigned int v86; // r0
  bool v87; // cf
  unsigned int v88; // r2
  _DWORD *v89; // r1
  unsigned int v90; // r11
  _DWORD *v91; // r10
  int v92; // r0
  _DWORD *v93; // r2
  char *v94; // r8
  _DWORD *v95; // r12
  const char *v96; // r12
  int (__fastcall *v97)(unsigned int); // r1
  int v98; // r0
  _DWORD *v99; // r3
  int v100; // r0
  bool v101; // cf
  int v102; // r0
  unsigned int v103; // r1
  bool v104; // cf
  int v105; // r0
  int v106; // r0
  unsigned int v107; // r1
  _DWORD *v108; // r5
  int v109; // r0
  _DWORD *v110; // r12
  size_t v111; // [sp+10h] [bp-2Ch]
  int v112; // [sp+14h] [bp-28h]
  unsigned int n; // [sp+14h] [bp-28h]
  int v114; // [sp+14h] [bp-28h]
  char *v115; // [sp+14h] [bp-28h]
  unsigned int v116; // [sp+14h] [bp-28h]
  _DWORD *v117; // [sp+14h] [bp-28h]
  unsigned int v118; // [sp+14h] [bp-28h]
  char *s; // [sp+18h] [bp-24h]
  char *sa; // [sp+18h] [bp-24h]
  size_t sb; // [sp+18h] [bp-24h]
  unsigned int v122; // [sp+1Ch] [bp-20h]
  char *v123; // [sp+1Ch] [bp-20h]
  int v124; // [sp+1Ch] [bp-20h]
  unsigned int v125; // [sp+1Ch] [bp-20h]
  signed int v126; // [sp+20h] [bp-1Ch]
  unsigned int v127; // [sp+24h] [bp-18h]
  unsigned int v128; // [sp+24h] [bp-18h]
  int v129; // [sp+28h] [bp-14h]
  int v130; // [sp+30h] [bp-Ch]
  int v131; // [sp+34h] [bp-8h]

  v11 = *a1;
  *a5 = 0;
  *a6 = v11;
  *a7 = 0;
  v13 = (_DWORD **)*a9;
  v39 = *a9 == 0;
  *a8 = 0;
  if ( !v39 )
  {
    if ( *v13 )
    {
      v14 = v13[1];
      if ( v14 )
      {
        v111 = v14[10];
        if ( !v111 )
          v111 = v14[9];
LABEL_6:
        v15 = v13[6];
        v16 = a4 + *(_DWORD *)(a3 + 28);
        if ( v15 && (unsigned int)v13[7] <= v16 && v15[6] > v16 )
        {
          v26 = (unsigned int)v13[8];
          v25 = (const char *)v13[9];
LABEL_17:
          v27 = v15[7];
          s = (char *)v15[3];
          v122 = v15[2];
          if ( v27 > v26 )
          {
            v28 = 0;
            v112 = 0;
            v29 = v16;
            do
            {
              while ( 1 )
              {
                v35 = *(unsigned __int8 *)(v26 + 4);
                if ( v35 != 70 )
                  break;
LABEL_31:
                v36 = v15[5];
                v37 = v28 ^ 1;
                if ( v36 )
                  v36 = *v15;
                v38 = (*((int (__fastcall **)(unsigned int))a1[1] + 10))(v26 + 8) + v36;
                if ( v29 >= v38 )
                  v37 |= 1u;
                if ( (v37 & 1) == 0 )
                  goto LABEL_39;
                *a8 = (*((int (__fastcall **)(unsigned int))a1[1] + 13))(v26 + 6);
                v13[8] = (_DWORD *)v26;
                v13[7] = (_DWORD *)v38;
                v13[9] = v25;
                v13[6] = v15;
                if ( v29 < v38 )
                  goto LABEL_39;
                v28 = 1;
LABEL_38:
                v27 = v15[7];
                v26 += 12;
                if ( v27 <= v26 )
                  goto LABEL_39;
              }
              if ( v35 > 0x46 )
              {
                switch ( v35 )
                {
                  case 0x64u:
                    goto LABEL_49;
                  case 0x84u:
                    if ( v29 < (*((int (__fastcall **)(unsigned int))a1[1] + 10))(v26 + 8) )
                      goto LABEL_38;
                    v30 = (*((int (__fastcall **)(unsigned int))a1[1] + 10))(v26);
                    v31 = v13[3];
                    v32 = v122;
                    *a8 = 0;
                    v25 = (const char *)(v122 + v30);
                    v27 = v15[7];
                    v33 = (unsigned int)v31 + v111;
                    v34 = v32 >= v32 + v30;
                    if ( v32 <= v32 + v30 )
                      v34 = (unsigned int)v25 >= v33;
                    if ( v34 )
                      v25 = 0;
                    break;
                  case 0x48u:
                    goto LABEL_31;
                }
              }
              else
              {
                if ( v35 == 36 )
                {
LABEL_49:
                  v28 |= v112;
                  if ( v28 )
                    break;
                  v112 = 1;
                  goto LABEL_26;
                }
                if ( v35 == 68 )
                  goto LABEL_31;
              }
LABEL_26:
              v26 += 12;
            }
            while ( v27 > v26 );
          }
LABEL_39:
          *a5 = 1;
          if ( !v25 )
            goto LABEL_44;
          v39 = s == 0;
          if ( s )
            v39 = *v25 == 47;
          if ( v39 )
          {
LABEL_44:
            *a6 = v25;
          }
          else
          {
            v42 = strlen(s);
            v43 = (const char *)v13[10];
            if ( !v43 || j_strncmp(v43, s, v42) || j_strcmp((const char *)v13[10] + v42, v25) )
            {
              v44 = strlen(v25) + 1;
              v45 = (_DWORD *)sub_2ACBF4((int)a1, v42 + v44);
              v13[10] = v45;
              if ( !v45 )
                return 0;
              memcpy(v45, s, v42);
              memcpy((char *)v13[10] + v42, v25, v44);
            }
            *a6 = (const char *)v13[10];
          }
          v40 = v15[5];
          if ( v40 )
          {
            v41 = strchr((const char *)v15[5], 58);
            if ( v41 )
            {
              *v41 = 0;
              v40 = v15[5];
            }
            *a7 = v40;
          }
        }
        else
        {
          v17 = 0;
          v18 = (int)v13[5] - 1;
          if ( v13[5] != (_DWORD *)1 )
          {
            while ( 1 )
            {
              v19 = v13[4];
              v20 = (v17 + v18) / 2;
              v21 = v20;
              v22 = v20;
              v15 = &v19[6 * v20];
              if ( v16 < *v15 )
                break;
LABEL_10:
              if ( v19[6 * v22 + 6] > v16 )
              {
                v25 = (const char *)v15[4];
                v26 = v15[1] + 12;
                goto LABEL_17;
              }
              v17 = v21 + 1;
              if ( v21 + 1 == v18 )
                return 1;
            }
            while ( 1 )
            {
              v18 = v20;
              v24 = v17 + v20 + ((unsigned int)(v17 + v20) >> 31);
              if ( v17 == v18 )
                break;
              v20 = v24 >> 1;
              v21 = v20;
              v22 = v20;
              v15 = &v19[6 * v20];
              if ( *v15 <= v16 )
                goto LABEL_10;
            }
          }
        }
      }
    }
    return 1;
  }
  v13 = (_DWORD **)sub_2AD09C((int)a1, 0x2Cu);
  if ( !v13 )
    return 0;
  *v13 = sub_2AD7AC((int)a1, ".stab");
  v46 = sub_2AD7AC((int)a1, ".stabstr");
  v47 = (int)*v13;
  v13[1] = v46;
  v48 = v47 == 0;
  if ( v47 )
    v48 = v46 == 0;
  if ( v48 )
  {
    *v13 = sub_2AD7AC((int)a1, "$GDB_SYMBOLS$");
    v46 = sub_2AD7AC((int)a1, "$GDB_STRINGS$");
    v47 = (int)*v13;
    v13[1] = v46;
    v70 = v46 == 0;
    if ( v46 )
      v70 = v47 == 0;
    if ( v70 )
    {
      *a9 = v13;
      return 1;
    }
  }
  v49 = *(_DWORD *)(v47 + 40);
  if ( !v49 )
    v49 = *(_DWORD *)(v47 + 36);
  v111 = *((_DWORD *)v46 + 10);
  n = 12 * (v49 / 0xC);
  if ( !v111 )
    v111 = *((_DWORD *)v46 + 9);
  v13[2] = (_DWORD *)sub_2ACBF4((int)a1, n);
  v50 = sub_2ACBF4((int)a1, v111);
  v51 = v13[2];
  v13[3] = (_DWORD *)v50;
  v52 = v51 == 0;
  if ( v51 )
    v52 = v50 == 0;
  if ( v52 )
    return 0;
  if ( !sub_2ADEDC((int)a1, *v13, v51, (int)*v13, 0, n) )
    return 0;
  if ( !sub_2ADEDC((int)a1, v13[1], v13[3], v111, 0, v111) )
    return 0;
  v53 = sub_2A6ADC((int)a1);
  v54 = v53;
  if ( v53 < 0 )
    return 0;
  v55 = (char *)sub_2AB368(v53);
  v56 = v54 != 0;
  if ( v55 )
    v56 = 0;
  if ( v56 )
    return 0;
  v57 = sub_2A6B10((int)a1);
  if ( v57 < 0 )
  {
    if ( !v55 )
      return 0;
    goto LABEL_61;
  }
  if ( v57 )
  {
    v58 = *(_DWORD **)v55;
    if ( *(_DWORD *)v55 )
    {
      sa = v55;
      v59 = n;
      do
      {
        v68 = (_DWORD *)v58[3];
        v69 = v68[11];
        if ( v69 )
        {
          if ( v68[1] || v68[2] != 2 || v68[3] != 32 || v68[4] )
            goto LABEL_95;
          v60 = v68[5];
          v61 = v69 == -1;
          if ( v69 == -1 )
            v61 = v60 == 0;
          if ( !v61 )
          {
LABEL_95:
            sub_2A6A5C("Unsupported .stab relocation");
            ((void (__fastcall *)(int))loc_2A6C48)(5);
LABEL_61:
            free(v55);
            return 0;
          }
          v114 = v58[1];
          v62 = (int (__fastcall *)(char *))*((_DWORD *)a1[1] + 10);
          v123 = (char *)v13[2];
          v63 = sub_2A6904((int)a1);
          v64 = v62(&v123[v63 * v114]);
          v124 = v58[1];
          v115 = (char *)v13[2];
          v65 = *(_DWORD *)(*(_DWORD *)*v58 + 8)
              + v58[2]
              + *(_DWORD *)(*(_DWORD *)(*(_DWORD *)*v58 + 16) + 28)
              + (*(_DWORD *)(v58[3] + 40) & v64);
          v66 = (void (__fastcall *)(int, char *))*((_DWORD *)a1[1] + 12);
          v67 = sub_2A6904((int)a1);
          v66(v65, &v115[v67 * v124]);
        }
        v58 = (_DWORD *)*((_DWORD *)sa + 1);
        sa += 4;
      }
      while ( v58 );
      n = v59;
    }
  }
  else if ( !v55 )
  {
    goto LABEL_104;
  }
  free(v55);
LABEL_104:
  v71 = (unsigned int)v13[2];
  v72 = 0;
  v73 = n;
  v13[5] = 0;
  v74 = v71;
  if ( v71 >= v71 + n )
    return 1;
  do
  {
    v75 = *(unsigned __int8 *)(v74 + 4);
    if ( v75 != 100 )
    {
      if ( v75 != 36 )
        goto LABEL_109;
      if ( (*((int (__fastcall **)(unsigned int))a1[1] + 10))(v74) )
      {
        v72 = 0;
        v71 = (unsigned int)v13[2];
        v13[5] = (_DWORD *)((char *)v13[5] + 1);
        goto LABEL_109;
      }
      goto LABEL_120;
    }
    if ( v72 )
      v13[5] = (_DWORD *)((char *)v13[5] + 1);
    if ( !(*((int (__fastcall **)(unsigned int))a1[1] + 10))(v74) )
    {
      v72 = 0;
LABEL_120:
      v71 = (unsigned int)v13[2];
      goto LABEL_109;
    }
    v71 = (unsigned int)v13[2];
    if ( v74 + 16 < v71 + n )
    {
      v72 = v74;
      if ( *(_BYTE *)(v74 + 16) == 100 )
        v74 += 12;
    }
    else
    {
      v72 = v74;
    }
LABEL_109:
    v74 += 12;
  }
  while ( v74 < v71 + n );
  v76 = v13[5];
  if ( v72 )
  {
    v76 = (_DWORD *)((char *)v76 + 1);
    v13[5] = v76;
  }
  if ( !v76 )
    return 1;
  v77 = (_DWORD *)((char *)v76 + 1);
  v13[5] = v77;
  v78 = sub_2ACBF4((int)a1, 24 * (_DWORD)v77);
  v13[4] = (_DWORD *)v78;
  if ( v78 )
  {
    v130 = a3;
    v79 = 0;
    v125 = (unsigned int)v13[3];
    v80 = v125;
    v131 = a4;
    v81 = 0;
    v126 = 0;
    v82 = 0;
    v127 = 0;
    v83 = (unsigned int)v13[2];
    v84 = v13[5];
    sb = 1;
    while ( 2 )
    {
      v129 = 6 * v126;
      if ( (int)v84 <= v126 || v83 >= (unsigned int)v13[2] + v73 )
      {
        v88 = v81;
        v39 = v81 == 0;
        v128 = v82;
        a3 = v130;
        a4 = v131;
        v116 = v73;
        if ( v39 )
        {
          v89 = v13[4];
        }
        else
        {
          v90 = v88;
          v91 = v13[4];
          v126 = sb++;
          v92 = (*((int (__fastcall **)(unsigned int))a1[1] + 10))(v88 + 8);
          v89 = v13[4];
          v91[v129] = v92;
          v93 = &v89[v129];
          v93[1] = v90;
          v93[4] = v79;
          v93[2] = v125;
          v93[5] = 0;
          v93[3] = v128;
        }
        v94 = (char *)v13[2] + v116;
        v89[6 * v126] = -1;
        v95 = &v89[6 * v126];
        v95[2] = v80;
        v95[1] = v94;
        v95[3] = 0;
        v95[4] = 0;
        v95[5] = 0;
        v13[5] = (_DWORD *)sb;
        qsort(v89, sb, 0x18u, (__compar_fn_t)sub_302A58);
        *a9 = v13;
        goto LABEL_6;
      }
      v85 = *(unsigned __int8 *)(v83 + 4);
      if ( v85 == 36 )
      {
        v106 = (*((int (__fastcall **)(unsigned int))a1[1] + 10))(v83);
        v107 = v80 + v106;
        if ( v80 == v80 + v106 )
        {
          v86 = v83 + 12;
          v84 = v13[5];
        }
        else
        {
          v126 = sb++;
          v108 = v13[4];
          if ( v107 >= (unsigned int)v13[3] + v111 )
            v107 = 0;
          v118 = v107;
          v109 = (*((int (__fastcall **)(unsigned int))a1[1] + 10))(v83 + 8);
          v110 = &v13[4][v129];
          v108[v129] = v109;
          v84 = v13[5];
          v86 = v83 + 12;
          v81 = 0;
          v110[5] = v118;
          v110[1] = v83;
          v110[2] = v80;
          v110[3] = v82;
          v110[4] = v79;
        }
        goto LABEL_136;
      }
      if ( v85 <= 0x24 )
      {
        if ( !*(_BYTE *)(v83 + 4) && (unsigned int)v13[3] + v111 - v80 >= v127 )
        {
          v80 += v127;
          v105 = (*((int (__fastcall **)(unsigned int))a1[1] + 10))(v83 + 8);
          v84 = v13[5];
          v127 = v105;
          v86 = v83 + 12;
          goto LABEL_136;
        }
      }
      else
      {
        if ( v85 == 100 )
        {
          v96 = a1[1];
          v97 = (int (__fastcall *)(unsigned int))*((_DWORD *)v96 + 10);
          if ( v81 )
          {
            v117 = v13[4];
            v98 = v97(v81 + 8);
            v97 = (int (__fastcall *)(unsigned int))v13[4];
            v126 = sb++;
            v96 = a1[1];
            v117[v129] = v98;
            v99 = (_DWORD *)((char *)v97 + v129 * 4);
            v99[1] = v81;
            v99[3] = v82;
            v99[2] = v125;
            v99[4] = v79;
            v99[5] = 0;
          }
          v100 = (*((int (__fastcall **)(unsigned int, int (__fastcall *)(unsigned int)))v96 + 10))(v83, v97);
          v79 = v80 + v100;
          if ( v80 == v80 + v100 )
          {
            v82 = 0;
            v86 = v83 + 12;
            v79 = 0;
            v81 = 0;
            v84 = v13[5];
            goto LABEL_136;
          }
          v86 = v83 + 12;
          v101 = v80 >= v79;
          if ( v80 <= v79 )
            v101 = v79 >= (unsigned int)v13[3] + v111;
          if ( v101 )
            v79 = 0;
          if ( v83 + 16 < (unsigned int)v13[2] + v73 && *(_BYTE *)(v83 + 16) == 100 )
          {
            v102 = (*((int (__fastcall **)(unsigned int))a1[1] + 10))(v86);
            v103 = v80 + v102;
            v104 = v80 >= v80 + v102;
            if ( v80 <= v80 + v102 )
              v104 = v103 >= (unsigned int)v13[3] + v111;
            v82 = v79;
            if ( v104 )
            {
              v81 = v83;
              v86 = v83 + 24;
              v125 = v80;
              v79 = 0;
              v84 = v13[5];
            }
            else
            {
              v84 = v13[5];
              v81 = v83;
              v86 = v83 + 24;
              v79 = v103;
              v125 = v80;
            }
            goto LABEL_136;
          }
          v81 = v83;
          v82 = 0;
          v125 = v80;
          goto LABEL_143;
        }
        if ( v85 == 132 )
        {
          v79 = v80 + (*((int (__fastcall **)(unsigned int))a1[1] + 10))(v83);
          v86 = v83 + 12;
          v87 = v80 >= v79;
          if ( v80 <= v79 )
            v87 = v79 >= (unsigned int)v13[3] + v111;
          if ( v87 )
          {
            v79 = 0;
            v84 = v13[5];
LABEL_136:
            v83 = v86;
            continue;
          }
LABEL_143:
          v84 = v13[5];
          goto LABEL_136;
        }
      }
      break;
    }
    v86 = v83 + 12;
    goto LABEL_136;
  }
  return 0;
}

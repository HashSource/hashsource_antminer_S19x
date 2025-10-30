int __fastcall sub_4E1AC(unsigned int *a1, int *a2, _BYTE *a3, int a4)
{
  int v5; // r10
  unsigned int *v8; // r0
  unsigned int v9; // r3
  unsigned int v10; // lr
  int result; // r0
  unsigned int v12; // r1
  char *v13; // r2
  char *v14; // r11
  int *v15; // r5
  unsigned int i; // r2
  int v17; // r6
  int v18; // lr
  unsigned int v19; // r3
  int v20; // r10
  int *v21; // r1
  unsigned int v22; // r4
  unsigned int v23; // r7
  int *v24; // r12
  int v25; // r2
  size_t v26; // r4
  unsigned int v27; // r3
  _BYTE *j; // r0
  void *v29; // r3
  char *v30; // r1
  char *v31; // r11
  char *v32; // r10
  unsigned int v33; // r0
  int v34; // r4
  int v35; // r7
  char *v36; // r1
  unsigned int v37; // r2
  unsigned int v38; // r5
  char *v39; // r12
  char *v40; // r6
  int v41; // r3
  unsigned int v42; // r3
  _BYTE *n; // r1
  __int16 v44; // r3
  bool v45; // cc
  int *v46; // r2
  unsigned int v47; // r4
  int v48; // r4
  _BYTE *v49; // r0
  int v50; // r2
  int *v51; // r2
  _BYTE *v52; // r4
  int v53; // r6
  int v54; // r1
  __int16 v55; // r0
  unsigned int v56; // r10
  _BYTE *v57; // r1
  _BYTE *v58; // r2
  char *v59; // r12
  unsigned int v60; // r3
  _DWORD *v61; // r0
  unsigned int *v62; // r6
  int v63; // r3
  unsigned int v64; // r3
  unsigned int v65; // r6
  unsigned int v66; // r6
  unsigned int v67; // r2
  unsigned int v68; // r4
  unsigned int v69; // r3
  unsigned int v70; // r0
  __int16 v71; // r2
  bool v72; // cc
  char *v73; // r3
  char *v74; // r4
  int v75; // r8
  _BYTE *v76; // r3
  int v77; // r1
  char *v78; // r1
  _BYTE *v79; // r8
  int v80; // r4
  int v81; // r0
  _BYTE *v82; // r0
  unsigned int v83; // lr
  _BYTE *v84; // r1
  char *v85; // r4
  unsigned int v86; // r3
  _DWORD *v87; // r5
  _DWORD *v88; // r2
  unsigned int k; // r3
  unsigned int v90; // r5
  char v91; // r3
  unsigned int v92; // r5
  unsigned int v93; // r3
  char *v94; // r4
  unsigned int v95; // r1
  unsigned int v96; // r2
  bool v97; // cf
  int v98; // t1
  int *v99; // r0
  unsigned int v100; // r12
  unsigned int v101; // r3
  int *v102; // r6
  int v103; // r3
  unsigned int v104; // r3
  unsigned int *v105; // r2
  int *v106; // r7
  int *v107; // r12
  unsigned int v108; // r3
  int v109; // r2
  unsigned int v110; // r5
  char *v111; // r2
  unsigned int v112; // r12
  unsigned int v113; // r3
  char *v114; // r4
  int v115; // r3
  unsigned int v116; // r3
  _DWORD *v117; // r2
  _DWORD *v118; // r3
  int *v119; // r4
  unsigned int m; // r2
  unsigned int v121; // r3
  int v122; // r0
  int **v123; // [sp+0h] [bp-44h]
  unsigned int v125; // [sp+8h] [bp-3Ch]
  char *v126; // [sp+8h] [bp-3Ch]
  unsigned int v127; // [sp+Ch] [bp-38h]
  int *v128; // [sp+Ch] [bp-38h]
  unsigned int v129; // [sp+10h] [bp-34h]
  unsigned int v130; // [sp+10h] [bp-34h]
  char *v131; // [sp+14h] [bp-30h]
  int *v132; // [sp+18h] [bp-2Ch]
  char *v133; // [sp+18h] [bp-2Ch]
  unsigned __int16 *v134; // [sp+18h] [bp-2Ch]
  unsigned int v135; // [sp+1Ch] [bp-28h]
  unsigned int v136; // [sp+1Ch] [bp-28h]
  int *src; // [sp+20h] [bp-24h]
  char *srca; // [sp+20h] [bp-24h]
  char *srcb; // [sp+20h] [bp-24h]
  _BYTE *v140; // [sp+24h] [bp-20h]
  char *v141; // [sp+24h] [bp-20h]
  unsigned int v142; // [sp+24h] [bp-20h]
  unsigned int *v143; // [sp+24h] [bp-20h]
  char *v144; // [sp+28h] [bp-1Ch]
  _BYTE *v145; // [sp+28h] [bp-1Ch]
  char *v146; // [sp+28h] [bp-1Ch]
  unsigned int v147; // [sp+2Ch] [bp-18h]
  char *v148; // [sp+2Ch] [bp-18h]
  unsigned int v149; // [sp+30h] [bp-14h]
  unsigned int v150; // [sp+30h] [bp-14h]
  unsigned int v151; // [sp+34h] [bp-10h]
  int v152; // [sp+38h] [bp-Ch]
  int v153; // [sp+38h] [bp-Ch]

  v5 = a4;
  v8 = sub_48A94(a1, a4);
  v9 = v8[4100];
  if ( v9 >= 0x10000 || (v10 = v8[4098], v9 >= v10) )
  {
    if ( (unsigned int)v5 <= 0x7E000000 )
    {
      if ( !v5 )
      {
        result = 1;
        *a3 = 0;
        v123 = (int **)(a1 + 4096);
        goto LABEL_8;
      }
      v123 = (int **)(a1 + 4096);
      v12 = a1[4096];
      v132 = (int *)v12;
      v127 = a1[4098];
      v13 = (char *)a2 + v5;
      v144 = (char *)a2 + v5;
      v129 = (unsigned int)a2 + v5 - 11;
      if ( v12 )
      {
        v135 = v12 + v9 - a1[4098];
        v147 = (unsigned int)(v13 - 5);
        v149 = v12 + v9;
      }
      else
      {
        v149 = 0;
        v147 = (unsigned int)(v13 - 5);
        v135 = 0;
      }
      a1[4100] = v9 + v5;
      a1[4098] = v5 + v127;
      a1[4099] = 2;
      if ( v5 > 12 )
      {
        v14 = (char *)a2 - v127;
        v15 = (int *)((char *)a2 + 1);
        src = a2;
        v140 = a3;
        v152 = v5;
        a1[(unsigned int)(-1640531535 * *a2) >> 20] = v127;
        for ( i = (unsigned int)(-1640531535 * *(int *)((char *)a2 + 1)) >> 20;
              ;
              i = (unsigned int)(-1640531535 * v109) >> 20 )
        {
          v17 = 64;
          v18 = 1;
          while ( 1 )
          {
            v19 = a1[i];
            v20 = i;
            v21 = (int *)((char *)v15 + v18);
            v22 = (char *)v15 - v14;
            v18 = v17 >> 6;
            v23 = (unsigned int)&v14[v19];
            v24 = a2;
            if ( (unsigned int)v21 > v129 )
            {
              v5 = v152;
              goto LABEL_23;
            }
            ++v17;
            if ( v127 > v19 )
            {
              v24 = v132;
              v23 = v135 + v19;
            }
            v25 = *v21;
            a1[v20] = v22;
            i = (unsigned int)(-1640531535 * v25) >> 20;
            if ( v22 <= v19 + 0xFFFF && *v15 == *(_DWORD *)v23 )
              break;
            v15 = v21;
          }
          v44 = v22 - v19;
          v45 = v15 > src;
          if ( v15 > src )
            v45 = v23 > (unsigned int)v24;
          if ( v45 && *(unsigned __int8 *)(v23 - 1) == *((unsigned __int8 *)v15 - 1) )
          {
            v46 = (int *)((char *)v15 - 1);
            v47 = v23 - 1;
            while ( 1 )
            {
              v15 = v46;
              v23 = v47;
              v97 = src >= v46;
              if ( src < v46 )
                v97 = (unsigned int)v24 >= v47;
              if ( v97 )
                break;
              v98 = *(unsigned __int8 *)--v47;
              if ( *((unsigned __int8 *)v46 - 1) != v98 )
                break;
              v46 = (int *)((char *)v46 - 1);
            }
          }
          v48 = (char *)v15 - (char *)src;
          v49 = v140 + 1;
          if ( (unsigned int)((char *)v15 - (char *)src) <= 0xE )
          {
            *v140 = 16 * v48;
          }
          else
          {
            v50 = v48 - 15;
            for ( *v140 = -16; v50 > 254; ++v49 )
            {
              v50 -= 255;
              *v49 = -1;
            }
            *v49++ = v50;
          }
          v51 = src;
          v52 = &v49[v48];
          do
          {
            v53 = *v51;
            v49 += 8;
            v54 = v51[1];
            v51 += 2;
            *((_DWORD *)v49 - 2) = v53;
            *((_DWORD *)v49 - 1) = v54;
          }
          while ( v52 > v49 );
          v55 = v44;
          v56 = (unsigned int)(v144 - 8);
          v57 = v140;
          srcb = v144 - 6;
          while ( 2 )
          {
            *(_WORD *)v52 = v55;
            v58 = v52 + 2;
            if ( v132 != v24 )
            {
              v59 = (char *)(v15 + 1);
              if ( (unsigned int)(v15 + 1) >= v56 )
              {
                v62 = (unsigned int *)(v23 + 4);
                v61 = v15 + 1;
                goto LABEL_158;
              }
              v60 = v15[1] ^ *(_DWORD *)(v23 + 4);
              if ( v60 )
              {
                v65 = __clz(__rbit32(v60)) >> 3;
              }
              else
              {
                v61 = v15 + 2;
                v62 = (unsigned int *)(v23 + 8);
                if ( v56 <= (unsigned int)(v15 + 2) )
                  goto LABEL_158;
                v63 = *(_DWORD *)(v23 + 8);
                v23 = v15[2];
                v64 = v63 ^ v23;
                if ( v64 )
                {
LABEL_69:
                  v65 = (char *)v61 + (__clz(__rbit32(v64)) >> 3) - v59;
                }
                else
                {
                  while ( 1 )
                  {
                    ++v61;
                    ++v62;
                    if ( v56 <= (unsigned int)v61 )
                      break;
                    v23 = *v62;
                    v64 = *v61 ^ *v62;
                    if ( v64 )
                      goto LABEL_69;
                  }
LABEL_158:
                  if ( v61 < (_DWORD *)srcb )
                  {
                    v23 = *(unsigned __int16 *)v61;
                    if ( v23 == *(unsigned __int16 *)v62 )
                    {
                      v61 = (_DWORD *)((char *)v61 + 2);
                      v62 = (unsigned int *)((char *)v62 + 2);
                    }
                  }
                  if ( (unsigned int)v61 < v147 && *(unsigned __int8 *)v62 == *(unsigned __int8 *)v61 )
                    v61 = (_DWORD *)((char *)v61 + 1);
                  v65 = (char *)v61 - v59;
                }
              }
              v15 = (int *)((char *)v15 + v65 + 4);
              goto LABEL_71;
            }
            v99 = (int *)((char *)v15 + v149 - v23);
            v126 = (char *)(v15 + 1);
            if ( (unsigned int)v99 >= v147 )
              v99 = (int *)v147;
            v100 = (unsigned int)v99 - 3;
            if ( v15 + 1 >= (int *)((char *)v99 - 3) )
            {
              v102 = v15 + 1;
              v143 = (unsigned int *)(v23 + 4);
              goto LABEL_200;
            }
            v101 = v15[1] ^ *(_DWORD *)(v23 + 4);
            if ( v101 )
            {
              v65 = __clz(__rbit32(v101)) >> 3;
              goto LABEL_146;
            }
            v102 = v15 + 2;
            v143 = (unsigned int *)(v23 + 8);
            if ( v100 <= (unsigned int)(v15 + 2) )
              goto LABEL_200;
            v103 = *(_DWORD *)(v23 + 8);
            v23 = v15[2];
            v104 = v103 ^ v23;
            if ( v104 )
              goto LABEL_145;
            v105 = v143;
            while ( 2 )
            {
              ++v102;
              ++v105;
              if ( v100 <= (unsigned int)v102 )
              {
                v143 = v105;
                v58 = v52 + 2;
LABEL_200:
                if ( v102 < (int *)((char *)v99 - 1) )
                {
                  v23 = *(unsigned __int16 *)v102;
                  if ( v23 == *(unsigned __int16 *)v143 )
                  {
                    v102 = (int *)((char *)v102 + 2);
                    v143 = (unsigned int *)((char *)v143 + 2);
                  }
                }
                if ( v102 < v99 )
                {
                  v23 = *(unsigned __int8 *)v143;
                  if ( v23 == *(unsigned __int8 *)v102 )
                    v102 = (int *)((char *)v102 + 1);
                }
                v65 = (char *)v102 - v126;
                goto LABEL_146;
              }
              v23 = *v105;
              v104 = *v102 ^ *v105;
              if ( !v104 )
                continue;
              break;
            }
            v58 = v52 + 2;
LABEL_145:
            v65 = (char *)v102 + (__clz(__rbit32(v104)) >> 3) - v126;
LABEL_146:
            v15 = (int *)((char *)v15 + v65 + 4);
            if ( v15 == v99 )
            {
              if ( (unsigned int)v15 >= v56 )
              {
                v107 = a2;
                v106 = v15;
                goto LABEL_223;
              }
              if ( *v15 != *a2 )
              {
                v23 = __clz(__rbit32(*v15 ^ *a2)) >> 3;
              }
              else
              {
                v106 = v15 + 1;
                v107 = a2 + 1;
                if ( v56 <= (unsigned int)(v15 + 1) )
                  goto LABEL_223;
                v108 = v15[1] ^ a2[1];
                if ( v108 )
                {
LABEL_153:
                  v23 = (char *)v106 + (__clz(__rbit32(v108)) >> 3) - (char *)v15;
                }
                else
                {
                  while ( 1 )
                  {
                    ++v106;
                    ++v107;
                    if ( v56 <= (unsigned int)v106 )
                      break;
                    v108 = *v106 ^ *v107;
                    if ( v108 )
                      goto LABEL_153;
                  }
LABEL_223:
                  if ( v106 < (int *)srcb && *(unsigned __int16 *)v106 == *(unsigned __int16 *)v107 )
                  {
                    v106 = (int *)((char *)v106 + 2);
                    v107 = (int *)((char *)v107 + 2);
                  }
                  if ( (unsigned int)v106 < v147 && *(unsigned __int8 *)v107 == *(unsigned __int8 *)v106 )
                    v106 = (int *)((char *)v106 + 1);
                  v23 = (char *)v106 - (char *)v15;
                }
              }
              v65 += v23;
              v15 = (int *)((char *)v15 + v23);
            }
LABEL_71:
            if ( v65 <= 0xE )
            {
              *v57 += v65;
              v57 = v58;
            }
            else
            {
              v66 = v65 - 15;
              *v57 += 15;
              v52[2] = -1;
              v52[3] = -1;
              v52[4] = -1;
              for ( v52[5] = -1; v66 >= 0x3FC; v58[3] = -1 )
              {
                v66 -= 1020;
                v58[4] = -1;
                v58 += 4;
                v58[1] = -1;
                v58[2] = -1;
              }
              v57 = &v58[v66 / 0xFF + 1];
              v58[v66 / 0xFF] = v66 + v66 / 0xFF;
            }
            if ( (unsigned int)v15 >= v129 )
            {
              v140 = v57;
              v5 = v152;
              src = v15;
              goto LABEL_23;
            }
            v67 = (char *)v15 - v14;
            a1[(unsigned int)(-1640531535 * *(int *)((char *)v15 - 2)) >> 20] = (char *)v15 - 2 - v14;
            v68 = v127;
            v69 = (unsigned int)(-1640531535 * *v15) >> 20;
            v70 = a1[v69];
            a1[v69] = (char *)v15 - v14;
            if ( v127 <= v70 )
              v23 = (unsigned int)&v14[v70];
            else
              v68 = v135;
            if ( v127 <= v70 )
              v24 = a2;
            else
              v24 = v132;
            if ( v127 > v70 )
              v23 = v68 + v70;
            if ( v67 <= v70 + 0xFFFF && *v15 == *(_DWORD *)v23 )
            {
              *v57 = 0;
              v55 = v67 - v70;
              v52 = v57 + 1;
              continue;
            }
            break;
          }
          v109 = *(int *)((char *)v15 + 1);
          src = v15;
          v140 = v57;
          v15 = (int *)((char *)v15 + 1);
        }
      }
      src = a2;
      v140 = a3;
LABEL_23:
      v26 = v144 - (char *)src;
      if ( (unsigned int)(v144 - (char *)src) <= 0xE )
      {
        *v140 = 16 * v26;
        v29 = v140 + 1;
      }
      else
      {
        v27 = v26 - 15;
        *v140 = -16;
        for ( j = v140 + 1; v27 > 0xFE; ++j )
        {
          v27 -= 255;
          *j = -1;
        }
        *j = v27;
        v29 = j + 1;
      }
      v30 = (char *)src;
      goto LABEL_28;
    }
LABEL_7:
    result = 0;
    v123 = (int **)(a1 + 4096);
    goto LABEL_8;
  }
  if ( (unsigned int)v5 > 0x7E000000 )
    goto LABEL_7;
  if ( !v5 )
  {
    *a3 = 0;
    result = 1;
    v123 = (int **)(a1 + 4096);
    goto LABEL_8;
  }
  v123 = (int **)(v8 + 4096);
  v136 = v8[4096];
  v148 = (char *)a2 + v5;
  v125 = (unsigned int)a2 + v5 - 11;
  if ( v136 )
  {
    srca = (char *)(v136 + v9 - v10);
    v150 = (unsigned int)a2 + v5 - 5;
    v151 = v136 + v9;
  }
  else
  {
    v151 = 0;
    v150 = (unsigned int)a2 + v5 - 5;
    srca = 0;
  }
  a1[4100] = v9 + v5;
  a1[4098] = v10 + v5;
  a1[4099] = 2;
  if ( v5 <= 12 )
  {
    v141 = (char *)a2;
    v145 = a3;
    goto LABEL_44;
  }
  v130 = v10 - v9;
  v153 = v5;
  v31 = (char *)a2 + 1;
  v32 = (char *)a2 - v10;
  v141 = (char *)a2;
  v145 = a3;
  v131 = (char *)v10;
  v128 = a2;
  a1[(unsigned int)(-1640531535 * *a2) >> 20] = v10;
  v33 = (unsigned int)(-1640531535 * *(int *)((char *)a2 + 1)) >> 20;
LABEL_35:
  v34 = 64;
  v35 = 1;
  while ( 1 )
  {
    v36 = &v31[v35];
    v37 = a1[v33];
    v133 = v31;
    v38 = v31 - v32;
    v45 = (unsigned int)&v31[v35] > v125;
    v35 = v34 >> 6;
    v39 = (char *)v128;
    v40 = &v32[v37];
    if ( v45 )
    {
      a2 = v128;
      v5 = v153;
      goto LABEL_44;
    }
    ++v34;
    if ( (unsigned int)v131 > v37 )
    {
      v39 = (char *)v136;
      v40 = &srca[v37];
    }
    v41 = *(_DWORD *)v36;
    a1[v33] = v38;
    v33 = (unsigned int)(-1640531535 * v41) >> 20;
    if ( v130 <= v37 && v38 <= v37 + 0xFFFF && *(_DWORD *)v31 == *(_DWORD *)v40 )
      break;
    v31 = v36;
  }
  v71 = v38 - v37;
  v72 = v40 > v39;
  if ( v40 > v39 )
    v72 = v31 > v141;
  if ( v72 && *(v40 - 1) == *(v31 - 1) )
  {
    v73 = v31 - 1;
    v74 = v40 - 1;
    while ( 1 )
    {
      v40 = v74;
      v31 = v73;
      --v74;
      if ( v73 <= v141 || v40 <= v39 )
        break;
      if ( *(v73 - 1) != *(v40 - 1) )
      {
        v133 = v73;
        goto LABEL_93;
      }
      --v73;
    }
    v133 = v73;
  }
LABEL_93:
  v75 = v133 - v141;
  v76 = v145 + 1;
  if ( (unsigned int)(v133 - v141) <= 0xE )
  {
    *v145 = 16 * v75;
  }
  else
  {
    v77 = v75 - 15;
    for ( *v145 = -16; v77 > 254; ++v76 )
    {
      v77 -= 255;
      *v76 = -1;
    }
    *v76++ = v77;
  }
  v78 = v141;
  v79 = &v76[v75];
  do
  {
    v80 = *(_DWORD *)v78;
    v76 += 8;
    v81 = *((_DWORD *)v78 + 1);
    v78 += 8;
    *((_DWORD *)v76 - 2) = v80;
    *((_DWORD *)v76 - 1) = v81;
  }
  while ( v79 > v76 );
  v82 = v145;
  v83 = (unsigned int)(v148 - 8);
  v142 = (unsigned int)(v148 - 6);
  while ( 1 )
  {
    *(_WORD *)v79 = v71;
    v84 = v79 + 2;
    if ( (char *)v136 != v39 )
    {
      v85 = v31 + 4;
      if ( (unsigned int)(v31 + 4) >= v83 )
      {
        v88 = v40 + 4;
        v87 = v31 + 4;
      }
      else
      {
        v86 = *((_DWORD *)v31 + 1) ^ *((_DWORD *)v40 + 1);
        if ( v86 )
        {
          v90 = __clz(__rbit32(v86)) >> 3;
          goto LABEL_108;
        }
        v87 = v31 + 8;
        v88 = v40 + 8;
        if ( v83 > (unsigned int)(v31 + 8) )
        {
          v40 = (char *)*((_DWORD *)v40 + 2);
          for ( k = *((_DWORD *)v31 + 2) ^ (unsigned int)v40; !k; k = *v87 ^ *v88 )
          {
            ++v87;
            ++v88;
            if ( v83 <= (unsigned int)v87 )
              goto LABEL_192;
            v40 = (char *)*v88;
          }
          v90 = (char *)v87 + (__clz(__rbit32(k)) >> 3) - v85;
LABEL_108:
          v31 += v90 + 4;
          goto LABEL_109;
        }
      }
LABEL_192:
      if ( (unsigned int)v87 < v142 )
      {
        v40 = (char *)*(unsigned __int16 *)v87;
        if ( v40 == (char *)*(unsigned __int16 *)v88 )
        {
          v87 = (_DWORD *)((char *)v87 + 2);
          v88 = (_DWORD *)((char *)v88 + 2);
        }
      }
      if ( (unsigned int)v87 < v150 && *(unsigned __int8 *)v88 == *(unsigned __int8 *)v87 )
        v87 = (_DWORD *)((char *)v87 + 1);
      v90 = (char *)v87 - v85;
      goto LABEL_108;
    }
    v110 = (unsigned int)(v31 + 4);
    v111 = &v31[v151 - (_DWORD)v40];
    if ( (unsigned int)v111 >= v150 )
      v111 = (char *)v150;
    v112 = (unsigned int)(v111 - 3);
    if ( v110 >= (unsigned int)(v111 - 3) )
    {
      v114 = v31 + 4;
      v134 = (unsigned __int16 *)(v40 + 4);
    }
    else
    {
      v113 = *((_DWORD *)v31 + 1) ^ *((_DWORD *)v40 + 1);
      if ( v113 )
      {
        v90 = __clz(__rbit32(v113)) >> 3;
        goto LABEL_181;
      }
      v114 = v31 + 8;
      v134 = (unsigned __int16 *)(v40 + 8);
      if ( v112 > (unsigned int)(v31 + 8) )
      {
        v115 = *((_DWORD *)v40 + 2);
        v40 = (char *)*((_DWORD *)v31 + 2);
        v116 = v115 ^ (unsigned int)v40;
        if ( v116 )
        {
LABEL_180:
          v90 = (unsigned int)&v114[(__clz(__rbit32(v116)) >> 3) - v110];
          goto LABEL_181;
        }
        v146 = v111;
        v117 = v134;
        while ( 1 )
        {
          v114 += 4;
          ++v117;
          if ( v112 <= (unsigned int)v114 )
            break;
          v40 = (char *)*v117;
          v116 = *(_DWORD *)v114 ^ *v117;
          if ( v116 )
          {
            v111 = v146;
            goto LABEL_180;
          }
        }
        v134 = (unsigned __int16 *)v117;
        v111 = v146;
      }
    }
    if ( v114 < v111 - 1 )
    {
      v40 = (char *)*(unsigned __int16 *)v114;
      if ( v40 == (char *)*v134 )
      {
        v114 += 2;
        ++v134;
      }
    }
    if ( v114 < v111 )
    {
      v40 = (char *)*(unsigned __int8 *)v134;
      if ( v40 == (char *)(unsigned __int8)*v114 )
        ++v114;
    }
    v90 = (unsigned int)&v114[-v110];
LABEL_181:
    v31 += v90 + 4;
    if ( v31 != v111 )
      goto LABEL_109;
    if ( (unsigned int)v31 >= v83 )
    {
      v119 = v128;
      v118 = v31;
LABEL_237:
      if ( (unsigned int)v118 < v142 )
      {
        v40 = (char *)*(unsigned __int16 *)v118;
        if ( v40 == (char *)*(unsigned __int16 *)v119 )
        {
          v118 = (_DWORD *)((char *)v118 + 2);
          v119 = (int *)((char *)v119 + 2);
        }
      }
      if ( (unsigned int)v118 < v150 && *(unsigned __int8 *)v119 == *(unsigned __int8 *)v118 )
        v118 = (_DWORD *)((char *)v118 + 1);
      v121 = (char *)v118 - v31;
      goto LABEL_189;
    }
    if ( *(_DWORD *)v31 != *v128 )
    {
      v121 = __clz(__rbit32(*(_DWORD *)v31 ^ *v128)) >> 3;
    }
    else
    {
      v118 = v31 + 4;
      v119 = v128 + 1;
      if ( v83 <= (unsigned int)(v31 + 4) )
        goto LABEL_237;
      v40 = (char *)v128[1];
      for ( m = *((_DWORD *)v31 + 1) ^ (unsigned int)v40; !m; m = *v118 ^ *v119 )
      {
        ++v118;
        ++v119;
        if ( v83 <= (unsigned int)v118 )
          goto LABEL_237;
        v40 = (char *)*v119;
      }
      v121 = (char *)v118 + (__clz(__rbit32(m)) >> 3) - v31;
    }
LABEL_189:
    v90 += v121;
    v31 += v121;
LABEL_109:
    v91 = *v82;
    if ( v90 <= 0xE )
    {
      *v82 = v90 + v91;
      v82 = v79 + 2;
    }
    else
    {
      v92 = v90 - 15;
      *v82 = v91 + 15;
      v79[2] = -1;
      v79[3] = -1;
      v79[4] = -1;
      for ( v79[5] = -1; v92 >= 0x3FC; v84[3] = -1 )
      {
        v92 -= 1020;
        v84[4] = -1;
        v84 += 4;
        v84[1] = -1;
        v84[2] = -1;
      }
      v82 = &v84[v92 / 0xFF + 1];
      v84[v92 / 0xFF] = v92 + v92 / 0xFF;
    }
    if ( (unsigned int)v31 >= v125 )
      break;
    v93 = v31 - v32;
    a1[(unsigned int)(-1640531535 * *(_DWORD *)(v31 - 2)) >> 20] = v31 - 2 - v32;
    v94 = v131;
    v95 = (unsigned int)(-1640531535 * *(_DWORD *)v31) >> 20;
    v96 = a1[v95];
    a1[v95] = v31 - v32;
    if ( (unsigned int)v131 <= v96 )
      v40 = &v32[v96];
    else
      v94 = srca;
    if ( (unsigned int)v131 <= v96 )
      v39 = (char *)v128;
    else
      v39 = (char *)v136;
    if ( (unsigned int)v131 > v96 )
      v40 = &v94[v96];
    if ( v130 > v96 || v93 > v96 + 0xFFFF || *(_DWORD *)v31 != *(_DWORD *)v40 )
    {
      v145 = v82;
      v122 = *(_DWORD *)(v31 + 1);
      v141 = v31++;
      v33 = (unsigned int)(-1640531535 * v122) >> 20;
      goto LABEL_35;
    }
    v71 = v93 - v96;
    *v82 = 0;
    v79 = v82 + 1;
  }
  v145 = v82;
  a2 = v128;
  v5 = v153;
  v141 = v31;
LABEL_44:
  v26 = v148 - v141;
  if ( (unsigned int)(v148 - v141) <= 0xE )
  {
    *v145 = 16 * v26;
    v29 = v145 + 1;
  }
  else
  {
    v42 = v26 - 15;
    *v145 = -16;
    for ( n = v145 + 1; v42 > 0xFE; ++n )
    {
      v42 -= 255;
      *n = -1;
    }
    *n = v42;
    v29 = n + 1;
  }
  v30 = v141;
LABEL_28:
  result = (_BYTE *)memcpy(v29, v30, v26) + v26 - a3;
LABEL_8:
  *v123 = a2;
  a1[4100] = v5;
  return result;
}

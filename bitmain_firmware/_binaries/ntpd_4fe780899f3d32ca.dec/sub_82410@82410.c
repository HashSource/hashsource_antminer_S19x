int **__fastcall sub_82410(char *a1, const void *a2, size_t a3)
{
  char *v3; // r4
  char *v6; // r0
  int **v7; // r5
  int **v8; // t1
  int **v9; // r0
  int *v10; // r0
  char *v11; // r0
  unsigned int v12; // r3
  unsigned int v13; // t1
  int *v14; // r9
  void *v15; // r0
  int *v17; // r6
  int v18; // r8
  int v19; // r7
  int *v20; // r10
  int v21; // r4
  int v22; // r5
  int v23; // t1
  const char *v24; // r11
  int v25; // t1
  unsigned int v26; // r3
  char *v27; // r8
  const char *v28; // r9
  char *v29; // r0
  int v30; // t1
  unsigned int v31; // r3
  unsigned int v32; // r2
  int v33; // r1
  const char *v34; // r7
  char *v35; // r0
  int v36; // t1
  char *v37; // r2
  char *v38; // r4
  char *v39; // r3
  char v40; // t1
  char *v41; // r0
  char *v42; // r3
  int v43; // r10
  char *v44; // r9
  char *v45; // r2
  int v46; // t1
  size_t v47; // r9
  int v48; // r2
  int v49; // t1
  char *v50; // r0
  char *v51; // r7
  char *v52; // r0
  int v53; // t1
  size_t v54; // r10
  char *v55; // r0
  int v56; // r3
  int v57; // t1
  char *v58; // r0
  char *v59; // r1
  char *v60; // r9
  int v61; // r2
  char *v62; // r8
  int v63; // r0
  char *v64; // r0
  unsigned __int8 *v65; // r8
  int v66; // t1
  bool v67; // zf
  int v68; // r0
  char *v69; // r0
  int v70; // t1
  char *v71; // r2
  char *v72; // r0
  char *v73; // r1
  int v74; // r3
  int v75; // t1
  int v76; // t1
  _BYTE *v77; // r0
  _BYTE *v78; // r10
  int v79; // r3
  _DWORD *v80; // r0
  int v81; // r7
  _DWORD *v82; // r10
  int v83; // r2
  unsigned int v84; // r3
  unsigned int v85; // t1
  _BOOL4 v86; // r3
  int v87; // r2
  int v88; // r0
  int v89; // r9
  unsigned int v90; // r0
  unsigned int v91; // r8
  char *v92; // r10
  _BYTE *v93; // r7
  size_t v94; // r0
  _BYTE *v95; // r2
  int v96; // t1
  int v97; // r3
  int v98; // r3
  _DWORD *v99; // r0
  unsigned int v100; // r1
  unsigned int v101; // r3
  unsigned int v102; // t1
  int v103; // r2
  unsigned __int8 *v104; // r1
  bool v105; // zf
  int v106; // r2
  char *v107; // r1
  char *v108; // r0
  int v109; // t1
  const char *v110; // r0
  char *v111; // r0
  int v112; // r3
  const char *v113; // r7
  int v114; // t1
  size_t v115; // r0
  const char *v116; // r1
  int v117; // [sp+Ch] [bp-78h]
  int **v118; // [sp+10h] [bp-74h]
  size_t n; // [sp+14h] [bp-70h]
  size_t na; // [sp+14h] [bp-70h]
  int v121; // [sp+18h] [bp-6Ch]
  int **v122; // [sp+1Ch] [bp-68h]
  char *v123; // [sp+1Ch] [bp-68h]
  char *v124; // [sp+20h] [bp-64h]
  char *v125; // [sp+20h] [bp-64h]
  int v126[3]; // [sp+28h] [bp-5Ch] BYREF
  char needle[4]; // [sp+34h] [bp-50h] BYREF
  _BYTE s[76]; // [sp+38h] [bp-4Ch] BYREF

  v3 = a1;
  if ( !a1 )
  {
    v7 = 0;
    *_errno_location() = 22;
    return v7;
  }
  v6 = (char *)dword_107334;
  if ( !dword_107334 )
    v6 = sub_7E2F8(12);
  v7 = (int **)(unsigned __int8)*v3;
  if ( *((_BYTE *)v7 + (_DWORD)v6) )
  {
    do
    {
      v8 = (int **)(unsigned __int8)*++v3;
      v7 = v8;
    }
    while ( *((_BYTE *)v8 + (_DWORD)v6) );
  }
  if ( !v7 )
  {
    *_errno_location() = 42;
    return v7;
  }
  v9 = (int **)malloc(a3 + 13);
  v7 = v9;
  if ( !v9 )
    sub_C610(a3 + 13);
  *v9 = (_DWORD *)&byte_6;
  v9[1] = (int *)(v9 + 3);
  *((_BYTE *)memcpy(v9 + 3, a2, a3) + a3) = 0;
  v10 = (int *)malloc(0x20u);
  if ( !v10 )
    sub_C610(32);
  v7[2] = v10;
  *v10 = 0;
  v10[1] = 6;
LABEL_10:
  v11 = (char *)dword_107334;
  if ( !dword_107334 )
    goto LABEL_76;
  while ( 1 )
  {
    v12 = (unsigned __int8)*v3;
    if ( v11[v12] )
    {
      do
      {
        v13 = (unsigned __int8)*++v3;
        v12 = v13;
      }
      while ( v11[v13] );
    }
    if ( v12 <= 0x7F && (dword_9F184[v12] & 0x180040) != 0 )
    {
      v51 = v3 + 1;
      v52 = (char *)dword_107374;
      if ( !dword_107374 )
        v52 = sub_7E2F8(28);
      if ( v52[(unsigned __int8)v3[1]] )
      {
        do
          v53 = (unsigned __int8)*++v51;
        while ( v52[v53] );
      }
      if ( *(v51 - 1) == 58 )
        --v51;
      v54 = v51 - v3;
      v55 = (char *)dword_10732C;
      if ( !dword_10732C )
        v55 = sub_7E2F8(10);
      v56 = (unsigned __int8)*v51;
      if ( v55[v56] )
      {
        do
        {
          v57 = (unsigned __int8)*++v51;
          v56 = v57;
        }
        while ( v55[v57] );
      }
      while ( 2 )
      {
        switch ( v56 )
        {
          case 0:
            goto LABEL_91;
          case 10:
          case 44:
            ++v51;
LABEL_91:
            v59 = v3;
            v3 = v51;
            sub_7E89C(v7 + 2, v59, v54, 0, 0);
            goto LABEL_22;
          case 34:
          case 39:
            v60 = v51 + 1;
            do
            {
              while ( 2 )
              {
                while ( 2 )
                {
                  v62 = v60 + 1;
                  v61 = (unsigned __int8)*v60;
                  if ( !*v60 )
                    goto LABEL_98;
                  if ( v61 == v56 )
                  {
                    v63 = sub_7E89C(v7 + 2, v3, v54, v51, v62 - v51);
                    if ( v63 && !dword_B8168[0] )
                    {
                      ++v60;
                      goto LABEL_101;
                    }
                    goto LABEL_187;
                  }
                  if ( v61 != 92 )
                  {
                    ++v60;
                    continue;
                  }
                  break;
                }
                v103 = (unsigned __int8)v60[1];
                v104 = (unsigned __int8 *)(v60 + 2);
                if ( !v60[1] )
                  goto LABEL_98;
                v105 = v103 == 92;
                if ( v103 != 92 )
                  v105 = v103 == v56;
                if ( !v105 )
                {
                  v60 += 2;
                  continue;
                }
                break;
              }
              v106 = (unsigned __int8)v60[2];
              v60 += 3;
            }
            while ( v106 );
            v60 = (char *)v104;
LABEL_98:
            v63 = sub_7E89C(v7 + 2, v3, v54, v51, v60 - v51);
            if ( v63 )
            {
              if ( dword_B8168[0] )
              {
                v3 = v60;
                goto LABEL_22;
              }
LABEL_101:
              v3 = v60;
              sub_821C8((unsigned __int8 *)(v63 + 8), 0);
              goto LABEL_22;
            }
            goto LABEL_203;
          case 58:
          case 61:
            v64 = (char *)dword_10732C;
            v65 = (unsigned __int8 *)(v51 + 1);
            if ( !dword_10732C )
              v64 = sub_7E2F8(10);
            v56 = (unsigned __int8)v51[1];
            if ( v64[v56] )
            {
              do
              {
                v66 = *++v65;
                v56 = v66;
              }
              while ( v64[v66] );
            }
            v67 = v56 == 58;
            if ( v56 != 58 )
              v67 = v56 == 61;
            v51 = (char *)v65;
            if ( !v67 )
              continue;
            goto LABEL_110;
          default:
LABEL_110:
            v60 = v51;
            while ( 2 )
            {
              v62 = v60 + 1;
              if ( v56 == 10 )
              {
                if ( v62 <= v51 + 2 )
                {
LABEL_201:
                  v107 = v3;
                  v3 = v60 + 1;
                  v68 = sub_7E89C(v7 + 2, v107, v54, v51, v60 - v51);
                  if ( !v68 )
                    goto LABEL_22;
                  break;
                }
                if ( *(v60 - 1) == 92 )
                {
                  v56 = (unsigned __int8)*v62;
                  if ( *v62 )
                    goto LABEL_115;
                }
                v68 = sub_7E89C(v7 + 2, v3, v54, v51, v60 - v51);
                if ( !v68 )
                {
LABEL_187:
                  v3 = v62;
                  goto LABEL_10;
                }
                v3 = v60 + 1;
              }
              else
              {
                if ( v56 == 44 )
                  goto LABEL_201;
                if ( v56 )
                {
                  v56 = (unsigned __int8)*v62;
LABEL_115:
                  ++v60;
                  continue;
                }
                v68 = sub_7E89C(v7 + 2, v3, v54, v51, v60 - v51);
                if ( !v68 )
                {
LABEL_203:
                  v3 = v60;
                  goto LABEL_10;
                }
                v3 = v60;
              }
              break;
            }
            v69 = (char *)(v68 + 8);
            while ( 1 )
            {
              if ( *v69 == 10 )
              {
                do
                  v70 = (unsigned __int8)*++v69;
                while ( v70 == 10 );
              }
              v69 = strchr(v69, 10);
              if ( !v69 )
                break;
              if ( *(v69 - 1) == 92 )
              {
                v71 = v69;
                v72 = v69 - 1;
                v73 = v71;
                while ( 1 )
                {
                  v75 = (unsigned __int8)*v71++;
                  v74 = v75;
                  *v72 = v75;
                  if ( !v75 )
                    goto LABEL_22;
                  while ( v74 != 92 || *v71 != 10 )
                  {
                    v76 = (unsigned __int8)*v71++;
                    v74 = v76;
                    v72 = v73++;
                    *v72 = v76;
                    if ( !v76 )
                      goto LABEL_22;
                  }
                }
              }
            }
LABEL_22:
            if ( !v3 )
              goto LABEL_23;
            break;
        }
        goto LABEL_10;
      }
    }
    if ( v12 == 35 )
    {
      v3 = strchr(v3, 10);
      goto LABEL_22;
    }
    if ( v12 != 60 )
      break;
    v26 = (unsigned __int8)v3[1];
    v27 = v3 + 1;
    if ( v26 > 0x7F || (dword_9F184[v26] & 0x180040) == 0 )
    {
      if ( v26 == 33 )
      {
        v58 = strstr(v3 + 1, "-->");
        if ( !v58 )
          goto LABEL_18;
        v3 = v58 + 3;
      }
      else
      {
        if ( v26 != 63 )
          goto LABEL_18;
        v50 = strchr(v3 + 1, 62);
        if ( !v50 )
          goto LABEL_18;
        v3 = v50 + 1;
      }
      if ( !v3 )
        goto LABEL_18;
      goto LABEL_73;
    }
    v28 = v3 + 2;
    v29 = (char *)dword_107374;
    v121 = dword_B8168[0];
    if ( !dword_107374 )
      v29 = sub_7E2F8(28);
    if ( v29[(unsigned __int8)v3[2]] )
    {
      do
        v30 = *(unsigned __int8 *)++v28;
      while ( v29[v30] );
    }
    n = v28 - v27;
    if ( (unsigned int)(v28 - v27) > 0x40 || (v126[0] = 1, v31 = *(unsigned __int8 *)v28, v32 = v31, v31 > 0x7F) )
    {
LABEL_118:
      v14 = v7[2];
      dword_B8168[0] = v121;
LABEL_19:
      free(v14);
      v15 = v7;
      v7 = 0;
      free(v15);
      return v7;
    }
    v33 = dword_9F184[v31];
    if ( (v33 & 0xC01) != 0 )
    {
      v108 = (char *)dword_107334;
      if ( !dword_107334 )
      {
        v108 = sub_7E2F8(12);
        v31 = *(unsigned __int8 *)v28;
      }
      if ( v108[v31] )
      {
        do
          v109 = *(unsigned __int8 *)++v28;
        while ( v108[v109] );
      }
      v110 = sub_813A4(v28, dword_B8168, v126);
      v28 = v110;
      if ( !v110 )
        goto LABEL_118;
      v32 = *(unsigned __int8 *)v110;
      if ( v32 > 0x7F )
        goto LABEL_118;
      v33 = dword_9F184[v32];
    }
    if ( (v33 & 0x1000C01) == 0 )
      goto LABEL_118;
    v34 = v28 + 1;
    if ( v32 == 47 )
    {
      if ( v28[1] != 62 )
        goto LABEL_118;
      v34 = v28 + 2;
      v126[0] = 0;
      if ( v28 == (const char *)-2 )
        goto LABEL_118;
    }
    else
    {
      if ( v28 == (const char *)-1 )
        goto LABEL_118;
      if ( v126[0] )
      {
        if ( dword_B8168[0] != 2 )
        {
          v35 = (char *)dword_107334;
          if ( !dword_107334 )
            v35 = sub_7E2F8(12);
          if ( v35[*((unsigned __int8 *)v28 + 1)] )
          {
            do
              v36 = *(unsigned __int8 *)++v34;
            while ( v35[v36] );
          }
        }
        *(_DWORD *)needle = 12092;
        memset(s, 0, 0x44u);
        v37 = &needle[1];
        v38 = &v3[n + 1];
        v39 = v27;
        do
        {
          v40 = *v39++;
          *++v37 = v40;
        }
        while ( v39 != v38 );
        *(_WORD *)&needle[n + 2] = 62;
        v41 = strstr(v34, needle);
        v42 = v41;
        if ( !v41 )
          goto LABEL_118;
        v43 = dword_107334;
        if ( dword_B8168[0] != 2 )
        {
          if ( dword_107334 )
          {
            v44 = (char *)dword_107334;
          }
          else
          {
            v125 = v41;
            v44 = sub_7E2F8(12);
            v42 = v125;
            v43 = dword_107334;
          }
          if ( v34 < v42 )
          {
            v41 = v42;
            goto LABEL_58;
          }
          v124 = v42;
          v41 = (char *)&v34[strlen(v34)];
          v42 = v124;
          if ( v34 < v41 )
          {
LABEL_58:
            if ( v44[(unsigned __int8)*(v41 - 1)] )
            {
              v45 = v41 - 1;
              do
              {
                v41 = v45;
                if ( v34 >= v45 )
                  break;
                v46 = (unsigned __int8)*--v45;
              }
              while ( v44[v46] );
            }
          }
        }
        v47 = v41 - v34;
        v48 = &s[n - 1] - needle;
        v3 = &v42[v48];
        if ( !v43 )
        {
          v123 = v42;
          v111 = sub_7E2F8(12);
          v42 = v123;
          v43 = (int)v111;
          v48 = &s[n - 1] - needle;
        }
        if ( *(_BYTE *)(v43 + (unsigned __int8)v42[v48]) )
        {
          do
            v49 = (unsigned __int8)*++v3;
          while ( *(_BYTE *)(v43 + v49) );
        }
        switch ( v126[0] )
        {
          case 0:
            v34 = v3;
            goto LABEL_206;
          case 1:
            v88 = sub_7E89C(v7 + 2, v27, n, v34, v47);
            v89 = v88;
            na = dword_B8168[0];
            if ( dword_B8168[0] != 2 )
            {
              v90 = *(unsigned __int8 *)(v88 + 8);
              v91 = v89 + 8;
              v92 = (char *)dword_107334;
              if ( v90 <= 0x7F && (dword_9F184[v90] & 0xC01) != 0 )
              {
                v113 = (const char *)(v89 + 9);
                if ( !dword_107334 )
                  v92 = sub_7E2F8(12);
                if ( v92[*(unsigned __int8 *)(v89 + 9)] )
                {
                  do
                    v114 = *(unsigned __int8 *)++v113;
                  while ( v92[v114] );
                }
                v92 = (char *)dword_107334;
                v115 = strlen(v113);
                v116 = v113;
                v93 = (_BYTE *)(v91 + v115);
                memmove((void *)(v89 + 8), v116, v115 + 1);
              }
              else
              {
                v93 = (_BYTE *)(v91 + strlen((const char *)(v89 + 8)));
              }
              if ( !v92 )
                v92 = sub_7E2F8(12);
              if ( v91 < (unsigned int)v93
                || (v94 = strlen((const char *)(v89 + 8)), v93 = (_BYTE *)(v91 + v94), v91 < v91 + v94) )
              {
                if ( v92[(unsigned __int8)*(v93 - 1)] )
                {
                  v95 = v93 - 1;
                  do
                  {
                    v93 = v95;
                    if ( v91 >= (unsigned int)v95 )
                      break;
                    v96 = (unsigned __int8)*--v95;
                  }
                  while ( v92[v96] );
                }
              }
              *v93 = 0;
              if ( na != 1 )
              {
                v97 = *(unsigned __int8 *)(v89 + 8);
                if ( v97 == 34 || v97 == 39 )
                {
                  v98 = (unsigned __int8)*(v93 - 1);
                  if ( v98 == 34 || v98 == 39 )
                    sub_821C8((unsigned __int8 *)(v89 + 8), 0);
                }
              }
            }
            goto LABEL_139;
          case 3:
            v122 = v7 + 2;
            v82 = malloc(n + 13);
            v83 = n + 13;
            if ( !v82 )
              goto LABEL_229;
            v84 = *(unsigned __int8 *)v34;
            if ( v84 > 0x7F )
              goto LABEL_148;
            if ( (dword_9F184[v84] & 0xC01) == 0 )
              goto LABEL_220;
            if ( !v47 )
              goto LABEL_219;
            while ( 2 )
            {
              v85 = *(unsigned __int8 *)++v34;
              v84 = v85;
              --v47;
              if ( v85 > 0x7F )
              {
LABEL_148:
                if ( v47 )
                {
                  v86 = 1;
LABEL_151:
                  v82[2] = v86;
                  goto LABEL_152;
                }
LABEL_219:
                v82[2] = 0;
                goto LABEL_152;
              }
              if ( (dword_9F184[v84] & 0xC01) != 0 )
              {
                if ( !v47 )
                  goto LABEL_219;
                continue;
              }
              break;
            }
LABEL_220:
            if ( !v47 )
              goto LABEL_219;
            v112 = dword_9F184[v84];
            if ( (v112 & 0x30000) == 0 )
            {
              v86 = (v112 & 0x8000002) == 0;
              goto LABEL_151;
            }
            v82[2] = strtol(v34, 0, 10);
LABEL_152:
            v87 = 3;
LABEL_183:
            *v82 = v87;
            v82[1] = v82 + 3;
            *((_BYTE *)memcpy(v82 + 3, v27, n) + n) = 0;
            sub_7E784(v122, (int)v82);
            break;
          case 5:
            v122 = v7 + 2;
            v99 = malloc(n + 13);
            v82 = v99;
            v83 = n + 13;
            if ( !v99 )
LABEL_229:
              sub_C610(v83);
            v100 = *(unsigned __int8 *)v34;
            if ( v100 > 0x7F || (dword_9F184[v100] & 0xC01) == 0 )
              goto LABEL_180;
            if ( !v47 )
              goto LABEL_215;
            while ( 1 )
            {
              v102 = *(unsigned __int8 *)++v34;
              v101 = v102;
              --v47;
              if ( v102 > 0x7F || (dword_9F184[v101] & 0xC01) == 0 )
                break;
              if ( !v47 )
                goto LABEL_215;
            }
LABEL_180:
            if ( v47 )
            {
              v99[2] = strtol(v34, 0, 0);
              goto LABEL_182;
            }
LABEL_215:
            v99[2] = 0;
LABEL_182:
            v87 = 5;
            goto LABEL_183;
          case 6:
            v77 = malloc(v47 + 1);
            v78 = v77;
            v79 = v47 + 1;
            if ( !v77 )
              goto LABEL_231;
            memcpy(v77, v34, v47);
            v78[v47] = 0;
            if ( !v47 )
            {
              v80 = malloc(n + 13);
              v81 = (int)v80;
              v79 = n + 13;
              if ( !v80 )
LABEL_231:
                sub_C610(v79);
              v80[2] = 0;
              *v80 = 6;
              v80[1] = v80 + 3;
              *((_BYTE *)memcpy(v80 + 3, v27, n) + n) = 0;
LABEL_137:
              sub_7E784(v7 + 2, v81);
              goto LABEL_138;
            }
            v81 = sub_82410(v78, v27, n);
            if ( v81 )
              goto LABEL_137;
LABEL_138:
            free(v78);
            goto LABEL_139;
          default:
            goto LABEL_139;
        }
        goto LABEL_139;
      }
    }
LABEL_206:
    v3 = (char *)v34;
    sub_7E89C(v7 + 2, v27, n, 0, 0);
LABEL_139:
    dword_B8168[0] = v121;
LABEL_73:
    if ( *v3 == 44 )
    {
      ++v3;
      goto LABEL_22;
    }
    v11 = (char *)dword_107334;
    if ( !dword_107334 )
LABEL_76:
      v11 = sub_7E2F8(12);
  }
  if ( v12 )
  {
LABEL_18:
    v14 = v7[2];
    goto LABEL_19;
  }
LABEL_23:
  v14 = v7[2];
  v117 = *v14;
  if ( !*v14 )
  {
    *_errno_location() = 42;
    goto LABEL_19;
  }
  if ( v117 > 1 )
  {
    v17 = v14 + 2;
    v18 = 1;
    v118 = v7;
    do
    {
      v19 = v17[1];
      v20 = v17 - 1;
      v21 = v18;
      v23 = *v17++;
      v22 = v23;
      v24 = *(const char **)(v19 + 4);
      do
      {
        if ( strcmp(*(const char **)(v22 + 4), v24) <= 0 )
          break;
        --v21;
        v20[2] = v22;
        v25 = *v20--;
        v22 = v25;
      }
      while ( v21 );
      ++v18;
      v14[v21 + 2] = v19;
    }
    while ( v117 != v18 );
    return v118;
  }
  return v7;
}

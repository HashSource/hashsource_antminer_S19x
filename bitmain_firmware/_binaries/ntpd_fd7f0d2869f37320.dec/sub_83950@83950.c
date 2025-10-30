_DWORD **__fastcall sub_83950(char *a1, const void *a2, size_t a3)
{
  char *v3; // r4
  int v6; // r0
  int v7; // r5
  int v8; // t1
  _DWORD **v9; // r10
  _DWORD *v10; // r0
  int v11; // r0
  unsigned int v12; // r3
  unsigned int v13; // t1
  const char *v14; // r5
  int v15; // r0
  int v16; // t1
  size_t v17; // r2
  int v18; // r0
  int v19; // r3
  int v20; // t1
  size_t v21; // r9
  int v23; // r9
  int v24; // r6
  int *v25; // r7
  _DWORD *v26; // r9
  int v27; // r8
  int v28; // t1
  int v29; // r4
  int v30; // r11
  int v31; // t1
  const char *v32; // r5
  int *v33; // r10
  int v34; // r4
  unsigned int v35; // r3
  _BYTE *v36; // r7
  const char *v37; // r6
  int v38; // r0
  int v39; // t1
  size_t v40; // r9
  unsigned int v41; // r3
  char *v42; // r0
  size_t v43; // r2
  char *v44; // r1
  char *v45; // r7
  int v46; // r1
  char *v47; // r6
  int v48; // r0
  int v49; // r0
  int v50; // r1
  int v51; // t1
  bool v52; // zf
  size_t v53; // r2
  char *v54; // r0
  int v55; // r0
  char *v56; // r0
  int v57; // t1
  char *i; // r3
  int v59; // r2
  int v60; // t1
  char *v61; // r1
  char *v62; // r0
  int v63; // r1
  bool v64; // zf
  char *v65; // r1
  int v66; // r1
  int v67; // r0
  unsigned int v68; // t1
  const char *v69; // r0
  const char *v70; // r5
  int v71; // r0
  int v72; // t1
  char *v73; // r3
  char *v74; // r1
  char v75; // t1
  _BYTE *v76; // r6
  _BYTE *v77; // r6
  char *v78; // r0
  char *v79; // r2
  int v80; // r3
  int v81; // r1
  size_t v82; // r6
  int v83; // t1
  _DWORD *v84; // r5
  _DWORD *v85; // r3
  unsigned int v86; // r0
  int v87; // r0
  _DWORD *v88; // r5
  unsigned int v89; // r2
  unsigned int v90; // t1
  int v91; // r0
  int v92; // r7
  unsigned int v93; // r1
  char *v94; // r6
  int v95; // r0
  const char *v96; // r5
  int v97; // t1
  int v98; // r9
  size_t v99; // r0
  const char *v100; // r1
  char *v101; // r5
  size_t v102; // r0
  char *v103; // r2
  int v104; // t1
  int v105; // r3
  int v106; // r3
  _DWORD *v107; // r0
  unsigned int v108; // r2
  _DWORD *v109; // r3
  unsigned int v110; // t1
  _BOOL4 v111; // r2
  int v112; // r2
  int v113; // r0
  int v114; // r1
  size_t v115; // r0
  char *v116; // r12
  int v117; // t1
  int v118; // r3
  int v119; // r0
  int v120; // r0
  _DWORD *v121; // [sp+10h] [bp-74h]
  int v122; // [sp+14h] [bp-70h]
  _DWORD **v123; // [sp+18h] [bp-6Ch]
  int v124; // [sp+18h] [bp-6Ch]
  void *ptr; // [sp+1Ch] [bp-68h]
  char *ptra; // [sp+1Ch] [bp-68h]
  char *ptrd; // [sp+1Ch] [bp-68h]
  char *ptrb; // [sp+1Ch] [bp-68h]
  char *ptrc; // [sp+1Ch] [bp-68h]
  _DWORD *v130; // [sp+20h] [bp-64h]
  int v131; // [sp+20h] [bp-64h]
  int v132; // [sp+20h] [bp-64h]
  _DWORD *v133; // [sp+20h] [bp-64h]
  int v134; // [sp+20h] [bp-64h]
  int v135; // [sp+20h] [bp-64h]
  int v136; // [sp+24h] [bp-60h]
  int v137[3]; // [sp+28h] [bp-5Ch] BYREF
  char needle[4]; // [sp+34h] [bp-50h] BYREF
  _BYTE s[76]; // [sp+38h] [bp-4Ch] BYREF

  v3 = a1;
  if ( !a1 )
  {
    v7 = 0;
    *_errno_location() = 22;
    return (_DWORD **)v7;
  }
  v6 = dword_108358;
  if ( !dword_108358 )
    v6 = sub_7F738(12);
  v7 = (unsigned __int8)*v3;
  if ( *(_BYTE *)(v6 + v7) )
  {
    do
    {
      v8 = (unsigned __int8)*++v3;
      v7 = v8;
    }
    while ( *(_BYTE *)(v6 + v8) );
  }
  if ( !v7 )
  {
    *_errno_location() = 42;
    return (_DWORD **)v7;
  }
  v9 = (_DWORD **)sub_7FBE0(a3 + 13);
  *v9 = (_DWORD *)&byte_6;
  v9[1] = v9 + 3;
  *((_BYTE *)memcpy(v9 + 3, a2, a3) + a3) = 0;
  v10 = sub_7FBE0(0x20u);
  v9[2] = v10;
  *v10 = 0;
  v10[1] = 6;
LABEL_8:
  v11 = dword_108358;
  if ( !dword_108358 )
    goto LABEL_60;
  while ( 1 )
  {
    v12 = (unsigned __int8)*v3;
    if ( *(_BYTE *)(v11 + v12) )
    {
      do
      {
        v13 = (unsigned __int8)*++v3;
        v12 = v13;
      }
      while ( *(_BYTE *)(v11 + v13) );
    }
    if ( v12 <= 0x7F && (dword_A0784[v12] & 0x180040) != 0 )
    {
      v14 = v3 + 1;
      v15 = dword_108398;
      if ( !dword_108398 )
        v15 = sub_7F738(28);
      if ( *(_BYTE *)(v15 + (unsigned __int8)v3[1]) )
      {
        do
          v16 = *(unsigned __int8 *)++v14;
        while ( *(_BYTE *)(v15 + v16) );
      }
      if ( *(v14 - 1) == 58 )
        --v14;
      v17 = v14 - v3;
      v18 = dword_108350;
      if ( !dword_108350 )
      {
        v18 = sub_7F738(10);
        v17 = v14 - v3;
      }
      v19 = *(unsigned __int8 *)v14;
      if ( *(_BYTE *)(v18 + v19) )
      {
        do
        {
          v20 = *(unsigned __int8 *)++v14;
          v19 = v20;
        }
        while ( *(_BYTE *)(v18 + v20) );
      }
      v21 = v17;
      while ( 2 )
      {
        switch ( v19 )
        {
          case 0:
            v43 = v21;
            goto LABEL_63;
          case 10:
          case 44:
            v43 = v21;
            ++v14;
LABEL_63:
            v44 = v3;
            v3 = (char *)v14;
            sub_7FD6C(v9 + 2, v44, v43, 0, 0);
            goto LABEL_31;
          case 34:
          case 39:
            v45 = (char *)(v14 + 1);
            while ( 2 )
            {
              v47 = v45 + 1;
              v46 = (unsigned __int8)*v45;
              if ( !*v45 )
                goto LABEL_71;
              if ( v46 == v19 )
              {
                v48 = sub_7FD6C(v9 + 2, v3, v21, v14, v47 - v14);
                if ( v48 && !dword_B9168[0] )
                {
                  v3 = v45 + 1;
LABEL_73:
                  sub_83700((unsigned __int8 *)(v48 + 8), 0);
                  goto LABEL_31;
                }
LABEL_96:
                v3 = v47;
              }
              else
              {
                if ( v46 != 92 )
                {
                  ++v45;
                  continue;
                }
                v62 = v45;
                v45 += 2;
                v63 = (unsigned __int8)v62[1];
                if ( v62[1] )
                {
                  v64 = v63 == v19;
                  if ( v63 != v19 )
                    v64 = v63 == 92;
                  if ( v64 )
                  {
                    v65 = v45;
                    v45 = v62 + 3;
                    if ( !v62[2] )
                    {
                      v45 = v65;
                      goto LABEL_71;
                    }
                  }
                  continue;
                }
                v45 = v62;
LABEL_71:
                v48 = sub_7FD6C(v9 + 2, v3, v21, v14, v45 - v14);
                if ( v48 )
                {
                  v3 = v45;
                  if ( dword_B9168[0] )
                    goto LABEL_31;
                  goto LABEL_73;
                }
LABEL_136:
                v3 = v45;
              }
              break;
            }
            break;
          case 58:
          case 61:
            v49 = dword_108350;
            if ( !dword_108350 )
              v49 = sub_7F738(10);
            v50 = *(unsigned __int8 *)++v14;
            if ( *(_BYTE *)(v49 + v50) )
            {
              do
              {
                v51 = *(unsigned __int8 *)++v14;
                v50 = v51;
              }
              while ( *(_BYTE *)(v49 + v51) );
            }
            v52 = v50 == 61;
            if ( v50 != 61 )
              v52 = v50 == 58;
            v19 = v50;
            if ( !v52 )
              continue;
            v53 = v21;
            v19 = v50;
            goto LABEL_86;
          default:
            v53 = v21;
LABEL_86:
            v45 = (char *)v14;
            v47 = (char *)(v14 + 1);
            if ( v19 != 10 )
              goto LABEL_87;
LABEL_91:
            if ( v47 <= v14 + 2 )
            {
LABEL_97:
              v55 = sub_7FD6C(v9 + 2, v3, v53, v14, v47 - v14 - 1);
              v3 = v47;
              if ( !v55 )
                goto LABEL_31;
              goto LABEL_98;
            }
            if ( *(v47 - 2) != 92 || (v19 = (unsigned __int8)*v47, !*v47) )
            {
              v55 = sub_7FD6C(v9 + 2, v3, v53, v14, v47 - v14 - 1);
              if ( !v55 )
                goto LABEL_96;
              v3 = v47;
              goto LABEL_98;
            }
            while ( 1 )
            {
              v45 = v47++;
              if ( v19 == 10 )
                goto LABEL_91;
LABEL_87:
              if ( v19 == 44 )
                goto LABEL_97;
              if ( !v19 )
                break;
              v19 = (unsigned __int8)*v47;
            }
            v55 = sub_7FD6C(v9 + 2, v3, v53, v14, v45 - v14);
            if ( v55 )
            {
              v3 = v45;
LABEL_98:
              v56 = (char *)(v55 + 8);
              while ( 1 )
              {
                if ( *v56 == 10 )
                {
                  do
                    v57 = (unsigned __int8)*++v56;
                  while ( v57 == 10 );
                }
                v56 = strchr(v56, 10);
                if ( !v56 )
                  goto LABEL_31;
                if ( *(v56 - 1) == 92 )
                {
                  for ( i = v56 - 1; ; i = v61 )
                  {
                    v60 = (unsigned __int8)*v56++;
                    v59 = v60;
                    v61 = i + 1;
                    *i = v60;
                    if ( !v60 )
                      break;
                    if ( v59 == 92 && *v56 == 10 )
                      v61 = i;
                  }
                  goto LABEL_31;
                }
              }
            }
            goto LABEL_136;
        }
        goto LABEL_8;
      }
    }
    if ( v12 == 35 )
    {
      v3 = strchr(v3, 10);
LABEL_31:
      if ( !v3 )
        goto LABEL_32;
      goto LABEL_8;
    }
    if ( v12 != 60 )
      break;
    v35 = (unsigned __int8)v3[1];
    v36 = v3 + 1;
    v124 = dword_B9168[0];
    if ( v35 > 0x7F || (dword_A0784[v35] & 0x180040) == 0 )
    {
      if ( v35 == 33 )
      {
        v54 = strstr(v3 + 1, "-->");
        if ( !v54 )
          goto LABEL_28;
        v3 = v54 + 3;
      }
      else
      {
        if ( v35 != 63 )
          goto LABEL_28;
        v42 = strchr(v3 + 1, 62);
        if ( !v42 )
          goto LABEL_28;
        v3 = v42 + 1;
      }
      if ( !v3 )
        goto LABEL_28;
      goto LABEL_57;
    }
    v37 = v3 + 2;
    v38 = dword_108398;
    if ( !dword_108398 )
      v38 = sub_7F738(28);
    if ( *(_BYTE *)(v38 + (unsigned __int8)v3[2]) )
    {
      do
        v39 = *(unsigned __int8 *)++v37;
      while ( *(_BYTE *)(v38 + v39) );
    }
    v40 = v37 - v36;
    if ( (unsigned int)(v37 - v36) > 0x40 || (v137[0] = 1, v41 = *(unsigned __int8 *)v37, v41 > 0x7F) )
    {
LABEL_51:
      dword_B9168[0] = v124;
      goto LABEL_28;
    }
    if ( (dword_A0784[v41] & 0xC01) != 0 )
    {
      v67 = dword_108358;
      if ( !dword_108358 )
      {
        v67 = sub_7F738(12);
        v41 = *(unsigned __int8 *)v37;
      }
      while ( *(_BYTE *)(v67 + v41) )
      {
        v68 = *(unsigned __int8 *)++v37;
        v41 = v68;
      }
      v69 = sub_82880(v37, dword_B9168, v137);
      v37 = v69;
      if ( !v69 )
        goto LABEL_51;
      v41 = *(unsigned __int8 *)v69;
      if ( v41 > 0x7F )
        goto LABEL_51;
      v66 = dword_A0784[v41];
    }
    else
    {
      v66 = dword_A0784[v41];
    }
    if ( (v66 & 0x1000C01) == 0 )
      goto LABEL_51;
    if ( v41 == 47 )
    {
      v118 = *(unsigned __int8 *)++v37;
      if ( v118 != 62 )
        goto LABEL_51;
      v137[0] = 0;
    }
    v70 = v37 + 1;
    if ( v37 == (const char *)-1 )
      goto LABEL_51;
    if ( v137[0] )
    {
      if ( dword_B9168[0] != 2 )
      {
        v71 = dword_108358;
        if ( !dword_108358 )
          v71 = sub_7F738(12);
        if ( *(_BYTE *)(v71 + *((unsigned __int8 *)v37 + 1)) )
        {
          do
            v72 = *(unsigned __int8 *)++v70;
          while ( *(_BYTE *)(v71 + v72) );
        }
      }
      *(_DWORD *)needle = 12092;
      memset(s, 0, 0x44u);
      v73 = &needle[1];
      v74 = &v3[v40];
      do
      {
        v75 = *++v3;
        *++v73 = v75;
      }
      while ( v3 != v74 );
      v76 = &s[v40 + 72];
      *(v76 - 74) = 62;
      *(v76 - 73) = 0;
      v77 = &s[v40 - 1];
      v78 = strstr(v70, needle);
      v79 = v78;
      if ( !v78 )
        goto LABEL_51;
      if ( dword_B9168[0] == 2 )
      {
        v80 = dword_108358;
        goto LABEL_147;
      }
      v114 = dword_108358;
      if ( dword_108358 )
      {
        v80 = dword_108358;
      }
      else
      {
        ptrc = v78;
        v120 = sub_7F738(12);
        v79 = ptrc;
        v80 = dword_108358;
        v114 = v120;
      }
      if ( v70 >= v79 )
      {
        v136 = v80;
        v134 = v114;
        ptrd = v79;
        v115 = strlen(v70);
        v79 = ptrd;
        v114 = v134;
        v80 = v136;
        v78 = (char *)&v70[v115];
        if ( v70 < v78 )
        {
LABEL_208:
          if ( *(_BYTE *)(v114 + (unsigned __int8)*(v78 - 1)) )
          {
            v116 = v78 - 1;
            do
            {
              v78 = v116;
              if ( v70 >= v116 )
                break;
              v117 = (unsigned __int8)*--v116;
            }
            while ( *(_BYTE *)(v114 + v117) );
          }
        }
LABEL_147:
        v81 = v77 - needle;
        v3 = &v79[v77 - needle];
        v82 = v78 - v70;
        if ( !v80 )
        {
          v135 = v81;
          ptrb = v79;
          v119 = sub_7F738(12);
          v81 = v135;
          v79 = ptrb;
          v80 = v119;
        }
        if ( *(_BYTE *)(v80 + (unsigned __int8)v79[v81]) )
        {
          do
            v83 = (unsigned __int8)*++v3;
          while ( *(_BYTE *)(v80 + v83) );
        }
        switch ( v137[0] )
        {
          case 0:
            v70 = v3;
            goto LABEL_132;
          case 1:
            v91 = sub_7FD6C(v9 + 2, v36, v40, v70, v82);
            ptra = (char *)dword_B9168[0];
            v92 = v91;
            if ( dword_B9168[0] != 2 )
            {
              v93 = *(unsigned __int8 *)(v91 + 8);
              v94 = (char *)(v91 + 8);
              if ( v93 <= 0x7F && (dword_A0784[v93] & 0xC01) != 0 )
              {
                v95 = dword_108358;
                if ( !dword_108358 )
                  v95 = sub_7F738(12);
                v96 = (const char *)(v92 + 9);
                if ( *(_BYTE *)(v95 + *(unsigned __int8 *)(v92 + 9)) )
                {
                  do
                    v97 = *(unsigned __int8 *)++v96;
                  while ( *(_BYTE *)(v95 + v97) );
                }
                v98 = dword_108358;
                v99 = strlen(v96);
                v100 = v96;
                v101 = &v94[v99];
                memmove(v94, v100, v99 + 1);
              }
              else
              {
                v98 = dword_108358;
                v101 = &v94[strlen((const char *)(v91 + 8))];
              }
              if ( !v98 )
                v98 = sub_7F738(12);
              if ( v94 < v101 || (v102 = strlen(v94), v101 = &v94[v102], v94 < &v94[v102]) )
              {
                if ( *(_BYTE *)(v98 + (unsigned __int8)*(v101 - 1)) )
                {
                  v103 = v101 - 1;
                  do
                  {
                    v101 = v103;
                    if ( v94 >= v103 )
                      break;
                    v104 = (unsigned __int8)*--v103;
                  }
                  while ( *(_BYTE *)(v98 + v104) );
                }
              }
              *v101 = 0;
              if ( ptra != (_BYTE *)&dword_0 + 1 )
              {
                v105 = *(unsigned __int8 *)(v92 + 8);
                if ( v105 == 34 || v105 == 39 )
                {
                  v106 = (unsigned __int8)*(v101 - 1);
                  if ( v106 == 34 || v106 == 39 )
                    sub_83700((unsigned __int8 *)v94, 0);
                }
              }
            }
            goto LABEL_133;
          case 3:
            v107 = sub_7FBE0(v40 + 13);
            v108 = *(unsigned __int8 *)v70;
            v109 = v107;
            if ( v108 > 0x7F )
              goto LABEL_195;
            if ( (dword_A0784[v108] & 0xC01) == 0 )
              goto LABEL_198;
            if ( !v82 )
              goto LABEL_193;
            while ( 2 )
            {
              v110 = *(unsigned __int8 *)++v70;
              v108 = v110;
              --v82;
              if ( v110 > 0x7F )
              {
LABEL_195:
                if ( !v82 )
                  goto LABEL_193;
                v111 = 1;
                goto LABEL_197;
              }
              if ( (dword_A0784[v108] & 0xC01) != 0 )
              {
                if ( !v82 )
                  goto LABEL_193;
                continue;
              }
              break;
            }
LABEL_198:
            if ( !v82 )
            {
LABEL_193:
              v107[2] = 0;
              goto LABEL_194;
            }
            v112 = dword_A0784[v108];
            if ( (v112 & 0x30000) == 0 )
            {
              v111 = (v112 & 0x8000002) == 0;
LABEL_197:
              v107[2] = v111;
              goto LABEL_194;
            }
            v133 = v107;
            v113 = strtol(v70, 0, 10);
            v109 = v133;
            v133[2] = v113;
LABEL_194:
            *v109 = 3;
            v109[1] = v109 + 3;
            v132 = (int)v109;
            memcpy(v109 + 3, v36, v40);
            *(_BYTE *)(*(_DWORD *)(v132 + 4) + v40) = 0;
            sub_7FC64(v9 + 2, v132);
            break;
          case 5:
            v85 = sub_7FBE0(v40 + 13);
            v86 = *(unsigned __int8 *)v70;
            if ( v86 > 0x7F || (dword_A0784[v86] & 0xC01) == 0 )
              goto LABEL_158;
            while ( v82 )
            {
              v90 = *(unsigned __int8 *)++v70;
              v89 = v90;
              --v82;
              if ( v90 > 0x7F || (dword_A0784[v89] & 0xC01) == 0 )
              {
LABEL_158:
                if ( v82 )
                {
                  v130 = v85;
                  v87 = strtol(v70, 0, 0);
                  v85 = v130;
                  v130[2] = v87;
                  goto LABEL_160;
                }
                break;
              }
            }
            v85[2] = 0;
LABEL_160:
            *v85 = 5;
            v88 = v85 + 3;
            v85[1] = v85 + 3;
            v131 = (int)v85;
            memcpy(v85 + 3, v36, v40);
            *((_BYTE *)v88 + v40) = 0;
            sub_7FC64(v9 + 2, v131);
            goto LABEL_133;
          case 6:
            ptr = sub_7FBE0(v82 + 1);
            memcpy(ptr, v70, v82);
            *((_BYTE *)ptr + v82) = 0;
            if ( !v82 )
            {
              v84 = sub_7FBE0(v40 + 13);
              v84[2] = 0;
              *v84 = 6;
              v84[1] = v84 + 3;
              *((_BYTE *)memcpy(v84 + 3, v36, v40) + v40) = 0;
LABEL_154:
              sub_7FC64(v9 + 2, (int)v84);
              goto LABEL_155;
            }
            v84 = (_DWORD *)sub_83950(ptr, v36, v40);
            if ( v84 )
              goto LABEL_154;
LABEL_155:
            free(ptr);
            goto LABEL_133;
          default:
            goto LABEL_133;
        }
        goto LABEL_133;
      }
      v78 = v79;
      goto LABEL_208;
    }
LABEL_132:
    v3 = (char *)v70;
    sub_7FD6C(v9 + 2, v36, v40, 0, 0);
LABEL_133:
    dword_B9168[0] = v124;
LABEL_57:
    if ( *v3 == 44 )
    {
      ++v3;
      goto LABEL_31;
    }
    v11 = dword_108358;
    if ( !dword_108358 )
LABEL_60:
      v11 = sub_7F738(12);
  }
  if ( v12 )
  {
LABEL_28:
    v7 = 0;
    free(v9[2]);
    free(v9);
    return (_DWORD **)v7;
  }
LABEL_32:
  v23 = *v9[2];
  v121 = v9[2];
  if ( !v23 )
  {
    *_errno_location() = 42;
    goto LABEL_28;
  }
  if ( v23 <= 1 )
    return v9;
  v122 = v23 - 1;
  v24 = 0;
  v123 = v9;
  v25 = v121 + 3;
  v26 = v121 + 1;
  do
  {
    v28 = *v25++;
    v27 = v28;
    v29 = v24;
    v31 = v26[1];
    ++v26;
    v30 = v31;
    v32 = *(const char **)(v27 + 4);
    v33 = v25;
    do
    {
      if ( strcmp(*(const char **)(v30 + 4), v32) <= 0 )
      {
        v34 = v29 + 1;
        goto LABEL_40;
      }
      --v29;
      *--v33 = v30;
      v30 = *(v33 - 2);
    }
    while ( v29 != -1 );
    v34 = 0;
LABEL_40:
    ++v24;
    v121[v34 + 2] = v27;
  }
  while ( v24 != v122 );
  return v123;
}

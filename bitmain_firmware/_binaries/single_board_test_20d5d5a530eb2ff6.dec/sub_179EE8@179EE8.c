int __fastcall sub_179EE8(int a1, int *a2, char **a3)
{
  char *v4; // r0
  int v5; // r2
  char *v6; // r6
  int v7; // r8
  int v8; // r9
  int v9; // r7
  int v10; // r4
  signed int v11; // r0
  int v12; // r11
  int *v13; // r3
  int v14; // r0
  int v16; // r0
  int *v17; // r8
  void **v18; // r4
  int *v19; // r3
  int v20; // r0
  int v21; // r0
  char *v22; // r0
  int v23; // r2
  int v24; // r0
  bool v25; // zf
  int v26; // r2
  int v27; // r3
  int v28; // t1
  bool v29; // zf
  int v30; // r1
  unsigned __int8 *v31; // r7
  int v32; // r3
  int v33; // r2
  unsigned __int8 *v34; // r0
  int v35; // r4
  int v36; // r2
  unsigned __int8 *v37; // r8
  unsigned __int8 *v38; // r0
  __int16 v39; // lr
  unsigned __int8 *v40; // r2
  int v41; // r3
  int v42; // t1
  int v43; // r1
  __int16 v44; // r1
  int v45; // lr
  int v46; // r12
  bool v47; // r1
  int v48; // r3
  unsigned __int8 *v49; // lr
  __int16 v50; // r0
  int v51; // r1
  __int16 v52; // r2
  __int16 v53; // r3
  int v54; // t1
  int v55; // r7
  unsigned __int8 *v56; // r9
  int j; // r3
  __int16 v58; // r3
  unsigned __int8 *v59; // r11
  int v60; // t1
  _BOOL4 v61; // r3
  unsigned __int8 *v62; // r2
  unsigned __int8 *v63; // r3
  int v64; // r1
  int v65; // t1
  unsigned __int8 *v66; // r0
  int v67; // r2
  unsigned __int8 *v68; // r3
  int v69; // r2
  int v70; // t1
  const char *v71; // r4
  int v72; // r8
  int v73; // r3
  __int16 v74; // r3
  int v75; // t1
  char *v76; // r0
  int v77; // r4
  int v78; // r2
  int *v79; // r0
  unsigned __int8 *v80; // r7
  int v81; // r3
  int v82; // r2
  __int16 v83; // r3
  int v84; // t1
  unsigned __int8 *v85; // r1
  unsigned __int8 *v86; // r3
  int v87; // r0
  int v88; // t1
  unsigned __int8 *v89; // r0
  int v90; // r1
  unsigned __int8 *v91; // r3
  int v92; // r1
  int v93; // t1
  char *v94; // r0
  void **v95; // r1
  int v96; // r2
  int v97; // r2
  int v98; // r2
  unsigned __int8 *v99; // r3
  int v100; // r0
  __int16 v101; // r1
  int v102; // t1
  unsigned __int8 *v103; // r9
  unsigned __int8 *i; // r7
  __int16 v105; // r1
  bool v106; // zf
  unsigned __int8 *v107; // lr
  int v108; // t1
  unsigned __int8 *v109; // r1
  int v110; // r3
  int *v111; // [sp+Ch] [bp-90h]
  size_t *v112; // [sp+10h] [bp-8Ch]
  char *v114; // [sp+18h] [bp-84h]
  char *s1; // [sp+20h] [bp-7Ch]
  char *s1a; // [sp+20h] [bp-7Ch]
  int v117; // [sp+24h] [bp-78h]
  void **v119; // [sp+2Ch] [bp-70h]
  char *v120; // [sp+34h] [bp-68h] BYREF
  DIR **v121; // [sp+38h] [bp-64h] BYREF
  const char *v122; // [sp+3Ch] [bp-60h] BYREF
  struct stat s2; // [sp+40h] [bp-5Ch] BYREF

  v117 = *(_DWORD *)(a1 + 8);
  v120 = 0;
  v121 = 0;
  v112 = (size_t *)sub_BADF8();
  if ( !v112 )
  {
    sub_D0048(14, 121, 7, (int)"crypto/conf/conf_def.c", 203);
    v6 = 0;
    v17 = 0;
    v18 = 0;
    v114 = 0;
    v16 = 0;
    goto LABEL_21;
  }
  v4 = sub_E9E3C("default");
  v5 = 209;
  v120 = v4;
  if ( !v4 )
    goto LABEL_19;
  v4 = (char *)sub_179820(a1);
  if ( !v4 )
  {
    v5 = 214;
LABEL_19:
    v6 = v4;
    sub_D0048(14, 121, 65, (int)"crypto/conf/conf_def.c", v5);
LABEL_20:
    v16 = (int)v112;
    v17 = (int *)v6;
    v18 = (void **)v6;
    v114 = v6;
    goto LABEL_21;
  }
  v119 = sub_17988C(a1, v120);
  if ( !v119 )
  {
    v6 = 0;
    sub_D0048(14, 121, 103, (int)"crypto/conf/conf_def.c", 220);
    goto LABEL_20;
  }
  v6 = 0;
  v7 = 0;
  v8 = 0;
  v9 = 1;
  v114 = 0;
  v111 = 0;
  while ( 1 )
  {
    if ( !sub_BAE84(v112, v7 + 512) )
    {
      v17 = v111;
      v18 = 0;
      sub_D0048(14, 121, 7, (int)"crypto/conf/conf_def.c", 228);
LABEL_161:
      v16 = (int)v112;
      goto LABEL_21;
    }
    v10 = v112[1] + v7;
    *(_BYTE *)v10 = 0;
    sub_B6D58(a2, v10, 511);
    *(_BYTE *)(v10 + 511) = 0;
    v11 = strlen((const char *)v10);
    v12 = v11;
    s1 = (char *)v11;
    if ( v9 )
    {
      LOWORD(s2.st_dev) = -17425;
      BYTE2(s2.st_dev) = -65;
      if ( v11 > 2 && !memcmp((const void *)v10, &s2, 3u) )
      {
        v12 -= 3;
        memmove((void *)v10, (const void *)(v10 + 3), v12);
        s1[v10 - 3] = 0;
      }
    }
    while ( !(v12 | v8) )
    {
      if ( v121 )
      {
        v13 = (int *)sub_1799F0(v6, &v121);
        if ( !v13 )
        {
          v22 = v6;
          v6 = 0;
          CRYPTO_free(v22);
          v13 = sub_10BD80(v111);
          if ( !v13 )
          {
LABEL_17:
            sub_BAE3C((int)v112);
            CRYPTO_free(v120);
            sub_10BDB4((void **)v111);
            return 1;
          }
        }
      }
      else
      {
        v13 = sub_10BD80(v111);
        if ( !v13 )
          goto LABEL_17;
      }
      v14 = (int)a2;
      a2 = v13;
      BIO_vfree(v14);
      sub_B6D58(a2, v10, 511);
      *(_BYTE *)(v10 + 511) = 0;
      v12 = strlen((const char *)v10);
    }
    if ( v12 <= 0 )
    {
      v26 = v12;
      v47 = 1;
    }
    else
    {
      v23 = *(unsigned __int8 *)(v10 + v12 - 1);
      v24 = v12 - 1 + v10;
      v25 = v23 == 13;
      if ( v23 != 13 )
        v25 = v23 == 10;
      if ( !v25 )
      {
        v7 += v12;
        if ( v7 <= 0 )
          goto LABEL_77;
        goto LABEL_125;
      }
      v26 = v12;
      do
      {
        if ( !--v26 )
          goto LABEL_46;
        v28 = *(unsigned __int8 *)--v24;
        v27 = v28;
        v29 = v28 == 13;
        if ( v28 != 13 )
          v29 = v27 == 10;
      }
      while ( v29 );
      v47 = v12 == v26;
    }
    if ( v12 )
      v48 = v47;
    else
      v48 = 0;
    if ( v48 )
    {
      v7 += v26;
      if ( v7 <= 0 )
        goto LABEL_77;
LABEL_125:
      v31 = (unsigned __int8 *)v112[1];
      v32 = v7 - 1;
      v33 = v31[v7 - 1];
      v34 = &v31[v7 - 1];
      if ( (v33 & 0x80) != 0 )
        goto LABEL_77;
      v30 = 1;
LABEL_48:
      v35 = *(_DWORD *)(a1 + 4);
      if ( (*(_WORD *)(v35 + 2 * v33) & 0x20) != 0 )
      {
        if ( v7 == 1 || (v36 = *(v34 - 1), (v36 & 0x80) != 0) || (*(_WORD *)(v35 + 2 * v36) & 0x20) == 0 )
        {
          v7 = v32;
          v8 = 1;
          goto LABEL_71;
        }
      }
      if ( v30 )
      {
LABEL_77:
        v8 = 1;
        goto LABEL_71;
      }
      goto LABEL_53;
    }
LABEL_46:
    v30 = 0;
    v7 += v26;
    *(_BYTE *)(v10 + v26) = 0;
    ++v114;
    v31 = (unsigned __int8 *)v112[1];
    if ( v7 > 0 )
    {
      v32 = v7 - 1;
      v33 = v31[v7 - 1];
      v34 = &v31[v7 - 1];
      if ( (v33 & 0x80) == 0 )
        goto LABEL_48;
    }
    v35 = *(_DWORD *)(a1 + 4);
LABEL_53:
    v37 = v31;
    v38 = v31;
    while ( 1 )
    {
      v40 = v38;
      v42 = *v38++;
      v41 = v42;
      v43 = (char)v42;
      if ( (v42 & 0x80u) != 0 )
        goto LABEL_57;
      v39 = *(_WORD *)(v35 + 2 * v41);
      if ( (v39 & 0x800) != 0 )
        break;
      if ( (v39 & 0x10) == 0 )
      {
LABEL_57:
        if ( v43 < 0 )
          goto LABEL_68;
        while ( 1 )
        {
          v44 = *(_WORD *)(v35 + 2 * v41);
          if ( (v44 & 0x80) != 0 )
            goto LABEL_121;
          if ( (*(_WORD *)(v35 + 2 * v41) & 0x400) != 0 )
          {
            v45 = v41;
            ++v40;
            while ( 1 )
            {
              v41 = *v40;
              v43 = (char)v41;
              if ( (v41 & 0x80u) == 0 && (*(_WORD *)(v35 + 2 * v41) & 8) != 0 )
                break;
              if ( v45 == v41 )
              {
                v41 = v40[1];
                if ( v45 != v41 )
                  goto LABEL_69;
                ++v40;
              }
              ++v40;
            }
            if ( v45 == v41 )
            {
              v41 = v40[1];
              goto LABEL_69;
            }
            goto LABEL_57;
          }
          if ( (v44 & 0x40) != 0 )
          {
            v46 = v41;
            ++v40;
            while ( 1 )
            {
              v41 = *v40;
              v49 = v40 + 1;
              v43 = (char)v41;
              if ( (v41 & 0x80u) == 0 )
              {
                v50 = *(_WORD *)(v35 + 2 * v41);
                if ( (v50 & 8) != 0 )
                {
                  if ( v46 != v41 )
                    goto LABEL_57;
LABEL_68:
                  v41 = v40[1];
LABEL_69:
                  ++v40;
                  v43 = (char)v41;
                  goto LABEL_57;
                }
                if ( v46 == v41 )
                  goto LABEL_68;
                if ( (v50 & 0x20) != 0 )
                {
                  v41 = *++v40;
                  v43 = (char)v41;
                  if ( (v41 & 0x80u) == 0 )
                  {
                    if ( (*(_WORD *)(v35 + 2 * v41) & 8) != 0 )
                    {
                      v40 = v49;
                      goto LABEL_57;
                    }
                  }
                  else
                  {
                    v40 = v49;
                  }
                }
              }
              ++v40;
            }
          }
          if ( (v44 & 0x20) == 0 )
          {
            if ( (v44 & 8) == 0 )
              goto LABEL_68;
            goto LABEL_96;
          }
          v41 = v40[1];
          v43 = (char)v41;
          if ( (v41 & 0x80u) == 0 && (*(_WORD *)(v35 + 2 * v41) & 8) != 0 )
          {
            ++v40;
            goto LABEL_57;
          }
          v41 = v40[2];
          v40 += 2;
          if ( (v41 & 0x80u) != 0 )
            goto LABEL_68;
        }
      }
    }
LABEL_121:
    *v40 = 0;
    v35 = *(_DWORD *)(a1 + 4);
LABEL_96:
    v51 = *v31;
    if ( (v51 & 0x80) == 0 )
    {
      v52 = *(_WORD *)(v35 + 2 * v51);
      if ( (v52 & 0x10) != 0 )
      {
        do
        {
          if ( (v52 & 8) != 0 )
            goto LABEL_122;
          v54 = *++v37;
          v51 = v54;
          if ( (v54 & 0x80) != 0 )
            goto LABEL_102;
          v53 = *(_WORD *)(v35 + 2 * v51);
          LOBYTE(v52) = v53;
        }
        while ( (v53 & 0x10) != 0 );
        v97 = v53 & 8;
      }
      else
      {
        v97 = v52 & 8;
      }
      if ( v97 )
        goto LABEL_122;
      if ( v51 == 91 )
      {
        v98 = v37[1];
        v99 = v37 + 1;
        v100 = (char)v98;
        if ( (v98 & 0x80u) == 0 )
        {
          do
          {
            v101 = *(_WORD *)(v35 + 2 * v98);
            if ( (v101 & 0x10) == 0 )
              break;
            if ( (v101 & 8) != 0 )
              break;
            v102 = *++v99;
            v98 = v102;
            v100 = (char)v102;
          }
          while ( (v102 & 0x80u) == 0 );
        }
        v103 = v99;
        while ( 2 )
        {
          for ( i = v103; ; ++i )
          {
LABEL_219:
            if ( v100 < 0 )
              goto LABEL_225;
            while ( 1 )
            {
              v105 = *(_WORD *)(v35 + 2 * v98);
              if ( (v105 & 0x20) == 0 )
                break;
              v98 = i[1];
              v100 = (char)v98;
              if ( (v98 & 0x80u) == 0 && (*(_WORD *)(v35 + 2 * v98) & 8) != 0 )
              {
                ++i;
                goto LABEL_219;
              }
              v98 = i[2];
              i += 2;
              v100 = (char)v98;
              if ( (v98 & 0x80u) != 0 )
                goto LABEL_225;
            }
            if ( (*(_WORD *)(v35 + 2 * v98) & 0x307) == 0 )
              break;
            v98 = i[1];
            v100 = (char)v98;
          }
          v107 = i;
          if ( (v105 & 0x10) != 0 )
          {
            while ( (v105 & 8) == 0 )
            {
              v108 = *++v107;
              v98 = v108;
              v100 = (char)v108;
              if ( (v108 & 0x80u) != 0 )
                goto LABEL_237;
              v105 = *(_WORD *)(v35 + 2 * v98);
              if ( (v105 & 0x10) == 0 )
                break;
            }
          }
          if ( v98 != 93 )
          {
LABEL_237:
            i = v107;
LABEL_225:
            v106 = v98 == 0;
            if ( v98 )
              v106 = v103 == i;
            if ( !v106 )
            {
              v103 = i;
              continue;
            }
            v17 = v111;
            v18 = 0;
            sub_D0048(14, 121, 100, (int)"crypto/conf/conf_def.c", 338);
            v16 = (int)v112;
            goto LABEL_21;
          }
          break;
        }
        v8 = 0;
        *i = 0;
        if ( !sub_179AF4(a1, 0, (void **)&v120, v99) )
        {
          v18 = 0;
          v17 = v111;
          v16 = (int)v112;
          goto LABEL_21;
        }
        v119 = (void **)sub_179714(a1, (int)v120);
        if ( !v119 )
        {
          v18 = sub_17988C(a1, v120);
          v119 = v18;
          if ( !v18 )
          {
            v17 = v111;
            sub_D0048(14, 121, 103, (int)"crypto/conf/conf_def.c", 348);
            goto LABEL_161;
          }
        }
        goto LABEL_123;
      }
    }
LABEL_102:
    v55 = *v37;
    v56 = v37;
    for ( j = (char)v55; ; j = (char)v55 )
    {
LABEL_103:
      if ( j < 0 )
        goto LABEL_109;
      while ( (*(_WORD *)(v35 + 2 * v55) & 0x20) != 0 )
      {
        v55 = v56[1];
        j = (char)v55;
        if ( (v55 & 0x80u) == 0 && (*(_WORD *)(v35 + 2 * v55) & 8) != 0 )
        {
          ++v56;
          goto LABEL_103;
        }
        v55 = v56[2];
        v56 += 2;
        j = (char)v55;
        if ( (v55 & 0x80u) != 0 )
          goto LABEL_109;
      }
      if ( (*(_WORD *)(v35 + 2 * v55) & 0x307) == 0 )
        break;
      v55 = *++v56;
    }
    if ( v55 != 58 || v56[1] != 58 )
      break;
    *v56 = 0;
    v109 = v56 + 2;
    v55 = v56[2];
    v59 = v56 + 2;
    v35 = *(_DWORD *)(a1 + 4);
    v110 = (char)v55;
    while ( v110 >= 0 )
    {
      v58 = *(_WORD *)(v35 + 2 * v55);
      if ( (v58 & 0x20) != 0 )
      {
        v55 = v59[1];
        v110 = (char)v55;
        if ( (v55 & 0x80u) == 0 && (*(_WORD *)(v35 + 2 * v55) & 8) != 0 )
        {
          ++v59;
        }
        else
        {
          v55 = v59[2];
          v59 += 2;
          v110 = (char)v55;
        }
      }
      else
      {
        if ( (*(_WORD *)(v35 + 2 * v55) & 0x307) == 0 )
        {
          s1a = (char *)v37;
          v56 = v59;
          v37 = v109;
          goto LABEL_111;
        }
        v55 = *++v59;
        v110 = (char)v55;
      }
    }
    s1a = (char *)v37;
    v37 = v56 + 2;
LABEL_116:
    if ( strncmp((const char *)v37, ".include", 8u) )
    {
LABEL_120:
      v17 = v111;
      v18 = 0;
      sub_D0048(14, 121, 101, (int)"crypto/conf/conf_def.c", 407);
      v16 = (int)v112;
      goto LABEL_21;
    }
LABEL_117:
    v61 = v55 == 61;
    if ( v59 != v37 + 8 )
      v61 = 1;
    if ( !v61 )
      goto LABEL_120;
    v122 = 0;
    if ( *v59 == 61 )
    {
      v73 = *++v59;
      if ( (v73 & 0x80) == 0 )
      {
        do
        {
          v74 = *(_WORD *)(v35 + 2 * v73);
          if ( (v74 & 0x10) == 0 )
            break;
          if ( (v74 & 8) != 0 )
            break;
          v75 = *++v59;
          v73 = v75;
        }
        while ( (v75 & 0x80) == 0 );
      }
    }
    v62 = v59;
    do
    {
      do
      {
        v63 = v62;
        v65 = *v62++;
        v64 = v65;
      }
      while ( (v65 & 0x80) != 0 );
    }
    while ( (*(_WORD *)(v35 + 2 * v64) & 8) == 0 );
    v66 = v63 - 1;
    if ( v59 <= v63 - 1 )
    {
      v67 = *(v63 - 1);
      if ( (v67 & 0x80) == 0 && (*(_WORD *)(v35 + 2 * v67) & 0x10) != 0 )
      {
        v68 = v63 - 2;
        do
        {
          v66 = v68;
          if ( v68 == v59 - 1 )
            break;
          v70 = *v68--;
          v69 = v70;
          if ( (v70 & 0x80) != 0 )
            break;
        }
        while ( (*(_WORD *)(v35 + 2 * v69) & 0x10) != 0 );
      }
    }
    v66[1] = 0;
    if ( !sub_179AF4(a1, s1a, (void **)&v122, v59) )
    {
      v17 = v111;
      goto LABEL_169;
    }
    v71 = v122;
    memset(&s2, 0, sizeof(s2));
    if ( _xstat(3, v122, &s2) < 0 )
    {
      v79 = _errno_location();
      sub_D0048(2, 22, *v79, (int)"crypto/conf/conf_def.c", 692);
      sub_D1240(1, v71);
    }
    else
    {
      if ( (s2.st_mode & 0xF000) != 0x4000 )
      {
        v72 = sub_B782C((int)v71, "r");
        v76 = (char *)v122;
        if ( v122 == v6 )
          goto LABEL_165;
        goto LABEL_164;
      }
      if ( v121 )
      {
        sub_D0048(14, 116, 111, (int)"crypto/conf/conf_def.c", 701);
        sub_D1240(1, v71);
      }
      else
      {
        v72 = sub_1799F0(v71, &v121);
        if ( v72 )
        {
          v6 = (char *)v122;
          if ( v71 == v122 )
            goto LABEL_151;
          v76 = (char *)v122;
          v6 = (char *)v71;
          goto LABEL_164;
        }
      }
    }
    v76 = (char *)v122;
    if ( v6 == v122 )
    {
      v72 = (int)a2;
      goto LABEL_153;
    }
    v72 = 0;
LABEL_164:
    CRYPTO_free(v76);
LABEL_165:
    if ( !v72 )
    {
      v72 = (int)a2;
      goto LABEL_153;
    }
LABEL_151:
    if ( !v111 )
    {
      v111 = (int *)sub_10BFCC();
      if ( !v111 )
      {
        v77 = v72;
        v78 = 392;
        v17 = 0;
        goto LABEL_168;
      }
    }
    if ( !sub_10BD3C(v111, (int)a2) )
    {
      v77 = v72;
      v17 = v111;
      v78 = 398;
LABEL_168:
      sub_D0048(14, 121, 65, (int)"crypto/conf/conf_def.c", v78);
      BIO_vfree_0(v77);
LABEL_169:
      v18 = 0;
      v16 = (int)v112;
      goto LABEL_21;
    }
LABEL_153:
    v8 = 0;
    a2 = (int *)v72;
    v7 = 0;
LABEL_71:
    v9 = 0;
  }
LABEL_109:
  s1a = v120;
  if ( j < 0 )
  {
    v59 = v56;
  }
  else
  {
    v58 = *(_WORD *)(v35 + 2 * v55);
LABEL_111:
    v59 = v56;
    if ( (v58 & 0x10) != 0 )
    {
      while ( (v58 & 8) == 0 )
      {
        v60 = *++v59;
        v55 = v60;
        if ( (v60 & 0x80) != 0 )
          goto LABEL_116;
        v58 = *(_WORD *)(v35 + 2 * v55);
        if ( (v58 & 0x10) == 0 )
          break;
      }
    }
  }
  if ( !strncmp((const char *)v37, ".include", 8u) )
    goto LABEL_117;
  if ( v55 != 61 )
    goto LABEL_120;
  *v56 = 0;
  v80 = v59 + 1;
  v81 = v59[1];
  v82 = *(_DWORD *)(a1 + 4);
  if ( (v81 & 0x80) == 0 )
  {
    do
    {
      v83 = *(_WORD *)(v82 + 2 * v81);
      if ( (v83 & 0x10) == 0 )
        break;
      if ( (v83 & 8) != 0 )
        break;
      v84 = *++v80;
      v81 = v84;
    }
    while ( (v84 & 0x80) == 0 );
  }
  v85 = v80;
  do
  {
    do
    {
      v86 = v85;
      v88 = *v85++;
      v87 = v88;
    }
    while ( (v88 & 0x80) != 0 );
  }
  while ( (*(_WORD *)(v82 + 2 * v87) & 8) == 0 );
  v89 = v86 - 1;
  if ( v86 - 1 >= v80 )
  {
    v90 = *(v86 - 1);
    if ( (v90 & 0x80) == 0 && (*(_WORD *)(v82 + 2 * v90) & 0x10) != 0 )
    {
      v91 = v86 - 2;
      do
      {
        v89 = v91;
        if ( v91 == v80 - 1 )
          break;
        v93 = *v91--;
        v92 = v93;
        if ( (v93 & 0x80) != 0 )
          break;
      }
      while ( (*(_WORD *)(v82 + 2 * v92) & 0x10) != 0 );
    }
  }
  v89[1] = 0;
  v18 = (void **)CRYPTO_malloc((void *)0xC);
  if ( !v18 )
  {
    v17 = v111;
    v96 = 416;
    goto LABEL_202;
  }
  v94 = sub_E9E3C((char *)v37);
  v18[2] = 0;
  v18[1] = v94;
  if ( v94 )
  {
    if ( !sub_179AF4(a1, s1a, v18 + 2, v80) )
    {
      v17 = v111;
      v16 = (int)v112;
      goto LABEL_21;
    }
    if ( !strcmp(s1a, v120) )
    {
      v95 = v119;
    }
    else
    {
      v95 = (void **)sub_179714(a1, (int)s1a);
      if ( !v95 )
      {
        v95 = sub_17988C(a1, s1a);
        if ( !v95 )
        {
          v17 = v111;
          sub_D0048(14, 121, 103, (int)"crypto/conf/conf_def.c", 434);
          goto LABEL_203;
        }
      }
    }
    if ( !sub_17974C(a1, v95, v18) )
    {
      v96 = 440;
      v17 = v111;
      goto LABEL_202;
    }
LABEL_122:
    v8 = 0;
LABEL_123:
    v7 = 0;
    goto LABEL_71;
  }
  v17 = v111;
  v96 = 422;
LABEL_202:
  sub_D0048(14, 121, 65, (int)"crypto/conf/conf_def.c", v96);
LABEL_203:
  v16 = (int)v112;
LABEL_21:
  sub_BAE3C(v16);
  CRYPTO_free(v120);
  while ( sub_10C010((int)v17) > 0 )
  {
    v19 = sub_10BD80(v17);
    v20 = (int)a2;
    a2 = v19;
    BIO_vfree(v20);
  }
  sub_10BDB4((void **)v17);
  CRYPTO_free(v6);
  if ( v121 )
    sub_E9DCC(&v121);
  if ( a3 )
    *a3 = v114;
  sub_B5560(&s2, 0xDu, "%ld", v114);
  sub_D1240(2, "line ", &s2);
  v21 = *(_DWORD *)(a1 + 8);
  if ( v117 != v21 )
  {
    sub_13B218(v21);
    *(_DWORD *)(a1 + 8) = 0;
  }
  if ( v18 )
  {
    CRYPTO_free(v18[1]);
    CRYPTO_free(v18[2]);
    CRYPTO_free(v18);
  }
  return 0;
}

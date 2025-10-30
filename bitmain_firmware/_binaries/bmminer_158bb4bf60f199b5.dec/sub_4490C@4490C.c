void sub_4490C()
{
  int v0; // r5
  char *v1; // r7
  double v2; // d0
  int v3; // r3
  _BYTE *v4; // r0
  _DWORD *v5; // r0
  char *v6; // r3
  int v7; // r2
  bool v8; // zf
  const char *v9; // r4
  size_t v10; // r0
  unsigned __int8 *v11; // r5
  char *v12; // r0
  char *v13; // r0
  const __int32_t **v14; // r0
  const __int32_t *v15; // r2
  int v16; // r7
  __int32_t v17; // r1
  unsigned __int8 *v18; // r4
  int v19; // r8
  char *v20; // r0
  unsigned __int8 *v21; // r9
  const char *v22; // r5
  _UNKNOWN **v23; // r10
  int v24; // r6
  const char *v25; // t1
  size_t v26; // r0
  int v27; // r5
  char *v28; // r0
  const __int32_t **v29; // r0
  const char *v30; // r5
  _UNKNOWN **v31; // r4
  char *v32; // r7
  const char *v33; // t1
  size_t v34; // r0
  const char *v35; // t1
  char *v36; // r0
  size_t v37; // r0
  __int32_t v38; // r3
  int v39; // r4
  char *v40; // r0
  const char *v41; // r5
  size_t v42; // r0
  char *v43; // r0
  char *v44; // r8
  char *v45; // r2
  size_t v46; // r0
  int v47; // r3
  int v48; // t1
  int v49; // r6
  const char *v50; // r5
  int v51; // r3
  int v52; // t1
  bool v53; // zf
  char *v54; // r0
  char *v55; // r11
  const unsigned __int16 **v56; // r0
  int v57; // r2
  const __int32_t *v58; // r3
  char v59; // r1
  _BYTE *v60; // r4
  int v61; // r8
  char *v62; // r0
  int v63; // r8
  int v64; // r0
  const char **v65; // r4
  char *v66; // r8
  const char *v67; // t1
  const char *v68; // r9
  char *v69; // r0
  const char *v70; // r5
  char *v71; // r0
  _BYTE *v72; // r2
  _BYTE *v73; // r4
  _BYTE *v74; // r1
  _BYTE *v75; // r3
  _BYTE *v76; // r2
  int v77; // r2
  int v78; // lr
  _BYTE *v79; // r3
  int v80; // r1
  int v81; // r1
  _BYTE *v83; // r2
  _BYTE *v84; // r1
  _BYTE *v85; // r4
  _BYTE *v86; // r0
  char v87; // r3
  char v88; // t1
  char v89; // t1
  __int32_t v90; // r2
  struct addrinfo *v91; // r4
  struct addrinfo *i; // r3
  int v93; // r0
  int *v94; // r0
  char *v95; // r0
  time_t v96; // r8
  int *v97; // r0
  int v98; // r7
  int v99; // r4
  _BOOL4 v100; // r9
  const char *v101; // r1
  ssize_t v102; // r0
  ssize_t v103; // r5
  const char *v104; // r8
  time_t v105; // r0
  _BYTE *v106; // r3
  int v107; // r3
  char *v108; // r0
  size_t v109; // r0
  char *v110; // r6
  char *v111; // r0
  int v112; // r3
  const char *v113; // r1
  _UNKNOWN **v114; // r5
  int v115; // r4
  const char *v116; // t1
  size_t v117; // r0
  int *v118; // r3
  int v119; // r5
  __int32_t v120; // r2
  int v121; // r9
  int *v122; // r0
  char *v123; // r0
  int *v124; // r0
  char *v125; // r0
  int *v126; // r0
  _DWORD *v127; // r0
  int *v128; // r0
  char *v129; // r0
  const char *v130; // r3
  unsigned int *v131; // r3
  unsigned int v132; // r2
  unsigned int v133; // r2
  int *v134; // r0
  char *v135; // r0
  _DWORD *v136; // r0
  int *v137; // r0
  int v138; // r3
  int v139; // r0
  const __int32_t **v140; // [sp+14h] [bp-16460h]
  unsigned __int8 *v141; // [sp+18h] [bp-1645Ch]
  int *ptr; // [sp+20h] [bp-16454h]
  char *v143; // [sp+24h] [bp-16450h]
  _DWORD *v144; // [sp+2Ch] [bp-16448h]
  __int16 v145; // [sp+38h] [bp-1643Ch]
  int fd; // [sp+40h] [bp-16434h]
  const __int32_t **v147; // [sp+44h] [bp-16430h]
  char *dest; // [sp+48h] [bp-1642Ch]
  char *v149; // [sp+50h] [bp-16424h]
  char *v150; // [sp+5Ch] [bp-16418h]
  unsigned __int8 *v151; // [sp+60h] [bp-16414h]
  char *haystack; // [sp+64h] [bp-16410h]
  unsigned __int8 v153; // [sp+76h] [bp-163FEh] BYREF
  char v154; // [sp+77h] [bp-163FDh] BYREF
  const char *v155; // [sp+78h] [bp-163FCh] BYREF
  socklen_t addr_len; // [sp+7Ch] [bp-163F8h] BYREF
  struct addrinfo *ai; // [sp+80h] [bp-163F4h] BYREF
  int v158; // [sp+84h] [bp-163F0h] BYREF
  char service[12]; // [sp+88h] [bp-163ECh] BYREF
  char cp[32]; // [sp+94h] [bp-163E0h] BYREF
  struct addrinfo v161; // [sp+B4h] [bp-163C0h] BYREF
  _BYTE v162[12]; // [sp+D4h] [bp-163A0h] BYREF
  pthread_t th; // [sp+E0h] [bp-16394h]
  char v164[100]; // [sp+114h] [bp-16360h] BYREF
  char needle[100]; // [sp+178h] [bp-162FCh] BYREF
  struct sockaddr addr; // [sp+1DCh] [bp-16298h] BYREF
  char v167[252]; // [sp+25Ch] [bp-16218h] BYREF
  struct __jmp_buf_tag env; // [sp+358h] [bp-1611Ch] BYREF
  char s[2048]; // [sp+470h] [bp-16004h] BYREF
  char v170[2000]; // [sp+C70h] [bp-15804h] BYREF
  char v171[2000]; // [sp+1470h] [bp-15004h] BYREF
  char v172[2000]; // [sp+1C70h] [bp-14804h] BYREF
  char v173[2000]; // [sp+2470h] [bp-14004h] BYREF
  char v174[2000]; // [sp+2C70h] [bp-13804h] BYREF
  char v175[2000]; // [sp+3470h] [bp-13004h] BYREF
  char v176[1936]; // [sp+3C70h] [bp-12804h] BYREF
  char v177[1936]; // [sp+4470h] [bp-12004h] BYREF
  char v178[1936]; // [sp+4C70h] [bp-11804h] BYREF
  char v179[1936]; // [sp+5470h] [bp-11004h] BYREF
  char v180[1936]; // [sp+5C70h] [bp-10804h] BYREF
  char v181[1936]; // [sp+6470h] [bp-10004h] BYREF
  char v182[1936]; // [sp+6C70h] [bp-F804h] BYREF
  char v183[1936]; // [sp+7470h] [bp-F004h] BYREF
  char v184[1936]; // [sp+7C70h] [bp-E804h] BYREF
  char v185[1936]; // [sp+8470h] [bp-E004h] BYREF
  char v186[1936]; // [sp+8C70h] [bp-D804h] BYREF
  char v187[1936]; // [sp+9470h] [bp-D004h] BYREF
  char v188[1936]; // [sp+9C70h] [bp-C804h] BYREF
  char v189[1936]; // [sp+A470h] [bp-C004h] BYREF
  char v190[1936]; // [sp+AC70h] [bp-B804h] BYREF
  char v191[1936]; // [sp+B470h] [bp-B004h] BYREF
  char v192[1936]; // [sp+BC70h] [bp-A804h] BYREF
  char v193[1936]; // [sp+C470h] [bp-A004h] BYREF
  char v194[1936]; // [sp+CC70h] [bp-9804h] BYREF
  char v195[1936]; // [sp+D470h] [bp-9004h] BYREF
  char v196[1936]; // [sp+DC70h] [bp-8804h] BYREF
  char v197[1936]; // [sp+E470h] [bp-8004h] BYREF
  char v198[1936]; // [sp+EC70h] [bp-7804h] BYREF
  char v199[1936]; // [sp+F470h] [bp-7004h] BYREF
  char v200[1936]; // [sp+FC70h] [bp-6804h] BYREF
  char v201[8080]; // [sp+10470h] [bp-6004h] BYREF
  char v202[8080]; // [sp+12470h] [bp-4004h] BYREF
  _WORD v203[4098]; // [sp+14470h] [bp-2004h] BYREF

  v144 = 0;
  v145 = dword_9EE5C;
  ptr = (int *)malloc(4u);
  v3 = (unsigned __int8)byte_245205;
  *ptr = -1;
  if ( !v3 )
  {
    if ( byte_1AECC5 && (byte_244080 || byte_1AECC4 || dword_9E320 > 6) )
    {
      snprintf(s, 0x800u, "API not running%s", " - API will not be available");
      sub_47AB4(7, s, 0);
    }
    goto LABEL_6;
  }
  v151 = (unsigned __int8 *)malloc(0x10u);
  v4 = malloc(0x10000u);
  *((_DWORD *)v151 + 1) = v4;
  *v4 = 0;
  v151[13] = 0;
  *((_DWORD *)v151 + 2) = v4;
  *(_DWORD *)v151 = 0x10000;
  v151[12] = 1;
  v5 = malloc(0xCu);
  v6 = &byte_1AEB6C;
  *v5 = v151;
  v7 = dword_1AEB90;
  v8 = dword_1AEB90 == 0;
  if ( dword_1AEB90 )
  {
    v5[2] = dword_1AEB90;
    v6 = *(char **)(v7 + 4);
  }
  else
  {
    v5[1] = v5;
    v5[2] = v5;
  }
  if ( v8 )
  {
    *((_DWORD *)v6 + 9) = v5;
  }
  else
  {
    v5[1] = v6;
    *(_DWORD *)(v7 + 4) = v5;
    v6 = (char *)v5[1];
  }
  if ( !v8 )
    *((_DWORD *)v6 + 2) = v5;
  if ( pthread_mutex_init(&stru_1AEB78, 0) )
  {
    v126 = _errno_location();
    snprintf(v189, 0x800u, "Failed to pthread_mutex_init errno=%d in %s %s():%d", *v126, "api.c", "api", 5189);
    sub_47AB4(3, v189, 1);
    sub_62EC0(1);
  }
  if ( _sigsetjmp(&env, 0) )
  {
    sub_3E48C(ptr);
    _pthread_unwind_next((__pthread_unwind_buf_t *)&env);
LABEL_263:
    freeaddrinfo(ai);
    if ( byte_244080 || byte_1AECC4 || dword_9E320 > 2 )
    {
      snprintf(v175, 0x800u, "API bind to port %d failed (%s)%s", v0, v1, " - API will not be available");
      sub_47AB4(3, v175, 0);
    }
    goto LABEL_6;
  }
  _pthread_register_cancel((__pthread_unwind_buf_t *)&env);
  v9 = (const char *)dword_242E60;
  if ( dword_242E60 )
  {
    v10 = strlen((const char *)dword_242E60) + 1;
  }
  else
  {
    v9 = "";
    v10 = 1;
  }
  dest = (char *)malloc(v10);
  if ( !dest )
  {
    strcpy(v190, "Failed to malloc ipgroups buf");
    sub_47AB4(3, v190, 1);
    sub_62EC0(1);
  }
  v11 = (unsigned __int8 *)dest;
  strcpy(dest, v9);
  if ( *dest )
  {
    do
    {
      v12 = strchr((const char *)v11, 44);
      if ( v12 )
      {
        *v12 = 0;
        v141 = (unsigned __int8 *)(v12 + 1);
      }
      else
      {
        v141 = 0;
      }
      if ( v11[1] != 58 )
      {
        v13 = strchr((const char *)v11, 58);
        if ( v13 )
          *v13 = 0;
        snprintf(v191, 0x800u, "API invalid group name '%s'", v11);
        sub_47AB4(3, v191, 1);
        sub_62EC0(1);
      }
      v14 = _ctype_toupper_loc();
      v15 = *v14;
      v140 = v14;
      v16 = LOBYTE((*v14)[*v11]);
      v17 = (*v14)[v16];
      if ( v17 < (*v14)[65] || v17 > v15[90] )
      {
        snprintf(v192, 0x800u, "API invalid group name '%c'");
        sub_47AB4(3, v192, 1);
        sub_62EC0(1);
      }
      if ( v16 == v15[87] )
      {
        snprintf(v193, 0x800u, "API group name can't be '%c'", v16);
        sub_47AB4(3, v193, 1);
        sub_62EC0(1);
      }
      if ( v16 == v15[82] )
      {
        snprintf(v194, 0x800u, "API group name can't be '%c'", v16);
        sub_47AB4(3, v194, 1);
        sub_62EC0(1);
      }
      if ( *((_DWORD *)&unk_242DF4 + v15[v16] - v15[65]) )
      {
        snprintf(v195, 0x800u, "API duplicate group name '%c'", *v11);
        sub_47AB4(3, v195, 1);
        sub_62EC0(1);
      }
      v18 = v11 + 2;
      v203[0] = 124;
      if ( v11 != (unsigned __int8 *)-2 && v11[2] )
      {
        v19 = 0;
        v143 = (char *)v203 + 1;
        do
        {
          v20 = strchr((const char *)v18, 58);
          if ( v20 )
          {
            v21 = (unsigned __int8 *)(v20 + 1);
            *v20 = 0;
          }
          else
          {
            v21 = 0;
          }
          if ( *v18 != 42 || v18[1] )
          {
            v22 = (const char *)off_9DD3C;
            if ( !off_9DD3C )
            {
LABEL_104:
              snprintf(v196, 0x800u, "API unknown command '%s' in group '%c'", v18, v16);
              sub_47AB4(3, v196, 1);
              sub_62EC0(1);
            }
            v23 = &off_9DD3C;
            v24 = 0;
            while ( strcasecmp((const char *)v18, v22) )
            {
              v25 = (const char *)v23[3];
              v23 += 3;
              v22 = v25;
              ++v24;
              if ( !v25 )
                goto LABEL_104;
            }
            sprintf(needle, "|%s|", v22);
            if ( !strstr((const char *)v203, needle) )
            {
              v70 = (const char *)dword_9D80C[3 * v24 + 332];
              strcpy(v143, v70);
              v71 = &v143[strlen(v70)];
              v71[1] = 0;
              v143 = v71 + 1;
              *v71 = 124;
            }
          }
          else
          {
            v19 = 1;
          }
          if ( !v21 )
            break;
          v18 = v21;
        }
        while ( *v21 );
        if ( v19 && off_9DD3C )
        {
          v65 = (const char **)&off_9DD3C;
          v66 = v143;
          do
          {
            if ( !*((_BYTE *)v65 + 8) )
            {
              sprintf(needle, "|%s|");
              if ( !strstr((const char *)v203, needle) )
              {
                v68 = *v65;
                strcpy(v66, *v65);
                v69 = &v66[strlen(v68)];
                v66 = v69 + 1;
                v69[1] = 0;
                *v69 = 124;
              }
            }
            v67 = v65[3];
            v65 += 3;
          }
          while ( v67 );
        }
      }
      v26 = strlen((const char *)v203);
      v27 = (*v140)[v16] - (*v140)[65];
      v28 = (char *)malloc(v26 + 1);
      *((_DWORD *)&unk_242DF4 + v27) = v28;
      if ( !v28 )
      {
        strcpy(v197, "Failed to malloc group commands buf");
        sub_47AB4(3, v197, 1);
        sub_62EC0(1);
      }
      strcpy(v28, (const char *)v203);
      if ( !v141 )
        break;
      v11 = v141;
    }
    while ( *v141 );
  }
  v29 = _ctype_toupper_loc();
  v30 = (const char *)off_9DD3C;
  v147 = v29;
  v203[0] = 124;
  if ( off_9DD3C )
  {
    v31 = &off_9DD3C;
    v32 = (char *)v203 + 1;
    do
    {
      while ( *((_BYTE *)v31 + 8) )
      {
        v33 = (const char *)v31[3];
        v31 += 3;
        v30 = v33;
        if ( !v33 )
          goto LABEL_60;
      }
      strcpy(v32, v30);
      v34 = strlen(v30);
      v35 = (const char *)v31[3];
      v31 += 3;
      v30 = v35;
      v36 = &v32[v34];
      v32 = v36 + 1;
      *v36 = 124;
      v36[1] = 0;
    }
    while ( v35 );
  }
LABEL_60:
  v37 = strlen((const char *)v203) + 1;
  v38 = (*v147)[82];
  if ( (unsigned int)(v38 + 128) < 0x180 )
    v38 = (*v147)[v38];
  v39 = v38 - (*v147)[65];
  v40 = (char *)malloc(v37);
  *((_DWORD *)&unk_242DF4 + v39) = v40;
  if ( !v40 )
  {
    strcpy(v198, "Failed to malloc noprivgroup commands buf");
    sub_47AB4(3, v198, 1);
    sub_62EC0(1);
  }
  strcpy(v40, (const char *)v203);
  free(dest);
  v41 = (const char *)dword_1B0B20;
  if ( dword_1B0B20 )
  {
    v42 = strlen((const char *)dword_1B0B20);
    v43 = (char *)malloc(v42 + 1);
    v44 = v43;
    if ( !v43 )
    {
      strcpy(v199, "Failed to malloc ipaccess buf");
      sub_47AB4(3, v199, 1);
      sub_62EC0(1);
    }
    strcpy(v43, v41);
    v45 = v44 - 1;
    v46 = 1;
    while ( 1 )
    {
      v48 = (unsigned __int8)*++v45;
      v47 = v48;
      if ( !v48 )
        break;
      if ( v47 == 44 )
        ++v46;
    }
    dword_1AEB70 = (int)calloc(v46, 0x24u);
    if ( !dword_1AEB70 )
    {
      strcpy(v200, "Failed to calloc ipaccess");
      sub_47AB4(3, v200, 1);
      sub_62EC0(1);
    }
    v49 = 0;
    v50 = v44;
    v149 = v44;
    dword_1AEB74 = 0;
    while ( 1 )
    {
      v51 = *(unsigned __int8 *)v50;
      if ( !*v50 )
      {
LABEL_96:
        free(v149);
        if ( v49 )
          goto LABEL_97;
        if ( byte_244080 || byte_1AECC4 || dword_9E320 > 3 )
        {
          snprintf(v170, 0x800u, "API not running (no valid IPs specified)%s", " - API will not be available");
          sub_47AB4(4, v170, 0);
        }
LABEL_6:
        free(ptr);
        return;
      }
      while ( 1 )
      {
        v53 = v51 == 9;
        if ( v51 != 9 )
          v53 = v51 == 32;
        if ( !v53 )
          break;
        v52 = *(unsigned __int8 *)++v50;
        v51 = v52;
      }
      if ( v51 != 44 )
        break;
      ++v50;
LABEL_95:
      if ( !v50 )
        goto LABEL_96;
    }
    v54 = strchr(v50, 44);
    if ( v54 )
    {
      v55 = v54 + 1;
      *v54 = 0;
    }
    else
    {
      v55 = 0;
    }
    v56 = _ctype_b_loc();
    v57 = *(unsigned __int8 *)v50;
    v58 = *v147;
    v59 = *((_BYTE *)*v147 + 328);
    if ( ((*v56)[v57] & 0x400) != 0 && v50[1] == 58 )
    {
      v90 = v58[v57];
      if ( v90 == v58[87] || *((_DWORD *)&unk_242DF4 + v90 - v58[65]) )
        v59 = v90;
      v50 += 2;
    }
    v60 = (_BYTE *)(dword_1AEB70 + 36 * v49);
    v60[32] = v59;
    v61 = *(unsigned __int8 *)v50;
    if ( v61 == 48 )
    {
      if ( v50[1] == 47 && v50[2] == 48 && !v50[3] )
      {
        v72 = v60 + 15;
        v73 = v60 - 1;
        v74 = v72;
        do
        {
          *++v73 = 0;
          *++v72 = 0;
        }
        while ( v73 != v74 );
        goto LABEL_118;
      }
      v62 = strchr(v50, 47);
      if ( v62 )
        goto LABEL_88;
    }
    else
    {
      v62 = strchr(v50, 47);
      if ( v62 )
        goto LABEL_86;
    }
    v75 = v60 + 15;
    do
      *++v75 = -1;
    while ( v60 + 31 != v75 );
    v61 = *(unsigned __int8 *)v50;
    v62 = (char *)&v50[strlen(v50)];
LABEL_86:
    if ( v61 == 91 && *(v62 - 1) == 93 )
    {
      v63 = 1;
      *v50++ = 0;
      *(v62 - 1) = 0;
LABEL_89:
      if ( *v62 )
      {
        *v62 = 0;
        v64 = strtol(v62 + 1, 0, 10);
        if ( v64 <= 0 )
          goto LABEL_94;
        if ( !v63 )
          v64 += 96;
        if ( v64 > 128 )
        {
LABEL_94:
          v50 = v55;
          goto LABEL_95;
        }
        v76 = v60 + 15;
        do
          *++v76 = 0;
        while ( v60 + 31 != v76 );
        v77 = 0;
        v78 = 7;
        while ( v64-- != 0 )
        {
          v79 = &v60[v77];
          v80 = (unsigned __int8)v60[v77 + 16];
          if ( !v78 )
            ++v77;
          v81 = v80 | (1 << v78);
          if ( v78 )
            --v78;
          else
            v78 = 7;
          v79[16] = v81;
        }
      }
      v83 = v60 - 1;
      do
        *++v83 = 0;
      while ( v60 + 15 != v83 );
      if ( v63 )
      {
        if ( inet_pton(10, v50, v60) == 1 )
          goto LABEL_137;
      }
      else
      {
        sprintf(cp, "::ffff:%s", v50);
        v49 = dword_1AEB74;
        v60 = (_BYTE *)(dword_1AEB70 + 36 * dword_1AEB74);
        if ( inet_pton(10, cp, v60) == 1 )
        {
LABEL_137:
          v84 = v60 + 15;
          v85 = v60 - 1;
          v86 = v84;
          do
          {
            v88 = *++v85;
            v87 = v88;
            v89 = *++v84;
            *v85 = v87 & v89;
          }
          while ( v85 != v86 );
LABEL_118:
          ++v49;
          v50 = v55;
          dword_1AEB74 = v49;
          goto LABEL_95;
        }
      }
      goto LABEL_94;
    }
LABEL_88:
    v63 = 0;
    goto LABEL_89;
  }
LABEL_97:
  v0 = v145;
  sub_4A804(1000 * dword_9ED78);
  sprintf(service, "%d", v145);
  memset(&v161.ai_family, 0, 28);
  v161.ai_flags = 1;
  if ( getaddrinfo(off_9EE58, service, &v161, &ai) )
  {
    if ( byte_244080 || byte_1AECC4 || dword_9E320 > 2 )
    {
      snprintf(v171, 0x800u, "API failed to resolve %s", off_9EE58);
      sub_47AB4(3, v171, 0);
    }
    goto LABEL_6;
  }
  v91 = ai;
  if ( ai )
  {
    for ( i = ai; ; i = ai )
    {
      v93 = socket(i->ai_family, 1, 0);
      *ptr = v93;
      if ( v93 > 0 )
        break;
      v91 = v91->ai_next;
      if ( !v91 )
        goto LABEL_233;
    }
  }
  else
  {
    v93 = *ptr;
LABEL_233:
    if ( v93 == -1 )
    {
      if ( byte_244080 || byte_1AECC4 || dword_9E320 > 2 )
      {
        v122 = _errno_location();
        v123 = strerror(*v122);
        snprintf(v172, 0x800u, "API initialisation failed (%s)%s", v123, " - API will not be available");
        sub_47AB4(3, v172, 0);
      }
      freeaddrinfo(ai);
      free(ptr);
      return;
    }
    v91 = 0;
  }
  v158 = 1;
  if ( setsockopt(v93, 1, 2, &v158, 4u) < 0 && byte_1AECC5 && (byte_244080 || byte_1AECC4 || dword_9E320 > 6) )
  {
    v94 = _errno_location();
    v95 = strerror(*v94);
    snprintf(v173, 0x800u, "API setsockopt SO_REUSEADDR failed (ignored): %s", v95);
    sub_47AB4(7, v173, 0);
  }
  v96 = time(0);
  while ( bind(*ptr, v91->ai_addr, v91->ai_addrlen) < 0 )
  {
    v97 = _errno_location();
    v1 = strerror(*v97);
    if ( time(0) - v96 > 61 )
      goto LABEL_263;
    if ( byte_244080 || byte_1AECC4 || dword_9E320 > 3 )
    {
      snprintf(v174, 0x800u, "API bind to port %d failed - trying again in 30sec", v145);
      sub_47AB4(4, v174, 0);
    }
    sub_4A804(30000);
  }
  freeaddrinfo(ai);
  if ( listen(*ptr, 100) < 0 )
  {
    if ( byte_244080 || byte_1AECC4 || dword_9E320 > 2 )
    {
      v134 = _errno_location();
      v135 = strerror(*v134);
      snprintf(v176, 0x800u, "API3 initialisation failed (%s)%s", v135, " - API will not be available");
      sub_47AB4(3, v176, 0);
    }
    close(*ptr);
    free(ptr);
    return;
  }
  if ( dword_1B0B20 )
  {
    if ( byte_244080 || byte_1AECC4 || dword_9E320 > 3 )
    {
      snprintf(v177, 0x800u, "API running in IP access mode on port %d (%d)", v145, *ptr);
      sub_47AB4(4, v177, 0);
    }
  }
  else if ( byte_24633C )
  {
    if ( byte_244080 || byte_1AECC4 || dword_9E320 > 3 )
    {
      snprintf(v178, 0x800u, "API running in UNRESTRICTED read access mode on port %d (%d)", v145, *ptr);
      sub_47AB4(4, v178, 0);
    }
  }
  else if ( byte_244080 || byte_1AECC4 || dword_9E320 > 3 )
  {
    snprintf(v179, 0x800u, "API running in local read access mode on port %d (%d)", v145, *ptr);
    sub_47AB4(4, v179, 0);
  }
  if ( byte_242FFD )
    sub_447FC();
  v98 = 0;
  dword_1AEB94 = sub_46C54("StrBufs", 12, 2, 0, 0, "api.c", "api", 5301);
  while ( 1 )
  {
    v99 = (unsigned __int8)byte_1AEB6C;
    if ( byte_1AEB6C )
      goto LABEL_282;
    addr_len = 128;
    fd = accept(*ptr, &addr, &addr_len);
    if ( fd < 0 )
      break;
    v100 = sub_3CB84(&addr, &v155, &v153);
    if ( byte_1AECC5 && (byte_244080 || byte_1AECC4 || dword_9E320 > 6) )
    {
      v101 = "Accepted";
      if ( !v100 )
        v101 = "Ignored";
      snprintf(v181, 0x800u, "API: connection from %s - %s", v155, v101);
      sub_47AB4(7, v181, 0);
    }
    if ( v100 )
    {
      v102 = recv(fd, v201, 0xFFFu, 0);
      v103 = v102;
      if ( v102 >= 0 )
      {
        v8 = byte_1AECC5 == 0;
        v201[v102] = 0;
        if ( !v8 && (byte_244080 || byte_1AECC4 || dword_9E320 > 6) )
        {
          snprintf(v183, 0x800u, "API: recv command: (%d) '%s'", v102, v201);
          sub_47AB4(7, v183, 0);
        }
        v104 = v201;
        v105 = time(0);
        v106 = (_BYTE *)*((_DWORD *)v151 + 1);
        *((_DWORD *)v151 + 2) = v106;
        dword_1AEB98 = v105;
        *v106 = 0;
        v107 = (unsigned __int8)v201[0];
        v151[13] = 0;
        if ( v107 == 123 )
        {
          v127 = (_DWORD *)sub_6D1D0(v201, v103, 0, v167);
          v144 = v127;
          if ( v127 && !*v127 )
          {
            v136 = (_DWORD *)sub_6DFCC(v127, "command");
            if ( v136 )
            {
              if ( *v136 == 2 )
              {
                v104 = (const char *)sub_6E350();
                v137 = (int *)sub_6DFCC(v144, "parameter");
                if ( v137 )
                {
                  v138 = *v137;
                  if ( *v137 == 2 )
                  {
                    v150 = (char *)sub_6E350();
                  }
                  else if ( v138 == 3 )
                  {
                    v139 = sub_6E430();
                    v150 = v202;
                    sprintf(v202, "%d", v139);
                  }
                  else if ( v138 == 4 )
                  {
                    sub_6E4E0();
                    v150 = v202;
                    sprintf(v202, "%f", v2);
                  }
                  else
                  {
                    v150 = 0;
                  }
                }
                else
                {
                  v150 = 0;
                }
                goto LABEL_200;
              }
              sub_3F65C((unsigned int *)v151, 14, 0, 0, 1u);
            }
            else
            {
              sub_3F65C((unsigned int *)v151, 24, 0, 0, 1u);
            }
          }
          else
          {
            sub_3F65C((unsigned int *)v151, 23, 0, 0, 1u);
          }
          sub_3DAA0(*((const char **)v151 + 1), v151[13], fd, 1);
LABEL_276:
          if ( v98 )
            sub_3DAA0(*((const char **)v151 + 1), v151[13], fd, v100);
LABEL_225:
          if ( v144 )
            v121 = v100;
          else
            v121 = 0;
          if ( v121 )
          {
            if ( !*v144 && v144[1] != -1 )
            {
              v131 = v144 + 1;
              __dmb(0xBu);
              do
              {
                v132 = __ldrex(v131);
                v133 = v132 - 1;
              }
              while ( __strex(v133, v131) );
              if ( !v133 )
                sub_6E5DC(v144);
            }
          }
          goto LABEL_230;
        }
        v108 = strchr(v201, 124);
        if ( v108 )
        {
          v100 = v99;
          *v108 = 0;
          v150 = v108 + 1;
        }
        else
        {
          v150 = 0;
          v100 = v99;
        }
LABEL_200:
        haystack = strchr(v104, 43);
        if ( haystack )
        {
          v98 = 1;
          v154 = 1;
          v109 = strlen(v104);
          haystack = (char *)malloc(v109 + 3);
          if ( !haystack )
          {
            snprintf(v184, 0x800u, "OOM cmdsbuf in %s %s():%d", "api.c", "api", 5412);
            sub_47AB4(3, v184, 1);
            sub_62EC0(1);
          }
          v150 = 0;
          *(_WORD *)haystack = 124;
        }
        else
        {
          v98 = v99;
          v154 = 0;
        }
        v110 = (char *)v104;
        if ( !v98 )
        {
          v113 = (const char *)off_9DD3C;
          if ( off_9DD3C )
            goto LABEL_214;
          goto LABEL_247;
        }
        while ( 2 )
        {
          v111 = strchr(v110, 43);
          if ( v111 )
          {
            v104 = v111 + 1;
            *v111 = 0;
          }
          else
          {
            v104 = 0;
          }
          if ( !*v110 )
          {
LABEL_208:
            if ( v104 )
              v112 = v98 & 1;
            else
              v112 = 0;
            v110 = (char *)v104;
            if ( !v112 )
              goto LABEL_276;
            continue;
          }
          break;
        }
        v113 = (const char *)off_9DD3C;
        if ( off_9DD3C )
        {
LABEL_214:
          v114 = &off_9DD3C;
          v115 = 0;
          while ( strcmp(v110, v113) )
          {
            v116 = (const char *)v114[3];
            v114 += 3;
            v113 = v116;
            ++v115;
            if ( !v116 )
            {
              if ( !v98 )
                goto LABEL_247;
              goto LABEL_246;
            }
          }
          sprintf(v164, "|%s|", v110);
          if ( v98 )
          {
            if ( strstr(haystack, v164) )
              goto LABEL_208;
            v117 = strlen(haystack);
            strcpy((char *)stpcpy(&haystack[v117], v110), "|");
            sub_3CA78((unsigned int *)v151, v110, v100, &v154);
            v118 = &dword_9D80C[3 * v115];
            if ( !*((_BYTE *)v118 + 1337) )
            {
              sub_3F65C((unsigned int *)v151, 45, *((unsigned __int8 *)v118 + 1337), v118[332], v100);
              sub_3D924((int)v151, v100);
              goto LABEL_224;
            }
          }
          v119 = v153;
          v120 = (*v147)[v153];
          if ( v120 == (*v147)[87] || strstr(*((const char **)&unk_242DF4 + v120 - (*v147)[65]), v164) )
          {
            ((void (__fastcall *)(unsigned __int8 *, int, char *, _BOOL4, int))dword_9D80C[3 * v115 + 333])(
              v151,
              fd,
              v150,
              v100,
              v119);
          }
          else
          {
            sub_3F65C((unsigned int *)v151, 45, 0, dword_9D80C[3 * v115 + 332], v100);
            if ( byte_1AECC5 && (byte_244080 || byte_1AECC4 || dword_9E320 > 6) )
            {
              snprintf(
                v185,
                0x800u,
                "API: access denied to '%s' for '%s' command",
                v155,
                (const char *)dword_9D80C[3 * v115 + 332]);
              sub_47AB4(7, v185, 0);
            }
          }
          if ( (unsigned __int8)v98 == 1 )
            goto LABEL_248;
        }
        else
        {
LABEL_246:
          sub_3CA78((unsigned int *)v151, v110, v100, &v154);
LABEL_247:
          sub_3F65C((unsigned int *)v151, 14, 0, 0, v100);
          if ( v98 )
          {
LABEL_248:
            sub_3D924((int)v151, v100);
LABEL_224:
            if ( !v98 )
              goto LABEL_225;
            goto LABEL_208;
          }
        }
        sub_3DAA0(*((const char **)v151 + 1), v151[13], fd, v100);
        goto LABEL_224;
      }
      v201[0] = 0;
      if ( byte_1AECC5 && (byte_244080 || byte_1AECC4 || dword_9E320 > 6) )
      {
        v124 = _errno_location();
        v125 = strerror(*v124);
        snprintf(v182, 0x800u, "API: recv failed: %s", v125);
        sub_47AB4(7, v182, 0);
      }
    }
LABEL_230:
    close(fd);
  }
  if ( byte_244080 || byte_1AECC4 || dword_9E320 > 2 )
  {
    v128 = _errno_location();
    v129 = strerror(*v128);
    snprintf(v180, 0x800u, "API failed (%s)%s (%d)", v129, " - API will not be available", *ptr);
    sub_47AB4(3, v180, 0);
  }
LABEL_282:
  _pthread_unregister_cancel((__pthread_unwind_buf_t *)&env);
  sub_3E48C(ptr);
  free(ptr);
  if ( byte_1AECC5 && (byte_244080 || byte_1AECC4 || dword_9E320 > 6) )
  {
    if ( byte_1AEB6D )
    {
      v130 = "QUIT";
    }
    else if ( byte_1AEB6E )
    {
      v130 = "RESTART";
    }
    else
    {
      v130 = "UNKNOWN!";
      if ( byte_1AEB6C )
        v130 = (const char *)&unk_7F6F4;
    }
    snprintf(v186, 0x800u, "API: terminating due to: %s", v130);
    sub_47AB4(7, v186, 0);
  }
  if ( pthread_mutex_lock(&stru_1AEB78) )
    sub_3E190("api", 5511);
  if ( byte_1AEB6E )
  {
    if ( sub_4BDCC(v162, 0, sub_3E708) )
    {
      if ( !pthread_mutex_unlock(&stru_1AEB78) )
      {
        off_9E444();
        strcpy(v187, "API failed to initiate a restart - aborting");
        sub_47AB4(3, v187, 1);
        sub_62EC0(1);
      }
      sub_3E1F4("api", 5517);
    }
  }
  else
  {
    if ( !byte_1AEB6D )
      goto LABEL_296;
    if ( sub_4BDCC(v162, (unsigned __int8)byte_1AEB6E, sub_3E580) )
    {
      if ( pthread_mutex_unlock(&stru_1AEB78) )
        sub_3E1F4("api", 5526);
      off_9E444();
      strcpy(v188, "API failed to initiate a clean quit - aborting");
      sub_47AB4(3, v188, 1);
      sub_62EC0(1);
    }
  }
  pthread_detach(th);
LABEL_296:
  if ( pthread_mutex_unlock(&stru_1AEB78) )
    sub_3E1F4("api", 5532);
  off_9E444();
}

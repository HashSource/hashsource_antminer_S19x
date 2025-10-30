int __fastcall sub_FE68(int a1)
{
  _DWORD *v2; // r9
  void *v3; // r0
  int *v4; // r2
  FILE *v5; // r0
  int v6; // r0
  int v7; // r4
  _DWORD *v8; // r3
  _DWORD *v9; // r4
  char *v10; // r5
  const char *v11; // r0
  int v12; // r10
  int v13; // r0
  char *v14; // r1
  _DWORD *v15; // r3
  _DWORD *v16; // r4
  char *v17; // r6
  int v18; // r0
  _DWORD *v19; // r3
  _DWORD *v20; // r4
  char *v21; // r6
  int v22; // r0
  _DWORD *v23; // r2
  int v24; // r3
  int v25; // lr
  _DWORD *v26; // r12
  int v27; // r2
  _DWORD *v28; // r3
  _DWORD *v29; // r4
  int v30; // r1
  int v31; // r0
  int v32; // r3
  int v33; // r3
  _DWORD *v34; // r0
  _DWORD *v35; // r1
  int v36; // r6
  int v37; // r2
  bool v38; // r3
  int v40; // r3
  int v41; // r2
  int v42; // r1
  _DWORD *v43; // r6
  _DWORD *v44; // r4
  int v45; // r1
  int *v46; // r0
  int v47; // r4
  int v48; // r3
  char *v49; // r0
  int v50; // r0
  int v51; // r3
  _DWORD *v52; // r3
  _DWORD *v53; // r4
  int v54; // r5
  int v55; // r10
  int v56; // r3
  int v57; // r0
  int v58; // r2
  int v59; // r2
  double **v60; // r3
  int v61; // r6
  int v62; // r5
  int v63; // r7
  double *v64; // r4
  int v65; // r3
  double v66; // d16
  double v67; // d16
  bool v68; // cc
  double *v69; // r4
  int v70; // r1
  int v71; // r0
  int **v72; // r3
  int *v73; // r4
  int v74; // r0
  bool v75; // cc
  bool v76; // cc
  _DWORD *v77; // r3
  _DWORD *v78; // r4
  int v79; // r0
  int v80; // r0
  const char *v81; // r0
  int v82; // r3
  int ***v83; // r1
  unsigned int v84; // r3
  unsigned int v85; // r2
  int **v86; // r3
  int *i; // r10
  _DWORD *v88; // r4
  unsigned int v89; // r3
  int v90; // r5
  int v91; // r1
  int v92; // r7
  int v93; // r2
  int v94; // r12
  int v95; // lr
  const char *v96; // r0
  struct addrinfo *v97; // r6
  int v98; // r1
  unsigned int v99; // r2
  int v100; // r2
  int v101; // r3
  int v102; // r3
  _DWORD *v103; // r3
  _DWORD *v104; // r4
  int v105; // r1
  int v106; // r0
  _DWORD *v107; // r3
  _DWORD *v108; // r4
  int v109; // r1
  double v110; // r0
  int ***v111; // r3
  int **j; // r4
  int v113; // r1
  int v114; // r2
  int ***v115; // r3
  int **v116; // r4
  unsigned int v117; // r5
  int ***v118; // r3
  int **v119; // r4
  void *v120; // r6
  size_t v121; // r5
  size_t v122; // r5
  _DWORD *v123; // r3
  _DWORD *v124; // r5
  unsigned int v125; // r4
  double **v126; // r3
  double *k; // r4
  int v128; // r2
  int result; // r0
  _DWORD *v130; // r3
  _DWORD *v131; // r6
  int v132; // r4
  _DWORD *v133; // r5
  int v134; // r8
  unsigned int v135; // r7
  int v136; // r3
  _DWORD *v137; // r0
  _DWORD *v138; // r4
  int v139; // t1
  int v140; // r2
  int v141; // r3
  int v142; // r12
  int v143; // r2
  int v144; // r3
  int v145; // r1
  int **v146; // r3
  int *m; // r6
  int **v148; // r3
  int *v149; // r5
  int *v150; // r3
  int **v151; // r3
  int *v152; // r5
  int v153; // r3
  int v154; // r8
  unsigned int v155; // r0
  int ***v156; // r3
  int **n; // r4
  int *v158; // r3
  const char *v159; // r5
  int v160; // r5
  int v161; // r0
  int v162; // r3
  _DWORD *v163; // r3
  _DWORD *v164; // r6
  int v165; // r11
  int **v166; // r3
  int *v167; // r10
  int v168; // r9
  _DWORD *v169; // r3
  _DWORD *v170; // r4
  int v171; // r3
  int v172; // r3
  const char *v173; // r6
  int v174; // r3
  int v175; // r3
  int v176; // r0
  char *v177; // r1
  const char *v178; // r6
  int v179; // r6
  int v180; // r0
  int v181; // r3
  int v182; // r0
  int *v183; // r1
  int v184; // r2
  int v185; // lr
  int v186; // r0
  int v187; // r0
  __int16 v188; // r3
  int v189; // r6
  unsigned int v190; // r0
  int v191; // r2
  int v192; // r1
  int v193; // r0
  int v194; // r8
  int v195; // r0
  int v196; // r6
  unsigned int v197; // r0
  _DWORD *v198; // r6
  const char *v199; // r0
  int v200; // lr
  int v201; // r5
  const char *v202; // r0
  int **v203; // r3
  const char *v204; // r0
  int v205; // r0
  size_t v206; // r0
  int v207; // r2
  const char *v208; // r0
  int v209; // r4
  int v210; // r0
  int v211; // r0
  char v212; // r3
  char v213; // r3
  char v214; // r3
  char v215; // r3
  int v216; // r2
  char *format; // [sp+24h] [bp-F0h]
  char *v218; // [sp+28h] [bp-ECh]
  _DWORD *v219; // [sp+44h] [bp-D0h]
  struct addrinfo *pai; // [sp+7Ch] [bp-98h] BYREF
  _BYTE req[72]; // [sp+80h] [bp-94h] BYREF
  int v222; // [sp+CCh] [bp-48h] BYREF
  int v223; // [sp+D0h] [bp-44h]
  int v224; // [sp+D4h] [bp-40h]
  int v225; // [sp+D8h] [bp-3Ch]
  int v226; // [sp+DCh] [bp-38h]
  int v227; // [sp+E0h] [bp-34h]
  int v228; // [sp+E4h] [bp-30h]
  int v229; // [sp+E8h] [bp-2Ch] BYREF
  int v230; // [sp+ECh] [bp-28h]
  _DWORD s[4]; // [sp+F0h] [bp-24h] BYREF
  int v232; // [sp+100h] [bp-14h] BYREF
  char v233[8]; // [sp+104h] [bp-10h] BYREF

  v2 = (_DWORD *)sub_64B04(0, 184, 0, 0);
  memcpy(v2, &cfgt, 0xB8u);
  v3 = memset(&cfgt, 0, 0xB8u);
  v4 = (int *)cfg_tree_history;
  if ( cfg_tree_history )
  {
    while ( *v4 )
      v4 = (int *)*v4;
  }
  else
  {
    v4 = &cfg_tree_history;
  }
  *v2 = 0;
  *v4 = (int)v2;
  if ( (*(int *)((_BYTE *)&elf_hash_bucket[261] + (_DWORD)off_B711C) & 0xF) != 0 )
  {
    v5 = (FILE *)fopen64(*(int *)((char *)&elf_hash_bucket[263] + (_DWORD)off_B711C), "w");
    if ( v5 )
    {
      v6 = sub_EE5C(v5, 0);
      v7 = v6;
      if ( v6 )
        _fprintf_chk(
          stderr,
          1,
          "--saveconfigquit %s error %d\n",
          *(const char **)((char *)&elf_hash_bucket[263] + (_DWORD)off_B711C),
          v6);
      else
        _fprintf_chk(
          stderr,
          1,
          "configuration saved to %s\n",
          *(const char **)((char *)&elf_hash_bucket[263] + (_DWORD)off_B711C));
      exit(v7);
    }
    v46 = _errno_location();
    v47 = *v46;
    sub_65C04(
      stderr,
      "can not create save file %s, error %d %m\n",
      *(const char **)((char *)&elf_hash_bucket[263] + (_DWORD)off_B711C),
      *v46);
    exit(v47);
  }
  if ( a1 )
  {
    v43 = (_DWORD *)v2[14];
    if ( v43 )
    {
      v44 = (_DWORD *)*v43;
      if ( *v43 )
      {
        v43 = (_DWORD *)(*(int *)((_BYTE *)&elf_hash_bucket[261] + (_DWORD)off_B711C) & 0xF);
        do
        {
          while ( v44[1] != 267 )
          {
            v44 = (_DWORD *)*v44;
            if ( !v44 )
              goto LABEL_100;
          }
          v43 = &dword_0 + 1;
          v3 = (void *)sub_67FE4(v44[4]);
          v44 = (_DWORD *)*v44;
        }
        while ( v44 );
LABEL_100:
        if ( (unsigned int)sub_67F90(v3) > 0x63DF )
          goto LABEL_101;
      }
      else
      {
        if ( (unsigned int)sub_67F90(v3) > 0x63DF )
          goto LABEL_12;
        v43 = 0;
      }
    }
    else if ( (unsigned int)sub_67F90(v3) > 0x63DF )
    {
      goto LABEL_12;
    }
    v50 = sub_67DD0();
    sub_67FE4(v50 - 11);
LABEL_101:
    if ( v43 )
      sub_611B8();
  }
LABEL_12:
  v8 = (_DWORD *)v2[41];
  if ( v8 )
  {
    v9 = (_DWORD *)*v8;
    if ( *v8 )
    {
      if ( (*(int *)((_BYTE *)&elf_hash_bucket[133] + (_DWORD)off_B711C) & 0xF) == 0
        && (*(int *)((_BYTE *)&elf_hash_bucket[85] + (_DWORD)off_B711C) & 0xF) == 0 )
      {
        while ( 1 )
        {
          v10 = (char *)v9[2];
          *(_DWORD *)req = -1;
          if ( !v10 )
          {
            v12 = v9[1];
            if ( v12 == 324 )
            {
LABEL_131:
              v13 = 1;
            }
            else if ( v12 <= 324 )
            {
              if ( !v12 )
LABEL_525:
                sub_6FC54("ntp_config.c", 3051, 2, "if_name != ((void *)0)");
              if ( v12 != 260 )
LABEL_42:
                sub_CA54((int)"config_nic_rules: match-class-token=%d", v12);
              v13 = 0;
            }
            else
            {
LABEL_105:
              if ( v12 == 326 )
              {
                v13 = 2;
              }
              else
              {
                if ( v12 != 443 )
                  goto LABEL_42;
                v13 = 3;
              }
            }
LABEL_108:
            v45 = v9[3];
            if ( v45 == 313 )
              goto LABEL_129;
            if ( v45 == 338 )
            {
              v48 = 0;
              goto LABEL_118;
            }
            goto LABEL_110;
          }
          v11 = (const char *)sub_64C8C(v10);
          v12 = v9[1];
          v10 = (char *)v11;
          if ( v12 == 324 )
            goto LABEL_131;
          if ( v12 > 324 )
            goto LABEL_105;
          if ( v12 )
          {
            if ( v12 != 260 )
              goto LABEL_42;
            v13 = 0;
            goto LABEL_108;
          }
          if ( !v11 )
            goto LABEL_525;
          v49 = strchr(v11, 47);
          if ( v49 )
          {
            *v49 = 0;
            v218 = v49;
            if ( sub_64FD8((int)v10, 0, &v229) )
            {
              if ( sscanf(v218 + 1, "%d", req) == 1 )
              {
                v13 = 5;
                if ( (unsigned __int16)v229 == 2 )
                  v51 = 32;
                else
                  v51 = 128;
                if ( v51 >= (*(_DWORD *)req | (*(int *)req >> 31)) )
                  v51 = *(_DWORD *)req | (*(int *)req >> 31);
                *(_DWORD *)req = v51;
                goto LABEL_128;
              }
LABEL_136:
              v13 = 5;
              goto LABEL_128;
            }
            *v218 = 47;
          }
          else if ( sub_64FD8((int)v10, 0, &v229) )
          {
            goto LABEL_136;
          }
          v13 = 4;
LABEL_128:
          v45 = v9[3];
          if ( v45 == 313 )
          {
LABEL_129:
            v48 = 1;
            goto LABEL_118;
          }
          if ( v45 == 338 )
          {
            sub_16060(v13, v10, *(_DWORD *)req, 0);
            sub_41C38(current_time + 2);
LABEL_119:
            free(v10);
            goto LABEL_120;
          }
LABEL_110:
          if ( v45 != 291 )
            sub_CA54((int)"config_nic_rules: action-token=%d", v45);
          v48 = 2;
LABEL_118:
          sub_16060(v13, v10, *(_DWORD *)req, v48);
          sub_41C38(current_time + 2);
          if ( v10 )
            goto LABEL_119;
LABEL_120:
          v9 = (_DWORD *)*v9;
          if ( !v9 )
            goto LABEL_25;
        }
      }
      if ( a1 )
      {
        sub_65D40(3, "interface/nic rules are not allowed with --interface (-I) or --novirtualips (-L)%s", ", exiting");
        exit(1);
      }
      sub_65D40(3, "interface/nic rules are not allowed with --interface (-I) or --novirtualips (-L)%s", byte_99528);
    }
  }
LABEL_25:
  v14 = (char *)v2[16];
  if ( v14 )
    sub_43708(2, v14);
  v15 = (_DWORD *)v2[15];
  if ( v15 )
  {
    v16 = (_DWORD *)*v15;
    if ( *v15 )
    {
      do
      {
        while ( 1 )
        {
          v17 = (char *)sub_1C300(v16[1]);
          v18 = sub_2CA74(v17);
          if ( !v18 )
            break;
          sub_2C8C8(v18, statsdir, (int)v17, *(unsigned __int8 *)(v18 + 20), *(unsigned __int8 *)(v18 + 21) | 0x80);
          v16 = (_DWORD *)*v16;
          if ( !v16 )
            goto LABEL_33;
        }
        sub_65D40(3, "stats %s unrecognized", v17);
        v16 = (_DWORD *)*v16;
      }
      while ( v16 );
    }
  }
LABEL_33:
  v19 = (_DWORD *)v2[17];
  if ( v19 )
  {
    v20 = (_DWORD *)*v19;
    if ( *v19 )
    {
      do
      {
        v21 = (char *)sub_1C300(v20[1]);
        v22 = sub_2CA74(v21);
        if ( v22 )
        {
          v23 = (_DWORD *)v20[2];
          v24 = *(unsigned __int8 *)(v22 + 20);
          v25 = *(unsigned __int8 *)(v22 + 21) | 0x80;
          if ( v23 )
          {
            v26 = (_DWORD *)*v23;
            if ( *v23 )
            {
              do
              {
                v27 = v26[1];
                if ( v27 == 433 )
                {
                  v42 = v26[4];
                  if ( v42 == 371 )
                  {
                    v24 = 255;
                  }
                  else if ( v42 >= 372 )
                  {
                    switch ( v42 )
                    {
                      case 442:
                        v24 = 3;
                        break;
                      case 445:
                        v24 = 5;
                        break;
                      case 390:
                        v24 = 1;
                        break;
                      default:
LABEL_116:
                        sub_CA54((int)"config-monitor: type-token=%d", v42);
                    }
                  }
                  else
                  {
                    switch ( v42 )
                    {
                      case 283:
                        v24 = 2;
                        break;
                      case 364:
                        v24 = 4;
                        break;
                      case 259:
                        v24 = 6;
                        break;
                      default:
                        goto LABEL_116;
                    }
                  }
                }
                else if ( v27 == 446 )
                {
                  v41 = v26[4];
                  if ( v41 == 294 )
                  {
                    v25 |= 0x80u;
                  }
                  else if ( v41 <= 294 )
                  {
                    if ( v41 != 286 )
                    {
LABEL_153:
                      sub_65D40(3, "Unknown filegen flag token %d", v41);
                      exit(1);
                    }
                    v25 &= ~0x80u;
                  }
                  else if ( v41 == 337 )
                  {
                    v25 |= 1u;
                  }
                  else
                  {
                    if ( v41 != 368 )
                      goto LABEL_153;
                    v25 &= ~1u;
                  }
                }
                else
                {
                  if ( v27 != 298 )
                  {
                    sub_65D40(3, "Unknown filegen option token %d", v27);
                    exit(1);
                  }
                  v21 = (char *)v26[4];
                }
                v26 = (_DWORD *)*v26;
              }
              while ( v26 );
            }
          }
          sub_2C8C8(v22, statsdir, (int)v21, v24, v25);
        }
        else
        {
          sub_65D40(3, "filegen category '%s' unrecognized", v21);
        }
        v20 = (_DWORD *)*v20;
      }
      while ( v20 );
    }
  }
  v28 = (_DWORD *)v2[28];
  if ( v28 )
  {
    v29 = (_DWORD *)*v28;
    if ( *v28 )
    {
      do
      {
        v30 = v29[1];
        if ( v30 == 312 )
        {
          v31 = 2;
        }
        else if ( v30 > 312 )
        {
          if ( v30 == 397 )
          {
            v31 = 8;
          }
          else
          {
            if ( v30 != 398 )
LABEL_168:
              sub_CA54((int)"config_auth: attr-token=%d", v30);
            v31 = 4;
          }
        }
        else if ( v30 == 285 )
        {
          v31 = 9;
        }
        else
        {
          if ( v30 != 309 )
            goto LABEL_168;
          v31 = 1;
        }
        sub_2C018(v31, v29[4]);
        v29 = (_DWORD *)*v29;
      }
      while ( v29 );
    }
  }
  v32 = v2[30];
  if ( v32 )
  {
    if ( keysdir != default_keysdir )
    {
      free(keysdir);
      v32 = v2[30];
    }
    keysdir = (char *)sub_64C8C(v32);
  }
  v33 = v2[34];
  if ( v33 )
  {
    if ( ntp_signd_socket != &unk_B960C )
    {
      free(ntp_signd_socket);
      v33 = v2[34];
    }
    ntp_signd_socket = (_UNKNOWN *)sub_64C8C(v33);
  }
  if ( v2[27] && !cryptosw )
  {
    sub_2B78C();
    cryptosw = 1;
  }
  v34 = (_DWORD *)v2[33];
  if ( v34 )
  {
    v35 = (_DWORD *)*v34;
    if ( *v34 )
    {
      v34 = 0;
      do
      {
        v40 = v35[2];
        if ( v40 == 319 )
        {
          if ( (unsigned int)(v35[4] - 2) <= 0xFFFD )
            v34 = (_DWORD *)((char *)v34 + 1);
        }
        else
        {
          if ( v40 != 321 )
            sub_6FC54("ntp_config.c", 2012, 0, "321 == my_val->type");
          v36 = v35[4];
          v37 = v35[5];
          v38 = v36 <= v37 && v36 > 0;
          if ( v37 <= 0xFFFF && v38 )
            v34 = (_DWORD *)((char *)v34 + v37 + 1 - v36);
        }
        v35 = (_DWORD *)*v35;
      }
      while ( v35 );
    }
    else
    {
      v34 = 0;
    }
  }
  sub_62CD4(v34);
  if ( v2[29] )
    sub_43500();
  if ( v2[26] )
    ctl_auth_keyid = v2[26];
  if ( v2[31] )
    info_auth_keyid = v2[31];
  v52 = (_DWORD *)v2[33];
  if ( v52 )
  {
    v53 = (_DWORD *)*v52;
    if ( *v52 )
    {
      do
      {
        if ( v53[2] == 319 )
        {
          v58 = v53[4];
          if ( (unsigned int)(v58 - 1) > 0xFFFE )
            sub_65D40(5, "Ignoring invalid trustedkey %d, min 1 max %d.");
          else
            sub_630C4(v58, 1);
        }
        else
        {
          v54 = v53[4];
          v55 = v53[5];
          v56 = v54 > v55;
          if ( v54 <= 0 )
            v56 = 1;
          if ( v55 > 0xFFFF )
            v56 |= 1u;
          if ( v56 )
          {
            sub_65D40(5, "Ignoring invalid trustedkey range %d ... %d, min 1 max %d.", v54, v55, 0xFFFF);
          }
          else
          {
            do
            {
              v57 = v54++;
              sub_630C4(v57, 1);
            }
            while ( v55 >= v54 );
          }
        }
        v53 = (_DWORD *)*v53;
      }
      while ( v53 );
    }
  }
  v59 = v2[32];
  if ( (unsigned int)(v59 - 3) <= 0x1C )
  {
    sys_revoke = v2[32];
  }
  else if ( v59 )
  {
    sub_65D40(3, "'revoke' value %d ignored", v59);
  }
  v60 = (double **)v2[14];
  v61 = sys_maxclock;
  v62 = sys_minclock;
  v63 = sys_minsane;
  if ( v60 )
  {
    v64 = *v60;
    if ( *v60 )
    {
      do
      {
        v65 = *((_DWORD *)v64 + 1);
        if ( v65 == 347 )
        {
          v61 = (int)v64[2];
          if ( v61 <= 0 )
          {
            v64[2] = 1.0;
            v61 = 1;
          }
        }
        else if ( v65 >= 348 )
        {
          if ( v65 == 355 )
          {
            v62 = (int)v64[2];
            if ( v62 <= 0 )
            {
              v64[2] = 1.0;
              v62 = 1;
            }
          }
          else if ( v65 == 360 )
          {
            v63 = (int)v64[2];
            if ( v63 < 0 )
            {
              v63 = 0;
              v64[2] = 0.0;
            }
          }
        }
        else if ( v65 == 269 )
        {
          v67 = v64[2];
          if ( v67 > 4.0 )
          {
            sub_65D40(4, "Using maximum bcpollbstep ceiling %d, %d requested", 4, (int)v67);
            v64[2] = 4.0;
          }
          else if ( v67 < 0.0 )
          {
            sub_65D40(4, "Using minimum bcpollbstep floor %d, %d requested", 0, (int)v67);
            v64[2] = 0.0;
          }
        }
        else if ( v65 == 276 )
        {
          v66 = v64[2];
          if ( v66 > 15.0 )
          {
            sub_65D40(4, "Using maximum tos ceiling %d, %d requested", 15, (int)v66);
            v64[2] = 15.0;
          }
          else if ( v66 < 1.0 )
          {
            sub_65D40(4, "Using minimum tos floor %d, %d requested", 1, (int)v66);
            v64[2] = 1.0;
          }
        }
        v64 = *(double **)v64;
      }
      while ( v64 );
      v68 = v62 < v61;
      if ( v62 <= v61 )
        v68 = v63 < v62;
      if ( v68 )
      {
LABEL_226:
        v60 = (double **)v2[14];
        if ( !v60 )
          goto LABEL_232;
        goto LABEL_227;
      }
    }
    else
    {
      v76 = sys_maxclock <= sys_minclock;
      if ( sys_maxclock >= sys_minclock )
        v76 = sys_minclock <= sys_minsane;
      if ( !v76 )
      {
LABEL_227:
        v69 = *v60;
        if ( *v60 )
        {
          while ( 2 )
          {
            v70 = *((_DWORD *)v69 + 1);
            switch ( v70 )
            {
              case 267:
                goto LABEL_231;
              case 269:
                v71 = 33;
                goto LABEL_230;
              case 270:
                v71 = 25;
                goto LABEL_230;
              case 276:
                v71 = 18;
                goto LABEL_230;
              case 278:
                v71 = 19;
                goto LABEL_230;
              case 306:
                v71 = 17;
                goto LABEL_230;
              case 347:
                v71 = 15;
                goto LABEL_230;
              case 349:
                v71 = 22;
                goto LABEL_230;
              case 355:
                v71 = 14;
                goto LABEL_230;
              case 357:
                v71 = 21;
                goto LABEL_230;
              case 360:
                v71 = 16;
                goto LABEL_230;
              case 383:
                v71 = 26;
                goto LABEL_230;
              case 384:
                v71 = 27;
LABEL_230:
                sub_39000(v71, 0, 0);
LABEL_231:
                v69 = *(double **)v69;
                if ( !v69 )
                  goto LABEL_232;
                continue;
              default:
                sub_CA54((int)"config-tos: attr-token=%d", v70);
            }
          }
        }
        goto LABEL_232;
      }
    }
LABEL_252:
    sub_65D40(
      3,
      "tos error: must have minsane (%d) < minclock (%d) <= maxclock (%d) - daemon will not operate properly!",
      v63,
      v62,
      v61);
    goto LABEL_226;
  }
  v75 = sys_maxclock <= sys_minclock;
  if ( sys_maxclock >= sys_minclock )
    v75 = sys_minclock <= sys_minsane;
  if ( v75 )
    goto LABEL_252;
LABEL_232:
  v72 = (int **)v2[19];
  if ( v72 )
  {
    v73 = *v72;
    if ( *v72 )
    {
      while ( 2 )
      {
        v74 = v73[1];
        switch ( v74 )
        {
          case 314:
            if ( v73[4] < 0 )
              goto LABEL_268;
            mru_incalloc[0] = (int *)v73[4];
            goto LABEL_260;
          case 315:
            v175 = v73[4];
            if ( v175 < 0 )
              goto LABEL_268;
            v84 = v175 << 10;
            v83 = &mru_incalloc_ptr;
            goto LABEL_271;
          case 316:
            if ( v73[4] < 0 )
              goto LABEL_268;
            mru_initalloc = (int *)v73[4];
            goto LABEL_260;
          case 317:
            v174 = v73[4];
            if ( v174 < 0 )
              goto LABEL_268;
            v84 = v174 << 10;
            v83 = &mru_initalloc_ptr;
            goto LABEL_271;
          case 346:
            mru_maxage = (int *)v73[4];
            goto LABEL_260;
          case 348:
            if ( v73[4] < 0 )
              goto LABEL_527;
            mru_maxdepth = v73[4];
            goto LABEL_260;
          case 350:
            v82 = v73[4];
            if ( v82 < 0 )
            {
LABEL_527:
              mru_maxdepth = -1;
            }
            else
            {
              v83 = (int ***)&mru_maxdepth_ptr;
              v84 = v82 << 10;
LABEL_271:
              **v83 = (int *)(v84 / 0x48);
            }
LABEL_260:
            v73 = (int *)*v73;
            if ( !v73 )
              break;
            continue;
          case 356:
            if ( v73[4] < 0 )
            {
LABEL_268:
              v81 = (const char *)sub_1C300(v74);
              sub_65D40(3, "mru %s %d out of range, ignored.", v81, v73[4]);
            }
            else
            {
              mru_mindepth = (_UNKNOWN *)v73[4];
            }
            goto LABEL_260;
          default:
            v176 = sub_1C300(v74);
            sub_65D40(3, "Unknown mru option %s (%d)", v176, v73[1]);
            goto LABEL_267;
        }
        break;
      }
    }
  }
  v77 = (_DWORD *)v2[18];
  if ( v77 )
  {
    v78 = (_DWORD *)*v77;
    if ( *v77 )
    {
      do
      {
        v79 = v78[1];
        if ( v79 == 358 )
        {
          ntp_minpkt = v78[4];
        }
        else if ( v79 == 363 )
        {
          mon_age = (_UNKNOWN *)v78[4];
        }
        else
        {
          if ( v79 != 266 )
          {
            v80 = sub_1C300(v79);
            sub_65D40(3, "Unknown discard option %s (%d)", v80, v78[1]);
LABEL_267:
            exit(1);
          }
          v85 = v78[4];
          if ( v85 > 0xFF )
            sub_65D40(3, "discard average %d out of range, ignored.", v85);
          else
            ntp_minpoll = v78[4];
        }
        v78 = (_DWORD *)*v78;
      }
      while ( v78 );
    }
  }
  v86 = (int **)v2[20];
  if ( v86 )
  {
    for ( i = *v86; i; i = (int *)*i )
    {
      v88 = (_DWORD *)i[3];
      LOWORD(format) = *((_WORD *)i + 10);
      if ( v88 )
      {
        v88 = (_DWORD *)*v88;
        if ( !v88 )
        {
          v222 = 0;
          v223 = 0;
          v90 = 0;
          v224 = 0;
          v225 = 0;
          v226 = 0;
          v227 = 0;
          v228 = 0;
          v93 = i[1];
          pai = 0;
          if ( !v93 )
          {
            v229 = 0;
            v230 = 0;
            memset(s, 0, sizeof(s));
            v232 = 0;
LABEL_489:
            v97 = 0;
            format = (char *)(__int16)format;
            LOWORD(v222) = 2;
            LOWORD(v229) = 2;
            sub_41008(1, &v222, &v229, (__int16)format, v90, v88, 0);
            LOWORD(v222) = 10;
            LOWORD(v229) = 10;
LABEL_303:
            while ( 1 )
            {
              sub_41008(1, &v222, &v229, format, v90, v88, 0);
              if ( !v97 )
                break;
              v97 = v97->ai_next;
              if ( !v97 )
                break;
              if ( !v97->ai_addr )
                sub_6FC54("ntp_config.c", 2810, 2, "pai->ai_addr != ((void *)0)");
              if ( v97->ai_addrlen > 0x1C )
                sub_6FC54("ntp_config.c", 2812, 2, "sizeof(addr) >= pai->ai_addrlen");
              v222 = 0;
              v223 = 0;
              v224 = 0;
              v225 = 0;
              v226 = 0;
              v227 = 0;
              v228 = 0;
              _memcpy_chk(&v222, v97->ai_addr, v97->ai_addrlen, 28);
              if ( (v222 & 0xFFF7) != 2 )
                sub_6FC54("ntp_config.c", 2817, 2, "2 == ((&addr)->sa.sa_family) || 10 == ((&addr)->sa.sa_family)");
              v230 = 0;
              memset(s, 0, sizeof(s));
              v232 = 0;
              v229 = (unsigned __int16)v222;
              if ( (unsigned __int16)v222 == 10 )
                memset(s, 255, sizeof(s));
              else
                v230 = -1;
            }
            if ( pai )
              freeaddrinfo(pai);
            continue;
          }
          goto LABEL_289;
        }
        v89 = 0;
        v90 = 0;
        do
        {
          v91 = v88[1];
          switch ( v91 )
          {
            case 305:
              v89 |= 0x2000u;
              break;
            case 313:
              v89 |= 1u;
              break;
            case 332:
              v89 |= 0x800u;
              break;
            case 333:
              v89 |= 0x1000u;
              break;
            case 336:
              v89 |= 0x40u;
              break;
            case 342:
              v89 |= 0x400u;
              break;
            case 369:
              v89 |= 0x100u;
              break;
            case 370:
              v89 |= 0x4000u;
              break;
            case 373:
              v89 |= 0x20u;
              break;
            case 374:
              v89 |= 0x10u;
              break;
            case 375:
              v89 |= 0x80u;
              break;
            case 377:
              v89 |= 2u;
              break;
            case 378:
              v89 |= 0x200u;
              break;
            case 379:
              v89 |= 4u;
              break;
            case 381:
              v90 = (unsigned __int16)v90 | 0x2000;
              break;
            case 409:
              v90 = (unsigned __int16)v90 | 0x4000;
              break;
            case 440:
              v89 |= 8u;
              break;
            default:
              sub_CA54((int)"config_access: flag-type-token=%d", v91);
          }
          v88 = (_DWORD *)*v88;
        }
        while ( v88 );
        v88 = (_DWORD *)v89;
        v92 = v89 & 0x840;
        if ( (v89 & 0x1000) != 0 && !dword_B9610 )
        {
          dword_B9610 = 1;
          _fprintf_chk(
            stderr,
            1,
            "%s\n",
            "mssntp restrict bit ignored, this ntpd was configured without --enable-ntp-signd.");
          sub_65D40(4, "%s", "mssntp restrict bit ignored, this ntpd was configured without --enable-ntp-signd.");
        }
        if ( v92 == 2048 )
        {
          v172 = i[1];
          if ( v172 )
          {
            v173 = *(const char **)(v172 + 4);
          }
          else if ( (v90 & 0x4000) != 0 )
          {
            v173 = "source";
          }
          else
          {
            v173 = "default";
          }
          _fprintf_chk(stderr, 1, "restrict %s: %s\n", v173, "KOD does nothing without LIMITED.");
          sub_65D40(4, "restrict %s: %s", v173, "KOD does nothing without LIMITED.");
        }
      }
      else
      {
        v90 = 0;
      }
      v222 = 0;
      v223 = 0;
      v224 = 0;
      v225 = 0;
      v226 = 0;
      v227 = 0;
      v228 = 0;
      v93 = i[1];
      pai = 0;
      if ( !v93 )
      {
        v229 = 0;
        v230 = 0;
        memset(s, 0, sizeof(s));
        v232 = 0;
        if ( (v90 & 0x4000) == 0 )
          goto LABEL_489;
        sub_41008(1, 0, 0, (__int16)format, v90, v88, 0);
        continue;
      }
LABEL_289:
      LOWORD(v222) = *(_WORD *)(v93 + 8);
      if ( sub_D27C(*(_DWORD *)(v93 + 4), &v222) == 1 )
      {
        v100 = (unsigned __int16)v222;
        v97 = 0;
      }
      else
      {
        *(_DWORD *)&req[4] = 0;
        *(_DWORD *)req = 0;
        memset(&req[16], 0, 16);
        v94 = i[1];
        *(_DWORD *)&req[12] = 17;
        pai = 0;
        v95 = *(unsigned __int16 *)(v94 + 8);
        v96 = *(const char **)(v94 + 4);
        *(_DWORD *)&req[8] = 2;
        *(_DWORD *)&req[4] = v95;
        if ( getaddrinfo(v96, "ntp", (const struct addrinfo *)req, &pai) )
        {
          sub_65D40(3, "restrict: ignoring line %d, address/host '%s' unusable.", i[4], *(_DWORD *)(i[1] + 4));
          continue;
        }
        v97 = pai;
        if ( !pai )
          sub_6FC54("ntp_config.c", 2767, 2, "ai_list != ((void *)0)");
        v98 = *(int *)((char *)&dword_14 + (_DWORD)pai);
        if ( !v98 )
          sub_6FC54("ntp_config.c", 2769, 2, "pai->ai_addr != ((void *)0)");
        v99 = *(_DWORD *)((char *)&word_10 + (_DWORD)pai);
        if ( v99 > 0x1C )
          sub_6FC54("ntp_config.c", 2771, 2, "sizeof(addr) >= pai->ai_addrlen");
        _memcpy_chk(&v222, v98, v99, 28);
        v100 = (unsigned __int16)v222;
        if ( (v222 & 0xFFF7) != 2 )
          sub_6FC54("ntp_config.c", 2775, 2, "2 == ((&addr)->sa.sa_family) || 10 == ((&addr)->sa.sa_family)");
      }
      v229 = 0;
      v230 = 0;
      memset(s, 0, sizeof(s));
      v232 = 0;
      v101 = (int)&v232;
      if ( v100 != 10 )
        v101 = -1;
      LOWORD(v229) = v100;
      if ( v100 == 10 )
        memset(s, 255, sizeof(s));
      else
        v230 = v101;
      if ( !i[2]
        || (v229 = 0,
            v230 = 0,
            memset(s, 0, sizeof(s)),
            v232 = 0,
            v102 = i[2],
            LOWORD(v229) = *(_WORD *)(v102 + 8),
            sub_D27C(*(_DWORD *)(v102 + 4), &v229) == 1) )
      {
        format = (char *)(__int16)format;
        goto LABEL_303;
      }
      sub_65D40(3, "restrict: ignoring line %d, mask '%s' unusable.", i[4], *(_DWORD *)(i[2] + 4));
    }
  }
  v103 = (_DWORD *)v2[23];
  if ( v103 )
  {
    v104 = (_DWORD *)*v103;
    if ( *v103 )
    {
      do
      {
        v105 = v104[1];
        if ( v105 == 386 )
        {
          v106 = 6;
        }
        else if ( v105 <= 386 )
        {
          if ( v105 == 288 )
          {
            v106 = 7;
          }
          else if ( v105 <= 288 )
          {
            if ( v105 != 261 )
LABEL_329:
              sub_CA54((int)"config_tinker: attr-token=%d", v105);
            v106 = 10;
          }
          else if ( v105 == 307 )
          {
            v106 = 12;
          }
          else
          {
            if ( v105 != 310 )
              goto LABEL_329;
            v106 = 11;
          }
        }
        else if ( v105 == 416 )
        {
          v106 = 5;
        }
        else if ( v105 > 416 )
        {
          if ( v105 == 417 )
          {
            v106 = 8;
          }
          else
          {
            if ( v105 != 422 )
              goto LABEL_329;
            v106 = 15;
          }
        }
        else if ( v105 == 414 )
        {
          v106 = 3;
        }
        else
        {
          if ( v105 != 415 )
            goto LABEL_329;
          v106 = 4;
        }
        sub_30B38(v106);
        v104 = (_DWORD *)*v104;
      }
      while ( v104 );
    }
  }
  v107 = (_DWORD *)v2[22];
  if ( v107 )
  {
    v108 = (_DWORD *)*v107;
    if ( *v107 )
    {
      do
      {
        v109 = v108[1];
        switch ( v109 )
        {
          case 354:
            if ( (*(int *)((_BYTE *)&elf_hash_bucket[261] + (_DWORD)off_B711C) & 0xF) == 0 )
            {
              v114 = v108[4];
              if ( v114 == -1 )
              {
                if ( cur_memlock && munlockall() == -1 )
                  sub_65D40(3, "munlockall() failed: %m");
                cur_memlock = 0;
              }
              else if ( v114 < 0 )
              {
                sub_65D40(4, "'rlimit memlock' value of %d is unexpected!");
              }
              else
              {
                if ( cur_memlock != 1 )
                {
                  if ( mlockall(3) == -1 )
                    sub_65D40(3, "mlockall() failed: %m");
                  v114 = v108[4];
                }
                sub_FCE4(8, v114 << 20);
                cur_memlock = 1;
              }
            }
            break;
          case 410:
            sub_FCE4(3, (int)(v108[4] << 12));
            break;
          case 300:
            sub_FCE4(7, (int)v108[4]);
            break;
          default:
            sub_CA54((int)"config-rlimit: value-token=%d", v109);
        }
        v108 = (_DWORD *)*v108;
      }
      while ( v108 );
    }
  }
  sub_CAA0((_DWORD *)v2[24], 1);
  LODWORD(v110) = sub_CAA0((_DWORD *)v2[25], 0);
  v111 = (int ***)v2[35];
  if ( v111 )
  {
    for ( j = *v111; j; j = (int **)*j )
    {
      v113 = (int)j[1];
      switch ( v113 )
      {
        case '-':
          LODWORD(v110) = ntp_syslogmask & ~(unsigned int)sub_D684((char *)j[4]);
          ntp_syslogmask = LODWORD(v110);
          break;
        case '=':
          LODWORD(v110) = sub_D684((char *)j[4]);
          ntp_syslogmask = LODWORD(v110);
          break;
        case '+':
          LODWORD(v110) = (unsigned int)sub_D684((char *)j[4]) | ntp_syslogmask;
          ntp_syslogmask = LODWORD(v110);
          break;
        default:
          sub_CA54((int)"config-logconfig: modifier='%c'", v113);
      }
    }
  }
  v115 = (int ***)v2[36];
  if ( v115 )
  {
    v116 = *v115;
    if ( *v115 )
    {
      v117 = 0;
      do
      {
        if ( v117 > 8 )
        {
          LODWORD(v110) = sub_65D40(
                            6,
                            "phone: Number of phone entries exceeds %zu. Ignoring phone %s...",
                            9u,
                            (const char *)v116[1]);
        }
        else
        {
          LODWORD(v110) = sub_64C8C(v116[1]);
          sys_phone[v117++] = LODWORD(v110);
          sys_phone[v117] = 0;
        }
        v116 = (int **)*v116;
      }
      while ( v116 );
    }
  }
  v118 = (int ***)v2[37];
  if ( v118 )
  {
    v119 = *v118;
    if ( *v118 )
    {
      v120 = 0;
      do
      {
        v121 = strlen((const char *)v119[1]);
        v122 = v121 + strlen((const char *)v119[2]) + 2;
        v120 = (void *)sub_64B04(v120, v122, 0, 0);
        sub_6D00C(v120, v122, "%s=%s", (const char *)v119[1], (const char *)v119[2]);
        LODWORD(v110) = sub_248E4(v120, v122);
        v119 = (int **)*v119;
      }
      while ( v119 );
      if ( v120 )
        free(v120);
    }
  }
  v123 = (_DWORD *)v2[38];
  if ( v123 )
  {
    v124 = (_DWORD *)*v123;
    if ( *v123 )
    {
      v125 = 0;
      do
      {
        if ( v125 > 7 )
          LODWORD(v110) = sub_65D40(6, "ttl: Number of TTL entries exceeds %zu. Ignoring TTL %d...", 8u, v124[1]);
        else
          sys_ttl[v125++] = v124[1];
        v124 = (_DWORD *)*v124;
      }
      while ( v124 );
      sys_ttlmax = v125 - 1;
    }
  }
  v126 = (double **)v2[40];
  if ( v126 )
  {
    for ( k = *v126; k; k = *(double **)k )
    {
      v128 = *((_DWORD *)k + 1);
      if ( v128 == 334 )
      {
        LODWORD(v110) = sub_43708(4, *((char **)k + 4));
        continue;
      }
      if ( v128 > 334 )
      {
        if ( v128 == 391 )
        {
          LODWORD(v110) = sub_43708(3, *((char **)k + 4));
          continue;
        }
        if ( v128 < 392 )
        {
          if ( v128 == 340 )
          {
            LODWORD(v110) = sub_65F28(*((_DWORD *)k + 4), 1);
            if ( LODWORD(v110) == -1 )
              LODWORD(v110) = sub_65D40(3, "Cannot open logfile %s: %m", *((const char **)k + 4));
            continue;
          }
          if ( v128 == 372 )
            goto LABEL_563;
LABEL_543:
          LODWORD(v110) = sub_65D40(3, "config_vars(): unexpected token %d", v128);
          continue;
        }
        if ( v128 == 422 )
        {
          LODWORD(v110) = sub_30B38(15);
          continue;
        }
        if ( v128 == 441 )
        {
LABEL_563:
          v110 = k[2];
          wander_threshold = v110;
          continue;
        }
        if ( v128 != 406 )
          goto LABEL_543;
        if ( saveconfigdir )
          free((void *)saveconfigdir);
        v178 = (const char *)*((_DWORD *)k + 4);
        LODWORD(v110) = strlen(v178);
        if ( !LODWORD(v110) )
          goto LABEL_565;
        if ( v178[LODWORD(v110) - 1] == 47 )
        {
          LODWORD(v110) = sub_64C8C(v178);
LABEL_565:
          saveconfigdir = LODWORD(v110);
          continue;
        }
        v179 = LODWORD(v110) + 2;
        v180 = sub_64B04(0, LODWORD(v110) + 2, 0, 0);
        v181 = *((_DWORD *)k + 4);
        saveconfigdir = v180;
        LODWORD(v110) = sub_6D00C(v180, v179, "%s%c", v181, 47);
      }
      else
      {
        if ( v128 == 290 )
        {
          v177 = (char *)*((_DWORD *)k + 4);
          if ( *v177 )
          {
            LODWORD(v110) = sub_43708(1, v177);
          }
          else
          {
            stats_drift_file = (unsigned __int8)*v177;
            LODWORD(v110) = sub_65D40(6, "config: driftfile disabled");
          }
          continue;
        }
        if ( v128 > 290 )
        {
          if ( v128 == 292 )
          {
            qos = (int *)(4 * *((_DWORD *)k + 4));
            continue;
          }
          if ( v128 == 312 )
          {
            sys_ident = *((_DWORD *)k + 4);
            continue;
          }
          goto LABEL_543;
        }
        if ( v128 == 265 )
        {
          if ( (unsigned int)(*((_DWORD *)k + 4) - 3) > 0x1C )
            LODWORD(v110) = sub_65D40(3, "'automax' value %d ignored");
          else
            sys_automax = *((_DWORD *)k + 4);
          continue;
        }
        if ( v128 != 273 )
          goto LABEL_543;
        LODWORD(v110) = sub_39000(4, 0, 0);
      }
    }
  }
  result = sub_18720(LODWORD(v110), HIDWORD(v110));
  v130 = (_DWORD *)v2[39];
  LOWORD(v222) = 0;
  if ( v130 )
  {
    v131 = (_DWORD *)*v130;
    if ( *v130 )
    {
      while ( 1 )
      {
        v132 = v131[2];
        if ( !v132 )
          break;
        v133 = *(_DWORD **)v132;
        if ( *(_DWORD *)v132 )
        {
          v134 = 0;
          v132 = 0;
          v135 = 0;
          do
          {
            v136 = v133[1];
            if ( v136 == 393 )
            {
              v216 = v133[4];
              if ( (unsigned int)(v216 - 1) > 0xFFFE )
              {
                result = sub_65D40(3, "invalid port number %d, trap ignored");
                v216 = v133[4];
                v134 = 1;
              }
              v135 = (unsigned __int16)v216;
            }
            else if ( v136 == 320 )
            {
              v222 = 0;
              v223 = 0;
              v224 = 0;
              v225 = 0;
              v226 = 0;
              v227 = 0;
              v228 = 0;
              result = sub_D27C(v133[4], &v222);
              if ( result != 1 )
                goto LABEL_415;
              result = sub_17B78(&v222);
              v132 = result;
              if ( !result )
              {
                v134 = 1;
                v211 = sub_6D2C0(&v222);
                result = sub_65D40(3, "can't find interface with address %s", v211);
              }
            }
            v133 = (_DWORD *)*v133;
          }
          while ( v133 );
          if ( v134 )
            goto LABEL_415;
          if ( !v135 )
            v135 = 18447;
          goto LABEL_410;
        }
        v229 = 0;
        v230 = 0;
        memset(s, 0, sizeof(s));
        v232 = 0;
        if ( sub_D27C(*(_DWORD *)(v131[1] + 4), &v229) == 1 )
        {
          HIWORD(v229) = 3912;
LABEL_624:
          if ( (unsigned __int16)v229 == 2 )
            v132 = any_interface;
          else
            v132 = any6_interface;
LABEL_617:
          result = sub_240BC(&v229, v132, 0, 4);
          if ( !result )
          {
            v209 = sub_1924C(v132);
            v210 = sub_6D2C0(&v229);
            result = sub_65D40(3, "set trap %s -> %s failed.", v209, v210);
          }
          goto LABEL_415;
        }
        *(_DWORD *)req = 0;
        *(_DWORD *)&req[4] = 0;
        memset(&req[16], 0, 16);
        *(_DWORD *)&req[12] = 17;
        *(_DWORD *)&req[8] = 2;
        sub_6D00C(v233, 8, "%u", 18447);
        *(_DWORD *)req = 1024;
        v137 = (_DWORD *)sub_64B04(0, 32, 0, 1);
LABEL_413:
        result = sub_69464(*(_DWORD *)(v131[1] + 4), v233, req, 2, sub_D474, v137);
        if ( !result )
          result = sub_65D40(3, "config_trap: getaddrinfo_sometime(%s,%s): %m", *(const char **)(v131[1] + 4), v233);
LABEL_415:
        v131 = (_DWORD *)*v131;
        if ( !v131 )
          goto LABEL_416;
      }
      v135 = 18447;
LABEL_410:
      v229 = 0;
      v230 = 0;
      memset(s, 0, sizeof(s));
      v232 = 0;
      if ( sub_D27C(*(_DWORD *)(v131[1] + 4), &v229) == 1 )
      {
        HIWORD(v229) = (v135 >> 8) | ((_WORD)v135 << 8);
        if ( !v132 )
          goto LABEL_624;
        LOWORD(v229) = v222;
        goto LABEL_617;
      }
      *(_DWORD *)req = 0;
      *(_DWORD *)&req[4] = 0;
      memset(&req[16], 0, 16);
      *(_DWORD *)&req[12] = 17;
      *(_DWORD *)&req[8] = 2;
      sub_6D00C(v233, 8, "%u", v135);
      *(_DWORD *)req = 1024;
      v137 = (_DWORD *)sub_64B04(0, 32, 0, 1);
      if ( v132 )
      {
        *(_DWORD *)&req[4] = *(unsigned __int16 *)(v132 + 140);
        v137[7] = 1;
        v139 = *(_DWORD *)(v132 + 24);
        v138 = (_DWORD *)(v132 + 24);
        v140 = v138[1];
        v141 = v138[2];
        v142 = v138[3];
        *v137 = v139;
        v137[1] = v140;
        v137[2] = v141;
        v137[3] = v142;
        v143 = v138[5];
        v144 = v138[6];
        v137[4] = v138[4];
        v137[5] = v143;
        v137[6] = v144;
      }
      goto LABEL_413;
    }
  }
LABEL_416:
  v145 = v2[11];
  if ( v145 )
    result = sub_39000(1, v145, 0);
  v146 = (int **)v2[12];
  if ( v146 )
  {
    for ( m = *v146; m; m = (int *)*m )
    {
      v229 = 0;
      v230 = 0;
      memset(s, 0, sizeof(s));
      v232 = 0;
      LOWORD(v229) = *((_WORD *)m + 4);
      result = sub_D27C(m[1], &v229);
      if ( result == 1 )
      {
        result = sub_39000(6, 0, &v229);
        sys_manycastserver = 1;
      }
    }
  }
  v148 = (int **)v2[13];
  if ( v148 )
  {
    v149 = *v148;
    if ( *v148 )
    {
      do
      {
        v229 = 0;
        v230 = 0;
        memset(s, 0, sizeof(s));
        v232 = 0;
        LOWORD(v229) = *((_WORD *)v149 + 4);
        if ( sub_D27C(v149[1], &v229) == 1 )
          sub_39000(6, 0, &v229);
        v149 = (int *)*v149;
      }
      while ( v149 );
      result = sub_39000(6, 1, 0);
    }
  }
  if ( cmdline_server_count > 0 )
  {
    v150 = (int *)cmdline_servers;
    do
    {
      v229 = 0;
      v230 = 0;
      memset(s, 0, sizeof(s));
      v232 = 0;
      if ( sub_64FD8(*v150, 0, &v229) )
      {
        HIWORD(v229) = 31488;
        result = sub_CD68((unsigned __int16 *)&v229, 407);
        if ( result )
          result = sub_32DB8(&v229, 0, 0, -1, 3, 4, 0, 0, 256, 0, 0, 0);
      }
      else
      {
        v182 = sub_64B04(0, 28, 0, 1);
        v183 = (int *)cmdline_servers;
        v184 = v182;
        *(_WORD *)(v182 + 8) = 0;
        *(_BYTE *)(v182 + 16) = 3;
        *(_DWORD *)(v182 + 4) = 407;
        *(_DWORD *)v182 = 256;
        *(_BYTE *)(v182 + 17) = 4;
        memset(&req[4], 0, 28);
        *(_DWORD *)req = 0;
        v185 = *(unsigned __int16 *)(v182 + 8);
        v186 = *v183;
        *(_DWORD *)&req[4] = v185;
        *(_DWORD *)&req[8] = 2;
        *(_DWORD *)&req[12] = 17;
        result = sub_68E68(v186, "ntp", req, 2, sub_CF14, v184, 0);
      }
      --cmdline_server_count;
      v150 = (int *)(cmdline_servers + 4);
      cmdline_servers += 4;
    }
    while ( cmdline_server_count > 0 );
  }
  v151 = (int **)v2[9];
  if ( v151 )
  {
    v152 = *v151;
    if ( *v151 )
    {
      while ( 1 )
      {
        v229 = 0;
        v230 = 0;
        memset(s, 0, sizeof(s));
        v232 = 0;
        v153 = v152[1];
        if ( v153 == 387 )
        {
          v154 = 1;
          goto LABEL_442;
        }
        if ( v153 < 388 )
          break;
        if ( v153 != 392 )
        {
          if ( v153 != 407 )
LABEL_576:
            sub_6FC54("ntp_config.c", 4057, 2, "hmode != 0");
LABEL_579:
          v154 = 3;
          goto LABEL_442;
        }
        v196 = v152[2];
        LOWORD(v229) = *(_WORD *)(v196 + 8);
        v197 = sub_D348(v152[3]);
        result = sub_32DB8(
                   &v229,
                   *(_DWORD *)(v196 + 4),
                   0,
                   -1,
                   3,
                   *((unsigned __int8 *)v152 + 24),
                   *((unsigned __int8 *)v152 + 16),
                   *((unsigned __int8 *)v152 + 17),
                   v197,
                   v152[5],
                   v152[7],
                   v152[8]);
LABEL_445:
        v152 = (int *)*v152;
        if ( !v152 )
          goto LABEL_446;
      }
      if ( v153 != 271 )
      {
        if ( v153 != 343 )
          goto LABEL_576;
        goto LABEL_579;
      }
      v154 = 5;
LABEL_442:
      if ( sub_64FD8(*(_DWORD *)(v152[2] + 4), *(unsigned __int16 *)(v152[2] + 8), &v229) )
      {
        HIWORD(v229) = 31488;
        result = sub_CD68((unsigned __int16 *)&v229, v152[1]);
        if ( result )
        {
          v155 = sub_D348(v152[3]);
          result = sub_32DB8(
                     &v229,
                     0,
                     0,
                     -1,
                     v154,
                     *((unsigned __int8 *)v152 + 24),
                     *((unsigned __int8 *)v152 + 16),
                     *((unsigned __int8 *)v152 + 17),
                     v155,
                     v152[5],
                     v152[7],
                     v152[8]);
        }
      }
      else
      {
        v187 = sub_64B04(0, 28, 0, 1);
        v188 = *(_WORD *)(v152[2] + 8);
        *(_DWORD *)(v187 + 4) = v152[1];
        v189 = v187;
        *(_BYTE *)(v187 + 16) = v154;
        *(_WORD *)(v187 + 8) = v188;
        *(_BYTE *)(v187 + 17) = *((_BYTE *)v152 + 24);
        *(_BYTE *)(v187 + 18) = *((_BYTE *)v152 + 16);
        *(_BYTE *)(v187 + 19) = *((_BYTE *)v152 + 17);
        v190 = sub_D348(v152[3]);
        v191 = v152[7];
        v192 = v152[8];
        *(_DWORD *)(v189 + 20) = v152[5];
        *(_DWORD *)(v189 + 12) = v191;
        *(_DWORD *)(v189 + 24) = v192;
        *(_DWORD *)v189 = v190;
        memset(&req[4], 0, 28);
        *(_DWORD *)req = 0;
        v193 = v152[2];
        v194 = *(unsigned __int16 *)(v189 + 8);
        *(_DWORD *)&req[8] = 2;
        v195 = *(_DWORD *)(v193 + 4);
        *(_DWORD *)&req[4] = v194;
        *(_DWORD *)&req[12] = 17;
        result = sub_68E68(v195, "ntp", req, 2, sub_CF14, v189, 0);
      }
      goto LABEL_445;
    }
  }
LABEL_446:
  v156 = (int ***)v2[10];
  if ( v156 )
  {
    for ( n = *v156; n; n = (int **)*n )
    {
      if ( n[2] )
      {
        v229 = 0;
        v230 = 0;
        memset(s, 0, sizeof(s));
        v232 = 0;
        v158 = n[2];
        LOWORD(v229) = *((_WORD *)v158 + 4);
        v159 = (const char *)v158[1];
        if ( sub_D27C((int)v159, &v229) <= 0 )
        {
          v198 = (_DWORD *)peer_list;
          if ( peer_list )
          {
            while ( 1 )
            {
              v199 = (const char *)v198[11];
              if ( v199 )
              {
                if ( !strcasecmp(v199, v159) )
                  break;
              }
              v198 = (_DWORD *)*v198;
              if ( !v198 )
                goto LABEL_586;
            }
            sub_65D40(5, "unpeered %s", v159);
            sub_367D8(v198, "GONE");
            sub_324CC(v198);
          }
LABEL_586:
          memset(&req[4], 0, 28);
          *(_DWORD *)req = 0;
          v200 = *((unsigned __int16 *)n[2] + 4);
          *(_DWORD *)&req[8] = 2;
          *(_DWORD *)&req[4] = v200;
          *(_DWORD *)&req[12] = 17;
          result = sub_69464(v159, "ntp", req, 2, sub_D0D0, 0);
        }
        else
        {
          result = sub_31F34(&v229, 0);
          v160 = result;
          if ( result )
          {
            v161 = sub_6D2C0(&v229);
            sub_65D40(5, "unpeered %s", v161, v162, 0, 0);
            sub_367D8(v160, "GONE");
            result = sub_324CC(v160);
          }
        }
      }
      else
      {
        result = sub_3217C(*((unsigned __int16 *)n + 2));
        v201 = result;
        if ( result )
        {
          v202 = (const char *)sub_6D2C0(result + 16);
          sub_65D40(5, "unpeered %s", v202);
          sub_367D8(v201, "GONE");
          result = sub_324CC(v201);
        }
      }
    }
  }
  v163 = (_DWORD *)v2[21];
  if ( v163 )
  {
    v164 = (_DWORD *)*v163;
    if ( *v163 )
    {
      v219 = v2;
      while ( 1 )
      {
        v165 = v164[1];
        v229 = 0;
        v230 = 0;
        memset(s, 0, sizeof(s));
        v232 = 0;
        if ( sub_D27C(*(_DWORD *)(v165 + 4), &v229) != 1 )
          break;
        if ( (unsigned __int16)v229 != 2 || bswap32((unsigned __int16)v230) != 2139029504 )
        {
          v208 = (const char *)sub_6D2C0(&v229);
          sub_65D40(3, "inappropriate address %s for the fudge command, line ignored", v208);
          goto LABEL_458;
        }
        memset(req, 0, sizeof(req));
        v203 = (int **)v164[2];
        if ( v203 )
        {
          v167 = *v203;
          v168 = 0;
          if ( *v203 )
          {
            do
            {
LABEL_460:
              result = v167[1];
              if ( result == 304 )
              {
                req[2] = ~((unsigned int)~(req[2] << 25) >> 25);
                if ( v167[4] )
                  v212 = req[1] | 8;
                else
                  v212 = req[1] & 0xF7;
                req[1] = v212;
              }
              else if ( result <= 304 )
              {
                if ( result == 302 )
                {
                  req[2] |= 0x20u;
                  if ( v167[4] )
                    v215 = req[1] | 2;
                  else
                    v215 = req[1] & 0xFD;
                  req[1] = v215;
                }
                else if ( result > 302 )
                {
                  req[2] |= 0x40u;
                  if ( v167[4] )
                    v214 = req[1] | 4;
                  else
                    v214 = req[1] & 0xFB;
                  req[1] = v214;
                }
                else
                {
                  if ( result != 301 )
                  {
LABEL_602:
                    v204 = (const char *)sub_1BDF0();
                    sub_65D40(3, "Unexpected fudge flag %s (%d) for %s", v204, v167[1], *(const char **)(v165 + 4));
                    v205 = v167[1];
                    if ( !v205 )
                      v205 = 1;
                    exit(v205);
                  }
                  req[2] |= 0x10u;
                  if ( v167[4] )
                    v213 = req[1] | 1;
                  else
                    v213 = req[1] & 0xFE;
                  req[1] = v213;
                }
              }
              else if ( result == 418 )
              {
                req[2] |= 4u;
                *(_DWORD *)&req[56] = v167[4];
              }
              else if ( result <= 418 )
              {
                if ( result != 400 )
                  goto LABEL_602;
                *(_DWORD *)&req[60] = 0;
                req[2] |= 8u;
                v206 = strlen((const char *)v167[4]);
                if ( v206 >= 4 )
                  v207 = 4;
                else
                  v207 = v206;
                result = _memcpy_chk(&req[60], v167[4], v207, 12);
              }
              else if ( result == 423 )
              {
                req[2] |= 1u;
                *(_QWORD *)&req[40] = *((_QWORD *)v167 + 2);
              }
              else
              {
                if ( result != 424 )
                  goto LABEL_602;
                req[2] |= 2u;
                *(_QWORD *)&req[48] = *((_QWORD *)v167 + 2);
              }
              v167 = (int *)*v167;
            }
            while ( v167 );
            if ( v168 )
              goto LABEL_469;
          }
        }
        result = sub_3ABAC(&v229, req, 0);
LABEL_469:
        v164 = (_DWORD *)*v164;
        if ( !v164 )
        {
          v2 = v219;
          goto LABEL_471;
        }
      }
      sub_65D40(3, "unrecognized fudge reference clock address %s, line ignored", *(_DWORD *)(v165 + 4));
LABEL_458:
      result = (int)memset(req, 0, sizeof(req));
      v166 = (int **)v164[2];
      if ( v166 )
      {
        v167 = *v166;
        v168 = 1;
        if ( *v166 )
          goto LABEL_460;
      }
      goto LABEL_469;
    }
  }
LABEL_471:
  v169 = (_DWORD *)v2[42];
  if ( v169 )
  {
    v170 = (_DWORD *)*v169;
    if ( *v169 )
    {
      do
      {
        v171 = v170[1];
        if ( v171 == 322 )
        {
          result = sub_18FAC();
        }
        else if ( v171 > 322 )
        {
          switch ( v171 )
          {
            case 420:
              result = sub_39460();
              break;
            case 425:
              result = sub_423F0();
              break;
            case 353:
              result = sub_32FA4();
              break;
          }
        }
        else
        {
          switch ( v171 )
          {
            case 263:
              result = sub_3B0B0();
              break;
            case 282:
              result = sub_244E0();
              break;
            case 262:
              result = sub_330D0();
              break;
          }
        }
        v170 = (_DWORD *)*v170;
      }
      while ( v170 );
    }
  }
  return result;
}

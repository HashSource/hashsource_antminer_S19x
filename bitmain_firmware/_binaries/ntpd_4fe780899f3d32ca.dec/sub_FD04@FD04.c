int __fastcall sub_FD04(int a1)
{
  void *v2; // r0
  int *v3; // r2
  FILE *v4; // r0
  int v5; // r0
  int v6; // r4
  _DWORD *v7; // r3
  _DWORD *v8; // r4
  const char *v9; // r0
  int v10; // r10
  char *v11; // r5
  char *v12; // r0
  int v13; // r3
  char *v14; // r11
  int v15; // r0
  int v16; // r1
  char *v17; // r1
  _DWORD *v18; // r3
  _DWORD *v19; // r4
  char *v20; // r7
  int v21; // r0
  _DWORD *v22; // r3
  _DWORD *v23; // r7
  char *v24; // r9
  int v25; // r0
  _DWORD *v26; // r2
  int v27; // r3
  int v28; // r5
  _DWORD *v29; // r12
  int v30; // r1
  int v31; // r1
  _DWORD *v32; // r3
  _DWORD *v33; // r4
  int v34; // r0
  int v35; // r1
  int v36; // r1
  int v37; // r3
  int v38; // r3
  _DWORD *v39; // r0
  _DWORD *v40; // r3
  int v41; // r0
  int v42; // r2
  int v43; // r6
  bool v44; // r1
  int v46; // r2
  int v47; // r2
  _DWORD *v48; // r3
  _DWORD *v49; // r4
  int v50; // r9
  bool v51; // cc
  int v52; // r3
  int v53; // r8
  int v54; // r2
  double **v55; // r0
  int v56; // r6
  int v57; // r5
  int v58; // r7
  double *v59; // r4
  double v60; // d7
  int v61; // r3
  bool v62; // cc
  _DWORD *v63; // r3
  _DWORD *v64; // r4
  int v65; // r1
  int v66; // r0
  double v67; // d7
  int v68; // r0
  int **v69; // r3
  int *v70; // r4
  int v71; // r0
  _DWORD *v72; // r3
  _DWORD *v73; // r4
  int v74; // r0
  const char *v75; // r0
  int v76; // r3
  int ***v77; // r1
  unsigned int v78; // r3
  int v79; // r3
  int v80; // r3
  __int16 **v81; // r3
  _DWORD *v82; // r3
  int v83; // r10
  _DWORD *v84; // r2
  int v85; // r8
  int v86; // r9
  int v87; // r1
  int v88; // r3
  const char *v89; // r5
  int v90; // r2
  int v91; // r0
  const struct addrinfo *v92; // r0
  const struct addrinfo *v93; // r3
  int v94; // r0
  int v95; // r12
  const char *v96; // r0
  struct addrinfo *v97; // r6
  struct sockaddr *ai_addr; // r1
  int v99; // r2
  bool v100; // zf
  int v101; // r3
  int v102; // r0
  _DWORD *v103; // r3
  _DWORD *v104; // r4
  int v105; // r0
  int v106; // r1
  int v107; // r3
  int v108; // r2
  unsigned int v109; // r2
  const char *v110; // r0
  _DWORD *v111; // r3
  _DWORD *v112; // r4
  int v113; // r1
  int v114; // r2
  double v115; // r0
  int ***v116; // r3
  int **j; // r4
  int v118; // r1
  _DWORD *v119; // r3
  _DWORD *v120; // r4
  unsigned int v121; // r5
  int ***v122; // r3
  int **v123; // r4
  void *v124; // r6
  size_t v125; // r5
  size_t v126; // r5
  _DWORD *v127; // r3
  _DWORD *v128; // r4
  unsigned int v129; // r5
  int v130; // r3
  double **v131; // r3
  double *k; // r4
  int v133; // r2
  const char *v134; // r6
  int v135; // r6
  int v136; // r0
  const char *v137; // r3
  int result; // r0
  _DWORD *v139; // r3
  _DWORD *v140; // r5
  _DWORD *v141; // r3
  _DWORD *v142; // r4
  unsigned int v143; // r11
  int v144; // r7
  int v145; // r6
  int v146; // r3
  int v147; // r2
  __int16 v148; // r3
  _DWORD *v149; // r0
  _DWORD *v150; // r7
  int v151; // t1
  int v152; // r2
  int v153; // r3
  int v154; // r12
  int v155; // r2
  int v156; // r3
  int v157; // r1
  int **v158; // r3
  int *m; // r6
  int v160; // r0
  void **v161; // r3
  _DWORD *v162; // r6
  int v163; // r0
  _DWORD *v164; // r3
  int v165; // r7
  int v166; // r12
  int v167; // r0
  int **v168; // r3
  int *v169; // r4
  int v170; // r0
  int v171; // r9
  int v172; // r1
  unsigned int v173; // r0
  int v174; // r3
  int v175; // r0
  __int64 v176; // r2
  int v177; // r7
  unsigned int v178; // r0
  int v179; // r12
  int v180; // r1
  int v181; // r3
  int v182; // r1
  int v183; // r12
  int v184; // r0
  int ***v185; // r3
  int **n; // r5
  int *v187; // r3
  const char *v188; // r6
  _DWORD *v189; // r4
  const char *v190; // r0
  _DWORD *v191; // r3
  _DWORD *v192; // r9
  int v193; // r11
  int v194; // r1
  int **v195; // r3
  int *v196; // r4
  char v197; // r2
  int **v198; // r3
  _DWORD *v199; // r3
  _DWORD *v200; // r4
  int v201; // r3
  int v202; // r7
  unsigned int v203; // r0
  unsigned int v204; // r0
  char v205; // r2
  char v206; // r2
  char v207; // r2
  int v208; // r0
  int *v209; // r0
  int v210; // r4
  int v211; // r0
  int v212; // r2
  int v213; // r3
  int v214; // r4
  const char *v215; // r0
  int v216; // r6
  int v217; // r0
  int v218; // r3
  int v219; // r2
  int v220; // r4
  const char *v221; // r0
  _DWORD *v222; // r2
  _DWORD *v223; // r4
  int v224; // r6
  unsigned int v225; // r0
  int v226; // r0
  bool v227; // cc
  char *v228; // r1
  int v229; // r2
  __int16 v230; // r2
  int v231; // r0
  const char *v232; // r0
  int v233; // r0
  const char *v234; // r0
  int v235; // [sp+0h] [bp-DCh]
  const char *v236; // [sp+4h] [bp-D8h]
  __int16 *i; // [sp+20h] [bp-BCh]
  int v238; // [sp+24h] [bp-B8h]
  _DWORD *v239; // [sp+28h] [bp-B4h]
  struct addrinfo *pai; // [sp+44h] [bp-98h] BYREF
  _QWORD s[9]; // [sp+48h] [bp-94h] BYREF
  int v242; // [sp+94h] [bp-48h] BYREF
  int v243; // [sp+98h] [bp-44h]
  int v244; // [sp+9Ch] [bp-40h]
  int v245; // [sp+A0h] [bp-3Ch]
  int v246; // [sp+A4h] [bp-38h]
  int v247; // [sp+A8h] [bp-34h]
  int v248; // [sp+ACh] [bp-30h]
  _DWORD v249[7]; // [sp+B0h] [bp-2Ch] BYREF
  char v250[8]; // [sp+CCh] [bp-10h] BYREF

  v239 = (_DWORD *)sub_63BA4(0, 184, 0, 0);
  memcpy(v239, &cfgt, 0xB8u);
  v2 = memset(&cfgt, 0, 0xB8u);
  v3 = (int *)cfg_tree_history;
  if ( cfg_tree_history )
  {
    while ( *v3 )
      v3 = (int *)*v3;
  }
  else
  {
    v3 = &cfg_tree_history;
  }
  *v239 = 0;
  *v3 = (int)v239;
  if ( (*(int *)((_BYTE *)&elf_hash_bucket[261] + (_DWORD)off_B611C) & 0xF) != 0 )
  {
    v4 = (FILE *)fopen64(*(int *)((char *)&elf_hash_bucket[263] + (_DWORD)off_B611C), "w");
    if ( v4 )
    {
      v5 = sub_ED20(v4, 0);
      v6 = v5;
      if ( v5 )
        _fprintf_chk(
          stderr,
          1,
          "--saveconfigquit %s error %d\n",
          *(const char **)((char *)&elf_hash_bucket[263] + (_DWORD)off_B611C),
          v5);
      else
        _fprintf_chk(
          stderr,
          1,
          "configuration saved to %s\n",
          *(const char **)((char *)&elf_hash_bucket[263] + (_DWORD)off_B611C));
      exit(v6);
    }
    v209 = _errno_location();
    v210 = *v209;
    sub_64CC4(
      stderr,
      "can not create save file %s, error %d %m\n",
      *(const char **)((char *)&elf_hash_bucket[263] + (_DWORD)off_B611C),
      *v209);
    exit(v210);
  }
  if ( a1 )
  {
    v222 = (_DWORD *)v239[14];
    if ( v222 && (v223 = (_DWORD *)*v222) != 0 )
    {
      v224 = 0;
      do
      {
        while ( v223[1] != 267 )
        {
          v223 = (_DWORD *)*v223;
          if ( !v223 )
            goto LABEL_616;
        }
        v224 = a1;
        v2 = (void *)sub_6702C(v223[4]);
        v223 = (_DWORD *)*v223;
      }
      while ( v223 );
LABEL_616:
      v225 = sub_66FD8(v2);
      if ( v225 <= 0x63DF )
      {
        v226 = sub_66E18();
        v225 = sub_6702C(v226 - 11);
      }
      if ( v224 )
        sub_602C8(v225);
    }
    else if ( (unsigned int)sub_66FD8(v2) <= 0x63DF )
    {
      v231 = sub_66E18();
      sub_6702C(v231 - 11);
    }
  }
  v7 = (_DWORD *)v239[41];
  if ( v7 )
  {
    v8 = (_DWORD *)*v7;
    if ( *v7 )
    {
      if ( (*(int *)((_BYTE *)&elf_hash_bucket[133] + (_DWORD)off_B611C) & 0xF) == 0
        && (*(int *)((_BYTE *)&elf_hash_bucket[85] + (_DWORD)off_B611C) & 0xF) == 0 )
      {
        while ( 1 )
        {
          v11 = (char *)v8[2];
          LODWORD(s[0]) = -1;
          if ( !v11 )
          {
            v10 = v8[1];
            if ( v10 == 324 )
            {
              v15 = 1;
              goto LABEL_34;
            }
            if ( v10 <= 324 )
            {
              if ( !v10 )
LABEL_660:
                sub_6ECC0("ntp_config.c", 3051, 2, "if_name != ((void *)0)");
              if ( v10 != 260 )
LABEL_670:
                sub_C954((int)"config_nic_rules: match-class-token=%d", v10);
              v15 = 0;
LABEL_560:
              v16 = v8[3];
              if ( v16 != 313 )
              {
                if ( v16 != 338 )
                {
LABEL_550:
                  if ( v16 != 291 )
LABEL_37:
                    sub_C954((int)"config_nic_rules: action-token=%d", v16);
                  v212 = s[0];
                  goto LABEL_552;
                }
                v212 = s[0];
                v213 = 0;
LABEL_553:
                sub_15E04(v15, v11, v212, v213);
                sub_40E80(current_time + 2);
                if ( !v11 )
                  goto LABEL_27;
                goto LABEL_26;
              }
LABEL_555:
              v212 = s[0];
            }
            else
            {
              if ( v10 == 326 )
              {
                v15 = 2;
              }
              else
              {
                if ( v10 != 443 )
                  goto LABEL_670;
                v15 = 3;
              }
LABEL_34:
              v16 = v8[3];
              if ( v16 != 313 )
              {
                if ( v16 == 338 )
                {
                  sub_15E04(v15, 0, -1, 0);
                  sub_40E80(current_time + 2);
                  goto LABEL_27;
                }
                if ( v16 != 291 )
                  goto LABEL_37;
                v212 = -1;
LABEL_552:
                v213 = 2;
                goto LABEL_553;
              }
              v212 = -1;
            }
            v213 = 1;
            goto LABEL_553;
          }
          v9 = (const char *)sub_63D08(v11);
          v10 = v8[1];
          v11 = (char *)v9;
          if ( v10 == 324 )
          {
            v15 = 1;
            goto LABEL_560;
          }
          if ( v10 > 324 )
          {
            if ( v10 == 326 )
            {
              v15 = 2;
            }
            else
            {
              if ( v10 != 443 )
                goto LABEL_670;
              v15 = 3;
            }
            goto LABEL_560;
          }
          if ( v10 )
          {
            if ( v10 != 260 )
              goto LABEL_670;
            v15 = 0;
            goto LABEL_560;
          }
          if ( !v9 )
            goto LABEL_660;
          v12 = strchr(v9, 47);
          v14 = v12;
          if ( !v12 )
            break;
          *v12 = 0;
          if ( !sub_64054(v11, 0, v249, v13) )
          {
            v15 = 4;
            *v14 = 47;
            goto LABEL_23;
          }
          if ( sscanf(v14 + 1, "%d", s) != 1 )
            goto LABEL_586;
          v15 = 5;
          v218 = s[0];
          if ( LOWORD(v249[0]) == 2 )
            v219 = 32;
          else
            v219 = 128;
          if ( SLODWORD(s[0]) < -1 )
            v218 = -1;
          if ( v218 >= v219 )
            v218 = v219;
          LODWORD(s[0]) = v218;
LABEL_23:
          v16 = v8[3];
          if ( v16 == 313 )
            goto LABEL_555;
          if ( v16 != 338 )
            goto LABEL_550;
          sub_15E04(v15, v11, s[0], 0);
          sub_40E80(current_time + 2);
LABEL_26:
          free(v11);
LABEL_27:
          v8 = (_DWORD *)*v8;
          if ( !v8 )
            goto LABEL_39;
        }
        if ( !sub_64054(v11, 0, v249, v13) )
        {
          v15 = 4;
          goto LABEL_560;
        }
LABEL_586:
        v15 = 5;
        goto LABEL_23;
      }
      if ( a1 )
      {
        sub_64E00(3, "interface/nic rules are not allowed with --interface (-I) or --novirtualips (-L)%s", ", exiting");
        exit(1);
      }
      sub_64E00(3, "interface/nic rules are not allowed with --interface (-I) or --novirtualips (-L)%s", byte_97F7C);
    }
  }
LABEL_39:
  v17 = (char *)v239[16];
  if ( v17 )
    sub_4294C(2, v17);
  v18 = (_DWORD *)v239[15];
  if ( v18 )
  {
    v19 = (_DWORD *)*v18;
    if ( *v18 )
    {
      do
      {
        while ( 1 )
        {
          v20 = (char *)sub_1C0BC(v19[1]);
          v21 = sub_2C718(v20);
          if ( !v21 )
            break;
          sub_2C570(v21, statsdir, (int)v20, *(unsigned __int8 *)(v21 + 20), *(unsigned __int8 *)(v21 + 21) | 0x80);
          v19 = (_DWORD *)*v19;
          if ( !v19 )
            goto LABEL_47;
        }
        sub_64E00(3, "stats %s unrecognized", v20);
        v19 = (_DWORD *)*v19;
      }
      while ( v19 );
    }
  }
LABEL_47:
  v22 = (_DWORD *)v239[17];
  if ( v22 )
  {
    v23 = (_DWORD *)*v22;
    if ( *v22 )
    {
      do
      {
        v24 = (char *)sub_1C0BC(v23[1]);
        v25 = sub_2C718(v24);
        if ( v25 )
        {
          v26 = (_DWORD *)v23[2];
          v27 = *(unsigned __int8 *)(v25 + 20);
          v28 = *(unsigned __int8 *)(v25 + 21) | 0x80;
          if ( v26 )
          {
            v29 = (_DWORD *)*v26;
            if ( *v26 )
            {
              do
              {
                v30 = v29[1];
                if ( v30 == 433 )
                {
                  v31 = v29[4];
                  if ( v31 == 371 )
                  {
                    v27 = 255;
                  }
                  else if ( v31 >= 372 )
                  {
                    switch ( v31 )
                    {
                      case 442:
                        v27 = 3;
                        break;
                      case 445:
                        v27 = 5;
                        break;
                      case 390:
                        v27 = 1;
                        break;
                      default:
LABEL_61:
                        sub_C954((int)"config-monitor: type-token=%d", v31);
                    }
                  }
                  else
                  {
                    switch ( v31 )
                    {
                      case 283:
                        v27 = 2;
                        break;
                      case 364:
                        v27 = 4;
                        break;
                      case 259:
                        v27 = 6;
                        break;
                      default:
                        goto LABEL_61;
                    }
                  }
                }
                else if ( v30 == 446 )
                {
                  v36 = v29[4];
                  if ( v36 == 294 )
                  {
                    v28 |= 0x80u;
                  }
                  else if ( v36 <= 294 )
                  {
                    if ( v36 != 286 )
                    {
LABEL_652:
                      sub_64E00(3, "Unknown filegen flag token %d", v29[4]);
                      exit(1);
                    }
                    v28 &= ~0x80u;
                  }
                  else if ( v36 == 337 )
                  {
                    v28 |= 1u;
                  }
                  else
                  {
                    if ( v36 != 368 )
                      goto LABEL_652;
                    v28 &= ~1u;
                  }
                }
                else
                {
                  if ( v30 != 298 )
                  {
                    sub_64E00(3, "Unknown filegen option token %d", v29[1]);
                    exit(1);
                  }
                  v24 = (char *)v29[4];
                }
                v29 = (_DWORD *)*v29;
              }
              while ( v29 );
            }
          }
          sub_2C570(v25, statsdir, (int)v24, v27, v28);
        }
        else
        {
          sub_64E00(3, "filegen category '%s' unrecognized", v24);
        }
        v23 = (_DWORD *)*v23;
      }
      while ( v23 );
    }
  }
  v32 = (_DWORD *)v239[28];
  if ( v32 )
  {
    v33 = (_DWORD *)*v32;
    if ( *v32 )
    {
      do
      {
        v35 = v33[1];
        if ( v35 == 312 )
        {
          v34 = 2;
        }
        else if ( v35 <= 312 )
        {
          if ( v35 == 285 )
          {
            v34 = 9;
          }
          else
          {
            if ( v35 != 309 )
              goto LABEL_666;
            v34 = 1;
          }
        }
        else if ( v35 == 397 )
        {
          v34 = 8;
        }
        else
        {
          if ( v35 != 398 )
LABEL_666:
            sub_C954((int)"config_auth: attr-token=%d", v35);
          v34 = 4;
        }
        sub_2BCA8(v34, v33[4]);
        v33 = (_DWORD *)*v33;
      }
      while ( v33 );
    }
  }
  v37 = v239[30];
  if ( v37 )
  {
    if ( keysdir[0] != default_keysdir )
    {
      free(keysdir[0]);
      v37 = v239[30];
    }
    keysdir[0] = (char *)sub_63D08(v37);
  }
  v38 = v239[34];
  if ( v38 )
  {
    if ( ntp_signd_socket != &unk_B860C )
    {
      free(ntp_signd_socket);
      v38 = v239[34];
    }
    ntp_signd_socket = (_UNKNOWN *)sub_63D08(v38);
  }
  if ( v239[27] && !cryptosw )
  {
    sub_2B408();
    cryptosw = 1;
  }
  v39 = (_DWORD *)v239[33];
  if ( v39 )
  {
    v40 = (_DWORD *)*v39;
    if ( *v39 )
    {
      v41 = 0;
      do
      {
        while ( 1 )
        {
          v46 = v40[2];
          if ( v46 != 319 )
            break;
          v47 = v40[4];
          v40 = (_DWORD *)*v40;
          if ( (unsigned int)(v47 - 2) <= 0xFFFD )
            ++v41;
          if ( !v40 )
            goto LABEL_128;
        }
        if ( v46 != 321 )
          sub_6ECC0("ntp_config.c", 2012, 0, "321 == my_val->type");
        v42 = v40[5];
        v43 = v40[4];
        v40 = (_DWORD *)*v40;
        v44 = v43 <= v42;
        if ( v43 <= 0 )
          v44 = 0;
        if ( v42 <= 0xFFFF && v44 )
          v41 += v42 + 1 - v43;
      }
      while ( v40 );
    }
  }
LABEL_128:
  sub_61DBC();
  if ( v239[29] )
    sub_42744();
  if ( v239[26] )
    ctl_auth_keyid = v239[26];
  if ( v239[31] )
    info_auth_keyid = v239[31];
  v48 = (_DWORD *)v239[33];
  if ( v48 )
  {
    v49 = (_DWORD *)*v48;
    if ( *v48 )
    {
      while ( 1 )
      {
        v53 = v49[4];
        if ( v49[2] != 319 )
          break;
        if ( (unsigned int)(v53 - 1) > 0xFFFE )
        {
          sub_64E00(5, "Ignoring invalid trustedkey %d, min 1 max %d.", v49[4], 0xFFFF);
LABEL_146:
          v49 = (_DWORD *)*v49;
          if ( !v49 )
            goto LABEL_150;
        }
        else
        {
          sub_621BC(v49[4], 1);
          v49 = (_DWORD *)*v49;
          if ( !v49 )
            goto LABEL_150;
        }
      }
      v50 = v49[5];
      v51 = v50 <= v53;
      if ( v50 >= v53 )
        v51 = v53 <= 0;
      v52 = v51;
      if ( v50 > 0xFFFF )
        v52 |= 1u;
      if ( v52 )
      {
        sub_64E00(5, "Ignoring invalid trustedkey range %d ... %d, min 1 max %d.", v53, v50, 0xFFFF);
      }
      else
      {
        do
        {
          v66 = v53++;
          sub_621BC(v66, 1);
        }
        while ( v50 >= v53 );
      }
      goto LABEL_146;
    }
  }
LABEL_150:
  v54 = v239[32];
  if ( (unsigned int)(v54 - 3) <= 0x1C )
  {
    sys_revoke = v239[32];
  }
  else if ( v54 )
  {
    sub_64E00(3, "'revoke' value %d ignored", v54);
  }
  v55 = (double **)v239[14];
  v56 = sys_maxclock;
  v57 = sys_minclock;
  v58 = sys_minsane;
  if ( v55 )
  {
    v59 = *v55;
    if ( *v55 )
    {
      while ( 1 )
      {
        v61 = *((_DWORD *)v59 + 1);
        if ( v61 == 347 )
        {
          v56 = (int)v59[2];
          if ( v56 <= 0 )
          {
            v59[2] = 1.0;
            v56 = 1;
          }
          goto LABEL_161;
        }
        if ( v61 < 348 )
        {
          if ( v61 == 269 )
          {
            v67 = v59[2];
            if ( v67 > 4.0 )
            {
              sub_64E00(4, "Using maximum bcpollbstep ceiling %d, %d requested", 4, (int)v67);
              v59[2] = 4.0;
            }
            else if ( v67 < 0.0 )
            {
              sub_64E00(4, "Using minimum bcpollbstep floor %d, %d requested", 0, (int)v67);
              v59[2] = 0.0;
            }
          }
          else if ( v61 == 276 )
          {
            v60 = v59[2];
            if ( v60 > 15.0 )
            {
              sub_64E00(4, "Using maximum tos ceiling %d, %d requested", 15, (int)v60);
              v59[2] = 15.0;
            }
            else if ( v60 < 1.0 )
            {
              sub_64E00(4, "Using minimum tos floor %d, %d requested", 1, (int)v60);
              v59[2] = 1.0;
            }
          }
          goto LABEL_161;
        }
        if ( v61 == 355 )
          break;
        if ( v61 == 360 )
        {
          v58 = (int)v59[2];
          if ( v58 < 0 )
          {
            v59[2] = 0.0;
            v58 = 0;
          }
          v59 = *(double **)v59;
          if ( !v59 )
          {
LABEL_169:
            v62 = v56 <= v57;
            if ( v56 >= v57 )
              v62 = v57 <= v58;
            if ( !v62 )
            {
LABEL_172:
              v63 = (_DWORD *)v239[14];
              if ( v63 )
              {
                v64 = (_DWORD *)*v63;
                if ( *v63 )
                {
                  while ( 2 )
                  {
                    v65 = v64[1];
                    switch ( v65 )
                    {
                      case 267:
                        goto LABEL_189;
                      case 269:
                        v68 = 33;
                        goto LABEL_188;
                      case 270:
                        v68 = 25;
                        goto LABEL_188;
                      case 276:
                        v68 = 18;
                        goto LABEL_188;
                      case 278:
                        v68 = 19;
                        goto LABEL_188;
                      case 306:
                        v68 = 17;
                        goto LABEL_188;
                      case 347:
                        v68 = 15;
                        goto LABEL_188;
                      case 349:
                        v68 = 22;
                        goto LABEL_188;
                      case 355:
                        v68 = 14;
                        goto LABEL_188;
                      case 357:
                        v68 = 21;
                        goto LABEL_188;
                      case 360:
                        v68 = 16;
                        goto LABEL_188;
                      case 383:
                        v68 = 26;
                        goto LABEL_188;
                      case 384:
                        v68 = 27;
LABEL_188:
                        sub_38810(v68, 0, 0);
LABEL_189:
                        v64 = (_DWORD *)*v64;
                        if ( !v64 )
                          goto LABEL_190;
                        continue;
                      default:
                        sub_C954((int)"config-tos: attr-token=%d", v65);
                    }
                  }
                }
              }
              goto LABEL_190;
            }
LABEL_624:
            sub_64E00(
              3,
              "tos error: must have minsane (%d) < minclock (%d) <= maxclock (%d) - daemon will not operate properly!",
              v58,
              v57,
              v56);
            goto LABEL_172;
          }
        }
        else
        {
LABEL_161:
          v59 = *(double **)v59;
          if ( !v59 )
            goto LABEL_169;
        }
      }
      v57 = (int)v59[2];
      if ( v57 <= 0 )
      {
        v59[2] = 1.0;
        v57 = 1;
      }
      goto LABEL_161;
    }
  }
  v227 = sys_maxclock <= sys_minclock;
  if ( sys_maxclock >= sys_minclock )
    v227 = sys_minclock <= sys_minsane;
  if ( v227 )
    goto LABEL_624;
LABEL_190:
  v69 = (int **)v239[19];
  if ( v69 )
  {
    v70 = *v69;
    if ( *v69 )
    {
      while ( 2 )
      {
        v71 = v70[1];
        switch ( v71 )
        {
          case 314:
            if ( v70[4] < 0 )
              goto LABEL_319;
            mru_incalloc[0] = (int *)v70[4];
            goto LABEL_206;
          case 315:
            v80 = v70[4];
            if ( v80 < 0 )
              goto LABEL_319;
            v78 = v80 << 10;
            v77 = &mru_incalloc_ptr;
            goto LABEL_215;
          case 316:
            if ( v70[4] < 0 )
              goto LABEL_319;
            mru_initalloc = (int *)v70[4];
            goto LABEL_206;
          case 317:
            v79 = v70[4];
            if ( v79 < 0 )
              goto LABEL_319;
            v78 = v79 << 10;
            v77 = &mru_initalloc_ptr;
            goto LABEL_215;
          case 346:
            mru_maxage = (int *)v70[4];
            goto LABEL_206;
          case 348:
            if ( v70[4] < 0 )
              goto LABEL_326;
            mru_maxdepth = v70[4];
            goto LABEL_206;
          case 350:
            v76 = v70[4];
            if ( v76 < 0 )
            {
LABEL_326:
              mru_maxdepth = -1;
            }
            else
            {
              v77 = (int ***)&mru_maxdepth_ptr;
              v78 = v76 << 10;
LABEL_215:
              **v77 = (int *)(v78 / 0x48);
            }
LABEL_206:
            v70 = (int *)*v70;
            if ( !v70 )
              break;
            continue;
          case 356:
            if ( v70[4] < 0 )
            {
LABEL_319:
              v110 = (const char *)sub_1C0BC(v71);
              sub_64E00(3, "mru %s %d out of range, ignored.", v110, v70[4]);
            }
            else
            {
              mru_mindepth = (_UNKNOWN *)v70[4];
            }
            goto LABEL_206;
          default:
            v234 = (const char *)sub_1C0BC(v71);
            sub_64E00(3, "Unknown mru option %s (%d)", v234, v70[1]);
            exit(1);
            return result;
        }
        break;
      }
    }
  }
  v72 = (_DWORD *)v239[18];
  if ( v72 )
  {
    v73 = (_DWORD *)*v72;
    if ( *v72 )
    {
      do
      {
        v74 = v73[1];
        if ( v74 == 358 )
        {
          ntp_minpkt = v73[4];
        }
        else if ( v74 == 363 )
        {
          mon_age = (_UNKNOWN *)v73[4];
        }
        else
        {
          if ( v74 != 266 )
          {
            v75 = (const char *)sub_1C0BC(v74);
            sub_64E00(3, "Unknown discard option %s (%d)", v75, v73[1]);
            exit(1);
          }
          v109 = v73[4];
          if ( v109 > 0xFF )
            sub_64E00(3, "discard average %d out of range, ignored.", v109);
          else
            ntp_minpoll = v73[4];
        }
        v73 = (_DWORD *)*v73;
      }
      while ( v73 );
    }
  }
  v81 = (__int16 **)v239[20];
  if ( v81 )
  {
    for ( i = *v81; i; i = *(__int16 **)i )
    {
      v82 = (_DWORD *)*((_DWORD *)i + 3);
      v83 = i[10];
      if ( v82 && (v84 = (_DWORD *)*v82) != 0 )
      {
        v85 = 0;
        v86 = 0;
        do
        {
          v87 = v84[1];
          switch ( v87 )
          {
            case 305:
              v85 |= 0x2000u;
              break;
            case 313:
              v85 |= 1u;
              break;
            case 332:
              v85 |= 0x800u;
              break;
            case 333:
              v85 |= 0x1000u;
              break;
            case 336:
              v85 |= 0x40u;
              break;
            case 342:
              v85 |= 0x400u;
              break;
            case 369:
              v85 |= 0x100u;
              break;
            case 370:
              v85 |= 0x4000u;
              break;
            case 373:
              v85 |= 0x20u;
              break;
            case 374:
              v85 |= 0x10u;
              break;
            case 375:
              v85 |= 0x80u;
              break;
            case 377:
              v85 |= 2u;
              break;
            case 378:
              v85 |= 0x200u;
              break;
            case 379:
              v85 |= 4u;
              break;
            case 381:
              v86 |= 0x2000u;
              break;
            case 409:
              v86 |= 0x4000u;
              break;
            case 440:
              v85 |= 8u;
              break;
            default:
              sub_C954((int)"config_access: flag-type-token=%d", v87);
          }
          v84 = (_DWORD *)*v84;
        }
        while ( v84 );
        if ( (v85 & 0x1000) != 0 && !dword_B8610 )
        {
          dword_B8610 = 1;
          _fprintf_chk(
            stderr,
            1,
            "%s\n",
            "mssntp restrict bit ignored, this ntpd was configured without --enable-ntp-signd.");
          sub_64E00(4, "%s", "mssntp restrict bit ignored, this ntpd was configured without --enable-ntp-signd.");
        }
        if ( (v85 & 0x840) == 0x800 )
        {
          v88 = *((_DWORD *)i + 1);
          if ( v88 )
          {
            v89 = *(const char **)(v88 + 4);
          }
          else if ( (v86 & 0x4000) != 0 )
          {
            v89 = "source";
          }
          else
          {
            v89 = "default";
          }
          _fprintf_chk(stderr, 1, "restrict %s: %s\n", v89, "KOD does nothing without LIMITED.");
          sub_64E00(4, "restrict %s: %s", v89, "KOD does nothing without LIMITED.");
        }
        v242 = 0;
        v243 = 0;
        v244 = 0;
        v245 = 0;
        v246 = 0;
        v247 = 0;
        v248 = 0;
        v90 = *((_DWORD *)i + 1);
        pai = 0;
        if ( !v90 )
        {
          memset(v249, 0, sizeof(v249));
          if ( (v86 & 0x4000) == 0 )
            goto LABEL_308;
          sub_40238(1, 0, 0, v83, v86, v85, 0);
          continue;
        }
      }
      else
      {
        v86 = 0;
        v242 = 0;
        v243 = 0;
        v244 = 0;
        v245 = 0;
        v246 = 0;
        v247 = 0;
        v248 = 0;
        v90 = *((_DWORD *)i + 1);
        pai = 0;
        if ( !v90 )
        {
          v86 = 0;
          v85 = 0;
          memset((char *)v249 + 2, 0, 26);
LABEL_308:
          LOWORD(v242) = 2;
          LOWORD(v249[0]) = 2;
          sub_40238(1, &v242, v249, v83, v86, v85, 0);
          LOWORD(v242) = 10;
          strcpy((char *)v249, "\n");
          sub_40238(1, &v242, v249, v83, v86, v85, 0);
LABEL_309:
          if ( pai )
            freeaddrinfo(pai);
          continue;
        }
        v85 = 0;
      }
      v91 = *(_DWORD *)(v90 + 4);
      LOWORD(v242) = *(_WORD *)(v90 + 8);
      if ( sub_CE10(v91, (unsigned __int16 *)&v242) == 1 )
      {
        v99 = (unsigned __int16)v242;
        v97 = 0;
      }
      else
      {
        pai = 0;
        v92 = (const struct addrinfo *)memset(s, 0, 0x20u);
        v93 = v92;
        v94 = *((_DWORD *)i + 1);
        v95 = *(unsigned __int16 *)(v94 + 8);
        v96 = *(const char **)(v94 + 4);
        s[1] = 0x1100000002LL;
        HIDWORD(s[0]) = v95;
        if ( getaddrinfo(v96, "ntp", v93, &pai) )
        {
          sub_64E00(
            3,
            "restrict: ignoring line %d, address/host '%s' unusable.",
            *((_DWORD *)i + 4),
            *(_DWORD *)(*((_DWORD *)i + 1) + 4));
          continue;
        }
        v97 = pai;
        if ( !pai )
          sub_6ECC0("ntp_config.c", 2767, 2, "ai_list != ((void *)0)");
        ai_addr = pai->ai_addr;
        if ( !ai_addr )
          sub_6ECC0("ntp_config.c", 2769, 2, "pai->ai_addr != ((void *)0)");
        if ( pai->ai_addrlen > 0x1C )
          sub_6ECC0("ntp_config.c", 2771, 2, "sizeof(addr) >= pai->ai_addrlen");
        _memcpy_chk(&v242, ai_addr);
        v99 = (unsigned __int16)v242;
        if ( (v242 & 0xFFF7) != 2 )
          sub_6ECC0("ntp_config.c", 2775, 2, "2 == ((&addr)->sa.sa_family) || 10 == ((&addr)->sa.sa_family)");
      }
      v100 = v99 == 10;
      LOWORD(v249[0]) = v99;
      *(_DWORD *)((char *)&v249[1] + 2) = 0;
      if ( v99 == 10 )
        v99 = -1;
      *(_DWORD *)((char *)v249 + 2) = 0;
      memset((char *)&v249[2] + 2, 0, 18);
      if ( v100 )
      {
        v249[3] = v99;
        v249[2] = v99;
        v249[4] = v99;
        v249[5] = v99;
      }
      else
      {
        v249[1] = -1;
      }
      if ( !*((_DWORD *)i + 2)
        || (memset(v249, 0, sizeof(v249)),
            v101 = *((_DWORD *)i + 2),
            v102 = *(_DWORD *)(v101 + 4),
            LOWORD(v249[0]) = *(_WORD *)(v101 + 8),
            sub_CE10(v102, (unsigned __int16 *)v249) == 1) )
      {
        while ( 1 )
        {
          sub_40238(1, &v242, v249, v83, v86, v85, 0);
          if ( !v97 )
            break;
          v97 = v97->ai_next;
          if ( !v97 )
            break;
          if ( !v97->ai_addr )
            sub_6ECC0("ntp_config.c", 2810, 2, "pai->ai_addr != ((void *)0)");
          if ( v97->ai_addrlen > 0x1C )
            sub_6ECC0("ntp_config.c", 2812, 2, "sizeof(addr) >= pai->ai_addrlen");
          v242 = 0;
          v243 = 0;
          v244 = 0;
          v245 = 0;
          v246 = 0;
          v247 = 0;
          v248 = 0;
          _memcpy_chk(&v242, v97->ai_addr);
          v107 = (unsigned __int16)v242;
          v108 = v242 & 0xFFF7;
          if ( v108 != 2 )
            sub_6ECC0("ntp_config.c", 2817, 2, "2 == ((&addr)->sa.sa_family) || 10 == ((&addr)->sa.sa_family)");
          *(_DWORD *)((char *)v249 + 2) = 0;
          *(_DWORD *)((char *)&v249[1] + 2) = 0;
          if ( (unsigned __int16)v242 == 10 )
            v108 = -1;
          memset((char *)&v249[2] + 2, 0, 18);
          LOWORD(v249[0]) = v242;
          if ( (unsigned __int16)v242 == 10 )
          {
            v249[3] = v108;
            v249[2] = v108;
            v249[4] = v108;
            v249[5] = v108;
          }
          else
          {
            v107 = -1;
          }
          if ( (unsigned __int16)v242 != 10 )
            v249[1] = v107;
        }
        goto LABEL_309;
      }
      sub_64E00(
        3,
        "restrict: ignoring line %d, mask '%s' unusable.",
        *((_DWORD *)i + 4),
        *(_DWORD *)(*((_DWORD *)i + 2) + 4));
    }
  }
  v103 = (_DWORD *)v239[23];
  if ( v103 )
  {
    v104 = (_DWORD *)*v103;
    if ( *v103 )
    {
      do
      {
        v106 = v104[1];
        if ( v106 == 386 )
        {
          v105 = 6;
        }
        else if ( v106 > 386 )
        {
          if ( v106 == 416 )
          {
            v105 = 5;
          }
          else if ( v106 > 416 )
          {
            if ( v106 == 417 )
            {
              v105 = 8;
            }
            else
            {
              if ( v106 != 422 )
                goto LABEL_665;
              v105 = 15;
            }
          }
          else if ( v106 == 414 )
          {
            v105 = 3;
          }
          else
          {
            if ( v106 != 415 )
              goto LABEL_665;
            v105 = 4;
          }
        }
        else if ( v106 == 288 )
        {
          v105 = 7;
        }
        else if ( v106 <= 288 )
        {
          if ( v106 != 261 )
LABEL_665:
            sub_C954((int)"config_tinker: attr-token=%d", v106);
          v105 = 10;
        }
        else if ( v106 == 307 )
        {
          v105 = 12;
        }
        else
        {
          if ( v106 != 310 )
            goto LABEL_665;
          v105 = 11;
        }
        sub_305F8(v105);
        v104 = (_DWORD *)*v104;
      }
      while ( v104 );
    }
  }
  v111 = (_DWORD *)v239[22];
  if ( v111 )
  {
    v112 = (_DWORD *)*v111;
    if ( *v111 )
    {
      do
      {
        v113 = v112[1];
        switch ( v113 )
        {
          case 354:
            if ( (*(int *)((_BYTE *)&elf_hash_bucket[261] + (_DWORD)off_B611C) & 0xF) == 0 )
            {
              v114 = v112[4];
              if ( v114 == -1 )
              {
                if ( cur_memlock && munlockall() == -1 )
                  sub_64E00(3, "munlockall() failed: %m");
                cur_memlock = 0;
              }
              else if ( v114 < 0 )
              {
                sub_64E00(4, "'rlimit memlock' value of %d is unexpected!", v114);
              }
              else
              {
                if ( cur_memlock != 1 )
                {
                  if ( mlockall(3) == -1 )
                    sub_64E00(3, "mlockall() failed: %m");
                  v114 = v112[4];
                }
                v236 = "MB";
                v235 = 0x100000;
                sub_FB7C(8, v114 << 20);
                cur_memlock = 1;
              }
            }
            break;
          case 410:
            v235 = 4096;
            v236 = "4k";
            sub_FB7C(3, (int)(v112[4] << 12));
            break;
          case 300:
            v235 = 1;
            v236 = byte_97F7C;
            sub_FB7C(7, (int)v112[4]);
            break;
          default:
            sub_C954((int)"config-rlimit: value-token=%d", v113);
        }
        v112 = (_DWORD *)*v112;
      }
      while ( v112 );
    }
  }
  sub_C9A0((_DWORD *)v239[24], 1);
  LODWORD(v115) = sub_C9A0((_DWORD *)v239[25], 0);
  v116 = (int ***)v239[35];
  if ( v116 )
  {
    for ( j = *v116; j; j = (int **)*j )
    {
      v118 = (int)j[1];
      switch ( v118 )
      {
        case '-':
          LODWORD(v115) = sub_D580((char *)j[4]);
          ntp_syslogmask &= ~LODWORD(v115);
          break;
        case '=':
          LODWORD(v115) = sub_D580((char *)j[4]);
          ntp_syslogmask = LODWORD(v115);
          break;
        case '+':
          LODWORD(v115) = sub_D580((char *)j[4]);
          ntp_syslogmask |= LODWORD(v115);
          break;
        default:
          sub_C954((int)"config-logconfig: modifier='%c'", v118);
      }
    }
  }
  v119 = (_DWORD *)v239[36];
  if ( v119 )
  {
    v120 = (_DWORD *)*v119;
    if ( *v119 )
    {
      v121 = 0;
      do
      {
        while ( v121 <= 8 )
        {
          LODWORD(v115) = sub_63D08(v120[1]);
          v120 = (_DWORD *)*v120;
          sys_phone[v121++] = LODWORD(v115);
          sys_phone[v121] = 0;
          if ( !v120 )
            goto LABEL_363;
        }
        LODWORD(v115) = sub_64E00(
                          6,
                          "phone: Number of phone entries exceeds %zu. Ignoring phone %s...",
                          9u,
                          (const char *)v120[1]);
        v120 = (_DWORD *)*v120;
      }
      while ( v120 );
    }
  }
LABEL_363:
  v122 = (int ***)v239[37];
  if ( v122 )
  {
    v123 = *v122;
    if ( *v122 )
    {
      v124 = 0;
      do
      {
        v125 = strlen((const char *)v123[1]);
        v126 = v125 + strlen((const char *)v123[2]) + 2;
        v124 = (void *)sub_63BA4(v124, v126, 0, 0);
        sub_6C054(v124, v126, "%s=%s", (const char *)v123[1], (const char *)v123[2]);
        LODWORD(v115) = sub_245C4(v124, v126);
        v123 = (int **)*v123;
      }
      while ( v123 );
      if ( v124 )
        free(v124);
    }
  }
  v127 = (_DWORD *)v239[38];
  if ( v127 )
  {
    v128 = (_DWORD *)*v127;
    if ( *v127 )
    {
      v129 = 0;
      do
      {
        while ( 1 )
        {
          v130 = v128[1];
          if ( v129 > 7 )
            break;
          sys_ttl[v129++] = v130;
          v128 = (_DWORD *)*v128;
          if ( !v128 )
            goto LABEL_375;
        }
        LODWORD(v115) = sub_64E00(6, "ttl: Number of TTL entries exceeds %zu. Ignoring TTL %d...", 8u, v130);
        v128 = (_DWORD *)*v128;
      }
      while ( v128 );
LABEL_375:
      sys_ttlmax = v129 - 1;
    }
  }
  v131 = (double **)v239[40];
  if ( v131 )
  {
    for ( k = *v131; k; k = *(double **)k )
    {
      v133 = *((_DWORD *)k + 1);
      if ( v133 == 334 )
      {
        LODWORD(v115) = sub_4294C(4, *((char **)k + 4));
        continue;
      }
      if ( v133 <= 334 )
      {
        if ( v133 == 290 )
        {
          v228 = (char *)*((_DWORD *)k + 4);
          if ( *v228 )
          {
            LODWORD(v115) = sub_4294C(1, v228);
          }
          else
          {
            stats_drift_file = (unsigned __int8)*v228;
            LODWORD(v115) = sub_64E00(6, "config: driftfile disabled");
          }
          continue;
        }
        if ( v133 > 290 )
        {
          if ( v133 == 292 )
          {
            qos = (int *)(4 * *((_DWORD *)k + 4));
            continue;
          }
          if ( v133 != 312 )
            goto LABEL_628;
          sys_ident = *((_DWORD *)k + 4);
        }
        else
        {
          if ( v133 == 265 )
          {
            v229 = *((_DWORD *)k + 4);
            if ( (unsigned int)(v229 - 3) > 0x1C )
              LODWORD(v115) = sub_64E00(3, "'automax' value %d ignored", v229);
            else
              sys_automax = *((_DWORD *)k + 4);
            continue;
          }
          if ( v133 != 273 )
            goto LABEL_628;
          LODWORD(v115) = sub_38810(4, 0, 0);
        }
      }
      else
      {
        if ( v133 == 391 )
        {
          LODWORD(v115) = sub_4294C(3, *((char **)k + 4));
          continue;
        }
        if ( v133 < 392 )
        {
          if ( v133 == 340 )
          {
            LODWORD(v115) = sub_64FEC(*((_DWORD *)k + 4), 1);
            if ( LODWORD(v115) == -1 )
              LODWORD(v115) = sub_64E00(3, "Cannot open logfile %s: %m", *((const char **)k + 4));
            continue;
          }
          if ( v133 == 372 )
            goto LABEL_636;
LABEL_628:
          LODWORD(v115) = sub_64E00(3, "config_vars(): unexpected token %d", v133);
          continue;
        }
        if ( v133 == 422 )
        {
          LODWORD(v115) = sub_305F8(15);
          continue;
        }
        if ( v133 == 441 )
        {
LABEL_636:
          v115 = k[2];
          wander_threshold = v115;
          continue;
        }
        if ( v133 != 406 )
          goto LABEL_628;
        if ( saveconfigdir )
          free((void *)saveconfigdir);
        v134 = (const char *)*((_DWORD *)k + 4);
        LODWORD(v115) = strlen(v134);
        if ( !LODWORD(v115) )
          goto LABEL_645;
        if ( v134[LODWORD(v115) - 1] == 47 )
        {
          LODWORD(v115) = sub_63D08(v134);
LABEL_645:
          saveconfigdir = LODWORD(v115);
          continue;
        }
        v135 = LODWORD(v115) + 2;
        v136 = sub_63BA4(0, LODWORD(v115) + 2, 0, 0);
        v137 = (const char *)*((_DWORD *)k + 4);
        saveconfigdir = v136;
        LODWORD(v115) = sub_6C054(v136, v135, "%s%c", v137, 47);
      }
    }
  }
  result = sub_18484(LODWORD(v115), HIDWORD(v115));
  v139 = (_DWORD *)v239[39];
  LOWORD(v242) = 0;
  if ( v139 )
  {
    v140 = (_DWORD *)*v139;
    if ( *v139 )
    {
      while ( 1 )
      {
        v141 = (_DWORD *)v140[2];
        if ( !v141 )
          break;
        v142 = (_DWORD *)*v141;
        if ( !*v141 )
          break;
        v143 = 0;
        v144 = 0;
        v145 = 0;
        do
        {
          while ( 1 )
          {
            v146 = v142[1];
            if ( v146 != 393 )
              break;
            v147 = v142[4];
            if ( (unsigned int)(v147 - 1) > 0xFFFE )
            {
              result = sub_64E00(3, "invalid port number %d, trap ignored");
              v145 = 1;
              v147 = v142[4];
            }
            v142 = (_DWORD *)*v142;
            v143 = (unsigned __int16)v147;
            if ( !v142 )
              goto LABEL_410;
          }
          if ( v146 == 320 )
          {
            v243 = 0;
            v242 = 0;
            v244 = 0;
            v245 = 0;
            v246 = 0;
            v247 = 0;
            v248 = 0;
            result = sub_CE10(v142[4], (unsigned __int16 *)&v242);
            if ( result != 1 )
              goto LABEL_418;
            result = sub_178F8(&v242);
            v144 = result;
            if ( !result )
            {
              v145 = 1;
              v211 = sub_6C2E8(&v242);
              result = sub_64E00(3, "can't find interface with address %s", v211);
            }
          }
          v142 = (_DWORD *)*v142;
        }
        while ( v142 );
LABEL_410:
        if ( v145 )
          goto LABEL_418;
        v249[0] = 0;
        if ( !v143 )
          v143 = 18447;
        memset(&v249[1], 0, 24);
        if ( sub_CE10(*(_DWORD *)(v140[1] + 4), (unsigned __int16 *)v249) != 1 )
        {
          memset(s, 0, 0x20u);
          s[1] = 0x1100000002LL;
          sub_6C054(v250, 8, "%u", v143);
          LODWORD(s[0]) = 1024;
          v149 = (_DWORD *)sub_63BA4(0, 32, 0, 1);
          if ( v144 )
          {
            HIDWORD(s[0]) = *(unsigned __int16 *)(v144 + 140);
            v149[7] = 1;
            v151 = *(_DWORD *)(v144 + 24);
            v150 = (_DWORD *)(v144 + 24);
            v152 = v150[1];
            v153 = v150[2];
            v154 = v150[3];
            *v149 = v151;
            v149[1] = v152;
            v149[2] = v153;
            v149[3] = v154;
            v155 = v150[5];
            v156 = v150[6];
            v149[4] = v150[4];
            v149[5] = v155;
            v149[6] = v156;
          }
          goto LABEL_416;
        }
        v230 = __rev16(v143);
        if ( v144 )
          v148 = v242;
        HIWORD(v249[0]) = v230;
        if ( !v144 )
          goto LABEL_579;
        LOWORD(v249[0]) = v148;
LABEL_581:
        result = sub_23D98(v249, v144, 0, 4);
        if ( result )
        {
LABEL_418:
          v140 = (_DWORD *)*v140;
          if ( !v140 )
            goto LABEL_419;
        }
        else
        {
          v216 = sub_18FB4(v144);
          v217 = sub_6C2E8(v249);
          result = sub_64E00(3, "set trap %s -> %s failed.", v216, v217);
          v140 = (_DWORD *)*v140;
          if ( !v140 )
            goto LABEL_419;
        }
      }
      memset(v249, 0, sizeof(v249));
      if ( sub_CE10(*(_DWORD *)(v140[1] + 4), (unsigned __int16 *)v249) != 1 )
      {
        memset(s, 0, 0x20u);
        s[1] = 0x1100000002LL;
        sub_6C054(v250, 8, "%u", 18447);
        LODWORD(s[0]) = 1024;
        v149 = (_DWORD *)sub_63BA4(0, 32, 0, 1);
LABEL_416:
        result = sub_68520(*(_DWORD *)(v140[1] + 4), v250, s, 2, sub_D014, v149);
        if ( !result )
          result = sub_64E00(3, "config_trap: getaddrinfo_sometime(%s,%s): %m", *(const char **)(v140[1] + 4), v250);
        goto LABEL_418;
      }
      HIWORD(v249[0]) = 3912;
LABEL_579:
      if ( LOWORD(v249[0]) == 2 )
        v144 = any_interface;
      else
        v144 = any6_interface;
      goto LABEL_581;
    }
  }
LABEL_419:
  v157 = v239[11];
  if ( v157 )
    result = sub_38810(1, v157, 0);
  v158 = (int **)v239[12];
  if ( v158 )
  {
    for ( m = *v158; m; sys_manycastserver = 1 )
    {
      while ( 1 )
      {
        memset(v249, 0, sizeof(v249));
        v160 = m[1];
        LOWORD(v249[0]) = *((_WORD *)m + 4);
        result = sub_CE10(v160, (unsigned __int16 *)v249);
        if ( result == 1 )
          break;
        m = (int *)*m;
        if ( !m )
          goto LABEL_427;
      }
      result = sub_38810(6, 0, v249);
      m = (int *)*m;
    }
  }
LABEL_427:
  v161 = (void **)v239[13];
  if ( v161 )
  {
    v162 = *v161;
    if ( *v161 )
    {
      do
      {
        while ( 1 )
        {
          memset(v249, 0, sizeof(v249));
          v163 = v162[1];
          LOWORD(v249[0]) = *((_WORD *)v162 + 4);
          if ( sub_CE10(v163, (unsigned __int16 *)v249) == 1 )
            break;
          v162 = (_DWORD *)*v162;
          if ( !v162 )
            goto LABEL_433;
        }
        sub_38810(6, 0, v249);
        v162 = (_DWORD *)*v162;
      }
      while ( v162 );
LABEL_433:
      result = sub_38810(6, 1, v162);
    }
  }
  if ( cmdline_server_count > 0 )
  {
    v164 = (_DWORD *)cmdline_servers;
    do
    {
      memset(v249, 0, sizeof(v249));
      if ( sub_64054(*v164, 0, v249, v164) )
      {
        HIWORD(v249[0]) = 31488;
        result = sub_CC78((unsigned __int16 *)v249, 407);
        if ( result )
          result = sub_32898(v249, 0, 0, -1, 3, 4, 0, 0, 256, 0, 0, 0);
      }
      else
      {
        v165 = sub_63BA4(0, 28, 0, 1);
        *(_WORD *)(v165 + 8) = 0;
        *(_DWORD *)(v165 + 4) = 407;
        *(_WORD *)(v165 + 16) = 1027;
        *(_DWORD *)v165 = 256;
        memset(s, 0, 0x20u);
        v166 = *(unsigned __int16 *)(v165 + 8);
        s[1] = 0x1100000002LL;
        v167 = *(_DWORD *)cmdline_servers;
        HIDWORD(s[0]) = v166;
        result = sub_67F40(v167, "ntp", s, 2, sub_D1A8, v165, 0);
      }
      v100 = cmdline_server_count == 1;
      v164 = (_DWORD *)(cmdline_servers + 4);
      --cmdline_server_count;
      cmdline_servers += 4;
    }
    while ( cmdline_server_count >= 0 && !v100 );
  }
  v168 = (int **)v239[9];
  if ( v168 )
  {
    v169 = *v168;
    if ( *v168 )
    {
      while ( 1 )
      {
        memset(v249, 0, sizeof(v249));
        v174 = v169[1];
        if ( v174 == 387 )
          break;
        if ( v174 >= 388 )
        {
          if ( v174 != 392 && v174 != 407 )
LABEL_510:
            sub_6ECC0("ntp_config.c", 4057, 2, "hmode != 0");
        }
        else
        {
          if ( v174 == 271 )
          {
            v170 = v169[2];
            v171 = 5;
            goto LABEL_447;
          }
          if ( v174 != 343 )
            goto LABEL_510;
        }
        v170 = v169[2];
        v100 = v174 == 392;
        v202 = *(_DWORD *)(v170 + 4);
        v174 = *(unsigned __int16 *)(v170 + 8);
        if ( v100 )
        {
          v203 = v169[3];
          LOWORD(v249[0]) = v174;
          v204 = sub_CEE8(v203);
          result = sub_32898(
                     v249,
                     v202,
                     0,
                     -1,
                     3,
                     *((unsigned __int8 *)v169 + 24),
                     *((unsigned __int8 *)v169 + 16),
                     *((unsigned __int8 *)v169 + 17),
                     v204,
                     v169[5],
                     v169[7],
                     v169[8]);
LABEL_450:
          v169 = (int *)*v169;
          if ( !v169 )
            goto LABEL_454;
        }
        else
        {
          v171 = 3;
LABEL_447:
          if ( sub_64054(*(_DWORD *)(v170 + 4), *(unsigned __int16 *)(v170 + 8), v249, v174) )
          {
            v172 = v169[1];
            HIWORD(v249[0]) = 31488;
            result = sub_CC78((unsigned __int16 *)v249, v172);
            if ( result )
            {
              v173 = sub_CEE8(v169[3]);
              result = sub_32898(
                         v249,
                         0,
                         0,
                         -1,
                         v171,
                         *((unsigned __int8 *)v169 + 24),
                         *((unsigned __int8 *)v169 + 16),
                         *((unsigned __int8 *)v169 + 17),
                         v173,
                         v169[5],
                         v169[7],
                         v169[8]);
            }
            goto LABEL_450;
          }
          v175 = sub_63BA4(0, 28, 0, 1);
          v176 = *(_QWORD *)(v169 + 1);
          v177 = v175;
          WORD2(v176) = *(_WORD *)(HIDWORD(v176) + 8);
          *(_DWORD *)(v175 + 4) = v176;
          *(_BYTE *)(v175 + 16) = v171;
          *(_WORD *)(v175 + 8) = WORD2(v176);
          *(_BYTE *)(v175 + 17) = *((_BYTE *)v169 + 24);
          *(_BYTE *)(v175 + 18) = *((_BYTE *)v169 + 16);
          *(_BYTE *)(v175 + 19) = *((_BYTE *)v169 + 17);
          v178 = sub_CEE8(v169[3]);
          v179 = v169[5];
          v180 = v169[7];
          v181 = v169[8];
          *(_DWORD *)v177 = v178;
          *(_DWORD *)(v177 + 20) = v179;
          *(_DWORD *)(v177 + 12) = v180;
          *(_DWORD *)(v177 + 24) = v181;
          memset(s, 0, 0x20u);
          v182 = v169[2];
          v183 = *(unsigned __int16 *)(v177 + 8);
          s[1] = 0x1100000002LL;
          v184 = *(_DWORD *)(v182 + 4);
          HIDWORD(s[0]) = v183;
          result = sub_67F40(v184, "ntp", s, 2, sub_D1A8, v177, 0);
          v169 = (int *)*v169;
          if ( !v169 )
            goto LABEL_454;
        }
      }
      v171 = 1;
      v170 = v169[2];
      goto LABEL_447;
    }
  }
LABEL_454:
  v185 = (int ***)v239[10];
  if ( v185 )
  {
    for ( n = *v185; n; n = (int **)*n )
    {
      if ( n[2] )
      {
        memset(v249, 0, sizeof(v249));
        v187 = n[2];
        v188 = (const char *)v187[1];
        LOWORD(v249[0]) = *((_WORD *)v187 + 4);
        if ( sub_CE10((int)v188, (unsigned __int16 *)v249) > 0 )
        {
          v236 = 0;
          v235 = 0;
          result = sub_31A44(v249, 0);
          v214 = result;
          if ( result )
          {
            v215 = (const char *)sub_6C2E8(v249);
            sub_64E00(5, "unpeered %s", v215);
            sub_36214(v214, "GONE");
            result = sub_31FC4(v214);
          }
        }
        else
        {
          v189 = (_DWORD *)peer_list;
          if ( peer_list )
          {
            while ( 1 )
            {
              v190 = (const char *)v189[11];
              if ( v190 )
              {
                if ( !strcasecmp(v190, v188) )
                  break;
              }
              v189 = (_DWORD *)*v189;
              if ( !v189 )
                goto LABEL_462;
            }
            sub_64E00(5, "unpeered %s", v188);
            sub_36214(v189, "GONE");
            sub_31FC4(v189);
          }
LABEL_462:
          memset(s, 0, 0x20u);
          HIDWORD(s[0]) = *((unsigned __int16 *)n[2] + 4);
          s[1] = 0x1100000002LL;
          result = sub_68520(v188, "ntp", s, 2, sub_D368, 0);
        }
      }
      else
      {
        result = sub_31C78(*((unsigned __int16 *)n + 2));
        v220 = result;
        if ( result )
        {
          v221 = (const char *)sub_6C2E8(result + 16);
          sub_64E00(5, "unpeered %s", v221);
          sub_36214(v220, "GONE");
          result = sub_31FC4(v220);
        }
      }
    }
  }
  v191 = (_DWORD *)v239[21];
  if ( !v191 )
    goto LABEL_489;
  v192 = (_DWORD *)*v191;
  if ( !*v191 )
    goto LABEL_489;
  do
  {
    v193 = v192[1];
    memset(v249, 0, sizeof(v249));
    if ( sub_CE10(*(_DWORD *)(v193 + 4), (unsigned __int16 *)v249) != 1 )
    {
      sub_64E00(3, "unrecognized fudge reference clock address %s, line ignored", *(const char **)(v193 + 4));
LABEL_468:
      result = (int)memset(s, 0, sizeof(s));
      v195 = (int **)v192[2];
      if ( v195 )
      {
        v196 = *v195;
        if ( *v195 )
        {
          v238 = 1;
          goto LABEL_477;
        }
      }
      goto LABEL_488;
    }
    if ( LOWORD(v249[0]) != 2 || LOWORD(v249[1]) != 32639 )
    {
      v208 = sub_6C2E8(v249);
      sub_64E00(3, "inappropriate address %s for the fudge command, line ignored", v208);
      goto LABEL_468;
    }
    memset(s, 0, sizeof(s));
    v198 = (int **)v192[2];
    if ( !v198 || (v196 = *v198) == 0 )
    {
LABEL_487:
      result = sub_3A3B4(v249, s, 0, v198, v235, v236);
      goto LABEL_488;
    }
    v238 = 0;
    do
    {
      while ( 1 )
      {
LABEL_477:
        result = v196[1];
        if ( result == 304 )
        {
          BYTE2(s[0]) = ~((unsigned int)~(BYTE2(s[0]) << 25) >> 25);
          if ( v196[4] )
            v205 = BYTE1(s[0]) | 8;
          else
            v205 = BYTE1(s[0]) & 0xF7;
          BYTE1(s[0]) = v205;
          goto LABEL_476;
        }
        if ( result <= 304 )
          break;
        if ( result == 418 )
        {
          BYTE2(s[0]) |= 4u;
          LODWORD(s[7]) = v196[4];
        }
        else if ( result <= 418 )
        {
          if ( result != 400 )
          {
LABEL_654:
            v232 = (const char *)sub_1BBB4(result, v194);
            sub_64E00(3, "Unexpected fudge flag %s (%d) for %s", v232, v196[1], *(const char **)(v193 + 4));
            v233 = v196[1];
            if ( !v233 )
              v233 = 1;
            exit(v233);
          }
          HIDWORD(s[7]) = 0;
          BYTE2(s[0]) |= 8u;
          strlen((const char *)v196[4]);
          result = _memcpy_chk((char *)&s[7] + 4, v196[4]);
        }
        else if ( result == 423 )
        {
          BYTE2(s[0]) |= 1u;
          s[5] = *((_QWORD *)v196 + 2);
        }
        else
        {
          if ( result != 424 )
            goto LABEL_654;
          BYTE2(s[0]) |= 2u;
          s[6] = *((_QWORD *)v196 + 2);
        }
LABEL_476:
        v196 = (int *)*v196;
        if ( !v196 )
          goto LABEL_486;
      }
      if ( result == 302 )
      {
        BYTE2(s[0]) |= 0x20u;
        if ( v196[4] )
          v207 = BYTE1(s[0]) | 2;
        else
          v207 = BYTE1(s[0]) & 0xFD;
        BYTE1(s[0]) = v207;
        goto LABEL_476;
      }
      if ( result > 302 )
      {
        BYTE2(s[0]) |= 0x40u;
        if ( v196[4] )
          v206 = BYTE1(s[0]) | 4;
        else
          v206 = BYTE1(s[0]) & 0xFB;
        BYTE1(s[0]) = v206;
        goto LABEL_476;
      }
      if ( result != 301 )
        goto LABEL_654;
      BYTE2(s[0]) |= 0x10u;
      if ( v196[4] )
        v197 = BYTE1(s[0]) | 1;
      else
        v197 = BYTE1(s[0]) & 0xFE;
      BYTE1(s[0]) = v197;
      v196 = (int *)*v196;
    }
    while ( v196 );
LABEL_486:
    v198 = (int **)v238;
    if ( !v238 )
      goto LABEL_487;
LABEL_488:
    v192 = (_DWORD *)*v192;
  }
  while ( v192 );
LABEL_489:
  v199 = (_DWORD *)v239[42];
  if ( v199 )
  {
    v200 = (_DWORD *)*v199;
    if ( *v199 )
    {
      while ( 1 )
      {
        v201 = v200[1];
        if ( v201 == 322 )
          break;
        if ( v201 <= 322 )
        {
          switch ( v201 )
          {
            case 263:
              result = sub_3A860(result);
              break;
            case 282:
              result = sub_241C4(result);
              break;
            case 262:
              result = sub_32B9C();
              break;
          }
          goto LABEL_496;
        }
        switch ( v201 )
        {
          case 420:
            result = sub_38C70(result);
            goto LABEL_496;
          case 425:
            result = sub_41648(result);
            goto LABEL_496;
          case 353:
            result = sub_32A70(result);
            v200 = (_DWORD *)*v200;
            if ( !v200 )
              return result;
            break;
          default:
LABEL_496:
            v200 = (_DWORD *)*v200;
            if ( !v200 )
              return result;
            break;
        }
      }
      result = sub_18D18(result);
      goto LABEL_496;
    }
  }
  return result;
}

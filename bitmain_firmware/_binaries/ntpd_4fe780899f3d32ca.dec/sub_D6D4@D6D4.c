int __fastcall sub_D6D4(int a1, FILE *s, int a3)
{
  int v3; // r11
  _DWORD **v5; // r3
  _DWORD *i; // r4
  const char *v7; // r9
  char *v8; // r0
  int v9; // r3
  const char *v10; // r0
  int ***v11; // r3
  int **v12; // r4
  const char *v13; // r3
  _DWORD *v14; // r3
  _DWORD *v15; // r4
  const char *v16; // r0
  _DWORD *v17; // r3
  _DWORD *v18; // r6
  _DWORD *v19; // r3
  _DWORD *v20; // r4
  const char *v21; // r0
  int v22; // r3
  const char *v23; // r0
  int ***v24; // r3
  int **v25; // r4
  const char *v26; // r0
  int v27; // r3
  const char *v28; // r3
  const char *v29; // r3
  _DWORD *v30; // r3
  _DWORD *v31; // r4
  int v32; // r3
  int v33; // r3
  int v34; // r3
  _DWORD *v35; // r3
  int v36; // r7
  const char *v37; // r0
  _DWORD *v38; // r4
  const char *v39; // r0
  int v40; // r3
  _DWORD *v41; // r3
  const char *v42; // r0
  const char *v43; // r0
  _DWORD *v44; // r3
  _DWORD *v45; // r4
  int v46; // r0
  const char *v47; // r0
  int v48; // r3
  const char *v49; // r9
  char *v50; // r0
  _DWORD *v51; // r3
  _DWORD *v52; // r4
  const char *v53; // r0
  _DWORD *v54; // r3
  _DWORD *v55; // r4
  const char *v56; // r6
  char *v57; // r0
  int **v58; // r3
  int *v59; // r7
  int v60; // r4
  const char *v61; // r0
  int v62; // r3
  int v63; // r6
  const char *v64; // r4
  int v65; // r3
  int v66; // r3
  const char *v67; // r3
  _DWORD *v68; // r3
  _DWORD *v69; // r4
  const char *v70; // r0
  _DWORD *v71; // r3
  _DWORD *v72; // r6
  const char *v73; // r4
  _DWORD *v74; // r3
  _DWORD *v75; // r4
  const char *v76; // r11
  char *v77; // r0
  int v78; // r3
  const char *v79; // r0
  int ***v80; // r3
  int **v81; // r4
  int ***v82; // r3
  int **v83; // r4
  _DWORD *v84; // r3
  _DWORD *v85; // r4
  _DWORD *v86; // r3
  _DWORD *v87; // r4
  const char *v88; // r0
  _DWORD *v89; // r3
  _DWORD *v90; // r4
  const char *v91; // r0
  int ***v92; // r3
  int **v93; // r6
  int *v94; // r2
  int *v95; // r4
  const char *v96; // r7
  int v97; // r10
  int *v98; // r3
  int *v99; // r3
  _DWORD *v100; // r4
  int v101; // r0
  const char *v102; // r0
  _DWORD *v103; // r3
  _DWORD *v104; // r4
  const char *v105; // r6
  int v106; // r0
  const char *v107; // r0
  const char *v108; // r0
  int v109; // r0
  const char *v110; // r3
  int ***v111; // r3
  int **v112; // r4
  _DWORD *v113; // r3
  _DWORD *v114; // r4
  char *v115; // r7
  char *v116; // r6
  _DWORD *v117; // r3
  _DWORD *v118; // r4
  _DWORD *v119; // r3
  _DWORD *v120; // r6
  int ***v121; // r3
  int **j; // r4
  int *v123; // r3
  _DWORD *v124; // r3
  _DWORD *v125; // r4
  const char *v126; // r0
  int *v128; // r3
  _DWORD *v129; // r3
  struct tm *v130; // r0
  size_t v131; // r0
  int v132; // r3
  const char *v133; // r2
  const char *v134; // r0
  char *v135; // r0
  int v136; // [sp+18h] [bp-6Ch]
  unsigned __int16 v137; // [sp+20h] [bp-64h] BYREF
  unsigned __int8 v138; // [sp+24h] [bp-60h]
  unsigned __int8 v139; // [sp+25h] [bp-5Fh]
  char v140[80]; // [sp+2Ch] [bp-58h] BYREF

  v3 = a1;
  if ( a3 )
  {
    v130 = localtime((const time_t *)(a1 + 32));
    v131 = strftime(v140, 0x50u, "%Y-%m-%d %H:%M:%S", v130);
    v132 = *(_DWORD *)(v3 + 12);
    if ( !v131 )
      v140[0] = 0;
    if ( v132 == 1 )
      v133 = "ntpq remote config from";
    else
      v133 = "startup configuration file";
    _fprintf_chk(s, 1, "# %s %s %s\n", v140, v133, *(const char **)(v3 + 24));
  }
  v5 = *(_DWORD ***)(v3 + 160);
  if ( v5 )
  {
    for ( i = *v5; i; i = (_DWORD *)*i )
    {
      while ( 1 )
      {
        v9 = i[2];
        if ( v9 != 319 )
          break;
        v10 = (const char *)sub_1C0BC(i[1]);
        _fprintf_chk(s, 1, "%s %d\n", v10, i[4]);
        i = (_DWORD *)*i;
        if ( !i )
          goto LABEL_12;
      }
      if ( v9 == 419 )
      {
        v42 = (const char *)sub_1C0BC(i[1]);
        _fprintf_chk(s, 1, "%s \"%s\"", v42, (const char *)i[4]);
        if ( i[1] == 290 && *i && *(_DWORD *)(*i + 4) == 441 )
        {
          i = (_DWORD *)*i;
          v135 = sub_C7C0();
          _fprintf_chk(s, 1, " %s\n", v135);
        }
        else
        {
          fputc(10, s);
        }
      }
      else if ( v9 == 289 )
      {
        v7 = (const char *)sub_1C0BC(i[1]);
        v8 = sub_C7C0();
        _fprintf_chk(s, 1, "%s %s\n", v7, v8);
      }
    }
  }
LABEL_12:
  v11 = *(int ****)(v3 + 140);
  if ( v11 )
  {
    v12 = *v11;
    if ( *v11 )
    {
      fwrite("logconfig", 1u, 9u, s);
      do
      {
        _fprintf_chk(s, 1, " %c%s", v12[1], (const char *)v12[4]);
        v12 = (int **)*v12;
      }
      while ( v12 );
      fputc(10, s);
    }
  }
  v13 = *(const char **)(v3 + 64);
  if ( v13 )
    _fprintf_chk(s, 1, "statsdir \"%s\"\n", v13);
  v14 = *(_DWORD **)(v3 + 60);
  if ( v14 )
  {
    v15 = (_DWORD *)*v14;
    if ( *v14 )
    {
      fwrite("statistics", 1u, 0xAu, s);
      do
      {
        v16 = (const char *)sub_1C0BC(v15[1]);
        _fprintf_chk(s, 1, " %s", v16);
        v15 = (_DWORD *)*v15;
      }
      while ( v15 );
      fputc(10, s);
    }
  }
  v17 = *(_DWORD **)(v3 + 68);
  if ( v17 )
  {
    v18 = (_DWORD *)*v17;
    if ( *v17 )
    {
      do
      {
        while ( 1 )
        {
          v19 = (_DWORD *)v18[2];
          if ( v19 )
          {
            v20 = (_DWORD *)*v19;
            if ( *v19 )
              break;
          }
          v18 = (_DWORD *)*v18;
          if ( !v18 )
            goto LABEL_38;
        }
        v21 = (const char *)sub_1C0BC(v18[1]);
        _fprintf_chk(s, 1, "filegen %s", v21);
        do
        {
          while ( 1 )
          {
            v22 = v20[1];
            if ( v22 != 433 )
              break;
            v23 = (const char *)sub_1C0BC(v20[4]);
            _fprintf_chk(s, 1, " type %s", v23);
            v20 = (_DWORD *)*v20;
            if ( !v20 )
              goto LABEL_37;
          }
          if ( v22 == 446 )
          {
            v43 = (const char *)sub_1C0BC(v20[4]);
            _fprintf_chk(s, 1, " %s", v43);
          }
          else if ( v22 == 298 )
          {
            _fprintf_chk(s, 1, " file %s", (const char *)v20[4]);
          }
          v20 = (_DWORD *)*v20;
        }
        while ( v20 );
LABEL_37:
        fputc(10, s);
        v18 = (_DWORD *)*v18;
      }
      while ( v18 );
    }
  }
LABEL_38:
  v24 = *(int ****)(v3 + 112);
  if ( v24 )
  {
    v25 = *v24;
    if ( *v24 )
    {
      fwrite("crypto", 1u, 6u, s);
      do
      {
        v26 = (const char *)sub_1C0BC(v25[1]);
        _fprintf_chk(s, 1, " %s %s", v26, (const char *)v25[4]);
        v25 = (int **)*v25;
      }
      while ( v25 );
      fputc(10, s);
    }
  }
  v27 = *(_DWORD *)(v3 + 128);
  if ( v27 )
    _fprintf_chk(s, 1, "revoke %d\n", v27);
  v28 = *(const char **)(v3 + 120);
  if ( v28 )
    _fprintf_chk(s, 1, "keysdir \"%s\"\n", v28);
  v29 = *(const char **)(v3 + 116);
  if ( v29 )
    _fprintf_chk(s, 1, "keys \"%s\"\n", v29);
  v30 = *(_DWORD **)(v3 + 132);
  if ( v30 )
  {
    v31 = (_DWORD *)*v30;
    if ( *v30 )
    {
      fwrite("trustedkey", 1u, 0xAu, s);
      do
      {
        while ( 1 )
        {
          v32 = v31[2];
          if ( v32 != 319 )
            break;
          _fprintf_chk(s, 1, " %d", v31[4]);
          v31 = (_DWORD *)*v31;
          if ( !v31 )
            goto LABEL_57;
        }
        if ( v32 == 321 )
          _fprintf_chk(s, 1, " (%d ... %d)", v31[4], v31[5]);
        v31 = (_DWORD *)*v31;
      }
      while ( v31 );
LABEL_57:
      fputc(10, s);
    }
  }
  v33 = *(_DWORD *)(v3 + 104);
  if ( v33 )
    _fprintf_chk(s, 1, "controlkey %d\n", v33);
  v34 = *(_DWORD *)(v3 + 124);
  if ( v34 )
    _fprintf_chk(s, 1, "requestkey %d\n", v34);
  v35 = *(_DWORD **)(v3 + 96);
  v36 = 1;
  v37 = "enable";
  if ( !v35 )
    goto LABEL_67;
  v38 = (_DWORD *)*v35;
  if ( !*v35 )
    goto LABEL_67;
  while ( 1 )
  {
    fputs(v37, s);
    do
    {
      v39 = (const char *)sub_1C0BC(v38[4]);
      _fprintf_chk(s, 1, " %s", v39);
      v38 = (_DWORD *)*v38;
    }
    while ( v38 );
    fputc(10, s);
LABEL_67:
    v40 = v36 - 1;
    v36 = 0;
    if ( v40 == -1 )
      break;
    v41 = *(_DWORD **)(v3 + 100);
    if ( !v41 )
      break;
    v38 = (_DWORD *)*v41;
    if ( !*v41 )
      break;
    v37 = "disable";
  }
  v44 = *(_DWORD **)(v3 + 56);
  if ( v44 )
  {
    v45 = (_DWORD *)*v44;
    if ( *v44 )
    {
      fwrite("tos", 1u, 3u, s);
      do
      {
        while ( 1 )
        {
          v48 = v45[2];
          if ( v48 != 289 )
            break;
          v49 = (const char *)sub_1C0BC(v45[1]);
          v50 = sub_C7C0();
          _fprintf_chk(s, 1, " %s %s", v49, v50);
          v45 = (_DWORD *)*v45;
          if ( !v45 )
            goto LABEL_85;
        }
        if ( v48 == 319 )
        {
          v46 = v45[1];
          if ( v46 == 267 )
          {
            sub_65BF4(&v137, v45[4] + 693596);
            v134 = (const char *)sub_1C0BC(v45[1]);
            _fprintf_chk(s, 1, " %s \"%04hu-%02hu-%02hu\"", v134, v137, v138, v139);
          }
          else
          {
            v47 = (const char *)sub_1C0BC(v46);
            _fprintf_chk(s, 1, " %s %d", v47, v45[4]);
          }
        }
        v45 = (_DWORD *)*v45;
      }
      while ( v45 );
LABEL_85:
      fputc(10, s);
    }
  }
  v51 = *(_DWORD **)(v3 + 88);
  if ( v51 )
  {
    v52 = (_DWORD *)*v51;
    if ( *v51 )
    {
      fwrite("rlimit", 1u, 6u, s);
      do
      {
        if ( v52[2] != 319 )
          sub_6ECC0("ntp_config.c", 760, 2, "319 == atrv->type");
        v53 = (const char *)sub_1C0BC(v52[1]);
        _fprintf_chk(s, 1, " %s %d", v53, v52[4]);
        v52 = (_DWORD *)*v52;
      }
      while ( v52 );
      fputc(10, s);
    }
  }
  v54 = *(_DWORD **)(v3 + 92);
  if ( v54 )
  {
    v55 = (_DWORD *)*v54;
    if ( *v54 )
    {
      fwrite("tinker", 1u, 6u, s);
      do
      {
        if ( v55[2] != 289 )
          sub_6ECC0("ntp_config.c", 771, 2, "289 == atrv->type");
        v56 = (const char *)sub_1C0BC(v55[1]);
        v57 = sub_C7C0();
        _fprintf_chk(s, 1, " %s %s", v56, v57);
        v55 = (_DWORD *)*v55;
      }
      while ( v55 );
      fputc(10, s);
    }
  }
  if ( *(_DWORD *)(v3 + 44) )
    fwrite("broadcastclient\n", 1u, 0x10u, s);
  v58 = *(int ***)(v3 + 36);
  if ( v58 )
  {
    v59 = *v58;
    if ( *v58 )
    {
      v136 = v3;
      do
      {
        v60 = v59[2];
        v61 = (const char *)sub_1C0BC(v59[1]);
        fputs(v61, s);
        v62 = *(unsigned __int16 *)(v60 + 8);
        if ( v62 == 2 )
        {
          fwrite(" -4", 1u, 3u, s);
        }
        else if ( v62 == 10 )
        {
          fwrite(" -6", 1u, 3u, s);
        }
        _fprintf_chk(s, 1, " %s", *(const char **)(v60 + 4));
        if ( *((_BYTE *)v59 + 16) )
          _fprintf_chk(s, 1, " minpoll %u", *((unsigned __int8 *)v59 + 16));
        if ( *((_BYTE *)v59 + 17) )
          _fprintf_chk(s, 1, " maxpoll %u", *((unsigned __int8 *)v59 + 17));
        v63 = v59[5];
        if ( v63 )
        {
          v64 = *(const char **)(v60 + 4);
          if ( strlen(v64) > 8 && !memcmp(v64, "127.127.", 8u) )
            _fprintf_chk(s, 1, " mode %u", v63);
          else
            _fprintf_chk(s, 1, " ttl %u", v63);
        }
        v65 = *((unsigned __int8 *)v59 + 24);
        if ( v65 != 4 )
          _fprintf_chk(s, 1, " version %u", v65);
        v66 = v59[7];
        if ( v66 )
          _fprintf_chk(s, 1, " key %u", v66);
        v67 = (const char *)v59[8];
        if ( v67 )
          _fprintf_chk(s, 1, " ident \"%s\"", v67);
        v68 = (_DWORD *)v59[3];
        if ( v68 )
        {
          v69 = (_DWORD *)*v68;
          if ( *v68 )
          {
            if ( v69[1] != 446 )
LABEL_252:
              sub_6ECC0("ntp_config.c", 832, 2, "446 == atrv->attr");
            if ( v69[2] != 319 )
LABEL_253:
              sub_6ECC0("ntp_config.c", 833, 2, "319 == atrv->type");
            while ( 1 )
            {
              v70 = (const char *)sub_1C0BC(v69[4]);
              _fprintf_chk(s, 1, " %s", v70);
              v69 = (_DWORD *)*v69;
              if ( !v69 )
                break;
              if ( v69[1] != 446 )
                goto LABEL_252;
              if ( v69[2] != 319 )
                goto LABEL_253;
            }
          }
        }
        fputc(10, s);
        v71 = *(_DWORD **)(v136 + 84);
        if ( v71 )
        {
          v72 = (_DWORD *)*v71;
          if ( *v71 )
          {
            do
            {
              while ( 1 )
              {
                v73 = *(const char **)(v59[2] + 4);
                if ( !strcmp(v73, *(const char **)(v72[1] + 4)) )
                  break;
                v72 = (_DWORD *)*v72;
                if ( !v72 )
                  goto LABEL_143;
              }
              _fprintf_chk(s, 1, "fudge %s", v73);
              v74 = (_DWORD *)v72[2];
              if ( v74 )
              {
                v75 = (_DWORD *)*v74;
                if ( *v74 )
                {
                  do
                  {
                    while ( 1 )
                    {
                      v78 = v75[2];
                      if ( v78 != 319 )
                        break;
                      v79 = (const char *)sub_1C0BC(v75[1]);
                      _fprintf_chk(s, 1, " %s %d", v79, v75[4]);
                      v75 = (_DWORD *)*v75;
                      if ( !v75 )
                        goto LABEL_142;
                    }
                    if ( v78 == 419 )
                    {
                      v108 = (const char *)sub_1C0BC(v75[1]);
                      _fprintf_chk(s, 1, " %s %s", v108, (const char *)v75[4]);
                    }
                    else if ( v78 == 289 )
                    {
                      v76 = (const char *)sub_1C0BC(v75[1]);
                      v77 = sub_C7C0();
                      _fprintf_chk(s, 1, " %s %s", v76, v77);
                    }
                    v75 = (_DWORD *)*v75;
                  }
                  while ( v75 );
                }
              }
LABEL_142:
              fputc(10, s);
              v72 = (_DWORD *)*v72;
            }
            while ( v72 );
          }
        }
LABEL_143:
        v59 = (int *)*v59;
      }
      while ( v59 );
      v3 = v136;
    }
  }
  v80 = *(int ****)(v3 + 48);
  if ( v80 )
  {
    v81 = *v80;
    if ( *v80 )
    {
      fwrite("manycastserver", 1u, 0xEu, s);
      do
      {
        _fprintf_chk(s, 1, " %s", (const char *)v81[1]);
        v81 = (int **)*v81;
      }
      while ( v81 );
      fputc(10, s);
    }
  }
  v82 = *(int ****)(v3 + 52);
  if ( v82 )
  {
    v83 = *v82;
    if ( *v82 )
    {
      fwrite("multicastclient", 1u, 0xFu, s);
      do
      {
        _fprintf_chk(s, 1, " %s", (const char *)v83[1]);
        v83 = (int **)*v83;
      }
      while ( v83 );
      fputc(10, s);
    }
  }
  v84 = *(_DWORD **)(v3 + 40);
  if ( v84 )
  {
    v85 = (_DWORD *)*v84;
    if ( *v84 )
    {
      do
      {
        _fprintf_chk(s, 1, "unpeer %s\n", *(const char **)(v85[2] + 4));
        v85 = (_DWORD *)*v85;
      }
      while ( v85 );
    }
  }
  v86 = *(_DWORD **)(v3 + 76);
  if ( v86 )
  {
    v87 = (_DWORD *)*v86;
    if ( *v86 )
    {
      fwrite("mru", 1u, 3u, s);
      do
      {
        v88 = (const char *)sub_1C0BC(v87[1]);
        _fprintf_chk(s, 1, " %s %d", v88, v87[4]);
        v87 = (_DWORD *)*v87;
      }
      while ( v87 );
      fputc(10, s);
    }
  }
  v89 = *(_DWORD **)(v3 + 72);
  if ( v89 )
  {
    v90 = (_DWORD *)*v89;
    if ( *v89 )
    {
      fwrite("discard", 1u, 7u, s);
      do
      {
        v91 = (const char *)sub_1C0BC(v90[1]);
        _fprintf_chk(s, 1, " %s %d", v91, v90[4]);
        v90 = (_DWORD *)*v90;
      }
      while ( v90 );
      fputc(10, s);
    }
  }
  v92 = *(int ****)(v3 + 80);
  if ( v92 )
  {
    v93 = *v92;
    if ( *v92 )
    {
      while ( 1 )
      {
        v94 = v93[1];
        if ( !v94 )
          break;
        v95 = v93[2];
        v96 = (const char *)v94[1];
        if ( !v95 )
          goto LABEL_174;
        v97 = v95[1];
        if ( *((_WORD *)v94 + 4) != 2
          || strcmp((const char *)v94[1], "0.0.0.0")
          || (v109 = strcmp((const char *)v97, "0.0.0.0"), v110 = "-4 default", v109) )
        {
          if ( *((_WORD *)v95 + 4) != 10 )
            goto LABEL_174;
          if ( *v96 != 58 || v96[1] != 58 )
            goto LABEL_196;
          if ( v96[2] )
            goto LABEL_174;
          if ( *(_BYTE *)v97 != 58 || *(_BYTE *)(v97 + 1) != 58 )
          {
LABEL_196:
            _fprintf_chk(s, 1, "restrict %s", v96);
            v98 = v93[2];
            if ( !v98 )
              goto LABEL_175;
            goto LABEL_197;
          }
          if ( *(_BYTE *)(v97 + 2) )
            goto LABEL_174;
          v110 = "-6 default";
        }
        _fprintf_chk(s, 1, "restrict %s", v110);
LABEL_175:
        _fprintf_chk(s, 1, " ippeerlimit %d", *((__int16 *)v93 + 10));
        v99 = v93[3];
        if ( v99 )
        {
          v100 = (_DWORD *)*v99;
          if ( *v99 )
          {
            do
            {
              v101 = v100[1];
              if ( v101 != 409 )
              {
                v102 = (const char *)sub_1C0BC(v101);
                _fprintf_chk(s, 1, " %s", v102);
              }
              v100 = (_DWORD *)*v100;
            }
            while ( v100 );
          }
        }
        fputc(10, s);
        v93 = (int **)*v93;
        if ( !v93 )
          goto LABEL_181;
      }
      v128 = v93[3];
      if ( v128 )
      {
        v129 = (_DWORD *)*v128;
        if ( v129 )
        {
          if ( v129[1] == 409 )
          {
            v96 = "source";
          }
          else
          {
            do
            {
              v129 = (_DWORD *)*v129;
              if ( !v129 )
              {
                v96 = "default";
                goto LABEL_174;
              }
            }
            while ( v129[1] != 409 );
            v96 = "source";
          }
        }
        else
        {
          v96 = "default";
        }
      }
      else
      {
        v96 = "default";
      }
LABEL_174:
      _fprintf_chk(s, 1, "restrict %s", v96);
      v98 = v93[2];
      if ( !v98 )
        goto LABEL_175;
LABEL_197:
      _fprintf_chk(s, 1, " mask %s", (const char *)v98[1]);
      goto LABEL_175;
    }
  }
LABEL_181:
  v103 = *(_DWORD **)(v3 + 164);
  if ( v103 )
  {
    v104 = (_DWORD *)*v103;
    if ( *v103 )
    {
      do
      {
        v105 = (const char *)sub_1C0BC(v104[3]);
        v106 = v104[1];
        if ( v106 )
          v107 = (const char *)sub_1C0BC(v106);
        else
          v107 = (const char *)v104[2];
        _fprintf_chk(s, 1, "interface %s %s\n", v105, v107);
        v104 = (_DWORD *)*v104;
      }
      while ( v104 );
    }
  }
  v111 = *(int ****)(v3 + 144);
  if ( v111 )
  {
    v112 = *v111;
    if ( *v111 )
    {
      fwrite("phone", 1u, 5u, s);
      do
      {
        _fprintf_chk(s, 1, " \"%s\"", (const char *)v112[1]);
        v112 = (int **)*v112;
      }
      while ( v112 );
      fputc(10, s);
    }
  }
  v113 = *(_DWORD **)(v3 + 148);
  if ( v113 )
  {
    v114 = (_DWORD *)*v113;
    if ( *v113 )
    {
      do
      {
        v115 = (char *)sub_1C50C(v114[1]);
        v116 = (char *)sub_1C50C(v114[2]);
        _fprintf_chk(s, 1, "setvar %s = %s", v115, v116);
        free(v115);
        free(v116);
        if ( v114[3] )
          fwrite(" default", 1u, 8u, s);
        fputc(10, s);
        v114 = (_DWORD *)*v114;
      }
      while ( v114 );
    }
  }
  v117 = *(_DWORD **)(v3 + 152);
  if ( v117 )
  {
    v118 = (_DWORD *)*v117;
    if ( *v117 )
    {
      fwrite("ttl", 1u, 3u, s);
      do
      {
        _fprintf_chk(s, 1, " %d", v118[1]);
        v118 = (_DWORD *)*v118;
      }
      while ( v118 );
      fputc(10, s);
    }
  }
  v119 = *(_DWORD **)(v3 + 156);
  if ( v119 )
  {
    v120 = (_DWORD *)*v119;
    if ( *v119 )
    {
      do
      {
        _fprintf_chk(s, 1, "trap %s", *(const char **)(v120[1] + 4));
        v121 = (int ***)v120[2];
        if ( v121 )
        {
          for ( j = *v121; j; j = (int **)*j )
          {
            while ( 1 )
            {
              v123 = j[1];
              if ( v123 != &dword_140 )
                break;
              _fprintf_chk(s, 1, " interface %s", (const char *)j[4]);
              j = (int **)*j;
              if ( !j )
                goto LABEL_227;
            }
            if ( v123 == (int *)((char *)&dword_180[2] + 1) )
              _fprintf_chk(s, 1, " port %d", j[4]);
          }
        }
LABEL_227:
        fputc(10, s);
        v120 = (_DWORD *)*v120;
      }
      while ( v120 );
    }
  }
  v124 = *(_DWORD **)(v3 + 168);
  if ( v124 )
  {
    v125 = (_DWORD *)*v124;
    if ( *v124 )
    {
      fwrite("reset", 1u, 5u, s);
      do
      {
        v126 = (const char *)sub_1C0BC(v125[1]);
        _fprintf_chk(s, 1, " %s", v126);
        v125 = (_DWORD *)*v125;
      }
      while ( v125 );
      fputc(10, s);
    }
  }
  return 0;
}

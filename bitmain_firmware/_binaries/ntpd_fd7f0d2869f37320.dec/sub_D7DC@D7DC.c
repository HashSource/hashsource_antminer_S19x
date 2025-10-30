int __fastcall sub_D7DC(int a1, FILE *s, int a3)
{
  _DWORD **v4; // r3
  _DWORD *i; // r4
  const char *v6; // r11
  char *v7; // r0
  int v8; // r3
  const char *v9; // r0
  _DWORD *v10; // r3
  _DWORD *v11; // r4
  const char *v12; // r3
  _DWORD *v13; // r3
  _DWORD *v14; // r4
  int v15; // r0
  _DWORD *v16; // r3
  _DWORD *v17; // r6
  _DWORD *v18; // r3
  _DWORD *v19; // r4
  const char *v20; // r0
  int v21; // r3
  const char *v22; // r0
  _DWORD *v23; // r3
  _DWORD *v24; // r4
  int v25; // r0
  int v26; // r3
  const char *v27; // r3
  const char *v28; // r3
  _DWORD *v29; // r3
  _DWORD *v30; // r4
  int v31; // r3
  int v32; // r3
  int v33; // r3
  int v34; // r7
  _DWORD *v35; // r3
  const char *v36; // r0
  _DWORD *v37; // r4
  const char *v38; // r0
  int v39; // r3
  _DWORD *v40; // r3
  const char *v41; // r0
  const char *v42; // r0
  _DWORD *v43; // r3
  _DWORD *v44; // r4
  int v45; // r0
  int v46; // r0
  int v47; // r3
  int v48; // r9
  char *v49; // r0
  _DWORD *v50; // r3
  _DWORD *v51; // r4
  int v52; // r0
  _DWORD *v53; // r3
  _DWORD *v54; // r4
  int v55; // r6
  char *v56; // r0
  int **v57; // r3
  int *v58; // r7
  int v59; // r4
  const char *v60; // r0
  int v61; // r3
  int v62; // r6
  const char *v63; // r4
  int v64; // r3
  int v65; // r3
  const char *v66; // r3
  _DWORD *v67; // r3
  _DWORD *v68; // r4
  const char *v69; // r0
  _DWORD *v70; // r3
  _DWORD *v71; // r6
  const char *v72; // r4
  _DWORD *v73; // r3
  _DWORD *v74; // r4
  const char *v75; // r11
  char *v76; // r0
  int v77; // r3
  int v78; // r0
  _DWORD *v79; // r3
  _DWORD *v80; // r4
  _DWORD *v81; // r3
  _DWORD *v82; // r4
  _DWORD *v83; // r3
  _DWORD *v84; // r4
  _DWORD *v85; // r3
  _DWORD *v86; // r4
  int v87; // r0
  _DWORD *v88; // r3
  _DWORD *v89; // r4
  int v90; // r0
  int ***v91; // r3
  int **v92; // r7
  int *v93; // r2
  int *v94; // r4
  const char *v95; // r6
  int v96; // r11
  int *v97; // r3
  int *v98; // r3
  _DWORD *v99; // r4
  int v100; // r0
  const char *v101; // r0
  _DWORD *v102; // r3
  _DWORD *v103; // r4
  const char *v104; // r6
  int v105; // r0
  const char *v106; // r0
  int v107; // r0
  int v108; // r0
  _DWORD *v109; // r3
  _DWORD *v110; // r4
  _DWORD *v111; // r3
  _DWORD *v112; // r4
  char *v113; // r7
  char *v114; // r6
  _DWORD *v115; // r3
  _DWORD *v116; // r4
  _DWORD *v117; // r3
  _DWORD *v118; // r6
  int ***v119; // r3
  int **j; // r4
  int *v121; // r3
  _DWORD *v122; // r3
  _DWORD *v123; // r4
  int v124; // r0
  const char *v126; // r3
  int *v127; // r3
  _DWORD *v128; // r3
  struct tm *v129; // r0
  size_t v130; // r0
  int v131; // r3
  const char *v132; // r2
  char *v133; // r0
  unsigned __int16 v135; // [sp+20h] [bp-64h] BYREF
  unsigned __int8 v136; // [sp+24h] [bp-60h]
  unsigned __int8 v137; // [sp+25h] [bp-5Fh]
  char v138[80]; // [sp+2Ch] [bp-58h] BYREF

  if ( a3 )
  {
    v129 = localtime((const time_t *)(a1 + 32));
    v130 = strftime(v138, 0x50u, "%Y-%m-%d %H:%M:%S", v129);
    v131 = *(_DWORD *)(a1 + 12);
    if ( !v130 )
      v138[0] = 0;
    if ( v131 == 1 )
      v132 = "ntpq remote config from";
    else
      v132 = "startup configuration file";
    _fprintf_chk(s, 1, "# %s %s %s\n", v138, v132, *(const char **)(a1 + 24));
  }
  v4 = *(_DWORD ***)(a1 + 160);
  if ( v4 )
  {
    for ( i = *v4; i; i = (_DWORD *)*i )
    {
      while ( 1 )
      {
        v8 = i[2];
        if ( v8 != 319 )
          break;
        v9 = (const char *)sub_1C300(i[1]);
        _fprintf_chk(s, 1, "%s %d\n", v9, i[4]);
        i = (_DWORD *)*i;
        if ( !i )
          goto LABEL_12;
      }
      if ( v8 == 419 )
      {
        v41 = (const char *)sub_1C300(i[1]);
        _fprintf_chk(s, 1, "%s \"%s\"", v41, (const char *)i[4]);
        if ( i[1] == 290 && *i && *(_DWORD *)(*i + 4) == 441 )
        {
          i = (_DWORD *)*i;
          v133 = sub_C8C0();
          _fprintf_chk(s, 1, " %s\n", v133);
        }
        else
        {
          fputc(10, s);
        }
      }
      else if ( v8 == 289 )
      {
        v6 = (const char *)sub_1C300(i[1]);
        v7 = sub_C8C0();
        _fprintf_chk(s, 1, "%s %s\n", v6, v7);
      }
    }
  }
LABEL_12:
  v10 = *(_DWORD **)(a1 + 140);
  if ( v10 )
  {
    v11 = (_DWORD *)*v10;
    if ( *v10 )
    {
      fwrite("logconfig", 1u, 9u, s);
      do
      {
        _fprintf_chk(s, 1, " %c%s", v11[1], v11[4]);
        v11 = (_DWORD *)*v11;
      }
      while ( v11 );
      fputc(10, s);
    }
  }
  v12 = *(const char **)(a1 + 64);
  if ( v12 )
    _fprintf_chk(s, 1, "statsdir \"%s\"\n", v12);
  v13 = *(_DWORD **)(a1 + 60);
  if ( v13 )
  {
    v14 = (_DWORD *)*v13;
    if ( *v13 )
    {
      fwrite("statistics", 1u, 0xAu, s);
      do
      {
        v15 = sub_1C300(v14[1]);
        _fprintf_chk(s, 1, " %s", v15);
        v14 = (_DWORD *)*v14;
      }
      while ( v14 );
      fputc(10, s);
    }
  }
  v16 = *(_DWORD **)(a1 + 68);
  if ( v16 )
  {
    v17 = (_DWORD *)*v16;
    if ( *v16 )
    {
      do
      {
        v18 = (_DWORD *)v17[2];
        if ( v18 )
        {
          v19 = (_DWORD *)*v18;
          if ( *v18 )
          {
            v20 = (const char *)sub_1C300(v17[1]);
            _fprintf_chk(s, 1, "filegen %s", v20);
            do
            {
              while ( 1 )
              {
                v21 = v19[1];
                if ( v21 != 433 )
                  break;
                v22 = (const char *)sub_1C300(v19[4]);
                _fprintf_chk(s, 1, " type %s", v22);
                v19 = (_DWORD *)*v19;
                if ( !v19 )
                  goto LABEL_35;
              }
              if ( v21 == 446 )
              {
                v42 = (const char *)sub_1C300(v19[4]);
                _fprintf_chk(s, 1, " %s", v42);
              }
              else if ( v21 == 298 )
              {
                _fprintf_chk(s, 1, " file %s", (const char *)v19[4]);
              }
              v19 = (_DWORD *)*v19;
            }
            while ( v19 );
LABEL_35:
            fputc(10, s);
          }
        }
        v17 = (_DWORD *)*v17;
      }
      while ( v17 );
    }
  }
  v23 = *(_DWORD **)(a1 + 112);
  if ( v23 )
  {
    v24 = (_DWORD *)*v23;
    if ( *v23 )
    {
      fwrite("crypto", 1u, 6u, s);
      do
      {
        v25 = sub_1C300(v24[1]);
        _fprintf_chk(s, 1, " %s %s", v25, v24[4]);
        v24 = (_DWORD *)*v24;
      }
      while ( v24 );
      fputc(10, s);
    }
  }
  v26 = *(_DWORD *)(a1 + 128);
  if ( v26 )
    _fprintf_chk(s, 1, "revoke %d\n", v26);
  v27 = *(const char **)(a1 + 120);
  if ( v27 )
    _fprintf_chk(s, 1, "keysdir \"%s\"\n", v27);
  v28 = *(const char **)(a1 + 116);
  if ( v28 )
    _fprintf_chk(s, 1, "keys \"%s\"\n", v28);
  v29 = *(_DWORD **)(a1 + 132);
  if ( v29 )
  {
    v30 = (_DWORD *)*v29;
    if ( *v29 )
    {
      fwrite("trustedkey", 1u, 0xAu, s);
      do
      {
        while ( 1 )
        {
          v31 = v30[2];
          if ( v31 != 319 )
            break;
          _fprintf_chk(s, 1, " %d", v30[4]);
          v30 = (_DWORD *)*v30;
          if ( !v30 )
            goto LABEL_56;
        }
        if ( v31 == 321 )
          _fprintf_chk(s, 1, " (%d ... %d)", v30[4], v30[5]);
        v30 = (_DWORD *)*v30;
      }
      while ( v30 );
LABEL_56:
      fputc(10, s);
    }
  }
  v32 = *(_DWORD *)(a1 + 104);
  if ( v32 )
    _fprintf_chk(s, 1, "controlkey %d\n", v32);
  v33 = *(_DWORD *)(a1 + 124);
  if ( v33 )
    _fprintf_chk(s, 1, "requestkey %d\n", v33);
  v34 = 1;
  v35 = *(_DWORD **)(a1 + 96);
  v36 = "enable";
  if ( !v35 )
    goto LABEL_66;
  v37 = (_DWORD *)*v35;
  if ( !*v35 )
    goto LABEL_66;
  while ( 1 )
  {
    fputs(v36, s);
    do
    {
      v38 = (const char *)sub_1C300(v37[4]);
      _fprintf_chk(s, 1, " %s", v38);
      v37 = (_DWORD *)*v37;
    }
    while ( v37 );
    fputc(10, s);
LABEL_66:
    v39 = v34 - 1;
    v34 = 0;
    if ( v39 == -1 )
      break;
    v40 = *(_DWORD **)(a1 + 100);
    if ( !v40 )
      break;
    v37 = (_DWORD *)*v40;
    if ( !*v40 )
      break;
    v36 = "disable";
  }
  v43 = *(_DWORD **)(a1 + 56);
  if ( v43 )
  {
    v44 = (_DWORD *)*v43;
    if ( *v43 )
    {
      fwrite("tos", 1u, 3u, s);
      do
      {
        while ( 1 )
        {
          v47 = v44[2];
          if ( v47 != 289 )
            break;
          v48 = sub_1C300(v44[1]);
          v49 = sub_C8C0();
          _fprintf_chk(s, 1, " %s %s", v48, v49);
          v44 = (_DWORD *)*v44;
          if ( !v44 )
            goto LABEL_84;
        }
        if ( v47 == 319 )
        {
          v45 = v44[1];
          if ( v45 == 267 )
          {
            sub_66C70(&v135, v44[4] + 693596);
            v108 = sub_1C300(v44[1]);
            _fprintf_chk(s, 1, " %s \"%04hu-%02hu-%02hu\"", v108, v135, v136, v137);
          }
          else
          {
            v46 = sub_1C300(v45);
            _fprintf_chk(s, 1, " %s %d", v46, v44[4]);
          }
        }
        v44 = (_DWORD *)*v44;
      }
      while ( v44 );
LABEL_84:
      fputc(10, s);
    }
  }
  v50 = *(_DWORD **)(a1 + 88);
  if ( v50 )
  {
    v51 = (_DWORD *)*v50;
    if ( *v50 )
    {
      fwrite("rlimit", 1u, 6u, s);
      do
      {
        if ( v51[2] != 319 )
          sub_6FC54("ntp_config.c", 760, 2, "319 == atrv->type");
        v52 = sub_1C300(v51[1]);
        _fprintf_chk(s, 1, " %s %d", v52, v51[4]);
        v51 = (_DWORD *)*v51;
      }
      while ( v51 );
      fputc(10, s);
    }
  }
  v53 = *(_DWORD **)(a1 + 92);
  if ( v53 )
  {
    v54 = (_DWORD *)*v53;
    if ( *v53 )
    {
      fwrite("tinker", 1u, 6u, s);
      do
      {
        if ( v54[2] != 289 )
          sub_6FC54("ntp_config.c", 771, 2, "289 == atrv->type");
        v55 = sub_1C300(v54[1]);
        v56 = sub_C8C0();
        _fprintf_chk(s, 1, " %s %s", v55, v56);
        v54 = (_DWORD *)*v54;
      }
      while ( v54 );
      fputc(10, s);
    }
  }
  if ( *(_DWORD *)(a1 + 44) )
    fwrite("broadcastclient\n", 1u, 0x10u, s);
  v57 = *(int ***)(a1 + 36);
  if ( v57 )
  {
    v58 = *v57;
    if ( *v57 )
    {
      while ( 1 )
      {
        v59 = v58[2];
        v60 = (const char *)sub_1C300(v58[1]);
        fputs(v60, s);
        v61 = *(unsigned __int16 *)(v59 + 8);
        if ( v61 == 2 )
        {
          fwrite(" -4", 1u, 3u, s);
        }
        else if ( v61 == 10 )
        {
          fwrite(" -6", 1u, 3u, s);
        }
        _fprintf_chk(s, 1, " %s", *(const char **)(v59 + 4));
        if ( *((_BYTE *)v58 + 16) )
          _fprintf_chk(s, 1, " minpoll %u", *((unsigned __int8 *)v58 + 16));
        if ( *((_BYTE *)v58 + 17) )
          _fprintf_chk(s, 1, " maxpoll %u", *((unsigned __int8 *)v58 + 17));
        v62 = v58[5];
        if ( v62 )
        {
          v63 = *(const char **)(v59 + 4);
          if ( strlen(v63) > 8 && !memcmp(v63, "127.127.", 8u) )
            _fprintf_chk(s, 1, " mode %u", v62);
          else
            _fprintf_chk(s, 1, " ttl %u", v62);
        }
        v64 = *((unsigned __int8 *)v58 + 24);
        if ( v64 != 4 )
          _fprintf_chk(s, 1, " version %u", v64);
        v65 = v58[7];
        if ( v65 )
          _fprintf_chk(s, 1, " key %u", v65);
        v66 = (const char *)v58[8];
        if ( v66 )
          _fprintf_chk(s, 1, " ident \"%s\"", v66);
        v67 = (_DWORD *)v58[3];
        if ( v67 )
        {
          v68 = (_DWORD *)*v67;
          if ( *v67 )
          {
            if ( v68[1] != 446 )
LABEL_248:
              sub_6FC54("ntp_config.c", 832, 2, "446 == atrv->attr");
            if ( v68[2] != 319 )
LABEL_249:
              sub_6FC54("ntp_config.c", 833, 2, "319 == atrv->type");
            while ( 1 )
            {
              v69 = (const char *)sub_1C300(v68[4]);
              _fprintf_chk(s, 1, " %s", v69);
              v68 = (_DWORD *)*v68;
              if ( !v68 )
                break;
              if ( v68[1] != 446 )
                goto LABEL_248;
              if ( v68[2] != 319 )
                goto LABEL_249;
            }
          }
        }
        fputc(10, s);
        v70 = *(_DWORD **)(a1 + 84);
        if ( v70 )
        {
          v71 = (_DWORD *)*v70;
          if ( *v70 )
            break;
        }
LABEL_142:
        v58 = (int *)*v58;
        if ( !v58 )
          goto LABEL_143;
      }
      while ( 1 )
      {
        while ( 1 )
        {
          v72 = *(const char **)(v58[2] + 4);
          if ( !strcmp(v72, *(const char **)(v71[1] + 4)) )
            break;
          v71 = (_DWORD *)*v71;
          if ( !v71 )
            goto LABEL_142;
        }
        _fprintf_chk(s, 1, "fudge %s", v72);
        v73 = (_DWORD *)v71[2];
        if ( v73 )
        {
          v74 = (_DWORD *)*v73;
          if ( *v73 )
            break;
        }
LABEL_141:
        fputc(10, s);
        v71 = (_DWORD *)*v71;
        if ( !v71 )
          goto LABEL_142;
      }
      while ( 1 )
      {
        while ( 1 )
        {
          v77 = v74[2];
          if ( v77 != 319 )
            break;
          v78 = sub_1C300(v74[1]);
          _fprintf_chk(s, 1, " %s %d", v78, v74[4]);
LABEL_140:
          v74 = (_DWORD *)*v74;
          if ( !v74 )
            goto LABEL_141;
        }
        if ( v77 == 419 )
        {
          v107 = sub_1C300(v74[1]);
          _fprintf_chk(s, 1, " %s %s", v107, v74[4]);
          goto LABEL_140;
        }
        if ( v77 == 289 )
        {
          v75 = (const char *)sub_1C300(v74[1]);
          v76 = sub_C8C0();
          _fprintf_chk(s, 1, " %s %s", v75, v76);
        }
        v74 = (_DWORD *)*v74;
        if ( !v74 )
          goto LABEL_141;
      }
    }
  }
LABEL_143:
  v79 = *(_DWORD **)(a1 + 48);
  if ( v79 )
  {
    v80 = (_DWORD *)*v79;
    if ( *v79 )
    {
      fwrite("manycastserver", 1u, 0xEu, s);
      do
      {
        _fprintf_chk(s, 1, " %s", v80[1]);
        v80 = (_DWORD *)*v80;
      }
      while ( v80 );
      fputc(10, s);
    }
  }
  v81 = *(_DWORD **)(a1 + 52);
  if ( v81 )
  {
    v82 = (_DWORD *)*v81;
    if ( *v81 )
    {
      fwrite("multicastclient", 1u, 0xFu, s);
      do
      {
        _fprintf_chk(s, 1, " %s", v82[1]);
        v82 = (_DWORD *)*v82;
      }
      while ( v82 );
      fputc(10, s);
    }
  }
  v83 = *(_DWORD **)(a1 + 40);
  if ( v83 )
  {
    v84 = (_DWORD *)*v83;
    if ( *v83 )
    {
      do
      {
        _fprintf_chk(s, 1, "unpeer %s\n", *(const char **)(v84[2] + 4));
        v84 = (_DWORD *)*v84;
      }
      while ( v84 );
    }
  }
  v85 = *(_DWORD **)(a1 + 76);
  if ( v85 )
  {
    v86 = (_DWORD *)*v85;
    if ( *v85 )
    {
      fwrite("mru", 1u, 3u, s);
      do
      {
        v87 = sub_1C300(v86[1]);
        _fprintf_chk(s, 1, " %s %d", v87, v86[4]);
        v86 = (_DWORD *)*v86;
      }
      while ( v86 );
      fputc(10, s);
    }
  }
  v88 = *(_DWORD **)(a1 + 72);
  if ( v88 )
  {
    v89 = (_DWORD *)*v88;
    if ( *v88 )
    {
      fwrite("discard", 1u, 7u, s);
      do
      {
        v90 = sub_1C300(v89[1]);
        _fprintf_chk(s, 1, " %s %d", v90, v89[4]);
        v89 = (_DWORD *)*v89;
      }
      while ( v89 );
      fputc(10, s);
    }
  }
  v91 = *(int ****)(a1 + 80);
  if ( v91 )
  {
    v92 = *v91;
    if ( *v91 )
    {
      while ( 1 )
      {
        v93 = v92[1];
        if ( !v93 )
          break;
        v94 = v92[2];
        v95 = (const char *)v93[1];
        if ( !v94 )
          goto LABEL_172;
        v96 = v94[1];
        if ( *((_WORD *)v93 + 4) == 2
          && !strcmp((const char *)v93[1], "0.0.0.0")
          && !strcmp((const char *)v96, "0.0.0.0") )
        {
          v126 = "-4 default";
        }
        else
        {
          if ( *((_WORD *)v94 + 4) != 10
            || *v95 != 58
            || v95[1] != 58
            || v95[2]
            || *(_BYTE *)v96 != 58
            || *(_BYTE *)(v96 + 1) != 58
            || *(_BYTE *)(v96 + 2) )
          {
            goto LABEL_172;
          }
          v126 = "-6 default";
        }
        _fprintf_chk(s, 1, "restrict %s", v126);
LABEL_174:
        _fprintf_chk(s, 1, " ippeerlimit %d", *((__int16 *)v92 + 10));
        v98 = v92[3];
        if ( v98 )
        {
          v99 = (_DWORD *)*v98;
          if ( *v98 )
          {
            do
            {
              v100 = v99[1];
              if ( v100 != 409 )
              {
                v101 = (const char *)sub_1C300(v100);
                _fprintf_chk(s, 1, " %s", v101);
              }
              v99 = (_DWORD *)*v99;
            }
            while ( v99 );
          }
        }
        fputc(10, s);
        v92 = (int **)*v92;
        if ( !v92 )
          goto LABEL_180;
      }
      v127 = v92[3];
      if ( v127 )
      {
        v128 = (_DWORD *)*v127;
        if ( v128 )
        {
          if ( v128[1] == 409 )
          {
            v95 = "source";
          }
          else
          {
            do
            {
              v128 = (_DWORD *)*v128;
              if ( !v128 )
              {
                v95 = "default";
                goto LABEL_172;
              }
            }
            while ( v128[1] != 409 );
            v95 = "source";
          }
        }
        else
        {
          v95 = "default";
        }
      }
      else
      {
        v95 = "default";
      }
LABEL_172:
      _fprintf_chk(s, 1, "restrict %s", v95);
      v97 = v92[2];
      if ( v97 )
        _fprintf_chk(s, 1, " mask %s", v97[1]);
      goto LABEL_174;
    }
  }
LABEL_180:
  v102 = *(_DWORD **)(a1 + 164);
  if ( v102 )
  {
    v103 = (_DWORD *)*v102;
    if ( *v102 )
    {
      do
      {
        v104 = (const char *)sub_1C300(v103[3]);
        v105 = v103[1];
        if ( v105 )
          v106 = (const char *)sub_1C300(v105);
        else
          v106 = (const char *)v103[2];
        _fprintf_chk(s, 1, "interface %s %s\n", v104, v106);
        v103 = (_DWORD *)*v103;
      }
      while ( v103 );
    }
  }
  v109 = *(_DWORD **)(a1 + 144);
  if ( v109 )
  {
    v110 = (_DWORD *)*v109;
    if ( *v109 )
    {
      fwrite("phone", 1u, 5u, s);
      do
      {
        _fprintf_chk(s, 1, " \"%s\"", v110[1]);
        v110 = (_DWORD *)*v110;
      }
      while ( v110 );
      fputc(10, s);
    }
  }
  v111 = *(_DWORD **)(a1 + 148);
  if ( v111 )
  {
    v112 = (_DWORD *)*v111;
    if ( *v111 )
    {
      do
      {
        v113 = (char *)sub_1C758(v112[1]);
        v114 = (char *)sub_1C758(v112[2]);
        _fprintf_chk(s, 1, "setvar %s = %s", v113, v114);
        free(v113);
        free(v114);
        if ( v112[3] )
          fwrite(" default", 1u, 8u, s);
        fputc(10, s);
        v112 = (_DWORD *)*v112;
      }
      while ( v112 );
    }
  }
  v115 = *(_DWORD **)(a1 + 152);
  if ( v115 )
  {
    v116 = (_DWORD *)*v115;
    if ( *v115 )
    {
      fwrite("ttl", 1u, 3u, s);
      do
      {
        _fprintf_chk(s, 1, " %d", v116[1]);
        v116 = (_DWORD *)*v116;
      }
      while ( v116 );
      fputc(10, s);
    }
  }
  v117 = *(_DWORD **)(a1 + 156);
  if ( v117 )
  {
    v118 = (_DWORD *)*v117;
    if ( *v117 )
    {
      do
      {
        _fprintf_chk(s, 1, "trap %s", *(const char **)(v118[1] + 4));
        v119 = (int ***)v118[2];
        if ( v119 )
        {
          for ( j = *v119; j; j = (int **)*j )
          {
            while ( 1 )
            {
              v121 = j[1];
              if ( v121 != &dword_140 )
                break;
              _fprintf_chk(s, 1, " interface %s", (const char *)j[4]);
              j = (int **)*j;
              if ( !j )
                goto LABEL_217;
            }
            if ( v121 == (int *)((char *)&dword_180[2] + 1) )
              _fprintf_chk(s, 1, " port %d", j[4]);
          }
        }
LABEL_217:
        fputc(10, s);
        v118 = (_DWORD *)*v118;
      }
      while ( v118 );
    }
  }
  v122 = *(_DWORD **)(a1 + 168);
  if ( v122 )
  {
    v123 = (_DWORD *)*v122;
    if ( *v122 )
    {
      fwrite("reset", 1u, 5u, s);
      do
      {
        v124 = sub_1C300(v123[1]);
        _fprintf_chk(s, 1, " %s", v124);
        v123 = (_DWORD *)*v123;
      }
      while ( v123 );
      fputc(10, s);
    }
  }
  return 0;
}

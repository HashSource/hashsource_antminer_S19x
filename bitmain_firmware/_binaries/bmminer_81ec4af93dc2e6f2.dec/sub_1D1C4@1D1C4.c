int __fastcall sub_1D1C4(const char *a1)
{
  _DWORD *v2; // r0
  _DWORD *v3; // r11
  int v4; // r7
  _DWORD *v5; // r0
  _DWORD *v6; // r6
  void *v7; // r3
  _DWORD *v8; // r0
  _DWORD *v9; // r4
  void *v10; // r3
  unsigned int *v11; // r3
  unsigned int v12; // r2
  unsigned int v13; // r2
  int v14; // r3
  unsigned int v16; // r5
  size_t v17; // r0
  _DWORD *v18; // r0
  _DWORD *v19; // r9
  _DWORD *v20; // r0
  int v21; // r0
  const char *v22; // r8
  int v23; // r3
  const char *v24; // r2
  int v25; // r3
  const char *v26; // r0
  char *v27; // r5
  const char *v28; // r0
  const char *v29; // r0
  int v30; // r3
  _DWORD *v31; // r0
  _DWORD *v32; // r6
  _DWORD *v33; // r0
  int v34; // r3
  int v35; // r3
  int v36; // r8
  unsigned int v37; // r5
  unsigned int v38; // r0
  unsigned int v39; // r1
  _BOOL4 v40; // r2
  int v41; // r0
  int v42; // r9
  _DWORD *v43; // r0
  int v44; // r0
  int v45; // r2
  int v46; // r3
  int v47; // r0
  int *v48; // r9
  int v49; // r2
  _DWORD *v50; // r0
  int v51; // r0
  int v52; // r3
  int v53; // r3
  int v54; // r0
  int v55; // r3
  int v56; // r8
  unsigned int v57; // r5
  unsigned int v58; // r0
  unsigned int v59; // r1
  _BOOL4 v60; // r2
  int v61; // r0
  int v62; // r9
  _DWORD *v63; // r0
  int v64; // r0
  int v65; // r2
  int v66; // r3
  int v67; // r0
  int *v68; // r9
  int v69; // r2
  _DWORD *v70; // r0
  int v71; // r0
  int v72; // r3
  int v73; // r3
  void *v74; // r1
  int v75; // r5
  int v76; // r2
  int v77; // r3
  char *v78; // r3
  int v79; // r3
  int v80; // r3
  int v81; // r3
  int v82; // r5
  int v83; // r2
  int v84; // r3
  char *v85; // r3
  int v86; // r3
  int v87; // r3
  int format; // [sp+10h] [bp-91Ch]
  int v89; // [sp+14h] [bp-918h]
  int v90; // [sp+18h] [bp-914h]
  int v91; // [sp+1Ch] [bp-910h]
  char v92[252]; // [sp+2Ch] [bp-900h] BYREF
  char s[2052]; // [sp+128h] [bp-804h] BYREF

  memset(dword_B0F60, 0, sizeof(dword_B0F60));
  v2 = (_DWORD *)sub_71604("/etc/levels.json", 0, v92);
  v3 = v2;
  if ( v2 && !*v2 )
  {
    v5 = (_DWORD *)sub_72B10(v2, "config");
    v6 = v5;
    if ( v5 )
    {
      v7 = off_AFC24;
      if ( *v5 == 1 )
      {
        if ( (unsigned int)off_AFC24 > 4 )
        {
          strcpy(s, "multi miner type mode\n");
          sub_3AF5C(4, s, 0, *(unsigned __int16 *)"");
        }
        v16 = 0;
        while ( sub_7365C(v6) > v16 )
        {
          v18 = (_DWORD *)sub_736A8(v6, v16);
          v19 = v18;
          if ( !v18 || *v18 )
          {
            if ( (unsigned int)off_AFC24 > 3 )
            {
              v4 = -1;
              snprintf(s, 0x800u, "get array %d failed\n", v16);
              sub_3AF5C(3, s, 0, v35);
              goto LABEL_16;
            }
            goto LABEL_43;
          }
          v20 = (_DWORD *)sub_72B10(v18, "miner");
          ++v16;
          if ( !v20 || *v20 != 2 )
          {
            if ( (unsigned int)off_AFC24 > 3 )
            {
              v4 = -1;
              strcpy(s, "get miner failed\n");
              sub_3AF5C(3, s, 0, *(_DWORD *)"iled\n");
              goto LABEL_16;
            }
LABEL_43:
            v4 = -1;
            goto LABEL_16;
          }
          if ( !a1 )
          {
            if ( (unsigned int)off_AFC24 > 3 )
            {
              v4 = -1;
              strcpy(s, "no board_name\n");
              sub_3AF5C(3, s, 0, *(_DWORD *)"e\n");
              goto LABEL_16;
            }
            goto LABEL_43;
          }
          v21 = sub_74300(v20);
          v22 = (const char *)v21;
          if ( (unsigned int)off_AFC24 > 4 )
          {
            snprintf(s, 0x800u, "miner:%s,board_name:%s", v21, a1);
            sub_3AF5C(4, s, 0, v23);
          }
          v17 = strlen(a1);
          if ( !strncmp(v22, a1, v17) )
          {
            v4 = 0;
            v31 = (_DWORD *)sub_72B10(v19, "levels");
            v32 = v31;
            if ( !v31 || *v31 != 1 )
            {
              if ( (unsigned int)off_AFC24 > 4 )
              {
                v24 = "failed to get levels in %s\n";
LABEL_35:
                v4 = -2;
                snprintf(s, 0x800u, v24, "/etc/levels.json");
                sub_3AF5C(4, s, 0, v25);
LABEL_16:
                if ( v3[1] != -1 )
                {
                  v11 = v3 + 1;
                  __dmb(0xBu);
                  do
                  {
                    v12 = __ldrex(v11);
                    v13 = v12 - 1;
                  }
                  while ( __strex(v13, v11) );
                  if ( !v13 )
                    sub_74C7C(v3);
                }
                return v4;
              }
LABEL_15:
              v4 = -2;
              goto LABEL_16;
            }
            if ( (unsigned int)sub_7365C(v31) <= 0x1F )
            {
              v56 = 0;
              v57 = 0;
              v89 = 9999;
              format = 9999;
              v91 = 0;
              v90 = 0;
              while ( 1 )
              {
                v58 = sub_7365C(v32);
                v59 = v57;
                v60 = v56 <= 31;
                if ( v58 <= v57 )
                  v60 = 0;
                ++v57;
                if ( !v60 )
                  break;
                v61 = sub_736A8(v32, v59);
                v62 = v61;
                if ( !*v3 )
                {
                  v63 = (_DWORD *)sub_72B10(v61, "frequency");
                  if ( v63 )
                  {
                    if ( *v63 == 3 )
                    {
                      v64 = sub_747D0(v63);
                      v65 = v89;
                      v66 = v64;
                      v67 = v62;
                      v68 = &dword_B0F4C[2 * v56];
                      v68[6] = v66;
                      if ( v89 >= v66 )
                        v65 = v66;
                      v89 = v65;
                      v69 = v91;
                      if ( v91 < v66 )
                        v69 = v66;
                      v91 = v69;
                      v70 = (_DWORD *)sub_72B10(v67, "voltage");
                      if ( v70 && *v70 == 3 )
                      {
                        v71 = sub_747D0(v70);
                        v72 = format;
                        ++v56;
                        v68[5] = v71;
                        if ( format >= v71 )
                          v72 = v71;
                        format = v72;
                        v73 = v90;
                        if ( v90 < v71 )
                          v73 = v71;
                        v90 = v73;
                      }
                    }
                  }
                }
              }
              v74 = off_AFC24;
              v75 = 0;
              do
              {
                v76 = dword_B0F60[2 * v75];
                v77 = 2 * v75++;
                v78 = (char *)&dword_B0F60[v77];
                if ( v76 )
                {
                  v79 = *((_DWORD *)v78 + 1);
                  if ( v79 )
                  {
                    if ( (unsigned int)v74 > 4 )
                    {
                      snprintf(s, 0x800u, "level %d, voltage = %d frequency = %d", v75, v76, v79);
                      sub_3AF5C(4, s, 0, v80);
                      v74 = off_AFC24;
                    }
                  }
                }
              }
              while ( v75 != 32 );
              goto LABEL_106;
            }
LABEL_78:
            if ( (unsigned int)off_AFC24 > 3 )
            {
              v54 = sub_7365C(v32);
              snprintf(
                s,
                0x800u,
                "too many acceptable_levels %d, try to increase BTM_MAX_VOL_FREQ_LEVEL_NUM %d\n",
                v54,
                32);
              v4 = -4;
              sub_3AF5C(3, s, 0, v55);
            }
            else
            {
              v4 = -4;
            }
            goto LABEL_16;
          }
        }
        if ( (unsigned int)off_AFC24 > 3 )
        {
          v4 = -1;
          strcpy(s, "board name doesn't match\n");
          sub_3AF5C(3, s, 0, *(_DWORD *)"oesn't match\n");
          goto LABEL_16;
        }
        goto LABEL_43;
      }
    }
    else
    {
      v7 = off_AFC24;
    }
    if ( (unsigned int)v7 > 4 )
    {
      strcpy(s, "single miner type mode\n");
      sub_3AF5C(4, s, 0, *(_DWORD *)" type mode\n");
    }
    v8 = (_DWORD *)sub_72B10(v3, "miner");
    v9 = v8;
    if ( v8 )
    {
      v10 = off_AFC24;
      if ( *v8 == 2 )
      {
        if ( (unsigned int)off_AFC24 > 3 )
        {
          v29 = (const char *)sub_74300(v8);
          snprintf(s, 0x800u, "miner type in %s is %s", "/etc/levels.json", v29);
          sub_3AF5C(3, s, 0, v30);
        }
        v26 = (const char *)sub_74300(v9);
        v27 = strstr(dest, v26);
        if ( !v27 || (v28 = (const char *)sub_74300(v9), (v4 = strcasecmp(v27, v28)) != 0) )
        {
          v4 = -3;
          if ( (unsigned int)off_AFC24 > 3 )
          {
            strcpy(s, "miner type not match");
            sub_3AF5C(3, s, 0, *(_DWORD *)"ot match");
          }
          goto LABEL_16;
        }
        v33 = (_DWORD *)sub_72B10(v3, "levels");
        v32 = v33;
        if ( !v33 || *v33 != 1 )
        {
          if ( (unsigned int)off_AFC24 > 3 )
          {
            snprintf(s, 0x800u, "failed to get levels in %s\n", "/etc/levels.json");
            v4 = -2;
            sub_3AF5C(3, s, 0, v34);
            goto LABEL_16;
          }
          goto LABEL_15;
        }
        if ( (unsigned int)sub_7365C(v33) <= 0x1F )
        {
          v36 = 0;
          v37 = 0;
          v89 = 9999;
          format = 9999;
          v91 = 0;
          v90 = 0;
          while ( 1 )
          {
            v38 = sub_7365C(v32);
            v39 = v37;
            v40 = v38 > v37;
            if ( v36 > 31 )
              v40 = 0;
            ++v37;
            if ( !v40 )
              break;
            v41 = sub_736A8(v32, v39);
            v42 = v41;
            if ( !*v3 )
            {
              v43 = (_DWORD *)sub_72B10(v41, "frequency");
              if ( v43 )
              {
                if ( *v43 == 3 )
                {
                  v44 = sub_747D0(v43);
                  v45 = v89;
                  v46 = v44;
                  v47 = v42;
                  v48 = &dword_B0F4C[2 * v36];
                  v48[6] = v46;
                  if ( v89 >= v46 )
                    v45 = v46;
                  v89 = v45;
                  v49 = v91;
                  if ( v91 < v46 )
                    v49 = v46;
                  v91 = v49;
                  v50 = (_DWORD *)sub_72B10(v47, "voltage");
                  if ( v50 && *v50 == 3 )
                  {
                    v51 = sub_747D0(v50);
                    v52 = format;
                    ++v36;
                    v48[5] = v51;
                    if ( format >= v51 )
                      v52 = v51;
                    format = v52;
                    v53 = v90;
                    if ( v90 < v51 )
                      v53 = v51;
                    v90 = v53;
                  }
                }
              }
            }
          }
          v74 = off_AFC24;
          v82 = 0;
          do
          {
            v83 = dword_B0F60[2 * v82];
            v84 = 2 * v82++;
            v85 = (char *)&dword_B0F60[v84];
            if ( v83 )
            {
              v86 = *((_DWORD *)v85 + 1);
              if ( v86 )
              {
                if ( (unsigned int)v74 > 4 )
                {
                  snprintf(s, 0x800u, "level %d, voltage = %d frequency = %d", v82, v83, v86);
                  sub_3AF5C(4, s, 0, v87);
                  v74 = off_AFC24;
                }
              }
            }
          }
          while ( v82 != 32 );
LABEL_106:
          if ( (unsigned int)v74 <= 4 )
            v4 = 0;
          dword_B0F54 = v89;
          dword_B0F50 = format;
          dword_B0F5C = v91;
          dword_B0F58 = v90;
          if ( (unsigned int)v74 > 4 )
          {
            snprintf(
              s,
              0x800u,
              "acceptable min_vol = %d min_freq = %d max_vol = %d max_freq = %d",
              format,
              v89,
              v90,
              v91);
            sub_3AF5C(4, s, 0, v81);
          }
          goto LABEL_16;
        }
        goto LABEL_78;
      }
    }
    else
    {
      v10 = off_AFC24;
    }
    if ( (unsigned int)v10 > 4 )
    {
      v24 = "failed to get miner type in %s\n";
      goto LABEL_35;
    }
    goto LABEL_15;
  }
  if ( (unsigned int)off_AFC24 <= 3 )
    return -1;
  snprintf(s, 0x800u, "load vol-freq config file %s failed\n", "/etc/levels.json");
  sub_3AF5C(3, s, 0, v14);
  return -1;
}

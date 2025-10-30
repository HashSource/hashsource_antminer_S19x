int __fastcall sub_1D098(const char *a1)
{
  _DWORD *v2; // r0
  _DWORD *v3; // r4
  _DWORD *v5; // r0
  _DWORD *v6; // r9
  _DWORD *v7; // r0
  _DWORD *v8; // r6
  int v9; // r5
  unsigned int *v10; // r3
  unsigned int v11; // r2
  unsigned int v12; // r2
  int v13; // r3
  unsigned int v14; // r8
  size_t v15; // r0
  _DWORD *v16; // r0
  _DWORD *v17; // r11
  _DWORD *v18; // r0
  const char *v19; // r0
  const char *v20; // r10
  int v21; // r3
  const char *v22; // r0
  char *v23; // r7
  const char *v24; // r0
  int v25; // r6
  const char *v26; // r2
  int v27; // r3
  const char *v28; // r0
  int v29; // r3
  _DWORD *v30; // r0
  _DWORD *v31; // r11
  int v32; // r3
  int v33; // r6
  _DWORD *v34; // r0
  int v35; // r3
  unsigned int v36; // r7
  int v37; // r10
  int v38; // r9
  unsigned int v39; // r0
  unsigned int v40; // r1
  bool v41; // cf
  int v42; // r3
  int v43; // r0
  int v44; // r5
  _DWORD *v45; // r0
  int v46; // r3
  _DWORD *v47; // r0
  int v48; // r0
  int v49; // r3
  int v50; // r3
  int v51; // r0
  int v52; // r3
  unsigned int v53; // r7
  int v54; // r10
  int v55; // r9
  unsigned int v56; // r0
  unsigned int v57; // r1
  int v58; // r3
  int v59; // r0
  int v60; // r5
  _DWORD *v61; // r0
  int v62; // r3
  _DWORD *v63; // r0
  int v64; // r0
  int v65; // r3
  int v66; // r3
  int v67; // r7
  _DWORD *v68; // r6
  unsigned int v69; // r2
  int v70; // r3
  int v71; // r7
  _DWORD *v72; // r6
  unsigned int v73; // r2
  int v74; // r3
  int v75; // r3
  int v76; // r3
  int v77; // [sp+10h] [bp-914h]
  int v78; // [sp+10h] [bp-914h]
  int v79; // [sp+14h] [bp-910h]
  int v80; // [sp+14h] [bp-910h]
  int *v81; // [sp+18h] [bp-90Ch]
  int *v82; // [sp+18h] [bp-90Ch]
  char v83[252]; // [sp+24h] [bp-900h] BYREF
  char s[2052]; // [sp+120h] [bp-804h] BYREF

  memset(&unk_B3CD4, 0, 0x100u);
  v2 = (_DWORD *)sub_74B18("/etc/levels.json", 0, v83);
  v3 = v2;
  if ( !v2 || *v2 )
  {
    if ( (unsigned int)dword_B308C > 3 )
    {
      snprintf(s, 0x800u, "load vol-freq config file %s failed\n", "/etc/levels.json");
      sub_3B6AC(3, s, 0, v13);
    }
    return -1;
  }
  v5 = (_DWORD *)sub_75FEC(v2, "config");
  v6 = v5;
  if ( !v5 || *v5 != 1 )
  {
    if ( (unsigned int)dword_B308C > 4 )
    {
      strcpy(s, "single miner type mode\n");
      sub_3B6AC(4, s, 0, *(_DWORD *)" type mode\n");
    }
    v7 = (_DWORD *)sub_75FEC(v3, "miner");
    v8 = v7;
    if ( !v7 || *v7 != 2 )
    {
      if ( (unsigned int)dword_B308C > 4 )
      {
        v26 = "failed to get miner type in %s\n";
        goto LABEL_38;
      }
      goto LABEL_13;
    }
    if ( (unsigned int)dword_B308C > 3 )
    {
      v28 = (const char *)sub_777D0(v7);
      snprintf(s, 0x800u, "miner type in %s is %s", "/etc/levels.json", v28);
      sub_3B6AC(3, s, 0, v29);
    }
    v22 = (const char *)sub_777D0(v8);
    v23 = strstr(byte_B6BEC, v22);
    if ( !v23 )
    {
      if ( (unsigned int)dword_B308C <= 3 )
        goto LABEL_36;
      goto LABEL_45;
    }
    v24 = (const char *)sub_777D0(v8);
    v25 = strcasecmp(v23, v24);
    if ( v25 )
    {
      if ( (unsigned int)dword_B308C <= 3 )
      {
LABEL_36:
        v9 = -3;
        goto LABEL_14;
      }
LABEL_45:
      v9 = -3;
      strcpy(s, "miner type not match");
      sub_3B6AC(3, s, 0, *(_DWORD *)"ot match");
      goto LABEL_14;
    }
    v30 = (_DWORD *)sub_75FEC(v3, "levels");
    v31 = v30;
    if ( !v30 || *v30 != 1 )
    {
      if ( (unsigned int)dword_B308C > 3 )
      {
        snprintf(s, 0x800u, "failed to get levels in %s\n", "/etc/levels.json");
        v9 = -2;
        sub_3B6AC(3, s, 0, v32);
        goto LABEL_14;
      }
LABEL_13:
      v9 = -2;
      goto LABEL_14;
    }
    if ( (unsigned int)sub_76B34(v30) <= 0x1F )
    {
      v36 = 0;
      v37 = 0;
      v38 = 9999;
      v79 = 0;
      v77 = 9999;
      while ( 1 )
      {
        v39 = sub_76B34(v31);
        v40 = v36;
        v41 = v36++ >= v39;
        v42 = !v41;
        if ( v25 > 31 )
          v42 = 0;
        if ( !v42 )
          break;
        v43 = sub_76B80(v31, v40);
        v44 = v43;
        if ( !*v3 )
        {
          v45 = (_DWORD *)sub_75FEC(v43, "frequency");
          if ( v45 )
          {
            if ( *v45 == 3 )
            {
              v81 = &dword_B3CC0[2 * v25];
              v46 = sub_77C98(v45);
              v81[6] = v46;
              if ( v38 >= v46 )
                v38 = v46;
              if ( v37 < v46 )
                v37 = v46;
              v47 = (_DWORD *)sub_75FEC(v44, "voltage");
              if ( v47 && *v47 == 3 )
              {
                v48 = sub_77C98(v47);
                v49 = v77;
                ++v25;
                v81[5] = v48;
                if ( v77 >= v48 )
                  v49 = v48;
                v77 = v49;
                v50 = v79;
                if ( v79 < v48 )
                  v50 = v48;
                v79 = v50;
              }
            }
          }
        }
      }
      v67 = 1;
      v68 = &unk_B3CD4;
      v69 = dword_B308C;
      do
      {
        if ( *v68 && v68[1] && v69 > 4 )
        {
          snprintf(s, 0x800u, "level %d, voltage = %d frequency = %d", v67, *v68, v68[1]);
          sub_3B6AC(4, s, 0, v70);
          v69 = dword_B308C;
        }
        v68 += 2;
        ++v67;
      }
      while ( v68 != (_DWORD *)&unk_B3DD4 );
      dword_B3CC8 = v38;
      dword_B3CD0 = v37;
      dword_B3CC4 = v77;
      dword_B3CCC = v79;
      if ( v69 > 4 )
      {
        v9 = 0;
        snprintf(s, 0x800u, "acceptable min_vol = %d min_freq = %d max_vol = %d max_freq = %d", v77, v38, v79, v37);
        sub_3B6AC(4, s, 0, v76);
        goto LABEL_14;
      }
LABEL_113:
      v9 = 0;
      goto LABEL_14;
    }
    goto LABEL_82;
  }
  if ( (unsigned int)dword_B308C > 4 )
  {
    strcpy(s, "multi miner type mode\n");
    sub_3B6AC(4, s, 0, *(unsigned __int16 *)"");
  }
  v14 = 0;
  do
  {
    if ( v14 >= sub_76B34(v6) )
    {
      if ( (unsigned int)dword_B308C > 3 )
      {
        v9 = -1;
        strcpy(s, "board name doesn't match\n");
        sub_3B6AC(3, s, 0, *(_DWORD *)"oesn't match\n");
        goto LABEL_14;
      }
      goto LABEL_41;
    }
    v16 = (_DWORD *)sub_76B80(v6, v14);
    v17 = v16;
    if ( !v16 || *v16 )
    {
      if ( (unsigned int)dword_B308C > 3 )
      {
        v9 = -1;
        snprintf(s, 0x800u, "get array %d failed\n", v14);
        sub_3B6AC(3, s, 0, v35);
        goto LABEL_14;
      }
LABEL_41:
      v9 = -1;
      goto LABEL_14;
    }
    v18 = (_DWORD *)sub_75FEC(v16, "miner");
    ++v14;
    if ( !v18 || *v18 != 2 )
    {
      if ( (unsigned int)dword_B308C > 3 )
      {
        v9 = -1;
        strcpy(s, "get miner failed\n");
        sub_3B6AC(3, s, 0, *(_DWORD *)"iled\n");
        goto LABEL_14;
      }
      goto LABEL_41;
    }
    if ( !a1 )
    {
      if ( (unsigned int)dword_B308C > 3 )
      {
        v9 = -1;
        strcpy(s, "no board_name\n");
        sub_3B6AC(3, s, 0, *(unsigned __int16 *)"");
        goto LABEL_14;
      }
      goto LABEL_41;
    }
    v19 = (const char *)sub_777D0(v18);
    v20 = v19;
    if ( (unsigned int)dword_B308C > 4 )
    {
      snprintf(s, 0x800u, "miner:%s,board_name:%s", v19, a1);
      sub_3B6AC(4, s, 0, v21);
    }
    v15 = strlen(a1);
  }
  while ( strncmp(v20, a1, v15) );
  v33 = 0;
  v34 = (_DWORD *)sub_75FEC(v17, "levels");
  v31 = v34;
  if ( v34 && *v34 == 1 )
  {
    if ( (unsigned int)sub_76B34(v34) <= 0x1F )
    {
      v53 = 0;
      v54 = 0;
      v55 = 9999;
      v80 = 0;
      v78 = 9999;
      while ( 1 )
      {
        v56 = sub_76B34(v31);
        v57 = v53;
        v41 = v53++ >= v56;
        v58 = !v41;
        if ( v33 > 31 )
          v58 = 0;
        if ( !v58 )
          break;
        v59 = sub_76B80(v31, v57);
        v60 = v59;
        if ( !*v3 )
        {
          v61 = (_DWORD *)sub_75FEC(v59, "frequency");
          if ( v61 )
          {
            if ( *v61 == 3 )
            {
              v82 = &dword_B3CC0[2 * v33];
              v62 = sub_77C98(v61);
              v82[6] = v62;
              if ( v55 >= v62 )
                v55 = v62;
              if ( v54 < v62 )
                v54 = v62;
              v63 = (_DWORD *)sub_75FEC(v60, "voltage");
              if ( v63 && *v63 == 3 )
              {
                v64 = sub_77C98(v63);
                v65 = v78;
                ++v33;
                v82[5] = v64;
                if ( v78 >= v64 )
                  v65 = v64;
                v78 = v65;
                v66 = v80;
                if ( v80 < v64 )
                  v66 = v64;
                v80 = v66;
              }
            }
          }
        }
      }
      v71 = 1;
      v72 = &unk_B3CD4;
      v73 = dword_B308C;
      do
      {
        if ( *v72 && v72[1] && v73 > 4 )
        {
          snprintf(s, 0x800u, "level %d, voltage = %d frequency = %d", v71, *v72, v72[1]);
          sub_3B6AC(4, s, 0, v74);
          v73 = dword_B308C;
        }
        v72 += 2;
        ++v71;
      }
      while ( v72 != (_DWORD *)&unk_B3DD4 );
      dword_B3CC8 = v55;
      dword_B3CD0 = v54;
      dword_B3CC4 = v78;
      dword_B3CCC = v80;
      if ( v73 > 4 )
      {
        snprintf(s, 0x800u, "acceptable min_vol = %d min_freq = %d max_vol = %d max_freq = %d", v78, v55, v80, v54);
        sub_3B6AC(4, s, 0, v75);
      }
      goto LABEL_113;
    }
LABEL_82:
    v9 = -4;
    if ( (unsigned int)dword_B308C > 3 )
    {
      v51 = sub_76B34(v31);
      snprintf(s, 0x800u, "too many acceptable_levels %d, try to increase BTM_MAX_VOL_FREQ_LEVEL_NUM %d\n", v51, 32);
      sub_3B6AC(3, s, 0, v52);
    }
    goto LABEL_14;
  }
  if ( (unsigned int)dword_B308C <= 4 )
    goto LABEL_13;
  v26 = "failed to get levels in %s\n";
LABEL_38:
  v9 = -2;
  snprintf(s, 0x800u, v26, "/etc/levels.json");
  sub_3B6AC(4, s, 0, v27);
LABEL_14:
  if ( v3[1] == -1 )
    return v9;
  v10 = v3 + 1;
  __dmb(0xFu);
  do
  {
    v11 = __ldrex(v10);
    v12 = v11 - 1;
  }
  while ( __strex(v12, v10) );
  if ( v12 )
    return v9;
  sub_780F0(v3);
  return v9;
}

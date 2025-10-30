void __fastcall sub_24E78(int a1, __int16 a2)
{
  int v2; // r10
  int v3; // r5
  size_t v4; // r0
  size_t v5; // r0
  int v6; // r8
  const char **v7; // r0
  const char **v8; // r7
  char *v9; // r3
  const char *v10; // r5
  const char *v11; // r1
  unsigned __int16 *v12; // r2
  unsigned __int8 *v13; // r2
  _BOOL4 v14; // r3
  void *v15; // r0
  const char *v16; // r0
  int v17; // r6
  unsigned int v18; // r5
  int v19; // r7
  unsigned int v20; // r6
  unsigned int v21; // r5
  bool v22; // zf
  _DWORD *v23; // r6
  int v24; // r4
  int v25; // r11
  int v26; // r5
  int v27; // r3
  size_t v28; // r0
  int v29; // r4
  unsigned int v30; // r9
  int v31; // r0
  _BOOL4 v32; // r1
  unsigned __int8 *v33; // r2
  int v34; // r3
  unsigned __int8 *v35; // r3
  const char *v36; // r5
  size_t v37; // r0
  size_t v38; // r0
  int v39; // r6
  int v40; // r5
  unsigned int v41; // r5
  unsigned int v42; // r2
  unsigned int v43; // r3
  unsigned __int8 *v44; // r4
  size_t v45; // r0
  size_t v46; // r0
  int v48; // [sp+24h] [bp-388h]
  const char *v49; // [sp+3Ch] [bp-370h]
  unsigned __int16 v50; // [sp+46h] [bp-366h] BYREF
  unsigned __int16 v51; // [sp+48h] [bp-364h] BYREF
  unsigned __int16 v52; // [sp+4Ah] [bp-362h] BYREF
  unsigned int v53; // [sp+4Ch] [bp-360h] BYREF
  int v54; // [sp+50h] [bp-35Ch] BYREF
  unsigned int v55; // [sp+54h] [bp-358h] BYREF
  int v56; // [sp+58h] [bp-354h] BYREF
  int v57; // [sp+5Ch] [bp-350h] BYREF
  _WORD *v58; // [sp+60h] [bp-34Ch] BYREF
  char *v59; // [sp+64h] [bp-348h] BYREF
  int v60; // [sp+68h] [bp-344h] BYREF
  unsigned int v61; // [sp+6Ch] [bp-340h] BYREF
  int v62; // [sp+70h] [bp-33Ch] BYREF
  _DWORD v63[2]; // [sp+74h] [bp-338h] BYREF
  _DWORD v64[7]; // [sp+7Ch] [bp-330h] BYREF
  _DWORD s[32]; // [sp+98h] [bp-314h] BYREF
  _BYTE v66[448]; // [sp+118h] [bp-294h] BYREF
  char v67[8]; // [sp+2D8h] [bp-D4h] BYREF
  char v68[8]; // [sp+2E0h] [bp-CCh] BYREF
  char v69[8]; // [sp+2E8h] [bp-C4h] BYREF
  int v70; // [sp+2F0h] [bp-BCh]
  __int16 v71; // [sp+2F4h] [bp-B8h]
  char v72[12]; // [sp+2F8h] [bp-B4h] BYREF
  char v73[32]; // [sp+304h] [bp-A8h] BYREF
  unsigned __int8 v74[136]; // [sp+324h] [bp-88h] BYREF

  v2 = a2 & 0x4000;
  if ( (a2 & 0x4000) != 0 )
  {
    sub_1F4D0(1);
    if ( (ntp_syslogmask & 1) != 0 )
    {
      v16 = (const char *)sub_6C2E8(a1 + 4);
      sub_64E00(5, "mrulist from %s rejected due to nomrulist restriction", v16);
    }
    ++sys_restricted;
    return;
  }
  v58 = 0;
  v3 = 0;
  sub_2446C((unsigned int *)&v58, "nonce", 6u, 0);
  sub_2446C((unsigned int *)&v58, "frags", 6u, 0);
  sub_2446C((unsigned int *)&v58, "limit", 6u, 0);
  sub_2446C((unsigned int *)&v58, "mincount", 9u, 0);
  sub_2446C((unsigned int *)&v58, "resall", 7u, 0);
  sub_2446C((unsigned int *)&v58, "resany", 7u, 0);
  sub_2446C((unsigned int *)&v58, "maxlstint", 0xAu, 0);
  sub_2446C((unsigned int *)&v58, "laddr", 6u, 0);
  do
  {
    sub_6C054(v74, 128, "last.%d", v3);
    v4 = strlen((const char *)v74);
    sub_2446C((unsigned int *)&v58, v74, v4 + 1, 0);
    sub_6C054(v74, 128, "addr.%d", v3++);
    v5 = strlen((const char *)v74);
    sub_2446C((unsigned int *)&v58, v74, v5 + 1, 0);
  }
  while ( v3 != 16 );
  v6 = 0;
  v53 = 0;
  v54 = 0;
  v48 = 0;
  v55 = 0;
  v50 = 0;
  v51 = 0;
  v52 = 0;
  memset(s, 0, sizeof(s));
  memset(v66, 0, sizeof(v66));
  while ( 1 )
  {
    v7 = (const char **)sub_1E820((int)v58, &v59);
    v8 = v7;
    if ( !v7 || (*((_WORD *)v7 + 1) & 0x80) != 0 )
      break;
    v9 = v59;
    v10 = v7[1];
    if ( !v59 )
      v9 = (char *)&unk_93CA8;
    v11 = v7[1];
    if ( !v59 )
      v59 = v9;
    if ( !strcmp("nonce", v11) )
    {
      free((void *)v6);
      v6 = (unsigned __int8)*v59;
      if ( *v59 )
        v6 = sub_63D08(v59);
    }
    else if ( !strcmp("frags", v10) )
    {
      if ( sscanf(v59, "%hu", &v50) != 1 )
        goto LABEL_29;
    }
    else if ( !strcmp("limit", v10) )
    {
      if ( sscanf(v59, "%u", &v53) != 1 )
        goto LABEL_29;
    }
    else if ( !strcmp("mincount", v10) )
    {
      if ( sscanf(v59, "%d", &v54) != 1 )
        goto LABEL_29;
      if ( v54 < 0 )
        v54 = 0;
    }
    else if ( !strcmp("resall", v10) )
    {
      v12 = &v51;
LABEL_33:
      if ( sscanf(v59, "0x%hx", v12) != 1 )
        goto LABEL_29;
    }
    else
    {
      if ( !strcmp("resany", v10) )
      {
        v12 = &v52;
        goto LABEL_33;
      }
      if ( !strcmp("maxlstint", v10) )
      {
        if ( sscanf(v59, "%u", &v55) != 1 )
          goto LABEL_29;
      }
      else if ( !strcmp("laddr", v10) )
      {
        if ( !sub_635A0(v59, v64) )
          goto LABEL_29;
        v48 = sub_1753C(v64, 0);
      }
      else if ( sscanf(v10, "last.%d", v63) == 1 && v63[0] <= 0xFu )
      {
        if ( sscanf(v59, "0x%08x.%08x", &v56, &v57) != 2 )
        {
LABEL_29:
          free((void *)v6);
          sub_24DE4(v58);
          return;
        }
        v31 = v57;
        v32 = v63[0] == v2;
        v33 = &v74[8 * v63[0] + 132];
        v34 = 28 * v63[0];
        *((_DWORD *)v33 - 196) = v56;
        *((_DWORD *)v33 - 195) = v31;
        if ( *(_WORD *)&v66[v34] == 2 )
        {
          if ( !*(_DWORD *)&v66[v34 + 4] )
            v32 = 0;
          goto LABEL_111;
        }
        v35 = &v74[v34 + 132];
        if ( *((_DWORD *)v35 - 162) || *((_DWORD *)v35 - 161) || *((_DWORD *)v35 - 160) || *((_DWORD *)v35 - 159) )
        {
LABEL_111:
          if ( v32 )
            goto LABEL_112;
        }
      }
      else if ( sscanf(v8[1], "addr.%d", v63) == 1 && v63[0] <= 0xFu )
      {
        if ( !sub_635A0(v59, &v66[28 * v63[0]]) )
          goto LABEL_29;
        v13 = &v74[8 * v63[0] + 132];
        if ( *((_DWORD *)v13 - 196) )
        {
          v14 = v63[0] == v2;
          if ( !*((_DWORD *)v13 - 195) )
            v14 = 0;
          if ( v14 )
LABEL_112:
            ++v2;
        }
      }
    }
  }
  sub_24DE4(v58);
  v58 = 0;
  if ( !v6 )
    return;
  if ( sscanf((const char *)v6, "%08x%08x%08x", &v60, &v61, &v62) != 3 )
  {
    v15 = (void *)v6;
LABEL_53:
    free(v15);
    return;
  }
  v17 = v60;
  v18 = v61;
  v19 = sub_1E508((unsigned __int16 *)(a1 + 4), v60, v61);
  sub_5F724(v63);
  v15 = (void *)v6;
  v20 = v63[0] - v17;
  if ( v18 > v63[1] )
    v21 = v20 - 1;
  else
    v21 = v20;
  v22 = v21 == 15;
  if ( v21 <= 0xF )
    v22 = v62 == v19;
  if ( !v22 )
    goto LABEL_53;
  free((void *)v6);
  if ( !v50 )
  {
    if ( v53 - 1 <= 0xFF )
    {
      v50 = 128;
      goto LABEL_66;
    }
LABEL_104:
    sub_1F4D0(6);
    return;
  }
  if ( v50 > 0x80u )
    goto LABEL_104;
  if ( !v53 )
    v53 = -1;
LABEL_66:
  if ( !v2 )
    goto LABEL_80;
  v23 = &v66[8];
  v24 = 0;
  while ( 1 )
  {
    v25 = *(_DWORD *)(mon_hash + 4 * (unsigned __int16)(sub_6C568(v23 - 2) & ~(-1 << mon_hash_bits)));
    if ( v25 )
      break;
LABEL_77:
    ++v24;
    v23 += 7;
    if ( v24 == v2 )
    {
      if ( v24 )
      {
        sub_1F4D0(5);
        return;
      }
LABEL_80:
      v25 = dword_108310;
      if ( (_UNKNOWN *)dword_108310 == &mon_mru_list )
        goto LABEL_121;
      goto LABEL_81;
    }
  }
  v26 = *((unsigned __int16 *)v23 - 3);
  while ( 1 )
  {
    if ( *(unsigned __int16 *)(v25 + 46) != v26 )
      goto LABEL_70;
    v27 = *((unsigned __int16 *)v23 - 4);
    if ( v27 != *(unsigned __int16 *)(v25 + 44) )
      goto LABEL_70;
    if ( v27 != 2 )
      break;
    if ( *(_DWORD *)(v25 + 48) == *(v23 - 1) )
      goto LABEL_76;
LABEL_70:
    v25 = *(_DWORD *)v25;
    if ( !v25 )
      goto LABEL_77;
  }
  if ( memcmp((const void *)(v25 + 52), v23, 0x10u) || *(_DWORD *)(v25 + 68) != v23[4] )
    goto LABEL_70;
LABEL_76:
  if ( *(_DWORD *)(v25 + 24) != s[2 * v24] || *(_DWORD *)(v25 + 28) != s[2 * v24 + 1] )
    goto LABEL_77;
  sub_1FCCC("last.older", (_DWORD *)(v25 + 24));
  v36 = (const char *)sub_6C47C(v25 + 44);
  v37 = strlen(v36);
  sub_1F0E4("addr.older", (int)v36, v37);
  if ( v53 <= 1 )
  {
    sub_5F724(v63);
    sub_1E688(a1, (int)v74, 128);
    v46 = strlen((const char *)v74);
    sub_1F0E4("nonce", (int)v74, v46);
LABEL_82:
    if ( (unsigned __int16)word_B96B8 < (unsigned int)v50 && v53 )
    {
      v29 = 0;
      v30 = 0;
      while ( 1 )
      {
        if ( *(_DWORD *)(v25 + 36) >= v54
          && (!v51 || (v51 & ~*(unsigned __int16 *)(v25 + 40)) == 0)
          && (!v52 || (v52 & *(_WORD *)(v25 + 40)) != 0)
          && (!v55 || v55 >= v63[0] - *(_DWORD *)(v25 + 24))
          && (!v48 || *(_DWORD *)(v25 + 12) == v48) )
        {
          v39 = 6;
          strcpy(v72, "first.%d");
          strcpy(v67, "ct.%d");
          v71 = 0;
          v70 = 0;
          strcpy(v68, "mv.%d");
          strcpy(v69, "rs.%d");
          v40 = rand();
          v41 = v40 ^ (rand() << 16);
          do
          {
            v42 = v41 & 7;
            v41 >>= 3;
            while ( 1 )
            {
              v43 = v42 % 6;
              v44 = &v74[v42 % 6 + 132];
              if ( !*((_BYTE *)&v70 + v42 % 6) )
                break;
              v42 = v43 + 1;
            }
            switch ( v43 )
            {
              case 1u:
                sub_6C054(v73, 32, "last.%d", v30);
                sub_1FCCC(v73, (_DWORD *)(v25 + 24));
                break;
              case 2u:
                sub_6C054(v73, 32, v72, v30);
                sub_1FCCC(v73, (_DWORD *)(v25 + 16));
                break;
              case 3u:
                sub_6C054(v73, 32, v67, v30);
                sub_1FAA8(v73, *(_DWORD *)(v25 + 36));
                break;
              case 4u:
                sub_6C054(v73, 32, v68, v30);
                sub_1FB4C(v73, *(unsigned __int8 *)(v25 + 42));
                break;
              case 5u:
                sub_6C054(v73, 32, v69, v30);
                sub_1FA04(v73, *(unsigned __int16 *)(v25 + 40));
                break;
              default:
                sub_6C054(v73, 32, "addr.%d", v30);
                v49 = (const char *)sub_6C47C(v25 + 44);
                v45 = strlen(v49);
                sub_1F0E4(v73, (int)v49, v45);
                break;
            }
            --v39;
            *(v44 - 184) = 1;
          }
          while ( v39 );
          if ( !v30 )
            sub_1FBF0(0);
          ++v30;
          v29 = v25;
        }
        v25 = *(_DWORD *)(v25 + 4);
        if ( (_UNKNOWN *)v25 == &mon_mru_list || !v25 )
          break;
        if ( (unsigned __int16)word_B96B8 >= (unsigned int)v50 || v53 <= v30 )
          goto LABEL_102;
      }
      if ( v30 > 1 )
        sub_1FBF0(v30 - 1);
      sub_1FCCC("now", v63);
      if ( v29 )
        sub_1FCCC("last.newest", (_DWORD *)(v29 + 24));
    }
    goto LABEL_102;
  }
  v25 = *(_DWORD *)(v25 + 4);
  if ( (_UNKNOWN *)v25 != &mon_mru_list )
  {
LABEL_81:
    sub_5F724(v63);
    sub_1E688(a1, (int)v74, 128);
    v28 = strlen((const char *)v74);
    sub_1F0E4("nonce", (int)v74, v28);
    if ( !v25 )
      goto LABEL_122;
    goto LABEL_82;
  }
LABEL_121:
  sub_5F724(v63);
  sub_1E688(a1, (int)v74, 128);
  v38 = strlen((const char *)v74);
  sub_1F0E4("nonce", (int)v74, v38);
LABEL_122:
  sub_1FCCC("now", v63);
LABEL_102:
  sub_1EBA4(0);
}

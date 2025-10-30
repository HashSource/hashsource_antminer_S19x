void __fastcall sub_2519C(int a1, __int16 a2)
{
  int v2; // r4
  size_t v3; // r0
  int v4; // r3
  size_t v5; // r0
  int v6; // r9
  const unsigned __int16 **v7; // r0
  const unsigned __int16 **v8; // r7
  char *v9; // r3
  const char *v10; // r4
  const char *v11; // r1
  unsigned __int16 *v12; // r2
  unsigned __int8 *v13; // r2
  _BOOL4 v14; // r1
  const char *v15; // r0
  unsigned int v16; // r2
  int v17; // r0
  int v18; // r3
  unsigned __int8 *v19; // r1
  int v20; // r12
  unsigned __int8 *v21; // r3
  _BOOL4 v22; // r2
  int v23; // r6
  int v24; // r4
  int v25; // r7
  unsigned int v26; // r2
  unsigned int v27; // r6
  unsigned int v28; // r3
  bool v29; // zf
  _DWORD *v30; // r7
  int v31; // r10
  _QWORD *v32; // r9
  int v33; // r4
  int v34; // r5
  int v35; // r3
  _BOOL4 v36; // r3
  _BOOL4 v37; // r1
  const char *v38; // r6
  size_t v39; // r0
  size_t v40; // r0
  int v41; // r5
  unsigned int v42; // r10
  int v43; // r8
  int v44; // r7
  unsigned int v45; // r7
  unsigned int v46; // r1
  unsigned int i; // r3
  unsigned __int8 *v48; // r5
  size_t v49; // r0
  size_t v50; // r0
  size_t v51; // r0
  int v53; // [sp+24h] [bp-388h]
  int v54; // [sp+2Ch] [bp-380h]
  const char *v55; // [sp+3Ch] [bp-370h]
  unsigned __int16 v56; // [sp+46h] [bp-366h] BYREF
  unsigned __int16 v57; // [sp+48h] [bp-364h] BYREF
  unsigned __int16 v58; // [sp+4Ah] [bp-362h] BYREF
  unsigned int v59; // [sp+4Ch] [bp-360h] BYREF
  int v60; // [sp+50h] [bp-35Ch] BYREF
  unsigned int v61; // [sp+54h] [bp-358h] BYREF
  int v62; // [sp+58h] [bp-354h] BYREF
  int v63; // [sp+5Ch] [bp-350h] BYREF
  _WORD *v64; // [sp+60h] [bp-34Ch] BYREF
  char *v65; // [sp+64h] [bp-348h] BYREF
  int v66; // [sp+68h] [bp-344h] BYREF
  int v67; // [sp+6Ch] [bp-340h] BYREF
  int v68; // [sp+70h] [bp-33Ch] BYREF
  unsigned int v69; // [sp+74h] [bp-338h] BYREF
  unsigned int v70; // [sp+78h] [bp-334h]
  _DWORD v71[7]; // [sp+7Ch] [bp-330h] BYREF
  _DWORD s[32]; // [sp+98h] [bp-314h] BYREF
  _DWORD v73[112]; // [sp+118h] [bp-294h] BYREF
  char v74[8]; // [sp+2D8h] [bp-D4h] BYREF
  char v75[8]; // [sp+2E0h] [bp-CCh] BYREF
  char v76[8]; // [sp+2E8h] [bp-C4h] BYREF
  int v77; // [sp+2F0h] [bp-BCh]
  __int16 v78; // [sp+2F4h] [bp-B8h]
  char v79[12]; // [sp+2F8h] [bp-B4h] BYREF
  char v80[32]; // [sp+304h] [bp-A8h] BYREF
  unsigned __int8 v81[136]; // [sp+324h] [bp-88h] BYREF

  if ( (a2 & 0x4000) != 0 )
  {
    sub_1F734(1);
    if ( (ntp_syslogmask & 1) != 0 )
    {
      v15 = (const char *)sub_6D2C0(a1 + 4);
      sub_65D40(5, "mrulist from %s rejected due to nomrulist restriction", v15);
    }
    ++sys_restricted;
    return;
  }
  v64 = 0;
  sub_2478C((unsigned int *)&v64, "nonce", 6u, 0);
  sub_2478C((unsigned int *)&v64, "frags", 6u, 0);
  sub_2478C((unsigned int *)&v64, "limit", 6u, 0);
  sub_2478C((unsigned int *)&v64, "mincount", 9u, 0);
  sub_2478C((unsigned int *)&v64, "resall", 7u, 0);
  sub_2478C((unsigned int *)&v64, "resany", 7u, 0);
  sub_2478C((unsigned int *)&v64, "maxlstint", 0xAu, 0);
  v2 = 0;
  sub_2478C((unsigned int *)&v64, "laddr", 6u, 0);
  do
  {
    sub_6D00C(v81, 128, "last.%d", v2);
    v3 = strlen((const char *)v81);
    sub_2478C((unsigned int *)&v64, v81, v3 + 1, 0);
    v4 = v2++;
    sub_6D00C(v81, 128, "addr.%d", v4);
    v5 = strlen((const char *)v81);
    sub_2478C((unsigned int *)&v64, v81, v5 + 1, 0);
  }
  while ( v2 != 16 );
  v58 = 0;
  v6 = 0;
  v56 = 0;
  v54 = 0;
  v59 = 0;
  v60 = 0;
  v53 = 0;
  v57 = 0;
  v61 = 0;
  memset(s, 0, sizeof(s));
  memset(v73, 0, sizeof(v73));
  while ( 1 )
  {
    v7 = sub_1EA58((int)v64, &v65);
    v8 = v7;
    if ( !v7 || (*((_WORD *)v7 + 1) & 0x80) != 0 )
      break;
    v9 = v65;
    v10 = (const char *)v7[1];
    if ( !v65 )
      v9 = (char *)&unk_95204;
    v11 = (const char *)v7[1];
    if ( !v65 )
      v65 = v9;
    if ( !strcmp("nonce", v11) )
    {
      free((void *)v6);
      v6 = (unsigned __int8)*v65;
      if ( *v65 )
        v6 = sub_64C8C(v65);
    }
    else if ( !strcmp("frags", v10) )
    {
      if ( sscanf(v65, "%hu", &v56) != 1 )
        goto LABEL_29;
    }
    else if ( !strcmp("limit", v10) )
    {
      if ( sscanf(v65, "%u", &v59) != 1 )
        goto LABEL_29;
    }
    else if ( !strcmp("mincount", v10) )
    {
      if ( sscanf(v65, "%d", &v60) != 1 )
        goto LABEL_29;
      if ( v60 < 0 )
        v60 = 0;
    }
    else if ( !strcmp("resall", v10) )
    {
      v12 = &v57;
LABEL_33:
      if ( sscanf(v65, "0x%hx", v12) != 1 )
        goto LABEL_29;
    }
    else
    {
      if ( !strcmp("resany", v10) )
      {
        v12 = &v58;
        goto LABEL_33;
      }
      if ( !strcmp("maxlstint", v10) )
      {
        if ( sscanf(v65, "%u", &v61) != 1 )
          goto LABEL_29;
      }
      else if ( !strcmp("laddr", v10) )
      {
        if ( !sub_644EC(v65, v71) )
          goto LABEL_29;
        v53 = sub_177B8(v71, 0);
      }
      else if ( sscanf(v10, "last.%d", &v69) == 1 && v69 <= 0xF )
      {
        if ( sscanf(v65, "0x%08x.%08x", &v62, &v63) != 2 )
        {
LABEL_29:
          free((void *)v6);
          sub_25108(v64);
          return;
        }
        v16 = v69;
        v17 = v63;
        v18 = 28 * v69;
        v19 = &v81[8 * v69 + 132];
        v20 = LOWORD(v73[7 * v69]);
        *((_DWORD *)v19 - 196) = v62;
        *((_DWORD *)v19 - 195) = v17;
        v21 = &v81[v18 + 132];
        if ( v20 == 2 )
        {
          v37 = v54 == v16;
          if ( !*((_DWORD *)v21 - 163) )
            v37 = 0;
          v22 = v37;
          goto LABEL_61;
        }
        if ( *((_DWORD *)v21 - 162) || *((_DWORD *)v21 - 161) || *((_DWORD *)v21 - 160) || *((_DWORD *)v21 - 159) )
        {
          v22 = v54 == v16;
LABEL_61:
          if ( v22 )
            goto LABEL_62;
        }
      }
      else if ( sscanf((const char *)v8[1], "addr.%d", &v69) == 1 && v69 <= 0xF )
      {
        if ( !sub_644EC(v65, &v73[7 * v69]) )
          goto LABEL_29;
        v13 = &v81[8 * v69 + 132];
        if ( *((_DWORD *)v13 - 196) )
        {
          v14 = v54 == v69;
          if ( !*((_DWORD *)v13 - 195) )
            v14 = 0;
          if ( v14 )
LABEL_62:
            ++v54;
        }
      }
    }
  }
  sub_25108(v64);
  v64 = 0;
  if ( !v6 )
    return;
  if ( sscanf((const char *)v6, "%08x%08x%08x", &v66, &v67, &v68) != 3 )
    goto LABEL_51;
  v23 = v66;
  v24 = v67;
  v25 = sub_1E740((unsigned __int16 *)(a1 + 4), v66, v67);
  sub_6055C(&v69);
  v26 = v70;
  v27 = v69 - v23;
  v70 -= v24;
  if ( v26 < v70 )
    v28 = v27 - 1;
  else
    v28 = v27;
  v69 = v28;
  v29 = v28 == 15;
  if ( v28 <= 0xF )
    v29 = v25 == v68;
  if ( !v29 )
  {
LABEL_51:
    free((void *)v6);
    return;
  }
  free((void *)v6);
  if ( !v56 )
  {
    if ( v59 - 1 <= 0xFF )
    {
      v56 = 128;
      goto LABEL_73;
    }
LABEL_126:
    sub_1F734(6);
    return;
  }
  if ( v56 > 0x80u )
    goto LABEL_126;
  if ( !v59 )
    v59 = -1;
LABEL_73:
  if ( !v54 )
    goto LABEL_136;
  v30 = &v73[2];
  v31 = 0;
  v32 = s;
  while ( 1 )
  {
    v33 = *(_DWORD *)(mon_hash + 4 * (unsigned __int16)(sub_6D544(v30 - 2) & ((1 << mon_hash_bits) - 1)));
    if ( v33 )
      break;
LABEL_85:
    ++v31;
    ++v32;
    v30 += 7;
    if ( v31 == v54 )
    {
      if ( v31 )
      {
        sub_1F734(5);
        return;
      }
LABEL_136:
      v33 = dword_109330;
      if ( (_UNKNOWN *)dword_109330 == &mon_mru_list )
        goto LABEL_137;
LABEL_95:
      sub_6055C(&v69);
      sub_1E8C0(a1, (int)v81, 128);
      v40 = strlen((const char *)v81);
      sub_1F350("nonce", (int)v81, v40);
      if ( !v33 )
      {
        sub_1FF38("now", &v69);
        goto LABEL_135;
      }
      goto LABEL_96;
    }
  }
  v34 = *((unsigned __int16 *)v30 - 3);
  while ( 1 )
  {
    if ( *(unsigned __int16 *)(v33 + 46) != v34 )
      goto LABEL_77;
    v35 = *((unsigned __int16 *)v30 - 4);
    if ( v35 != *(unsigned __int16 *)(v33 + 44) )
      goto LABEL_77;
    if ( v35 == 2 )
      break;
    if ( !memcmp((const void *)(v33 + 52), v30, 0x10u) )
    {
      v36 = *(_DWORD *)(v33 + 68) == v30[4];
      goto LABEL_83;
    }
LABEL_77:
    v33 = *(_DWORD *)v33;
    if ( !v33 )
      goto LABEL_85;
  }
  v36 = *(_DWORD *)(v33 + 48) == *(v30 - 1);
LABEL_83:
  if ( !v36 )
    goto LABEL_77;
  if ( *(_DWORD *)(v33 + 24) != s[2 * v31] || *(_DWORD *)(v33 + 28) != *((_DWORD *)v32 + 1) )
    goto LABEL_85;
  sub_1FF38("last.older", (_DWORD *)(v33 + 24));
  v38 = (const char *)sub_6D454(v33 + 44);
  v39 = strlen(v38);
  sub_1F350("addr.older", (int)v38, v39);
  if ( v59 <= 1 )
  {
    sub_6055C(&v69);
    sub_1E8C0(a1, (int)v81, 128);
    v51 = strlen((const char *)v81);
    sub_1F350("nonce", (int)v81, v51);
LABEL_96:
    if ( (unsigned __int16)word_BA6B8 < (unsigned int)v56 && v59 )
    {
      v41 = 0;
      v42 = 0;
      while ( 1 )
      {
        if ( *(_DWORD *)(v33 + 36) >= v60
          && (!v57 || (v57 & ~*(unsigned __int16 *)(v33 + 40)) == 0)
          && (!v58 || (v58 & *(_WORD *)(v33 + 40)) != 0)
          && (!v61 || v61 >= v69 - *(_DWORD *)(v33 + 24))
          && (!v53 || *(_DWORD *)(v33 + 12) == v53) )
        {
          v43 = 6;
          strcpy(v79, "first.%d");
          v78 = 0;
          strcpy(v74, "ct.%d");
          v77 = 0;
          strcpy(v75, "mv.%d");
          strcpy(v76, "rs.%d");
          v44 = rand();
          v45 = v44 ^ (rand() << 16);
          do
          {
            v46 = v45 & 7;
            v45 >>= 3;
            for ( i = v46 % 6; ; i = (i + 1) % 6 )
            {
              v48 = &v81[i + 132];
              if ( !*((_BYTE *)&v77 + i) )
                break;
            }
            switch ( i )
            {
              case 1u:
                sub_6D00C(v80, 32, "last.%d", v42);
                sub_1FF38(v80, (_DWORD *)(v33 + 24));
                break;
              case 2u:
                sub_6D00C(v80, 32, v79, v42);
                sub_1FF38(v80, (_DWORD *)(v33 + 16));
                break;
              case 3u:
                sub_6D00C(v80, 32, v74, v42);
                sub_1FD0C(v80, *(_DWORD *)(v33 + 36));
                break;
              case 4u:
                sub_6D00C(v80, 32, v75, v42);
                sub_1FDB0(v80, *(unsigned __int8 *)(v33 + 42));
                break;
              case 5u:
                sub_6D00C(v80, 32, v76, v42);
                sub_1FC68(v80, *(unsigned __int16 *)(v33 + 40));
                break;
              default:
                sub_6D00C(v80, 32, "addr.%d", v42);
                v55 = (const char *)sub_6D454(v33 + 44);
                v49 = strlen(v55);
                sub_1F350(v80, (int)v55, v49);
                break;
            }
            --v43;
            *(v48 - 184) = 1;
          }
          while ( v43 );
          if ( !v42 )
            sub_1FE54(0);
          ++v42;
          v41 = v33;
        }
        v33 = *(_DWORD *)(v33 + 4);
        if ( (_UNKNOWN *)v33 == &mon_mru_list || !v33 )
          break;
        if ( (unsigned __int16)word_BA6B8 >= (unsigned int)v56 || v42 >= v59 )
          goto LABEL_135;
      }
      if ( v42 > 1 )
        sub_1FE54(v42 - 1);
      sub_1FF38("now", &v69);
      if ( v41 )
        sub_1FF38("last.newest", (_DWORD *)(v41 + 24));
    }
    goto LABEL_135;
  }
  v33 = *(_DWORD *)(v33 + 4);
  if ( (_UNKNOWN *)v33 != &mon_mru_list )
    goto LABEL_95;
LABEL_137:
  sub_6055C(&v69);
  sub_1E8C0(a1, (int)v81, 128);
  v50 = strlen((const char *)v81);
  sub_1F350("nonce", (int)v81, v50);
  sub_1FF38("now", &v69);
LABEL_135:
  sub_1EDD4(0);
}

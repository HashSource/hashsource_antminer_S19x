int __fastcall sub_17C04(void (__fastcall *a1)(int, unsigned __int16 **), int a2)
{
  unsigned int v2; // r10
  int v5; // r10
  char v6; // lr
  bool v7; // zf
  int v8; // lr
  int v9; // r11
  unsigned int v10; // r11
  int v11; // r0
  int v12; // r0
  int v13; // r11
  int v14; // r3
  const char *v15; // r0
  int v16; // r0
  unsigned __int16 *v17; // r5
  unsigned __int16 *v18; // r6
  int *v19; // r1
  int *v20; // r3
  int *v21; // r2
  int v22; // r1
  int *v23; // r3
  int *i; // r0
  int *v25; // r3
  int *v26; // r2
  int v27; // r11
  int v28; // r0
  int v29; // r0
  int v30; // r0
  _DWORD *v31; // r6
  int *v32; // r3
  int *v33; // r5
  const char *v34; // r8
  const char *v35; // r0
  int v36; // r3
  _DWORD *v37; // r0
  _DWORD *v38; // r9
  int v39; // r6
  int v40; // r0
  int v41; // r0
  _DWORD *v42; // r0
  int v43; // r9
  int v44; // r0
  int v45; // r0
  int v47; // [sp+24h] [bp-1A4h]
  int v48; // [sp+40h] [bp-188h] BYREF
  unsigned __int16 *v49; // [sp+44h] [bp-184h] BYREF
  char v50; // [sp+48h] [bp-180h]
  int v51; // [sp+4Ch] [bp-17Ch] BYREF
  int v52; // [sp+50h] [bp-178h]
  _DWORD v53[4]; // [sp+54h] [bp-174h] BYREF
  int v54; // [sp+64h] [bp-164h]
  char dest[32]; // [sp+68h] [bp-160h] BYREF
  int v56; // [sp+88h] [bp-140h]
  int v57; // [sp+8Ch] [bp-13Ch]
  int v58; // [sp+90h] [bp-138h]
  int v59; // [sp+94h] [bp-134h]
  int v60; // [sp+98h] [bp-130h]
  int v61; // [sp+9Ch] [bp-12Ch]
  int v62; // [sp+A0h] [bp-128h]
  int v63; // [sp+A8h] [bp-120h]
  int v64; // [sp+ACh] [bp-11Ch]
  int v65; // [sp+B0h] [bp-118h]
  int v66; // [sp+B4h] [bp-114h]
  int v67; // [sp+C0h] [bp-108h]
  int v68; // [sp+ECh] [bp-DCh]
  int v69; // [sp+F0h] [bp-D8h]
  _DWORD s[48]; // [sp+F4h] [bp-D4h] BYREF
  _BYTE s1[16]; // [sp+1B4h] [bp-14h] BYREF

  v48 = 0;
  if ( sub_70D88(-1, &v48) )
    return 0;
  word_BA240[0] ^= 1u;
  if ( !sub_710A0(v48) )
  {
    v47 = 0;
    while ( 1 )
    {
      while ( 1 )
      {
        if ( sub_71014(v48, dest) )
          goto LABEL_38;
        if ( (v57 & 0xFFFFFFF7) == 2 )
          break;
LABEL_37:
        if ( sub_7117C(v48) )
          goto LABEL_38;
      }
      if ( v57 != 2 )
        break;
      if ( ipv4_works )
        goto LABEL_10;
      if ( sub_7117C(v48) )
        goto LABEL_38;
    }
    if ( v57 == 10 && !ipv6_works )
      goto LABEL_37;
LABEL_10:
    memset(s, 0, sizeof(s));
    HIWORD(s[35]) = word_BA240[0];
    s[3] = -1;
    s[4] = -1;
    s1[15] = 1;
    memset(s1, 0, 15);
    sub_6E4B4(&s[27]);
    HIWORD(s[6]) = 31488;
    HIWORD(s[13]) = 31488;
    LOWORD(s[35]) = v56;
    s[44] = v69;
    LOWORD(s[6]) = v56;
    LOWORD(s[13]) = v56;
    HIWORD(s[20]) = 31488;
    LOWORD(s[20]) = v56;
    if ( (unsigned __int16)v56 == 2 )
    {
      v6 = v68;
      v36 = v63;
      s[14] = v63;
      if ( (v68 & 8) != 0 )
      {
        v36 = v67;
        v2 = s[36];
      }
      s[7] = v58;
      if ( (v68 & 8) != 0 )
      {
        v5 = v2 | 8;
        s[21] = v36;
      }
      else
      {
        v5 = s[36];
      }
    }
    else if ( (unsigned __int16)v56 == 10 )
    {
      s[12] = v62;
      v6 = v68;
      s[8] = v58;
      s[9] = v59;
      s[10] = v60;
      s[11] = v61;
      v5 = s[36];
      s[15] = v63;
      s[16] = v64;
      s[17] = v65;
      s[18] = v66;
    }
    else
    {
      v5 = s[36];
      v6 = v68;
    }
    v7 = (v6 & 0x20) == 0;
    v8 = v6 & 0x17;
    if ( v7 )
      v9 = 0;
    else
      v9 = 512;
    v10 = v8 | v9 | v5;
    s[36] = v10;
    if ( (v10 & 4) != 0 )
    {
      if ( (unsigned __int16)v56 == 2 )
      {
        if ( bswap32(s[7]) >> 24 == 127 )
          goto LABEL_20;
        goto LABEL_19;
      }
      if ( memcmp(s1, &s[8], 0x10u) )
      {
LABEL_19:
        v10 &= ~4u;
        s[36] = v10;
      }
    }
LABEL_20:
    v2 = (unsigned int)&s[6];
    v11 = sub_14BF8((const char *)&s[27], (unsigned __int16 *)&s[6], v10);
    if ( v11 == 1 )
      goto LABEL_37;
    if ( v11 )
    {
      if ( v11 == 2 )
        s[45] = 1;
    }
    else
    {
      s[45] = 0;
    }
    if ( (s[36] & 1) == 0 || sub_13F60((unsigned __int16 *)&s[6]) || LOWORD(s[6]) != 2 && LOWORD(s[6]) != 10 )
      goto LABEL_37;
    v12 = sub_177B8(&s[6], 128);
    v13 = v12;
    if ( v12 && *(_DWORD *)(v12 + 12) != -1 )
    {
      if ( *(unsigned __int16 *)(v12 + 142) == (unsigned __int16)word_BA240[0] )
      {
        sub_6E4B4(v12 + 108);
        v14 = *(_DWORD *)(v13 + 180);
      }
      else
      {
        sub_6E4B4(v12 + 108);
        v14 = s[45];
        *(_DWORD *)(v13 + 180) = s[45];
      }
      if ( s[45] != v14 )
      {
        v15 = (const char *)sub_6D2C0(&s[6]);
        sub_65D40(
          3,
          "WARNING: conflicting enable configuration for interfaces %s and %s for address %s - unsupported configuration "
          "- address DISABLED",
          (const char *)&s[27],
          (const char *)(v13 + 108),
          v15);
        *(_DWORD *)(v13 + 180) = 1;
      }
      v49 = (unsigned __int16 *)v13;
      v50 = 1;
      *(_WORD *)(v13 + 142) = word_BA240[0];
      if ( a1 )
        a1(a2, &v49);
      goto LABEL_37;
    }
    v37 = sub_1416C(s);
    v38 = v37 + 6;
    v39 = (int)v37;
    v40 = sub_15740((struct sockaddr *)(v37 + 6), 0, 0, (int)v37);
    *(_DWORD *)(v39 + 12) = v40;
    if ( v40 == -1 )
    {
      if ( (*(_DWORD *)(v39 + 144) & 8) == 0 )
        goto LABEL_117;
      if ( *(_DWORD *)(v39 + 16) == -1 )
      {
LABEL_130:
        v42 = v38;
        v43 = *(_DWORD *)(v39 + 20);
        v44 = sub_6D2C0(v42);
        sub_65D40(3, "unable to create socket on %s (%d) for %s#%d", v39 + 108, v43, v44, 123);
        free((void *)v39);
        v45 = sub_6D2C0(&s[6]);
        sub_65D40(6, "failed to init interface for address %s", v45);
        goto LABEL_37;
      }
    }
    else
    {
      sub_14A54(v39);
      if ( (*(_DWORD *)(v39 + 144) & 8) == 0 )
        goto LABEL_116;
      if ( *(_DWORD *)(v39 + 16) == -1 )
      {
        if ( *(_DWORD *)(v39 + 12) != -1 )
        {
LABEL_118:
          v52 = 0;
          v51 = 0;
          v2 = (unsigned int)&v51;
          memset(v53, 0, sizeof(v53));
          v54 = 0;
          LOWORD(v51) = *(_WORD *)(v39 + 24);
          if ( (unsigned __int16)v51 == 10 )
            memset(v53, 255, sizeof(v53));
          else
            v52 = -1;
          sub_41008(1, v38, &v51, -4, 12288, 1, 0);
          if ( !loopback_interface && *(_WORD *)(v39 + 140) == 2 && (*(_DWORD *)(v39 + 144) & 4) != 0 )
            loopback_interface = v39;
          sub_140D4(v38, v39);
          sub_144C8(v39);
          v49 = (unsigned __int16 *)v39;
          v50 = 2;
          if ( a1 )
            a1(a2, &v49);
          v47 = 1;
          goto LABEL_37;
        }
        goto LABEL_130;
      }
    }
    v41 = sub_6D2C0(v39 + 80);
    sub_65D40(6, "Listening on broadcast address %s#%d", v41, 123);
LABEL_116:
    if ( *(_DWORD *)(v39 + 12) != -1 )
      goto LABEL_118;
LABEL_117:
    if ( *(_DWORD *)(v39 + 16) != -1 )
      goto LABEL_118;
    goto LABEL_130;
  }
  v47 = 0;
LABEL_38:
  v16 = sub_71260(&v48);
  v17 = (unsigned __int16 *)ep_list;
  if ( ep_list )
  {
    while ( 1 )
    {
      v16 = *((_DWORD *)v17 + 36);
      v18 = *(unsigned __int16 **)v17;
      if ( (v16 & 0x180) == 0 && v17[71] != (unsigned __int16)word_BA240[0] )
        break;
LABEL_85:
      v17 = v18;
      if ( !v18 )
        goto LABEL_86;
    }
    v19 = (int *)ep_list;
    if ( v17 == (unsigned __int16 *)ep_list )
    {
      v20 = (int *)v17;
      v19 = &ep_list;
    }
    else
    {
      if ( !ep_list || (v20 = *(int **)ep_list) == 0 )
      {
LABEL_49:
        if ( *((_DWORD *)v17 + 45) || (v16 & 0x10) == 0 )
          goto LABEL_62;
        if ( v17[70] == 2 )
          v21 = &mc4_list;
        else
          v21 = &mc6_list;
        v22 = *v21;
        if ( v17 == (unsigned __int16 *)*v21 )
        {
          v23 = (int *)v17;
        }
        else
        {
          if ( !v22 )
            goto LABEL_62;
          v23 = *(int **)(v22 + 4);
          if ( !v23 )
            goto LABEL_62;
          while ( v17 != (unsigned __int16 *)v23 )
          {
            v22 = (int)v23;
            if ( !v23[1] )
              goto LABEL_62;
            v23 = (int *)v23[1];
          }
          v21 = (int *)(v22 + 4);
        }
        *v21 = v23[1];
LABEL_62:
        for ( i = (int *)remoteaddr_list; v17 == *(unsigned __int16 **)(remoteaddr_list + 32); i = (int *)remoteaddr_list )
        {
          v26 = &remoteaddr_list;
LABEL_69:
          *v26 = *i;
          free(i);
        }
        v25 = (int *)*i;
        if ( *i )
        {
          while ( 1 )
          {
            if ( v17 == (unsigned __int16 *)v25[8] )
            {
              v26 = i;
              i = (int *)*i;
              goto LABEL_69;
            }
            i = v25;
            if ( !*v25 )
              break;
            v25 = (int *)*v25;
          }
        }
        if ( *((_DWORD *)v17 + 3) != -1 )
        {
          v27 = *((_DWORD *)v17 + 5);
          v28 = sub_6D2C0(v17 + 12);
          sub_65D40(
            6,
            "Deleting interface #%d %s, %s#%d, interface stats: received=%ld, sent=%ld, dropped=%ld, active_time=%ld secs",
            v27,
            v17 + 54,
            v28,
            HIBYTE(v17[13]) | (unsigned __int16)(v17[13] << 8),
            *((_DWORD *)v17 + 41),
            *((_DWORD *)v17 + 42),
            *((_DWORD *)v17 + 43),
            current_time - *((_DWORD *)v17 + 40));
          sub_15BE0(*((__int16 **)v17 + 3));
          *((_DWORD *)v17 + 3) = -1;
        }
        if ( *((_DWORD *)v17 + 4) != -1 )
        {
          v29 = sub_6D2C0(v17 + 40);
          sub_65D40(6, "stop listening for broadcasts to %s on interface #%d %s", v29, *((_DWORD *)v17 + 5), v17 + 54);
          sub_15BE0(*((__int16 **)v17 + 4));
          *((_DWORD *)v17 + 4) = -1;
        }
        --ninterfaces;
        sub_31414(v17);
        v52 = 0;
        v51 = 0;
        memset(v53, 0, sizeof(v53));
        v54 = 0;
        LOWORD(v51) = v17[12];
        if ( (unsigned __int16)v51 == 10 )
          memset(v53, 255, sizeof(v53));
        else
          v52 = -1;
        sub_41008(4, v17 + 12, &v51, -3, 12288, 1, 0);
        v49 = v17;
        v50 = 3;
        if ( a1 )
          a1(a2, &v49);
        while ( 1 )
        {
          v30 = *((_DWORD *)v17 + 46);
          if ( !v30 )
            break;
          sub_32358(v30, 0);
        }
        if ( v17 == (unsigned __int16 *)loopback_interface )
          loopback_interface = 0;
        free(v17);
        goto LABEL_85;
      }
      while ( v20 != (int *)v17 )
      {
        v19 = v20;
        if ( !*v20 )
          goto LABEL_49;
        v20 = (int *)*v20;
      }
    }
    *v19 = *v20;
    goto LABEL_49;
  }
LABEL_86:
  sub_325BC(v16);
  if ( broadcast_client_enabled )
    sub_16470();
  if ( sys_bclient )
    sub_16470();
  v31 = (_DWORD *)ep_list;
  if ( ep_list )
  {
    do
    {
LABEL_93:
      if ( (v31[36] & 0x140) == 0x100 )
      {
        v32 = &remoteaddr_list;
        while ( 1 )
        {
          v32 = (int *)*v32;
          if ( !v32 )
            break;
          if ( v31 == (_DWORD *)v32[8] )
          {
            v33 = v32 + 1;
            if ( !sub_14AF8(v31, (unsigned __int16 *)v32 + 2) )
              break;
            v34 = (const char *)sub_6D2C0(v31 + 6);
            v35 = (const char *)sub_6D2C0(v33);
            sub_65D40(6, "Joined %s socket to multicast group %s", v34, v35);
            v31 = (_DWORD *)*v31;
            if ( v31 )
              goto LABEL_93;
            return v47;
          }
        }
      }
      v31 = (_DWORD *)*v31;
    }
    while ( v31 );
  }
  return v47;
}

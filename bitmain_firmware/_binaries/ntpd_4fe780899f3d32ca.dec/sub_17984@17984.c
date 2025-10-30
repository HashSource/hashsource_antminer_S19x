int __fastcall sub_17984(void (__fastcall *a1)(int, unsigned __int16 **), int a2)
{
  unsigned int v4; // r12
  int v5; // r11
  int v6; // r0
  int v7; // r0
  unsigned __int16 *v8; // r5
  unsigned __int16 *v9; // r6
  int *v10; // r1
  int *v11; // r3
  int *v12; // r3
  int *v13; // r3
  int v14; // r1
  unsigned __int16 *v15; // r3
  int *v16; // r0
  int *v17; // r3
  int *v18; // r2
  int v19; // r0
  const char *v20; // r0
  int v21; // r1
  int v22; // r3
  bool v23; // zf
  int v24; // r0
  _DWORD *v25; // r6
  int v26; // r3
  int v27; // r5
  const char *v28; // r8
  const char *v29; // r0
  int v30; // r3
  int v31; // r0
  int v32; // r11
  int v33; // r3
  const char *v34; // r0
  _DWORD *v35; // r8
  _DWORD *v36; // r10
  __int64 v37; // r0
  const char *v38; // r0
  int v39; // r3
  bool v40; // zf
  int v41; // r11
  int v42; // r0
  int v43; // r0
  int v44; // [sp+18h] [bp-1A4h]
  int v46; // [sp+24h] [bp-198h]
  int v47; // [sp+30h] [bp-18Ch] BYREF
  unsigned __int16 *v48; // [sp+34h] [bp-188h] BYREF
  char v49; // [sp+38h] [bp-184h]
  unsigned __int16 v50; // [sp+3Ch] [bp-180h] BYREF
  _QWORD v51[3]; // [sp+3Eh] [bp-17Eh] BYREF
  __int16 v52; // [sp+56h] [bp-166h]
  char dest[32]; // [sp+58h] [bp-164h] BYREF
  int v54; // [sp+78h] [bp-144h]
  int v55; // [sp+7Ch] [bp-140h]
  unsigned int v56; // [sp+80h] [bp-13Ch]
  int v57; // [sp+84h] [bp-138h]
  int v58; // [sp+88h] [bp-134h]
  int v59; // [sp+8Ch] [bp-130h]
  int v60; // [sp+90h] [bp-12Ch]
  int v61; // [sp+98h] [bp-124h]
  int v62; // [sp+9Ch] [bp-120h]
  int v63; // [sp+A0h] [bp-11Ch]
  int v64; // [sp+A4h] [bp-118h]
  int v65; // [sp+B0h] [bp-10Ch]
  int v66; // [sp+DCh] [bp-E0h]
  int v67; // [sp+E0h] [bp-DCh]
  _DWORD s[48]; // [sp+E4h] [bp-D8h] BYREF
  int v69; // [sp+1A4h] [bp-18h]
  int v70; // [sp+1A8h] [bp-14h]
  int v71; // [sp+1ACh] [bp-10h]
  int v72; // [sp+1B0h] [bp-Ch]

  v47 = 0;
  if ( sub_6FD38(-1, &v47) )
    return 0;
  word_B9240[0] ^= 1u;
  if ( !sub_70050(v47) )
  {
    v44 = 0;
    while ( 1 )
    {
      if ( sub_6FFC4(v47, dest) )
        goto LABEL_27;
      if ( (v55 & 0xFFFFFFF7) == 2 )
        break;
LABEL_26:
      if ( sub_70164(v47) )
        goto LABEL_27;
    }
    if ( v55 == 2 )
    {
      if ( !ipv4_works )
        goto LABEL_26;
    }
    else if ( v55 == 10 && !ipv6_works )
    {
      goto LABEL_26;
    }
    memset(s, 0, sizeof(s));
    v72 = 0x1000000;
    v69 = 0;
    v70 = 0;
    v71 = 0;
    HIWORD(s[35]) = word_B9240[0];
    s[3] = -1;
    s[4] = -1;
    sub_6D4DC(&s[27]);
    HIWORD(s[6]) = 31488;
    s[44] = v67;
    HIWORD(s[13]) = 31488;
    HIWORD(s[20]) = 31488;
    LOWORD(s[35]) = v54;
    LOWORD(s[6]) = v54;
    LOWORD(s[13]) = v54;
    LOWORD(s[20]) = v54;
    if ( (unsigned __int16)v54 == 2 )
    {
      s[7] = v56;
      s[14] = v61;
      v30 = (16 * (_WORD)v66) & 0x200 | v66 & 0x17;
      if ( (v66 & 8) != 0 )
      {
        v4 = s[36] | 8 | v30;
        s[36] = v4;
        s[21] = v65;
        if ( (v4 & 4) == 0 )
          goto LABEL_17;
      }
      else
      {
        v4 = s[36] | v30;
        s[36] = v4;
        if ( (v4 & 4) == 0 )
          goto LABEL_17;
      }
      if ( bswap32(v56) >> 24 != 127 )
        goto LABEL_16;
    }
    else
    {
      v4 = (16 * (_WORD)v66) & 0x200 | v66 & 0x17 | s[36];
      v5 = v66 & 4 | s[36] & 4;
      if ( (unsigned __int16)v54 == 10 )
      {
        s[36] |= (16 * (_WORD)v66) & 0x200 | v66 & 0x17;
        s[8] = v56;
        s[9] = v57;
        s[10] = v58;
        s[11] = v59;
        s[12] = v60;
        s[15] = v61;
        s[16] = v62;
        s[17] = v63;
        s[18] = v64;
        if ( !v5 )
          goto LABEL_17;
        if ( v69 != s[8] )
          goto LABEL_16;
      }
      else
      {
        s[36] |= (16 * (_WORD)v66) & 0x200 | v66 & 0x17;
        if ( !v5 )
        {
LABEL_17:
          v6 = sub_149CC((const char *)&s[27], (unsigned __int16 *)&s[6], v4);
          if ( v6 == 1 )
            goto LABEL_26;
          if ( v6 )
          {
            if ( v6 == 2 )
              s[45] = 1;
          }
          else
          {
            s[45] = 0;
          }
          if ( (s[36] & 1) == 0 || sub_13D38((unsigned __int16 *)&s[6]) || LOWORD(s[6]) != 2 && LOWORD(s[6]) != 10 )
            goto LABEL_26;
          v31 = sub_1753C(&s[6], 128);
          v32 = v31;
          if ( v31 && *(_DWORD *)(v31 + 12) != -1 )
          {
            if ( *(unsigned __int16 *)(v31 + 142) == (unsigned __int16)word_B9240[0] )
            {
              sub_6D4DC(v31 + 108);
              v33 = *(_DWORD *)(v32 + 180);
            }
            else
            {
              sub_6D4DC(v31 + 108);
              v33 = s[45];
              *(_DWORD *)(v32 + 180) = s[45];
            }
            if ( s[45] != v33 )
            {
              v34 = (const char *)sub_6C2E8(&s[6]);
              sub_64E00(
                3,
                "WARNING: conflicting enable configuration for interfaces %s and %s for address %s - unsupported configur"
                "ation - address DISABLED",
                (const char *)&s[27],
                (const char *)(v32 + 108),
                v34);
              *(_DWORD *)(v32 + 180) = 1;
            }
            v48 = (unsigned __int16 *)v32;
            v49 = 1;
            *(_WORD *)(v32 + 142) = word_B9240[0];
            if ( a1 )
              a1(a2, &v48);
            goto LABEL_26;
          }
          v35 = sub_13F3C(s);
          v36 = v35 + 6;
          LODWORD(v37) = sub_154A8((struct sockaddr *)(v35 + 6), 0, 0, (int)v35);
          v35[3] = v37;
          if ( (_DWORD)v37 == -1 )
          {
            if ( (v35[36] & 8) == 0 )
              goto LABEL_120;
            if ( v35[4] == -1 )
            {
LABEL_135:
              v41 = v35[5];
              v42 = sub_6C2E8(v36);
              sub_64E00(3, "unable to create socket on %s (%d) for %s#%d", v35 + 27, v41, v42, 123);
              free(v35);
              v43 = sub_6C2E8(&s[6]);
              sub_64E00(6, "failed to init interface for address %s", v43);
              goto LABEL_26;
            }
          }
          else
          {
            v37 = sub_1482C((int)v35);
            if ( (v35[36] & 8) == 0 )
            {
LABEL_119:
              if ( v35[3] != -1 )
                goto LABEL_121;
LABEL_120:
              if ( v35[4] != -1 )
                goto LABEL_121;
              goto LABEL_135;
            }
            if ( v35[4] == -1 )
            {
              if ( v35[3] != -1 )
              {
LABEL_121:
                memset(v51, 0, sizeof(v51));
                v52 = 0;
                v39 = *((unsigned __int16 *)v35 + 12);
                v40 = v39 == 10;
                v50 = *((_WORD *)v35 + 12);
                if ( v39 == 10 )
                  HIDWORD(v37) = -1;
                else
                  v39 = -1;
                if ( v40 )
                {
                  *(_DWORD *)((char *)&v51[1] + 2) = HIDWORD(v37);
                  *(_DWORD *)((char *)v51 + 6) = HIDWORD(v37);
                  *(_DWORD *)((char *)&v51[1] + 6) = HIDWORD(v37);
                  *(_DWORD *)((char *)&v51[2] + 2) = HIDWORD(v37);
                }
                else
                {
                  *(_DWORD *)((char *)v51 + 2) = v39;
                }
                sub_40238(1, v36, &v50, -4, 12288, 1, 0);
                if ( !loopback_interface && *((_WORD *)v35 + 70) == 2 && (v35[36] & 4) != 0 )
                  loopback_interface = (int)v35;
                sub_13EA4(v36, (int)v35);
                sub_14298((int)v35);
                v48 = (unsigned __int16 *)v35;
                v49 = 2;
                if ( a1 )
                  a1(a2, &v48);
                v44 = 1;
                goto LABEL_26;
              }
              goto LABEL_135;
            }
          }
          v38 = (const char *)sub_6C2E8(v35 + 20);
          v37 = sub_64E00(6, "Listening on broadcast address %s#%d", v38, 123);
          goto LABEL_119;
        }
        if ( v69 != s[8] )
        {
LABEL_16:
          v4 &= ~4u;
          s[36] = v4;
          goto LABEL_17;
        }
      }
      if ( v70 != s[9] || v71 != s[10] || v72 != s[11] )
        goto LABEL_16;
    }
    v4 = s[36];
    goto LABEL_17;
  }
  v44 = 0;
LABEL_27:
  v7 = sub_70284(&v47);
  v8 = (unsigned __int16 *)ep_list;
  if ( !ep_list )
    goto LABEL_78;
  do
  {
    v7 = *((_DWORD *)v8 + 36);
    v9 = *(unsigned __int16 **)v8;
    if ( (v7 & 0x180) != 0 || v8[71] == (unsigned __int16)word_B9240[0] )
      goto LABEL_77;
    v10 = (int *)ep_list;
    if ( (unsigned __int16 *)ep_list == v8 )
    {
      v12 = (int *)v8;
      v10 = &ep_list;
LABEL_38:
      *v10 = *v12;
      goto LABEL_39;
    }
    if ( ep_list )
    {
      v11 = *(int **)ep_list;
      if ( *(_DWORD *)ep_list )
      {
        while ( v8 != (unsigned __int16 *)v11 )
        {
          v10 = v11;
          if ( !*v11 )
            goto LABEL_39;
          v11 = (int *)*v11;
        }
        v12 = (int *)*v10;
        goto LABEL_38;
      }
    }
LABEL_39:
    if ( !*((_DWORD *)v8 + 45) && (v7 & 0x10) != 0 )
    {
      if ( v8[70] == 2 )
        v13 = &mc4_list;
      else
        v13 = &mc6_list;
      v14 = *v13;
      if ( (unsigned __int16 *)*v13 != v8 )
      {
        if ( !v14 )
          goto LABEL_52;
        v15 = *(unsigned __int16 **)(v14 + 4);
        if ( !v15 )
          goto LABEL_52;
        while ( v8 != v15 )
        {
          v14 = (int)v15;
          if ( !*((_DWORD *)v15 + 1) )
            goto LABEL_52;
          v15 = (unsigned __int16 *)*((_DWORD *)v15 + 1);
        }
        v13 = (int *)(v14 + 4);
      }
      *v13 = *((_DWORD *)v8 + 1);
      goto LABEL_52;
    }
    while ( 1 )
    {
LABEL_52:
      v16 = (int *)remoteaddr_list;
      v17 = *(int **)remoteaddr_list;
      if ( *(unsigned __int16 **)(remoteaddr_list + 32) == v8 )
      {
        v18 = &remoteaddr_list;
        goto LABEL_59;
      }
      if ( !v17 )
        break;
      while ( (unsigned __int16 *)v17[8] != v8 )
      {
        v16 = v17;
        if ( !*v17 )
          goto LABEL_60;
        v17 = (int *)*v17;
      }
      v18 = v16;
      v16 = (int *)*v16;
      v17 = (int *)*v16;
LABEL_59:
      *v18 = (int)v17;
      free(v16);
    }
LABEL_60:
    if ( *((_DWORD *)v8 + 3) != -1 )
    {
      v46 = *((_DWORD *)v8 + 5);
      v19 = sub_6C2E8(v8 + 12);
      sub_64E00(
        6,
        "Deleting interface #%d %s, %s#%d, interface stats: received=%ld, sent=%ld, dropped=%ld, active_time=%ld secs",
        v46,
        v8 + 54,
        v19,
        (unsigned __int16)__rev16(v8[13]),
        *((_DWORD *)v8 + 41),
        *((_DWORD *)v8 + 42),
        *((_DWORD *)v8 + 43),
        current_time - *((_DWORD *)v8 + 40));
      sub_15954(*((__int16 **)v8 + 3));
      *((_DWORD *)v8 + 3) = -1;
    }
    if ( *((_DWORD *)v8 + 4) != -1 )
    {
      v20 = (const char *)sub_6C2E8(v8 + 40);
      sub_64E00(
        6,
        "stop listening for broadcasts to %s on interface #%d %s",
        v20,
        *((_DWORD *)v8 + 5),
        (const char *)v8 + 108);
      sub_15954(*((__int16 **)v8 + 4));
      *((_DWORD *)v8 + 4) = -1;
    }
    --ninterfaces;
    sub_30F28(v8);
    memset(v51, 0, sizeof(v51));
    v52 = 0;
    v22 = v8[12];
    v23 = v22 == 10;
    v50 = v8[12];
    if ( v22 == 10 )
      v21 = -1;
    else
      v22 = -1;
    if ( v23 )
    {
      *(_DWORD *)((char *)&v51[1] + 2) = v21;
      *(_DWORD *)((char *)v51 + 6) = v21;
      *(_DWORD *)((char *)&v51[1] + 6) = v21;
      *(_DWORD *)((char *)&v51[2] + 2) = v21;
    }
    else
    {
      *(_DWORD *)((char *)v51 + 2) = v22;
    }
    sub_40238(4, v8 + 12, &v50, -3, 12288, 1, 0);
    v48 = v8;
    v49 = 3;
    if ( a1 )
      a1(a2, &v48);
    while ( 1 )
    {
      v24 = *((_DWORD *)v8 + 46);
      if ( !v24 )
        break;
      sub_31E54(v24, 0);
    }
    if ( (unsigned __int16 *)loopback_interface == v8 )
      loopback_interface = 0;
    free(v8);
LABEL_77:
    v8 = v9;
  }
  while ( v9 );
LABEL_78:
  sub_320B4(v7);
  if ( broadcast_client_enabled )
    sub_1621C();
  if ( sys_bclient )
    sub_1621C();
  v25 = (_DWORD *)ep_list;
  if ( ep_list )
  {
    do
    {
      if ( (v25[36] & 0x140) == 0x100 )
      {
        v26 = remoteaddr_list;
        if ( remoteaddr_list )
        {
          if ( v25 == *(_DWORD **)(remoteaddr_list + 32) )
          {
LABEL_90:
            v27 = v26 + 4;
            if ( sub_148D0(v25, (unsigned __int16 *)(v26 + 4)) )
            {
              v28 = (const char *)sub_6C2E8(v25 + 6);
              v29 = (const char *)sub_6C2E8(v27);
              sub_64E00(6, "Joined %s socket to multicast group %s", v28, v29);
            }
          }
          else
          {
            while ( 1 )
            {
              v26 = *(_DWORD *)v26;
              if ( !v26 )
                break;
              if ( *(_DWORD **)(v26 + 32) == v25 )
                goto LABEL_90;
            }
          }
        }
      }
      v25 = (_DWORD *)*v25;
    }
    while ( v25 );
  }
  return v44;
}

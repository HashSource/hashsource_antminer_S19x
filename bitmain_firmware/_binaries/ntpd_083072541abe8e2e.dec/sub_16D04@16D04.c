int sub_16D04()
{
  __int64 v0; // r0
  int v1; // r6
  int v2; // r2
  _DWORD *v3; // r6
  int v4; // r4
  int v5; // r3
  int v6; // r9
  size_t v7; // r5
  int *v8; // r0
  int v9; // r1
  int v10; // r2
  ssize_t v11; // r0
  ssize_t v12; // r7
  int v13; // r2
  struct timeval v14; // r0
  int v15; // r2
  _DWORD *v16; // r8
  size_t v17; // r5
  int *v18; // r0
  int v19; // r1
  int v20; // r2
  ssize_t v21; // r0
  ssize_t v22; // r3
  int v23; // r2
  __time_t tv_sec; // r0
  __suseconds_t tv_usec; // r1
  int v26; // r2
  int *v27; // r3
  int *v28; // r0
  int v29; // r7
  int *v30; // r5
  const char *v31; // r0
  _DWORD *v32; // r4
  int v33; // r6
  int v34; // r5
  int v35; // r7
  int *v36; // r3
  int v37; // r4
  int v38; // r5
  int v39; // r0
  bool v40; // nf
  int v41; // r3
  unsigned int v42; // r4
  int v43; // r5
  int v44; // r0
  int v45; // r3
  int v46; // r8
  int v47; // r2
  int v48; // r9
  char *v49; // r3
  char *v50; // r11
  char v51; // r3
  __int16 *v52; // r3
  int v53; // r7
  int v54; // r2
  int v55; // r6
  int v56; // r11
  int v57; // r4
  __int64 v58; // r0
  int v59; // r2
  const char *v60; // r0
  int v62; // [sp+8h] [bp-574h]
  int v63; // [sp+10h] [bp-56Ch]
  int *v64; // [sp+10h] [bp-56Ch]
  int v65; // [sp+10h] [bp-56Ch]
  int *v66; // [sp+14h] [bp-568h]
  int *v67; // [sp+14h] [bp-568h]
  __int64 v68; // [sp+24h] [bp-558h] BYREF
  struct timeval v69; // [sp+2Ch] [bp-550h]
  struct timeval v70; // [sp+34h] [bp-548h]
  struct timeval timeout; // [sp+3Ch] [bp-540h] BYREF
  fd_set dest; // [sp+44h] [bp-538h] BYREF
  _BYTE v73[1208]; // [sp+C4h] [bp-4B8h] BYREF

  ++handler_calls;
  memcpy(&dest, &unk_B9244, sizeof(dest));
  LODWORD(v0) = select(dword_B92C4 + 1, &dest, 0, 0, 0);
  v1 = v0;
  if ( (int)v0 >= 0 )
    goto LABEL_2;
  LODWORD(v0) = _errno_location();
  v46 = *(_DWORD *)v0;
  if ( *(_DWORD *)v0 == 4 )
    goto LABEL_3;
  v47 = dword_B92C4 + 1;
  v48 = dword_B92C4 >= 255 ? 255 : dword_B92C4;
  v62 = dword_B92C4 + 1;
  v65 = v48;
  if ( dword_B92C4 >= 0 )
  {
    v50 = byte_B92D0;
    do
    {
      LODWORD(v0) = _fdelt_chk(v48, HIDWORD(v0), v47);
      v47 = v48-- & 0x1F;
      if ( (*(_DWORD *)&word_B9240[2 * v0 + 2] & (1 << v47)) != 0 )
        v51 = 35;
      else
        v51 = 45;
      *v50++ = v51;
    }
    while ( v48 != -1 );
    v52 = word_B9240;
    if ( v65 >= 0 )
      v52 = (__int16 *)((char *)word_B9240 + v65);
    v49 = (char *)v52 + 145;
  }
  else
  {
    v49 = byte_B92D0;
  }
  v53 = 0;
  *v49 = 0;
  v0 = sub_64E00(3, "select(%d, %s, 0L, 0L, &0.0) error: %m", v62, byte_B92D0);
  if ( v46 != 9 )
    goto LABEL_3;
  if ( dword_B92C4 >= 0 )
  {
    v56 = 0;
    do
    {
      LODWORD(v0) = _fdelt_chk(v56, HIDWORD(v0), v54);
      v54 = v56 & 0x1F;
      v57 = 1 << (v56 & 0x1F);
      if ( (v57 & *(_DWORD *)&word_B9240[2 * v0 + 2]) != 0 )
      {
        if ( read(v56, &timeout, 0) == -1 )
        {
          v58 = sub_64E00(3, "Removing bad file descriptor %d from select set", v56);
          LODWORD(v0) = _fdelt_chk(v56, HIDWORD(v58), v59);
          *(_DWORD *)&word_B9240[2 * v0 + 2] &= ~v57;
        }
        else
        {
          v53 = v56;
        }
      }
      ++v56;
    }
    while ( v56 <= dword_B92C4 );
    v55 = v53 + 1;
    if ( dword_B92C4 == v53 )
      goto LABEL_99;
  }
  else
  {
    v55 = 1;
  }
  dword_B92C4 = v53;
LABEL_99:
  timeout.tv_sec = 0;
  timeout.tv_usec = 0;
  memcpy(&dest, &unk_B9244, sizeof(dest));
  LODWORD(v0) = select(v55, &dest, 0, 0, &timeout);
  v1 = v0;
LABEL_2:
  if ( v1 <= 0 )
  {
LABEL_3:
    if ( v1 == -1 )
    {
      LODWORD(v0) = _errno_location();
      if ( *(_DWORD *)v0 != 4 )
        LODWORD(v0) = sub_64E00(3, "select() error: %m");
    }
    return v0;
  }
  sub_5F724(&v68);
  v0 = v68;
  v2 = (int)&handler_pkts;
  v3 = (_DWORD *)dword_B93D0;
  v69 = (struct timeval)v68;
  ++handler_pkts;
  if ( !dword_B93D0 )
    goto LABEL_35;
  while ( 1 )
  {
    while ( 1 )
    {
LABEL_6:
      v4 = v3[5];
      LODWORD(v0) = &v73[4 * _fdelt_chk(v4, HIDWORD(v0), v2) + 1204];
      LOBYTE(v5) = v4 & 0x1F;
      if ( v4 <= 0 )
        v5 = -(-v4 & 0x1F);
      HIDWORD(v0) = *(_DWORD *)(v0 - 1332);
      v2 = 1;
      if ( (HIDWORD(v0) & (1 << v5)) != 0 )
        break;
LABEL_34:
      v3 = (_DWORD *)*v3;
      if ( !v3 )
        goto LABEL_35;
    }
    v70 = v69;
    v6 = sub_6A108();
    if ( v6 )
      break;
    v12 = read(v4, v73, 0x4B0u);
    ++packets_dropped;
LABEL_31:
    if ( v12 < 0 )
    {
      v28 = _errno_location();
      v29 = *v28;
      v30 = v28;
      if ( *v28 == 11 )
        goto LABEL_18;
      v31 = (const char *)sub_6A3FC(v3[3] + 16);
      *v30 = v29;
      sub_64E00(3, "%s read: %m", v31);
      LODWORD(v0) = sub_15274(v4, 1);
      goto LABEL_34;
    }
    if ( v12 )
      goto LABEL_18;
    v60 = (const char *)sub_6A3FC(v3[3] + 16);
    sub_64E00(3, "%s read EOF", v60);
    LODWORD(v0) = sub_15274(v4, 1);
    v3 = (_DWORD *)*v3;
    if ( !v3 )
      goto LABEL_35;
  }
  v7 = v3[4];
  if ( v7 - 1 > 0x847 )
    v7 = 2120;
  while ( 1 )
  {
    v11 = read(v4, (void *)(v6 + 88), v7);
    v12 = v11;
    if ( v11 >= 0 )
      break;
    v8 = _errno_location();
    v10 = *v8;
    if ( *v8 != 4 )
    {
      v27 = v8;
LABEL_30:
      v63 = v10;
      v66 = v27;
      sub_69FA8(v6, v9);
      *v66 = v63;
      goto LABEL_31;
    }
  }
  if ( !v11 )
  {
    v27 = _errno_location();
    v10 = *v27;
    goto LABEL_30;
  }
  v13 = v3[3];
  v14 = v70;
  *(_DWORD *)(v6 + 84) = v12;
  *(_DWORD *)(v6 + 4) = v13;
  v15 = v3[1];
  *(_DWORD *)(v6 + 64) = v4;
  *(_DWORD *)(v6 + 60) = 0;
  *(struct timeval *)(v6 + 72) = v14;
  *(_DWORD *)(v6 + 80) = v15;
  if ( !sub_3A02C(v3, v6) )
  {
    ++v3[6];
    ++packets_received;
  }
LABEL_18:
  while ( 2 )
  {
    while ( 1 )
    {
      timeout = v69;
      v16 = (_DWORD *)sub_6A108();
      if ( v16 )
        break;
      LODWORD(v0) = read(v4, v73, 0x4B0u);
      v2 = (int)&packets_dropped;
      ++packets_dropped;
      if ( (int)v0 <= 0 )
        goto LABEL_34;
    }
    v17 = v3[4];
    if ( v17 - 1 > 0x847 )
      v17 = 2120;
    while ( 1 )
    {
      v21 = read(v4, v16 + 22, v17);
      if ( v21 >= 0 )
        break;
      v18 = _errno_location();
      v20 = *v18;
      if ( *v18 != 4 )
      {
        v36 = v18;
        goto LABEL_48;
      }
    }
    v22 = v21;
    if ( v21 )
    {
      v23 = v3[3];
      tv_sec = timeout.tv_sec;
      tv_usec = timeout.tv_usec;
      v16[21] = v22;
      v16[1] = v23;
      v26 = v3[1];
      v16[16] = v4;
      v16[15] = 0;
      v16[18] = tv_sec;
      v16[19] = tv_usec;
      v16[20] = v26;
      if ( !sub_3A02C(v3, v16) )
      {
        ++v3[6];
        ++packets_received;
      }
      continue;
    }
    break;
  }
  v36 = _errno_location();
  v20 = *v36;
LABEL_48:
  v64 = (int *)v20;
  v67 = v36;
  LODWORD(v0) = sub_69FA8(v16, v19);
  v3 = (_DWORD *)*v3;
  v2 = (int)v64;
  *v67 = (int)v64;
  if ( v3 )
    goto LABEL_6;
LABEL_35:
  v32 = (_DWORD *)ep_list;
  if ( !ep_list )
    goto LABEL_52;
  while ( 2 )
  {
    v33 = 0;
    while ( 2 )
    {
      if ( !v33 )
      {
        v34 = v32[3];
        v35 = 1;
        if ( v34 >= 0 )
          goto LABEL_42;
        goto LABEL_44;
      }
      if ( (v32[36] & 0x20) == 0 )
        break;
      v34 = v32[4];
      v35 = v33 + 1;
      if ( v34 >= 0 )
      {
LABEL_42:
        LODWORD(v0) = &v73[4 * _fdelt_chk(v34, HIDWORD(v0), v2) + 1204];
        v2 = *(_DWORD *)(v0 - 1332);
        if ( (v2 & (1 << (v34 & 0x1F))) != 0 )
        {
          do
            LODWORD(v0) = sub_14C78(v34, (int)v32, v69.tv_sec, v69.tv_usec);
          while ( (int)v0 > 0 );
        }
      }
      if ( v35 != 2 )
      {
LABEL_44:
        ++v33;
        continue;
      }
      break;
    }
    v32 = (_DWORD *)*v32;
    if ( v32 )
      continue;
    break;
  }
LABEL_52:
  v37 = asyncio_reader_list;
  if ( asyncio_reader_list )
  {
    do
    {
      v38 = *(_DWORD *)v37;
      v39 = _fdelt_chk(*(_DWORD *)(v37 + 4), HIDWORD(v0), v2);
      v41 = *(_DWORD *)(v37 + 4);
      LODWORD(v0) = &v73[4 * v39 + 1204];
      v40 = -v41 < 0;
      HIDWORD(v0) = *(_DWORD *)(v0 - 1332);
      v2 = -v41 & 0x1F;
      LOBYTE(v41) = v41 & 0x1F;
      if ( !v40 )
        v41 = -v2;
      if ( (HIDWORD(v0) & (1 << v41)) != 0 )
        LODWORD(v0) = (*(int (__fastcall **)(int))(v37 + 12))(v37);
      v37 = v38;
    }
    while ( v38 );
  }
  if ( blocking_children_alloc )
  {
    v42 = 0;
    do
    {
      v43 = *(_DWORD *)(blocking_children + 4 * v42);
      if ( v43 )
      {
        LODWORD(v0) = *(_DWORD *)(v43 + 52);
        if ( (_DWORD)v0 != -1 )
        {
          v44 = _fdelt_chk(v0, HIDWORD(v0), v2);
          v45 = *(_DWORD *)(v43 + 52);
          LODWORD(v0) = &v73[4 * v44 + 1204];
          v40 = -v45 < 0;
          HIDWORD(v0) = *(_DWORD *)(v0 - 1332);
          v2 = -v45 & 0x1F;
          LOBYTE(v45) = v45 & 0x1F;
          if ( !v40 )
            v45 = -v2;
          if ( (HIDWORD(v0) & (1 << v45)) != 0 )
          {
            ++*(_DWORD *)(v43 + 68);
            v2 = (int)&blocking_child_ready_seen;
            ++blocking_child_ready_seen;
          }
        }
      }
      ++v42;
    }
    while ( v42 < blocking_children_alloc );
  }
  return v0;
}

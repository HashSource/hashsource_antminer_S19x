int sub_16F70()
{
  __int64 v0; // r0
  int v1; // r8
  int v2; // r7
  _DWORD *v3; // r9
  int v4; // r0
  signed int v5; // r4
  int v6; // r10
  size_t v7; // r5
  int *v8; // r0
  int v9; // r1
  int v10; // r2
  ssize_t v11; // r0
  ssize_t v12; // r6
  int v13; // r2
  struct timeval v14; // r0
  int v15; // r2
  ssize_t v16; // r0
  _DWORD *v17; // r8
  size_t v18; // r5
  int *v19; // r0
  int v20; // r1
  void *v21; // r2
  ssize_t v22; // r0
  int v23; // r2
  __time_t tv_sec; // r0
  __suseconds_t tv_usec; // r1
  int v26; // r2
  int *v27; // r3
  _DWORD *v28; // r4
  int v29; // r6
  int v30; // r5
  int *v31; // r3
  int *v32; // r0
  int v33; // r6
  int *v34; // r5
  int v35; // r0
  int v36; // r5
  int v37; // r4
  unsigned int v38; // r4
  int v39; // r5
  int v40; // r9
  int v41; // r7
  char *v42; // r6
  int v43; // r10
  char v44; // r2
  char v45; // r3
  char *v46; // r4
  int v47; // r6
  int v48; // r10
  __int64 v49; // r0
  void *bufa; // [sp+8h] [bp-574h]
  int *bufb; // [sp+8h] [bp-574h]
  _DWORD *buf; // [sp+8h] [bp-574h]
  int *v54; // [sp+Ch] [bp-570h]
  int v55; // [sp+Ch] [bp-570h]
  int v56; // [sp+Ch] [bp-570h]
  __int64 v57; // [sp+24h] [bp-558h] BYREF
  struct timeval v58; // [sp+2Ch] [bp-550h]
  struct timeval v59; // [sp+34h] [bp-548h]
  struct timeval timeout; // [sp+3Ch] [bp-540h] BYREF
  fd_set dest; // [sp+44h] [bp-538h] BYREF
  _BYTE v62[1208]; // [sp+C4h] [bp-4B8h] BYREF

  ++handler_calls;
  memcpy(&dest, &unk_BA244, sizeof(dest));
  LODWORD(v0) = select(dword_BA2C4 + 1, &dest, 0, 0, 0);
  v1 = v0;
  if ( (int)v0 < 0 )
  {
    LODWORD(v0) = _errno_location();
    v40 = *(_DWORD *)v0;
    buf = (_DWORD *)v0;
    if ( *(_DWORD *)v0 == 4 )
      goto LABEL_85;
    v41 = dword_BA2C4;
    v56 = dword_BA2C4 + 1;
    if ( dword_BA2C4 >= 255 )
      v41 = 255;
    if ( v41 < 0 )
    {
      v46 = byte_BA2D0;
    }
    else
    {
      v42 = byte_BA2D0;
      v43 = v41;
      do
      {
        LODWORD(v0) = _fdelt_chk(v43, HIDWORD(v0));
        v44 = v43-- & 0x1F;
        if ( ((*(int *)&word_BA240[2 * v0 + 2] >> v44) & 1) != 0 )
          v45 = 35;
        else
          v45 = 45;
        *v42++ = v45;
      }
      while ( v43 != -1 );
      v46 = (char *)&word_BA240[72] + v41 + 1;
    }
    v47 = 0;
    *v46 = 0;
    v0 = sub_65D40(3, "select(%d, %s, 0L, 0L, &0.0) error: %m", v56, byte_BA2D0);
    if ( v40 != 9 )
      goto LABEL_85;
    if ( dword_BA2C4 < 0 )
    {
      v2 = 1;
    }
    else
    {
      v48 = 0;
      do
      {
        if ( ((*(int *)&word_BA240[2 * _fdelt_chk(v48, HIDWORD(v0)) + 2] >> (v48 % 32)) & 1) != 0 )
        {
          if ( read(v48, &timeout, 0) == -1 )
          {
            v49 = sub_65D40(3, "Removing bad file descriptor %d from select set", v48);
            LODWORD(v0) = _fdelt_chk(v48, HIDWORD(v49));
            *(_DWORD *)&word_BA240[2 * v0 + 2] &= ~(1 << (v48 % 32));
          }
          else
          {
            v47 = v48;
          }
        }
        ++v48;
      }
      while ( v48 <= dword_BA2C4 );
      v2 = v47 + 1;
      if ( dword_BA2C4 == v47 )
      {
LABEL_6:
        timeout.tv_sec = 0;
        timeout.tv_usec = 0;
        memcpy(&dest, &unk_BA244, sizeof(dest));
        LODWORD(v0) = select(v2, &dest, 0, 0, &timeout);
        v1 = v0;
        if ( (int)v0 > 0 )
          goto LABEL_7;
LABEL_85:
        if ( v1 == -1 && *buf != 4 )
          LODWORD(v0) = sub_65D40(3, "select() error: %m");
        return v0;
      }
    }
    dword_BA2C4 = v47;
    goto LABEL_6;
  }
  if ( !(_DWORD)v0 )
    return v0;
LABEL_7:
  sub_6055C(&v57);
  v0 = v57;
  v3 = (_DWORD *)dword_BA3D0;
  v58 = (struct timeval)v57;
  ++handler_pkts;
  if ( !dword_BA3D0 )
    goto LABEL_35;
  while ( 1 )
  {
LABEL_12:
    v5 = v3[5];
    LODWORD(v0) = &v62[4 * _fdelt_chk(v5, HIDWORD(v0)) + 1204];
    if ( ((*(int *)(v0 - 1332) >> (v5 % 32)) & 1) == 0 )
      goto LABEL_11;
    v59 = v58;
    v6 = sub_6B088();
    if ( v6 )
    {
      v7 = v3[4];
      if ( v7 - 1 > 0x847 )
        v7 = 2120;
      while ( 1 )
      {
        v11 = read(v5, (void *)(v6 + 88), v7);
        v12 = v11;
        if ( v11 >= 0 )
          break;
        v8 = _errno_location();
        v10 = *v8;
        if ( *v8 != 4 )
        {
          v31 = v8;
LABEL_45:
          v55 = v10;
          bufb = v31;
          sub_6AF28(v6, v9);
          v16 = v12;
          *bufb = v55;
          goto LABEL_46;
        }
      }
      if ( !v11 )
      {
        v31 = _errno_location();
        v10 = *v31;
        goto LABEL_45;
      }
      v13 = v3[3];
      *(_DWORD *)(v6 + 84) = v11;
      *(_DWORD *)(v6 + 4) = v13;
      v14 = v59;
      v15 = v3[1];
      *(_DWORD *)(v6 + 64) = v5;
      *(_DWORD *)(v6 + 60) = 0;
      *(struct timeval *)(v6 + 72) = v14;
      *(_DWORD *)(v6 + 80) = v15;
      if ( !sub_3A81C(v3, v6) )
      {
        ++v3[6];
        ++packets_received;
      }
      v16 = v12;
LABEL_23:
      if ( v16 )
        break;
      v4 = sub_6B36C(v3[3] + 16);
      sub_65D40(3, "%s read EOF", v4);
      goto LABEL_10;
    }
    v16 = read(v5, v62, 0x4B0u);
    ++packets_dropped;
LABEL_46:
    if ( v16 >= 0 )
      goto LABEL_23;
    v32 = _errno_location();
    v33 = *v32;
    v34 = v32;
    if ( *v32 == 11 )
      break;
    v35 = sub_6B36C(v3[3] + 16);
    *v34 = v33;
    sub_65D40(3, "%s read: %m", v35);
LABEL_10:
    LODWORD(v0) = sub_15508(v5, 1);
LABEL_11:
    v3 = (_DWORD *)*v3;
    if ( !v3 )
      goto LABEL_35;
  }
  while ( 2 )
  {
    while ( 1 )
    {
      timeout = v58;
      v17 = (_DWORD *)sub_6B088();
      if ( v17 )
        break;
      LODWORD(v0) = read(v5, v62, 0x4B0u);
      ++packets_dropped;
      if ( (int)v0 <= 0 )
        goto LABEL_11;
    }
    v18 = v3[4];
    if ( v18 - 1 > 0x847 )
      v18 = 2120;
    while ( 1 )
    {
      v22 = read(v5, v17 + 22, v18);
      if ( v22 >= 0 )
        break;
      v19 = _errno_location();
      v21 = (void *)*v19;
      if ( *v19 != 4 )
      {
        v27 = v19;
        goto LABEL_34;
      }
    }
    if ( v22 )
    {
      v23 = v3[3];
      v17[21] = v22;
      v17[16] = v5;
      v17[1] = v23;
      tv_sec = timeout.tv_sec;
      tv_usec = timeout.tv_usec;
      v26 = v3[1];
      v17[15] = 0;
      v17[18] = tv_sec;
      v17[19] = tv_usec;
      v17[20] = v26;
      if ( !sub_3A81C(v3, v17) )
      {
        ++v3[6];
        ++packets_received;
      }
      continue;
    }
    break;
  }
  v27 = _errno_location();
  v21 = (void *)*v27;
LABEL_34:
  v54 = v27;
  bufa = v21;
  LODWORD(v0) = sub_6AF28(v17, v20);
  v3 = (_DWORD *)*v3;
  *v54 = (int)bufa;
  if ( v3 )
    goto LABEL_12;
LABEL_35:
  v28 = (_DWORD *)ep_list;
  if ( ep_list )
  {
LABEL_36:
    v29 = 1;
    while ( 1 )
    {
      v30 = v28[3];
      if ( v30 >= 0 )
      {
LABEL_39:
        LODWORD(v0) = &v62[4 * _fdelt_chk(v30, HIDWORD(v0)) + 1204];
        if ( ((*(int *)(v0 - 1332) >> (v30 & 0x1F)) & 1) != 0 )
        {
          do
            LODWORD(v0) = sub_14ED0(v30, (int)v28, v58.tv_sec, v58.tv_usec);
          while ( (int)v0 > 0 );
        }
LABEL_40:
        if ( v29 == 2 )
        {
LABEL_51:
          v28 = (_DWORD *)*v28;
          if ( !v28 )
            break;
          goto LABEL_36;
        }
      }
      if ( ++v29 != 1 )
      {
        if ( (v28[36] & 0x20) == 0 )
          goto LABEL_51;
        v30 = v28[4];
        if ( v30 < 0 )
          goto LABEL_40;
        goto LABEL_39;
      }
    }
  }
  v36 = asyncio_reader_list;
  if ( asyncio_reader_list )
  {
    do
    {
      while ( 1 )
      {
        v37 = *(_DWORD *)v36;
        LODWORD(v0) = &v62[4 * _fdelt_chk(*(_DWORD *)(v36 + 4), HIDWORD(v0)) + 1204];
        if ( ((*(int *)(v0 - 1332) >> (*(_DWORD *)(v36 + 4) % 32)) & 1) != 0 )
          break;
        v36 = v37;
        if ( !v37 )
          goto LABEL_57;
      }
      LODWORD(v0) = (*(int (__fastcall **)(int))(v36 + 12))(v36);
      v36 = v37;
    }
    while ( v37 );
  }
LABEL_57:
  if ( blocking_children_alloc )
  {
    v38 = 0;
    do
    {
      v39 = *(_DWORD *)(blocking_children + 4 * v38);
      if ( v39 )
      {
        LODWORD(v0) = *(_DWORD *)(v39 + 52);
        if ( (_DWORD)v0 != -1 )
        {
          LODWORD(v0) = &v62[4 * _fdelt_chk(v0, HIDWORD(v0)) + 1204];
          if ( ((*(int *)(v0 - 1332) >> (*(_DWORD *)(v39 + 52) % 32)) & 1) != 0 )
          {
            ++*(_DWORD *)(v39 + 68);
            ++blocking_child_ready_seen;
          }
        }
      }
      ++v38;
    }
    while ( v38 < blocking_children_alloc );
  }
  return v0;
}

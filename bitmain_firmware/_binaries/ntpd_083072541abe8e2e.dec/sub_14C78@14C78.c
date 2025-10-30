ssize_t __fastcall sub_14C78(int a1, int a2, int a3, int a4)
{
  int v8; // r0
  int v9; // r1
  int v10; // r9
  ssize_t v11; // r8
  __int64 v13; // r0
  size_t msg_controllen; // r3
  _DWORD *msg_control; // r10
  int v16; // r1
  int v17; // r1
  int v18; // r5
  int v19; // r2
  bool v20; // cc
  int v21; // r5
  int v22; // r6
  int v23; // r0
  double v24; // d0
  double v25; // r0
  int v26; // r2
  __int64 v27; // r0
  bool v28; // cf
  int v29; // r5
  int v30; // r3
  const char *v31; // r0
  const char *v32; // r0
  socklen_t addr_len; // [sp+20h] [bp-654h] BYREF
  _DWORD v34[2]; // [sp+24h] [bp-650h] BYREF
  int v35; // [sp+2Ch] [bp-648h]
  int v36; // [sp+30h] [bp-644h]
  struct msghdr message; // [sp+34h] [bp-640h] BYREF
  struct sockaddr addr; // [sp+50h] [bp-624h] BYREF
  _BYTE buf[1536]; // [sp+6Ch] [bp-608h] BYREF

  v8 = sub_6A108();
  v10 = v8;
  if ( !v8 )
    goto LABEL_4;
  if ( *(_DWORD *)(a2 + 180) )
  {
    sub_69FA8(v8, v9);
LABEL_4:
    addr_len = 28;
    v11 = recvfrom(a1, buf, 0x4B0u, 0, &addr, &addr_len);
    if ( *(_DWORD *)(a2 + 180) )
      ++packets_ignored;
    else
      ++packets_dropped;
    return v11;
  }
  message.msg_flags = 0;
  addr_len = 28;
  message.msg_namelen = 28;
  v34[0] = v8 + 88;
  v34[1] = 2120;
  message.msg_iovlen = 1;
  message.msg_iov = (struct iovec *)v34;
  message.msg_name = (void *)(v8 + 4);
  message.msg_control = buf;
  message.msg_controllen = 1536;
  LODWORD(v13) = recvmsg(a1, &message, 0);
  v11 = v13;
  *(_DWORD *)(v10 + 84) = v13;
  if ( !(_DWORD)v13 )
    goto LABEL_41;
  if ( (_DWORD)v13 == -1 )
  {
    if ( *_errno_location() != 11 )
      goto LABEL_40;
LABEL_41:
    sub_69FA8(v10, HIDWORD(v13));
    return v11;
  }
  if ( (int)v13 < 0 )
  {
LABEL_40:
    v31 = (const char *)sub_6C2E8(v10 + 4);
    v13 = sub_64E00(3, "recvfrom(%s) fd=%d: %m", v31, a1);
    goto LABEL_41;
  }
  if ( *(_WORD *)(v10 + 4) == 2 && *(_WORD *)(v10 + 8) == 32639 )
  {
    v32 = (const char *)sub_6C2E8(v10 + 4);
    v13 = sub_64E00(3, "recvfrom(%s) fd=%d: refclock srcadr on a network interface!", v32, a1);
LABEL_52:
    ++packets_dropped;
    sub_69FA8(v10, HIDWORD(v13));
    return v11;
  }
  if ( *(_WORD *)(a2 + 140) == 10
    && !*(_DWORD *)(v10 + 12)
    && !*(_DWORD *)(v10 + 16)
    && !*(_DWORD *)(v10 + 20)
    && *(_DWORD *)(v10 + 24) == 0x1000000
    && (*(_DWORD *)(a2 + 32) || *(_DWORD *)(a2 + 36) || *(_DWORD *)(a2 + 40) || *(_DWORD *)(a2 + 44) != 0x1000000) )
  {
    goto LABEL_52;
  }
  msg_controllen = message.msg_controllen;
  *(_DWORD *)(v10 + 60) = a2;
  *(_DWORD *)(v10 + 64) = a1;
  if ( msg_controllen > 0xB )
  {
    msg_control = message.msg_control;
    if ( message.msg_control )
    {
      do
      {
        if ( msg_control[2] == 35 )
        {
          v16 = msg_control[4];
          v35 = msg_control[3];
          v36 = v16;
          if ( sys_tick > measured_tick )
          {
            v17 = v36;
            if ( sys_tick > 0.000000001 )
              v17 = (int)((double)(unsigned int)((double)v36 * 0.000000001 / sys_tick) * 1000000000.0 * sys_tick);
          }
          else
          {
            v17 = v36;
          }
          v18 = v35;
          if ( v17 < 0 )
          {
            do
            {
              v17 += 1000000000;
              --v18;
            }
            while ( v17 < 0 );
          }
          else if ( v17 > 999999999 )
          {
            v19 = v17 - 1000000000;
            v20 = v17 - 1000000000 <= 999999999;
            if ( v17 - 1000000000 <= 999999999 )
              v18 = v35 + 1;
            else
              v17 -= 2013265920;
            if ( v20 )
              v17 = v19;
            else
              v17 += 13238272;
            if ( !v20 )
            {
              v18 += 2;
              v17 += 27648;
            }
          }
          v21 = v18 - 2085978496;
          v22 = sub_8BFD0(500000000, (__PAIR64__(v17, 0) + 500000000) >> 32, 1000000000, 0);
          v23 = sub_68AE4();
          v24 = ((double)v23 + (double)v23) * 2.32830644e-10 * sys_fuzz;
          LODWORD(v25) = 32;
          ldexp(v25, v26);
          if ( v24 < 0.0 )
            v27 = -sub_8C010(COERCE_UNSIGNED_INT64(-v24), HIDWORD(COERCE_UNSIGNED_INT64(-v24)));
          else
            v27 = sub_8C010(LODWORD(v24), HIDWORD(v24));
          v28 = __CFADD__(v22, (_DWORD)v27);
          a4 = v22 + v27;
          v29 = v21 + HIDWORD(v27);
          v30 = v28;
          a3 = v29 + v30;
        }
        if ( *msg_control <= 0xBu )
          break;
        msg_control = (_DWORD *)((char *)msg_control + ((*msg_control + 3) & 0xFFFFFFFC));
        if ( (char *)message.msg_control + message.msg_controllen < (char *)(msg_control + 3) )
          break;
      }
      while ( (char *)message.msg_control + message.msg_controllen >= (char *)msg_control
                                                                    + ((*msg_control + 3) & 0xFFFFFFFC) );
    }
  }
  *(_DWORD *)(v10 + 72) = a3;
  *(_DWORD *)(v10 + 76) = a4;
  *(_DWORD *)(v10 + 80) = receive;
  sub_6A044(v10);
  ++*(_DWORD *)(a2 + 164);
  ++packets_received;
  return v11;
}

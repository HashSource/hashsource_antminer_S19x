ssize_t __fastcall sub_14ED0(int a1, int a2, int a3, int a4)
{
  int v7; // r0
  int v8; // r1
  int v9; // r6
  __int64 v11; // r0
  size_t msg_controllen; // r3
  _DWORD *msg_control; // r8
  int v14; // r1
  signed int v15; // r3
  signed int v16; // r2
  bool v17; // cc
  int v18; // r3
  __int64 v19; // r0
  __int64 v20; // r4
  int v21; // s15
  double v22; // r0
  double v23; // d0
  __int64 v24; // r4
  int v25; // kr04_4
  const char *v26; // r0
  int v27; // r4
  const char *v28; // r0
  ssize_t v29; // [sp+Ch] [bp-670h]
  int v31; // [sp+14h] [bp-668h]
  int exponent; // [sp+18h] [bp-664h]
  socklen_t addr_len; // [sp+28h] [bp-654h] BYREF
  _DWORD v34[2]; // [sp+2Ch] [bp-650h] BYREF
  int v35; // [sp+34h] [bp-648h]
  int v36; // [sp+38h] [bp-644h]
  struct msghdr message; // [sp+3Ch] [bp-640h] BYREF
  struct sockaddr addr; // [sp+58h] [bp-624h] BYREF
  _BYTE buf[1536]; // [sp+74h] [bp-608h] BYREF

  v7 = sub_6B088();
  v9 = v7;
  if ( !v7 )
    goto LABEL_4;
  if ( *(_DWORD *)(a2 + 180) )
  {
    sub_6AF28(v7, v8);
LABEL_4:
    addr_len = 28;
    v29 = recvfrom(a1, buf, 0x4B0u, 0, &addr, &addr_len);
    if ( *(_DWORD *)(a2 + 180) )
      ++packets_ignored;
    else
      ++packets_dropped;
    return v29;
  }
  message.msg_flags = 0;
  message.msg_iov = (struct iovec *)v34;
  addr_len = 28;
  message.msg_namelen = 28;
  v34[0] = v7 + 88;
  v34[1] = 2120;
  message.msg_name = (void *)(v7 + 4);
  message.msg_iovlen = 1;
  message.msg_control = buf;
  message.msg_controllen = 1536;
  LODWORD(v11) = recvmsg(a1, &message, 0);
  v29 = v11;
  *(_DWORD *)(v9 + 84) = v11;
  if ( !(_DWORD)v11 )
    goto LABEL_38;
  if ( (_DWORD)v11 == -1 )
  {
    if ( *_errno_location() != 11 )
      goto LABEL_37;
LABEL_38:
    sub_6AF28(v9, HIDWORD(v11));
    return v29;
  }
  if ( (int)v11 < 0 )
  {
LABEL_37:
    v26 = (const char *)sub_6D2C0(v9 + 4);
    v11 = sub_65D40(3, "recvfrom(%s) fd=%d: %m", v26, a1);
    goto LABEL_38;
  }
  if ( *(_WORD *)(v9 + 4) == 2 && *(_WORD *)(v9 + 8) == 32639 )
  {
    v28 = (const char *)sub_6D2C0(v9 + 4);
    v11 = sub_65D40(3, "recvfrom(%s) fd=%d: refclock srcadr on a network interface!", v28, a1);
LABEL_53:
    ++packets_dropped;
    sub_6AF28(v9, HIDWORD(v11));
    return v29;
  }
  if ( *(_WORD *)(a2 + 140) == 10
    && !*(_DWORD *)(v9 + 12)
    && !*(_DWORD *)(v9 + 16)
    && !*(_DWORD *)(v9 + 20)
    && *(_DWORD *)(v9 + 24) == 0x1000000
    && (*(_DWORD *)(a2 + 32) || *(_DWORD *)(a2 + 36) || *(_DWORD *)(a2 + 40) || *(_DWORD *)(a2 + 44) != 0x1000000) )
  {
    goto LABEL_53;
  }
  msg_controllen = message.msg_controllen;
  *(_DWORD *)(v9 + 60) = a2;
  *(_DWORD *)(v9 + 64) = a1;
  if ( msg_controllen > 0xB )
  {
    msg_control = message.msg_control;
    if ( message.msg_control )
    {
      do
      {
        if ( msg_control[2] == 35 )
        {
          v14 = msg_control[4];
          v35 = msg_control[3];
          v36 = v14;
          if ( sys_tick <= measured_tick || sys_tick <= 0.000000001 )
            v15 = v36;
          else
            v15 = (int)(sys_tick * ((double)(unsigned int)((double)v36 * 0.000000001 / sys_tick) * 1000000000.0));
          exponent = v35;
          if ( v15 < 0 )
          {
            v27 = v35;
            do
            {
              --v27;
              v15 += 1000000000;
            }
            while ( v15 < 0 );
            exponent = v27;
          }
          else if ( v15 > 999999999 )
          {
            v16 = v15 - 1000000000;
            v17 = v15 - 1000000000 <= 999999999;
            v18 = v15 - 1000000000 <= 999999999 ? v35 : v15 - 2013265920;
            if ( v17 )
            {
              exponent = v18 + 1;
              v15 = v16;
            }
            else
            {
              v16 = v35;
              v15 = v18 + 13265920;
            }
            if ( !v17 )
              exponent = v16 + 2;
          }
          v19 = vshld_n_s64(vshrd_n_s64(vdup_n_s32(v15).n64_i64[0], 0x20u), 0x20u) + 500000000;
          HIDWORD(v20) = 0;
          v31 = sub_8D518(v19, HIDWORD(v19), 1000000000, 0);
          v21 = sub_69A2C();
          LODWORD(v22) = 32;
          v23 = ((double)v21 + (double)v21) * 2.32830644e-10 * sys_fuzz;
          if ( v23 >= 0.0 )
          {
            LODWORD(v20) = 0;
          }
          else
          {
            v23 = -v23;
            LODWORD(v20) = 1;
          }
          ldexp(v22, exponent);
          v24 = v20 + (sub_8D558(LODWORD(v23), HIDWORD(v23)) ^ -v20);
          v25 = v31;
          a4 = v31 + v24;
          a3 = (__PAIR64__(exponent - 2085978496, v25) + v24) >> 32;
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
  *(_DWORD *)(v9 + 72) = a3;
  *(_DWORD *)(v9 + 76) = a4;
  *(_DWORD *)(v9 + 80) = receive;
  sub_6AFC4(v9);
  ++*(_DWORD *)(a2 + 164);
  ++packets_received;
  return v29;
}

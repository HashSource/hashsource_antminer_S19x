int __fastcall sub_48908(int a1, char *s, int a3)
{
  int v5; // r8
  int v6; // r9
  int v7; // r3
  int v8; // r9
  int v9; // r8
  fd_set *p_tv_usec; // r3
  ssize_t v12; // r0
  __int64 v13; // r4
  unsigned int v14; // r1
  unsigned int v15; // lr
  __int64 v16; // kr00_8
  unsigned int v17; // r2
  unsigned int v18; // r12
  int n; // [sp+Ch] [bp-820h]
  int v20; // [sp+10h] [bp-81Ch]
  int v21; // [sp+18h] [bp-814h]
  struct timeval timeout; // [sp+20h] [bp-80Ch] BYREF
  fd_set writefds; // [sp+28h] [bp-804h] BYREF

  v5 = *(_DWORD *)(a1 + 588);
  if ( byte_242F18 && byte_1AECC5 && (byte_244080 || byte_1AECC4 || dword_9E320 > 6) )
  {
    snprintf((char *)&writefds, 0x800u, "SEND: %s", s);
    sub_47AB4(7, (const char *)&writefds, 0);
  }
  n = a3 + 1;
  *(_WORD *)&s[strlen(s)] = 10;
  if ( a3 + 1 <= 0 )
  {
    v13 = 0;
LABEL_16:
    v14 = *(_DWORD *)(a1 + 504);
    v15 = *(_DWORD *)(a1 + 508);
    v16 = *(_QWORD *)(a1 + 496) + 1LL;
    *(_DWORD *)(a1 + 496) = v16;
    v17 = *(_DWORD *)(a1 + 512);
    *(_DWORD *)(a1 + 500) = HIDWORD(v16);
    v18 = *(_DWORD *)(a1 + 516);
    *(_QWORD *)(a1 + 504) = __PAIR64__(v15, v14) + v13;
    *(_QWORD *)(a1 + 512) = __PAIR64__(v18, v17) + v13;
    return 0;
  }
  else
  {
    LOBYTE(v6) = v5 & 0x1F;
    v7 = v5 / 32;
    if ( v5 <= 0 )
      v6 = -(-v5 & 0x1F);
    v8 = 1 << v6;
    v9 = v5 + 1;
    v21 = v7;
    v20 = 0;
    do
    {
      while ( 1 )
      {
        timeout.tv_usec = 0;
        timeout.tv_sec = 1;
        while ( 1 )
        {
          p_tv_usec = (fd_set *)&timeout.tv_usec;
          do
          {
            p_tv_usec->__fds_bits[1] = 0;
            p_tv_usec = (fd_set *)((char *)p_tv_usec + 4);
          }
          while ( &writefds.__fds_bits[31] != (__fd_mask *)p_tv_usec );
          writefds.__fds_bits[v21] |= v8;
          if ( select(v9, 0, &writefds, 0, &timeout) > 0 )
            break;
          if ( *_errno_location() != 4 )
            return 1;
        }
        v12 = send(*(_DWORD *)(a1 + 588), &s[v20], n, 0x4000);
        if ( v12 < 0 )
          break;
        v20 += v12;
        n -= v12;
        if ( n <= 0 )
        {
          v13 = v20;
          goto LABEL_16;
        }
      }
    }
    while ( *_errno_location() == 11 );
    return 2;
  }
}

int sub_29307C()
{
  int v0; // r5
  fd_set *p_tv_usec; // r3
  int v2; // r3
  _BYTE *v3; // r1
  int v4; // lr
  int v5; // r3
  __suseconds_t v6; // r12
  int v7; // r0
  int *v8; // r10
  int v9; // r9
  int v10; // r4
  int v11; // r3
  int v12; // r3
  ssize_t v13; // r3
  int v14; // r4
  bool v15; // zf
  int v17; // r4
  unsigned __int8 buf; // [sp+Bh] [bp-111h] BYREF
  ssize_t v19; // [sp+Ch] [bp-110h] BYREF
  struct timeval timeout; // [sp+10h] [bp-10Ch] BYREF
  fd_set readfds; // [sp+18h] [bp-104h] BYREF
  fd_set exceptfds; // [sp+98h] [bp-84h] BYREF
  _BYTE v23[4]; // [sp+118h] [bp-4h] BYREF

  v19 = 0;
  v0 = fileno((FILE *)dword_48AAAC);
  p_tv_usec = (fd_set *)&timeout.tv_usec;
  do
  {
    p_tv_usec->__fds_bits[1] = 0;
    p_tv_usec = (fd_set *)((char *)p_tv_usec + 4);
  }
  while ( p_tv_usec != (fd_set *)&readfds.__fds_bits[31] );
  do
  {
    p_tv_usec->__fds_bits[1] = 0;
    p_tv_usec = (fd_set *)((char *)p_tv_usec + 4);
  }
  while ( p_tv_usec != (fd_set *)&exceptfds.__fds_bits[31] );
  LOBYTE(v2) = v0 & 0x1F;
  if ( v0 <= 0 )
    v2 = -(-v0 & 0x1F);
  v3 = &v23[4 * (v0 / 32)];
  v4 = *((_DWORD *)v3 - 64);
  v5 = 1 << v2;
  timeout.tv_sec = dword_470798 / 1000000;
  v6 = dword_470798 % 1000000;
  v7 = *((_DWORD *)v3 - 32) | v5;
  *((_DWORD *)v3 - 64) = v4 | v5;
  *((_DWORD *)v3 - 32) = v7;
  timeout.tv_usec = v6;
  if ( select(v0 + 1, &readfds, 0, &exceptfds, &timeout) <= 0 )
    return 0;
  v8 = _errno_location();
  *v8 = 0;
  v9 = ioctl(v0, 0x541Bu, &v19);
  if ( v9 == -1 )
  {
    if ( *v8 == 5 )
      return -1;
    v17 = fcntl(v0, 3, 0);
    fcntl(v0, 4, v17 | 0x800);
    v19 = read(v0, &buf, 1u);
    fcntl(v0, 4, v17);
    v10 = v19;
    if ( v19 == -1 )
      return 0;
    if ( !v19 )
    {
      sub_292FEC(-1);
      return v10;
    }
  }
  else
  {
    v10 = v19;
  }
  if ( v10 <= 0 )
    return 0;
  if ( dword_48B708 > dword_48B704 )
    v11 = dword_48B708 - dword_48B704;
  else
    v11 = dword_48B704 - dword_48B708;
  if ( dword_48B708 > dword_48B704 )
    v12 = v11 - 1;
  else
    v12 = 508 - v11;
  if ( dword_48B708 <= dword_48B704 )
    v12 += 3;
  if ( v10 > v12 )
    v19 = v12;
  if ( v12 <= 510 )
    return 1;
  v13 = v19;
  if ( v9 != -1 )
  {
    while ( 1 )
    {
      v19 = v13 - 1;
      if ( !v13 )
        break;
      if ( dword_48B6B8 )
        sub_291120(dword_48B6B8);
      v14 = off_47079C((FILE *)dword_48AAAC);
      if ( !sub_292FEC(v14) )
        break;
      v15 = v14 == 13;
      if ( v14 != 13 )
        v15 = v14 == 10;
      if ( v15 )
        break;
      v13 = v19;
    }
    return 1;
  }
  if ( v19 )
  {
    v10 = 1;
    sub_292FEC(buf);
    return v10;
  }
  return 1;
}

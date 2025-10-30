bool sub_292E10()
{
  int v0; // r0
  fd_set *p_tv_usec; // r3
  int v2; // lr
  _BYTE *v3; // r1
  __suseconds_t v4; // r5
  int v5; // r12
  int v6; // lr
  struct timeval timeout; // [sp+8h] [bp-10Ch] BYREF
  fd_set readfds; // [sp+10h] [bp-104h] BYREF
  fd_set exceptfds; // [sp+90h] [bp-84h] BYREF
  _BYTE v11[4]; // [sp+110h] [bp-4h] BYREF

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
  timeout.tv_sec = 0;
  if ( v0 <= 0 )
    v2 = -(-v0 & 0x1F);
  v3 = &v11[4 * (v0 / 32)];
  v4 = dword_470798;
  v5 = 1 << v2;
  v6 = *((_DWORD *)v3 - 32);
  *((_DWORD *)v3 - 64) |= v5;
  timeout.tv_usec = v4;
  *((_DWORD *)v3 - 32) = v6 | v5;
  return select(v0 + 1, &readfds, 0, &exceptfds, &timeout) > 0;
}

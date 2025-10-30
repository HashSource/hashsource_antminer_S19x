bool __fastcall sub_22428(int a1, int a2)
{
  __time_t v2; // r1
  fd_set *p_tv_usec; // r3
  int v4; // r4
  struct timeval timeout; // [sp+8h] [bp-88h] BYREF
  fd_set readfds; // [sp+10h] [bp-80h] BYREF

  v2 = a2 & ~(a2 >> 31);
  p_tv_usec = (fd_set *)&timeout.tv_usec;
  do
  {
    p_tv_usec->__fds_bits[1] = 0;
    p_tv_usec = (fd_set *)((char *)p_tv_usec + 4);
  }
  while ( &readfds.__fds_bits[31] != (__fd_mask *)p_tv_usec );
  timeout.tv_usec = 0;
  timeout.tv_sec = v2;
  LOBYTE(v4) = a1 & 0x1F;
  if ( a1 <= 0 )
    v4 = -(-a1 & 0x1F);
  readfds.__fds_bits[a1 / 32] |= 1 << v4;
  return select(a1 + 1, &readfds, 0, 0, &timeout) > 0;
}

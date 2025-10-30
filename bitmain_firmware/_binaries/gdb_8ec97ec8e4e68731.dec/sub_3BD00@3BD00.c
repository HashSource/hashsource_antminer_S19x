int __fastcall sub_3BD00(fd_set *exceptfds, unsigned int *a2)
{
  void *v4; // r3
  __time_t v5; // r2
  fd_set *p_tv_usec; // r2
  int v7; // r5
  int v8; // lr
  int v9; // r2
  unsigned int v10; // r3
  int *v12; // r0
  int *v13; // r0
  struct timeval timeout; // [sp+8h] [bp-188h] BYREF
  fd_set src; // [sp+10h] [bp-180h] BYREF
  fd_set dest; // [sp+90h] [bp-100h] BYREF
  fd_set exceptfdsa; // [sp+110h] [bp-80h] BYREF

  if ( off_48A588 && off_48A588(0) )
  {
    v12 = _errno_location();
    v9 = -1;
    *v12 = 4;
    return v9;
  }
  if ( *a2 > 5 * dword_46AF68 )
  {
    v13 = _errno_location();
    v9 = -1;
    *v13 = 110;
    return v9;
  }
  if ( *a2 > 4 )
  {
    v5 = 1;
    v4 = 0;
  }
  else
  {
    v4 = &loc_30D40;
    v5 = 0;
  }
  timeout.tv_sec = v5;
  timeout.tv_usec = (__suseconds_t)v4;
  if ( exceptfds )
  {
    p_tv_usec = (fd_set *)&timeout.tv_usec;
    do
    {
      p_tv_usec->__fds_bits[1] = 0;
      p_tv_usec = (fd_set *)((char *)p_tv_usec + 4);
    }
    while ( &src.__fds_bits[31] != (__fd_mask *)p_tv_usec );
    v7 = exceptfds->__fds_bits[1];
    LOBYTE(v8) = v7 & 0x1F;
    if ( v7 <= 0 )
      v8 = -(-v7 & 0x1F);
    src.__fds_bits[v7 / 32] |= 1 << v8;
    memcpy(&dest, &src, sizeof(dest));
    memcpy(&exceptfdsa, &src, sizeof(exceptfdsa));
    v9 = select(v7 + 1, &src, &dest, &exceptfdsa, &timeout);
  }
  else
  {
    v9 = j_select(0, 0, 0, 0, &timeout);
  }
  v10 = *a2;
  if ( v9 > 0 || v10 <= 4 )
  {
    *a2 = v10 + 1;
    return v9;
  }
  *a2 = v10 + 5;
  return v9;
}

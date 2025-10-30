bool __fastcall sub_23060(int a1, int a2)
{
  __time_t v3; // [sp+8h] [bp-A4h]
  fd_set readfds; // [sp+14h] [bp-98h] BYREF
  struct timeval timeout; // [sp+94h] [bp-18h] BYREF
  fd_set *p_readfds; // [sp+9Ch] [bp-10h]
  int v7; // [sp+A0h] [bp-Ch]
  unsigned int i; // [sp+A4h] [bp-8h]

  v3 = a2;
  v7 = *(_DWORD *)(a1 + 588);
  if ( a2 < 0 )
    v3 = 0;
  p_readfds = &readfds;
  for ( i = 0; i <= 0x1F; ++i )
    p_readfds->__fds_bits[i] = 0;
  readfds.__fds_bits[v7 / 32] |= 1 << (v7 % 32);
  timeout.tv_usec = 0;
  timeout.tv_sec = v3;
  return select(v7 + 1, &readfds, 0, 0, &timeout) > 0;
}

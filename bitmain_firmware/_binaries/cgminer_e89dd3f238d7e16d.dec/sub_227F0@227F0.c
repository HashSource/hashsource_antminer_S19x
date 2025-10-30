bool __fastcall sub_227F0(int a1, int a2)
{
  int v2; // r3
  __time_t v4; // [sp+8h] [bp-A4h]
  fd_set readfds; // [sp+14h] [bp-98h] BYREF
  struct timeval timeout; // [sp+94h] [bp-18h] BYREF
  fd_set *p_readfds; // [sp+9Ch] [bp-10h]
  int v8; // [sp+A0h] [bp-Ch]
  unsigned int i; // [sp+A4h] [bp-8h]

  v4 = a2;
  v8 = *(_DWORD *)(a1 + 588);
  if ( a2 < 0 )
    v4 = 0;
  p_readfds = &readfds;
  for ( i = 0; i <= 0x1F; ++i )
    p_readfds->__fds_bits[i] = 0;
  LOBYTE(v2) = v8 & 0x1F;
  if ( v8 <= 0 )
    v2 = -(-v8 & 0x1F);
  readfds.__fds_bits[v8 / 32] |= 1 << v2;
  timeout.tv_usec = 0;
  timeout.tv_sec = v4;
  return select(v8 + 1, &readfds, 0, 0, &timeout) > 0;
}

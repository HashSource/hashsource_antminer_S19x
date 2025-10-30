int __fastcall sub_16CC0(struct sockaddr *addr, int a2, int a3, unsigned __int8 *buf, size_t n)
{
  int result; // r0
  int v8; // r8
  bool v10; // zf
  int v11; // r3
  int v12; // r12
  int v13; // r3
  int v14; // r3
  socklen_t addr_len; // r12
  int v16; // r0
  int v17; // r0
  int v18; // r0
  int optval; // [sp+3Ch] [bp-18h] BYREF
  char v20; // [sp+43h] [bp-11h] BYREF
  _DWORD v21[2]; // [sp+44h] [bp-10h] BYREF

  result = 2092;
  optval = a3;
  v8 = 0;
  v10 = addr->sa_family == 2;
  v21[0] = 0;
  v21[1] = 0;
  if ( v10 )
  {
    if ( (*(_DWORD *)&addr->sa_data[2] & 0xF0) == 0xE0 )
    {
      v8 = 1;
      a2 = mc4_list;
    }
  }
  else if ( (unsigned __int8)addr->sa_data[6] == 255 )
  {
    v8 = 1;
    a2 = mc6_list;
  }
  if ( a2 )
  {
    while ( 1 )
    {
      v12 = optval;
      if ( optval <= 0 )
        v13 = 0;
      else
        v13 = v8;
      if ( !v13 || optval == *(_DWORD *)(a2 + 148) )
        goto LABEL_23;
      v14 = *(unsigned __int16 *)(a2 + 24);
      if ( v14 == 2 )
        break;
      if ( v14 == 10 )
      {
        if ( setsockopt(*(_DWORD *)(a2 + 12), 41, 18, &optval, 4u) )
          goto LABEL_29;
LABEL_21:
        v12 = optval;
      }
      *(_DWORD *)(a2 + 148) = v12;
LABEL_23:
      if ( addr->sa_family == 2 )
        addr_len = 16;
      else
        addr_len = 28;
      if ( sendto(*(_DWORD *)(a2 + 12), buf, n, 0, addr, addr_len) == -1 )
      {
        ++*(_DWORD *)(a2 + 172);
        ++packets_notsent;
      }
      else
      {
        ++*(_DWORD *)(a2 + 168);
        ++packets_sent;
      }
      if ( v8 )
        a2 = *(_DWORD *)(a2 + 4);
      if ( a2 )
        v11 = v8;
      else
        v11 = 0;
      if ( !v11 )
      {
        if ( a2 )
          v18 = a2 + 24;
        else
          v18 = 0;
        return sub_42EBC(
                 v18,
                 addr,
                 buf + 24,
                 buf + 32,
                 buf + 40,
                 v21,
                 *buf & 7,
                 (*buf >> 3) & 7,
                 *buf >> 6,
                 buf[1],
                 buf[2],
                 (char)buf[3],
                 *((_DWORD *)buf + 3),
                 n - 48,
                 buf + 48);
      }
    }
    v16 = *(_DWORD *)(a2 + 12);
    v20 = optval;
    if ( setsockopt(v16, 0, 33, &v20, 1u) )
    {
LABEL_29:
      v17 = sub_6D2C0(a2 + 24);
      sub_65D40(3, "setsockopt IP_MULTICAST_TTL/IPV6_MULTICAST_HOPS fails on address %s: %m", v17);
      goto LABEL_23;
    }
    goto LABEL_21;
  }
  return result;
}

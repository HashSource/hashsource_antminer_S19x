int __fastcall sub_16A68(struct sockaddr *addr, int a2, int a3, unsigned __int8 *buf, size_t n)
{
  int v7; // r7
  int result; // r0
  int sa_family; // r3
  int v11; // r2
  int v12; // r0
  int v13; // r3
  int v14; // r3
  socklen_t addr_len; // r12
  int v16; // r0
  const char *v17; // r0
  int optval; // [sp+34h] [bp-18h] BYREF
  char v19; // [sp+3Bh] [bp-11h] BYREF
  _DWORD v20[2]; // [sp+3Ch] [bp-10h] BYREF

  v7 = 0;
  result = 2092;
  sa_family = addr->sa_family;
  optval = a3;
  v20[0] = 0;
  v20[1] = 0;
  if ( sa_family == 2 )
  {
    if ( (*(_DWORD *)&addr->sa_data[2] & 0xF0) == 0xE0 )
    {
      v7 = 1;
      a2 = mc4_list;
    }
  }
  else if ( (unsigned __int8)addr->sa_data[6] == 255 )
  {
    v7 = 1;
    a2 = mc6_list;
  }
  if ( !a2 )
    return result;
  do
  {
    v11 = optval;
    v12 = *(_DWORD *)(a2 + 12);
    if ( optval > 0 )
      v13 = v7;
    else
      v13 = 0;
    if ( v13 && optval != *(_DWORD *)(a2 + 148) )
    {
      v14 = *(unsigned __int16 *)(a2 + 24);
      if ( v14 == 2 )
      {
        v19 = optval;
        if ( !setsockopt(v12, 0, 33, &v19, 1u) )
          goto LABEL_13;
      }
      else
      {
        if ( v14 != 10 )
          goto LABEL_14;
        if ( !setsockopt(v12, 41, 18, &optval, 4u) )
        {
LABEL_13:
          v11 = optval;
          v12 = *(_DWORD *)(a2 + 12);
LABEL_14:
          *(_DWORD *)(a2 + 148) = v11;
          goto LABEL_15;
        }
      }
      v17 = (const char *)sub_6C2E8(a2 + 24);
      sub_64E00(3, "setsockopt IP_MULTICAST_TTL/IPV6_MULTICAST_HOPS fails on address %s: %m", v17);
      v12 = *(_DWORD *)(a2 + 12);
    }
LABEL_15:
    if ( addr->sa_family == 2 )
      addr_len = 16;
    else
      addr_len = 28;
    if ( sendto(v12, buf, n, 0, addr, addr_len) == -1 )
    {
      ++*(_DWORD *)(a2 + 172);
      ++packets_notsent;
    }
    else
    {
      ++*(_DWORD *)(a2 + 168);
      ++packets_sent;
    }
    if ( !v7 )
    {
      v16 = a2 + 24;
      return sub_420F0(
               v16,
               addr,
               buf + 24,
               buf + 32,
               buf + 40,
               v20,
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
    a2 = *(_DWORD *)(a2 + 4);
  }
  while ( a2 );
  v16 = 0;
  return sub_420F0(
           v16,
           addr,
           buf + 24,
           buf + 32,
           buf + 40,
           v20,
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

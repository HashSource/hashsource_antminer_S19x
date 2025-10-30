int __fastcall sub_32CA0(int a1, int a2, int *a3)
{
  int i; // r4
  int v7; // r5
  int v8; // r3
  _BOOL4 v9; // r3
  int v10; // r3
  bool v11; // zf
  unsigned int v13; // r2

  ++findpeer_calls;
  for ( i = peer_hash[sub_6C568(a1 + 4) & 0x7F]; i; i = *(_DWORD *)(i + 4) )
  {
    v7 = *(unsigned __int8 *)(i + 63);
    if ( v7 != 6 && *(_DWORD *)(i + 56) != *(_DWORD *)(a1 + 60) )
      continue;
    if ( *(unsigned __int16 *)(a1 + 6) != *(unsigned __int16 *)(i + 18) )
      continue;
    v8 = *(unsigned __int16 *)(i + 16);
    if ( v8 != *(unsigned __int16 *)(a1 + 4) )
      continue;
    if ( v8 == 2 )
    {
      v9 = *(_DWORD *)(a1 + 8) != *(_DWORD *)(i + 20);
    }
    else
    {
      if ( memcmp((const void *)(a1 + 12), (const void *)(i + 24), 0x10u) )
        continue;
      v9 = *(_DWORD *)(a1 + 28) != *(_DWORD *)(i + 40);
    }
    if ( !v9 )
    {
      v10 = AM[7 * v7 + a2];
      v11 = v10 == 1;
      if ( v10 == 1 )
        v11 = a2 == 4;
      *a3 = v10;
      if ( v11 )
      {
        v13 = bswap32(*(_DWORD *)(a1 + 116));
        if ( *(_DWORD *)(i + 584) == bswap32(*(_DWORD *)(a1 + 112)) && *(_DWORD *)(i + 588) == v13 )
          return i;
        if ( sub_32C0C(a1) )
        {
          i = 0;
          *a3 = -1;
          return i;
        }
        v10 = *a3;
      }
      if ( v10 == -1 )
        return 0;
      if ( v10 )
        return i;
    }
  }
  i = 0;
  *a3 = AM[a2];
  return i;
}

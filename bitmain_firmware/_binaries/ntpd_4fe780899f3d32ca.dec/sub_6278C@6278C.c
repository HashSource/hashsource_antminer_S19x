size_t __fastcall sub_6278C(size_t result, int a2, int a3)
{
  bool v4; // zf
  unsigned int v6; // r3

  v4 = result == 0;
  v6 = bswap32(result);
  if ( !result )
    result = 4;
  ++authencryptions;
  *(_DWORD *)(a2 + (a3 & 0xFFFFFFFC)) = v6;
  if ( !v4 )
  {
    result = sub_6204C(result);
    if ( result )
      return sub_606CC(cache_type, cache_secret, cache_secretsize, a2, a3);
  }
  return result;
}

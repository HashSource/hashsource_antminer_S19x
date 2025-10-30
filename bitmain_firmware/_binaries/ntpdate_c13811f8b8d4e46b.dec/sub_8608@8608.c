int __fastcall sub_8608(int result, int a2, int a3)
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
    result = sub_7EC8(result);
    if ( result )
      return sub_12FBC(cache_type, cache_secret, cache_secretsize, a2, a3);
  }
  return result;
}

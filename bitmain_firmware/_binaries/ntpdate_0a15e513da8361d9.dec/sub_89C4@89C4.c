int __fastcall sub_89C4(int result, int a2, unsigned int a3)
{
  unsigned int v4; // r3
  bool v5; // zf
  unsigned int v6; // r2

  v4 = a3 >> 2;
  v5 = result == 0;
  v6 = bswap32(result);
  if ( !result )
    result = 4;
  ++authencryptions;
  *(_DWORD *)(a2 + 4 * v4) = v6;
  if ( !v5 )
  {
    result = sub_8274(result);
    if ( result )
      return sub_134A0(cache_type, cache_secret, cache_secretsize, a2, a3);
  }
  return result;
}

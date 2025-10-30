unsigned int __fastcall openssl_lh_strcasehash(unsigned int result)
{
  unsigned int v1; // r6
  int v2; // r5
  unsigned int v3; // r4
  unsigned int v4; // r3
  unsigned int v5; // t1

  v1 = result;
  if ( result )
  {
    result = *(unsigned __int8 *)result;
    if ( result )
    {
      v2 = 256;
      v3 = 0;
      do
      {
        v4 = sub_BDB30(result) | v2;
        v5 = *(unsigned __int8 *)++v1;
        result = v5;
        v2 += 256;
        v3 = __ROL4__(v3, (v4 ^ (v4 >> 2)) & 0xF) ^ (v4 * v4);
      }
      while ( v5 );
      return v3 ^ HIWORD(v3);
    }
  }
  return result;
}

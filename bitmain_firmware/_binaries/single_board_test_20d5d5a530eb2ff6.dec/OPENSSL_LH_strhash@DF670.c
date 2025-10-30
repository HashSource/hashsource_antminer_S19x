unsigned __int8 *__fastcall OPENSSL_LH_strhash(unsigned __int8 *result)
{
  int v1; // r4
  unsigned int v2; // r3
  int v3; // r5
  unsigned int v4; // r2
  int v5; // t1

  if ( result )
  {
    v1 = *result;
    if ( *result )
    {
      v2 = 0;
      v3 = 256;
      do
      {
        v4 = v1 | v3;
        v5 = *++result;
        v1 = v5;
        v3 += 256;
        v2 = __ROL4__(v2, (v4 ^ (v4 >> 2)) & 0xF) ^ (v4 * v4);
      }
      while ( v5 );
      return (unsigned __int8 *)(v2 ^ HIWORD(v2));
    }
    else
    {
      return (unsigned __int8 *)*result;
    }
  }
  return result;
}

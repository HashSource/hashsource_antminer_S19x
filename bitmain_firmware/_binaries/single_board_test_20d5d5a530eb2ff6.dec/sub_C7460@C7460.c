int __fastcall sub_C7460(int result)
{
  unsigned int *v1; // r2
  unsigned int v2; // r3
  int v3; // r3
  int *v4; // r4
  int v5; // r5
  int v6; // r0
  int v7; // t1
  int *v8; // r0

  if ( result )
  {
    v1 = (unsigned int *)(result + 24);
    do
      v2 = __ldrex(v1);
    while ( __strex(v2 - 1, v1) );
    v3 = v2 - 1;
    if ( v3 )
    {
      if ( v3 > 0 )
        return result;
    }
    else
    {
      __dmb(0xBu);
    }
    v4 = *(int **)(result + 16);
    v5 = result;
    if ( v4 )
    {
      v6 = *v4;
      if ( *v4 )
      {
        do
        {
          sub_C6490(v6);
          v7 = v4[1];
          ++v4;
          v6 = v7;
        }
        while ( v7 );
        v8 = *(int **)(v5 + 16);
      }
      else
      {
        v8 = v4;
      }
      CRYPTO_free(v8, "crypto/ec/ec_mult.c", 98);
    }
    sub_10C574(*(_DWORD *)(v5 + 28));
    return CRYPTO_free(v5, "crypto/ec/ec_mult.c", 101);
  }
  return result;
}

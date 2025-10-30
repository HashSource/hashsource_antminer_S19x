int __fastcall sub_DA240(int result)
{
  unsigned int *v1; // r2
  unsigned int v2; // r3
  int v3; // r3
  int v4; // r3
  int *v5; // r4
  void (*v6)(void); // r3
  int v7; // r0

  if ( result )
  {
    v1 = (unsigned int *)(result + 8);
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
    v4 = *(_DWORD *)(result + 12);
    v5 = (int *)result;
    if ( v4 )
    {
      v6 = *(void (**)(void))(v4 + 88);
      if ( v6 )
      {
        v6();
        v5[6] = 0;
      }
    }
    sub_CDDF8(v5[4]);
    v5[4] = 0;
    sub_CDDF8(v5[5]);
    v7 = v5[9];
    v5[5] = 0;
    sub_10C574(v7);
    sub_10BFDC(v5[8], X509_ATTRIBUTE_free);
    return CRYPTO_free(v5, "crypto/evp/p_lib.c", 615);
  }
  return result;
}

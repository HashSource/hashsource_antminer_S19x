int __fastcall sub_B5EE0(_DWORD *a1)
{
  int result; // r0
  _DWORD *v3; // r4
  int v4; // r0
  int v5; // r5

  result = sub_E0740(32, "crypto/bio/bf_buff.c", 49);
  v3 = (_DWORD *)result;
  if ( result )
  {
    *(_DWORD *)result = 4096;
    v4 = CRYPTO_malloc(4096, "crypto/bio/bf_buff.c", 54);
    v3[2] = v4;
    if ( v4 )
    {
      v3[1] = 4096;
      v5 = CRYPTO_malloc(4096, "crypto/bio/bf_buff.c", 60);
      v3[5] = v5;
      if ( v5 )
      {
        a1[9] = v3;
        a1[4] = 1;
        a1[6] = 0;
        return 1;
      }
      else
      {
        CRYPTO_free(v3[2], "crypto/bio/bf_buff.c", 62);
        CRYPTO_free(v3, "crypto/bio/bf_buff.c", 63);
        return 0;
      }
    }
    else
    {
      CRYPTO_free(v3, "crypto/bio/bf_buff.c", 56);
      return 0;
    }
  }
  return result;
}

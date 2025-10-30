_DWORD *EVP_PKEY_new()
{
  _DWORD *v0; // r0
  _DWORD *v1; // r4
  int v2; // r5
  _DWORD *result; // r0

  v0 = (_DWORD *)sub_E0740(40, "crypto/evp/p_lib.c", 142);
  v1 = v0;
  if ( v0 )
  {
    *v0 = 0;
    v0[1] = 0;
    __dmb(0xBu);
    v0[2] = 1;
    __dmb(0xBu);
    v0[7] = 1;
    v2 = sub_10C510(v0);
    v1[9] = v2;
    result = v1;
    if ( !v2 )
    {
      sub_D0048(6, 106, 65, (int)"crypto/evp/p_lib.c", 154);
      CRYPTO_free(v1, "crypto/evp/p_lib.c", 155);
      return 0;
    }
  }
  else
  {
    sub_D0048(6, 106, 65, (int)"crypto/evp/p_lib.c", 145);
    return 0;
  }
  return result;
}

int __fastcall sub_9A264(int result)
{
  _DWORD *v1; // r4

  if ( result )
  {
    v1 = (_DWORD *)result;
    if ( *(_DWORD *)(result + 20) )
    {
      sub_D7A6C(*(_DWORD *)(result + 24));
      sub_D1504(v1[7]);
    }
    CRYPTO_free(v1[11], "ssl/statem/statem_dtls.c", 103);
    CRYPTO_free(v1[12], "ssl/statem/statem_dtls.c", 104);
    return CRYPTO_free(v1, "ssl/statem/statem_dtls.c", 105);
  }
  return result;
}

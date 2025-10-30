int __fastcall sub_878F8(int result)
{
  int v1; // r4

  if ( result )
  {
    v1 = result;
    CRYPTO_free(*(_DWORD *)(result + 4), "ssl/ssl_lib.c", 186);
    sub_DA240(*(_DWORD *)(v1 + 12));
    return CRYPTO_free(v1, "ssl/ssl_lib.c", 188);
  }
  return result;
}

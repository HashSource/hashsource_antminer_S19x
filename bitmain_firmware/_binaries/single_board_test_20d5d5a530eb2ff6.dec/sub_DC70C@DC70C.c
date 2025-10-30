int __fastcall sub_DC70C(int a1)
{
  int result; // r0
  int v3; // r4

  result = sub_DB984(a1);
  if ( result )
  {
    v3 = result;
    sub_DCA8C(*(_DWORD *)(result + 20));
    sub_E0758(*(_DWORD *)(v3 + 12), *(_DWORD *)(v3 + 4), (size_t)"crypto/hmac/hm_pmeth.c");
    CRYPTO_free(v3, "crypto/hmac/hm_pmeth.c", 81);
    return sub_DB980(a1, 0);
  }
  return result;
}

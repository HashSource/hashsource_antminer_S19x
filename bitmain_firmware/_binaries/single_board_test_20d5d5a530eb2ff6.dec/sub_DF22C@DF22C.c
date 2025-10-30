int __fastcall sub_DF22C(int a1)
{
  int v1; // r4

  v1 = *(_DWORD *)(a1 + 20);
  sub_E0758(*(_DWORD *)(v1 + 4), *(_DWORD *)(v1 + 8), (size_t)"crypto/kdf/tls1_prf.c");
  sub_E07F8(v1 + 12, *(_DWORD *)(v1 + 1036));
  return CRYPTO_free(v1, "crypto/kdf/tls1_prf.c", 54);
}

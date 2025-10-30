int __fastcall sub_DE860(int a1)
{
  int v1; // r4

  v1 = *(_DWORD *)(a1 + 20);
  sub_E0758(*(_DWORD *)(v1 + 8), *(_DWORD *)(v1 + 12), (size_t)"crypto/kdf/hkdf.c");
  sub_E0758(*(_DWORD *)(v1 + 16), *(_DWORD *)(v1 + 20), (size_t)"crypto/kdf/hkdf.c");
  sub_E07F8(v1 + 24, *(_DWORD *)(v1 + 1048));
  return CRYPTO_free(v1, "crypto/kdf/hkdf.c", 67);
}

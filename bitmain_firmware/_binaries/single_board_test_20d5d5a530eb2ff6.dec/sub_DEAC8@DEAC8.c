int __fastcall sub_DEAC8(int a1)
{
  int *v1; // r4

  v1 = *(int **)(a1 + 20);
  sub_E0758(v1[2], v1[3], (size_t)"crypto/kdf/scrypt.c");
  sub_E0758(*v1, v1[1], (size_t)"crypto/kdf/scrypt.c");
  return CRYPTO_free(v1, "crypto/kdf/scrypt.c", 86);
}

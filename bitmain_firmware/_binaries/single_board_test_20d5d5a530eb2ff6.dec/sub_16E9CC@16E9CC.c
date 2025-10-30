int __fastcall sub_16E9CC(int a1, size_t *a2, unsigned int a3)
{
  int v5; // r0
  int v7; // r4
  char *v8; // [sp+Ch] [bp-4h] BYREF

  v8 = 0;
  v5 = sub_B0FDC(a2, &v8, X509_EXTENSIONS_it);
  if ( v5 <= 0 )
    return 0;
  v7 = sub_16E9B0(a1, a3, 16, v8, v5);
  CRYPTO_free(v8);
  return v7;
}

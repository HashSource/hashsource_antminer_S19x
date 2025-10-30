void *__fastcall sub_E0740(void *a1)
{
  void *v2; // r0
  void *v3; // r4

  v2 = CRYPTO_malloc(a1);
  v3 = v2;
  if ( v2 )
    memset(v2, 0, (size_t)a1);
  return v3;
}

int __fastcall sub_13AAE8(int a1, size_t *a2)
{
  int v3; // r0
  int v5; // r4
  _BYTE *v6; // [sp+Ch] [bp-8h] BYREF

  v6 = 0;
  v3 = sub_B28CC(a2, &v6);
  if ( v3 <= 0 )
    return 0;
  v5 = sub_178E58(a1, 167, 16, v6, v3);
  CRYPTO_free(v6);
  return v5;
}

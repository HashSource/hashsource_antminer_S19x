_DWORD *sub_B9478()
{
  _DWORD *v0; // r0
  _DWORD *v1; // r4

  v0 = (_DWORD *)CRYPTO_malloc(76, "crypto/bn/bn_mont.c", 232);
  v1 = v0;
  if ( v0 )
  {
    sub_B9450(v0);
    v1[18] = 1;
  }
  else
  {
    sub_D0048(3, 149, 65, "crypto/bn/bn_mont.c", 233);
  }
  return v1;
}

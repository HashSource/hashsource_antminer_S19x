void *__fastcall sub_E774C(int a1, void (__fastcall *a2)(int, int, int))
{
  void *v4; // r0
  void *v5; // r4

  v4 = CRYPTO_malloc((void *)0x1A8);
  v5 = v4;
  if ( v4 )
    sub_E52C0((int)v4, a1, a2);
  return v5;
}

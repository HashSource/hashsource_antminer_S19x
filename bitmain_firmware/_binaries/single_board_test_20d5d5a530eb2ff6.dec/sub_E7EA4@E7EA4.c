void *__fastcall sub_E7EA4(int a1, int a2, void (__fastcall *a3)(_DWORD *, _DWORD *, int), int a4, int a5)
{
  _DWORD *v9; // r0
  void *v10; // r4

  v9 = CRYPTO_malloc((void *)0x98);
  v10 = v9;
  if ( !v9 || sub_E78E8(v9, a1, a2, a3, a4, a5) )
    return v10;
  CRYPTO_free(v10);
  return 0;
}

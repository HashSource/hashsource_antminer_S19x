int __fastcall sub_125F80(unsigned __int8 *a1, _DWORD *a2, size_t *a3, int a4, _DWORD *a5)
{
  size_t *v7; // r0
  int v10; // r0
  int v11; // r4
  _BYTE *v13; // [sp+Ch] [bp-8h] BYREF

  v13 = 0;
  v7 = a3;
  v10 = sub_B0FDC(v7, &v13, a1);
  v11 = (int)v13;
  if ( !v13 )
    return v11;
  if ( sub_D18F0((int)v13, v10, a4, a5, a2, 0) )
  {
    v11 = 1;
    CRYPTO_free(v13);
    return v11;
  }
  CRYPTO_free(v13);
  return 0;
}

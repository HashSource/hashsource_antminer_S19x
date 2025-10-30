_DWORD *__fastcall sub_115540(int a1, int a2, int a3, int a4)
{
  _DWORD *v8; // r0
  _DWORD *v9; // r4

  v8 = CRYPTO_malloc((void *)0x14);
  v9 = v8;
  if ( v8 )
  {
    v8[1] = a1;
    v8[2] = a2;
    v8[3] = a3;
    v8[4] = a4;
    *v8 = 1;
  }
  else
  {
    sub_D0048(11, 154, 65, (int)"crypto/x509/x_crl.c", 469);
  }
  return v9;
}

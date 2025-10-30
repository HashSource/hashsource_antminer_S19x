_DWORD *__fastcall sub_162014(int *a1, unsigned __int8 *a2, const char *a3, size_t a4, size_t *a5, int a6)
{
  _DWORD *v10; // r4
  signed int v11; // r0
  size_t v12; // r5
  int v14; // [sp+14h] [bp-4h] BYREF

  v14 = 0;
  v10 = (_DWORD *)sub_B2068();
  if ( !v10 )
  {
    sub_D0048(35, 108, 65, (int)"crypto/pkcs12/p12_decr.c", 134);
LABEL_9:
    j_ASN1_STRING_free(v10);
    return 0;
  }
  v11 = sub_B0FDC(a5, (_BYTE **)&v14, a2);
  v12 = v11;
  if ( !v14 )
  {
    sub_D0048(35, 108, 102, (int)"crypto/pkcs12/p12_decr.c", 139);
    goto LABEL_9;
  }
  if ( !sub_161E68(a1, a3, a4, (char *)v14, v11, v10 + 2, v10, 1) )
  {
    sub_D0048(35, 108, 103, (int)"crypto/pkcs12/p12_decr.c", 144);
    CRYPTO_free((void *)v14);
    goto LABEL_9;
  }
  if ( a6 )
    sub_E07F8((void *)v14, v12);
  CRYPTO_free((void *)v14);
  return v10;
}

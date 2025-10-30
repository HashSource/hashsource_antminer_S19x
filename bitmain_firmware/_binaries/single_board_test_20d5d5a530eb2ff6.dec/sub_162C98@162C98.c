int __fastcall sub_162C98(int a1, size_t *a2)
{
  int v4; // r0
  int v5; // r4

  v4 = sub_AE1D0();
  v5 = v4;
  if ( v4 )
  {
    *(_DWORD *)v4 = sub_B0FDC(a2, (_BYTE **)(v4 + 8), X509_ALGORS_it);
    return sub_F0F38(a1, (char *)0xA7, 16, v5);
  }
  else
  {
    sub_D0048(33, 118, 65, (int)"crypto/pkcs7/pk7_attr.c", 26);
    return 0;
  }
}

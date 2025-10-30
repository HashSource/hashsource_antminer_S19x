int __fastcall sub_12135C(int *a1, int a2, char *a3, int a4)
{
  int v8; // r0
  int v9; // r4

  v8 = sub_B20A4();
  v9 = v8;
  if ( v8 && sub_126EFC(v8, a2) )
    return sub_1211B0(a1, v9, a3, a4);
  sub_D0048(34, 127, 65, (int)"crypto/x509v3/v3_sxnet.c", 138);
  ASN1_INTEGER_free(v9);
  return 0;
}

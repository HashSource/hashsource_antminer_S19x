int __fastcall sub_1213F0(int a1, int a2)
{
  int v4; // r0
  int v5; // r5
  int v6; // r4

  v4 = sub_B20A4();
  v5 = v4;
  if ( v4 && sub_126EFC(v4, a2) )
  {
    v6 = sub_12117C(a1, v5);
    ASN1_INTEGER_free(v5);
    return v6;
  }
  else
  {
    sub_D0048(34, 129, 65, (int)"crypto/x509v3/v3_sxnet.c", 221);
    ASN1_INTEGER_free(v5);
    return 0;
  }
}

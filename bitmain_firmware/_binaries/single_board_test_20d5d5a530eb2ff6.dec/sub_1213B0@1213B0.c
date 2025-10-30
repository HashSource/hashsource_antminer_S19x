int __fastcall sub_1213B0(int a1, int a2)
{
  int v3; // r4
  int v4; // r5

  v3 = sub_122498(0, a2);
  if ( v3 )
  {
    v4 = sub_12117C(a1, v3);
    ASN1_INTEGER_free(v3);
    return v4;
  }
  else
  {
    sub_D0048(34, 128, 131, (int)"crypto/x509v3/v3_sxnet.c", 206);
    return 0;
  }
}

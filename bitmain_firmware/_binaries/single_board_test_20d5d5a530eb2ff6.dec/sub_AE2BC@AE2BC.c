int *__fastcall sub_AE2BC(int a1, int a2, int **a3)
{
  int *v6; // r4
  int v7; // r0
  int *result; // r0

  if ( !a3 || (v6 = *a3) == 0 )
  {
    v6 = (int *)sub_AE1D0();
    if ( !v6 )
    {
      sub_D0048(13, 198, 65, "crypto/asn1/asn_pack.c", 22);
      return 0;
    }
  }
  CRYPTO_free(v6[2], "crypto/asn1/asn_pack.c", 29);
  v6[2] = 0;
  v7 = sub_B0FDC(a1, v6 + 2, a2);
  *v6 = v7;
  if ( v7 )
  {
    if ( v6[2] )
    {
      if ( !a3 || *a3 )
        return v6;
      *a3 = v6;
      return v6;
    }
    sub_D0048(13, 198, 65, "crypto/asn1/asn_pack.c", 37);
  }
  else
  {
    sub_D0048(13, 198, 112, "crypto/asn1/asn_pack.c", 33);
  }
  if ( !a3 || (result = 0, !*a3) )
  {
    ASN1_STRING_free((int)v6);
    return 0;
  }
  return result;
}

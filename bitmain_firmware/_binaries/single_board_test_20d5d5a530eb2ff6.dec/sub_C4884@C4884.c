int __fastcall sub_C4884(_DWORD *a1, int *a2)
{
  int v4; // r0
  bool v5; // zf
  int v6; // r5
  int v7; // lr
  int v9; // r0

  if ( a1 )
  {
    v4 = sub_C8824(a1[3], a1[4], a1[7], 0, 0, 0);
    v5 = v4 == 0;
    if ( v4 )
      v5 = a2 == 0;
    v6 = v4;
    v7 = v5;
    if ( v5 )
      return v6;
    if ( *a2 )
    {
      if ( sub_C8824(a1[3], a1[4], a1[7], *a2, v4, v7) )
      {
        *a2 += v6;
        return v6;
      }
      sub_D0048(16, 151, 16, "crypto/ec/ec_asn1.c", 1243);
      return 0;
    }
    else
    {
      v9 = CRYPTO_malloc(v4, "crypto/ec/ec_asn1.c", 1235);
      *a2 = v9;
      if ( v9 )
      {
        if ( sub_C8824(a1[3], a1[4], a1[7], v9, v6, 0) )
          return v6;
        sub_D0048(16, 151, 16, "crypto/ec/ec_asn1.c", 1243);
        CRYPTO_free(*a2, "crypto/ec/ec_asn1.c", 1245);
        *a2 = 0;
        return 0;
      }
      else
      {
        sub_D0048(16, 151, 65, "crypto/ec/ec_asn1.c", 1236);
        return 0;
      }
    }
  }
  else
  {
    sub_D0048(16, 151, 67, "crypto/ec/ec_asn1.c", 1223);
    return 0;
  }
}

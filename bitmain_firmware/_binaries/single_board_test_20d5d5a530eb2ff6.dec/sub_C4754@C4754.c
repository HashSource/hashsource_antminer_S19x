int __fastcall sub_C4754(int *a1, void **a2, int a3)
{
  int v6; // r4
  int result; // r0
  int v8; // r0

  if ( a2 && *a2 )
  {
    if ( a1 )
    {
      v6 = *a1;
      if ( *a1 )
      {
        if ( d2i_ECPKParameters((int *)(v6 + 12), a2, a3) )
        {
LABEL_6:
          *a1 = v6;
          return v6;
        }
        sub_D0048(16, 144, 16, "crypto/ec/ec_asn1.c", 1185);
        goto LABEL_12;
      }
    }
    v8 = EC_KEY_new();
    v6 = v8;
    if ( v8 )
    {
      if ( !d2i_ECPKParameters((int *)(v8 + 12), a2, a3) )
      {
        sub_D0048(16, 144, 16, "crypto/ec/ec_asn1.c", 1185);
        if ( !a1 )
        {
LABEL_14:
          sub_C5410(v6);
          return 0;
        }
LABEL_12:
        if ( *a1 == v6 )
          return 0;
        goto LABEL_14;
      }
      result = v6;
      if ( a1 )
        goto LABEL_6;
    }
    else
    {
      sub_D0048(16, 144, 65, "crypto/ec/ec_asn1.c", 1178);
      return 0;
    }
  }
  else
  {
    sub_D0048(16, 144, 67, "crypto/ec/ec_asn1.c", 1172);
    return 0;
  }
  return result;
}

int __fastcall sub_C4204(int *a1)
{
  int v1; // r3
  int v3; // r0
  int v4; // r0
  int v5; // r4
  int v6; // r0
  int v7; // r4

  if ( a1 )
  {
    v1 = *a1;
    if ( *a1 )
    {
      if ( v1 == 1 )
      {
        v6 = sub_C3B38((_DWORD *)a1[1]);
        v7 = v6;
        if ( v6 )
        {
          sub_C6288(v6, 0);
          return v7;
        }
        else
        {
          sub_D0048(16, 264, 16, "crypto/ec/ec_asn1.c", 937);
          return 0;
        }
      }
      else
      {
        if ( v1 != 2 )
          sub_D0048(16, 264, 115, "crypto/ec/ec_asn1.c", 945);
        return 0;
      }
    }
    else
    {
      v3 = sub_EAC84(a1[1]);
      v4 = sub_C4BE8(v3);
      v5 = v4;
      if ( v4 )
      {
        sub_C6288(v4, 1);
        return v5;
      }
      else
      {
        sub_D0048(16, 264, 119, "crypto/ec/ec_asn1.c", 929);
        return 0;
      }
    }
  }
  else
  {
    sub_D0048(16, 264, 124, "crypto/ec/ec_asn1.c", 920);
    return 0;
  }
}

int __fastcall sub_C1EC8(int a1, int *a2)
{
  int v3; // r4
  int v4; // r0
  int v5; // r0
  int v6; // r5
  int v8; // r2
  int v9; // [sp+Ch] [bp-4h] BYREF

  if ( a1 == 16 )
  {
    v8 = *a2;
    v9 = a2[2];
    v3 = sub_C4754(0, &v9, v8);
    if ( v3 )
      return v3;
    v6 = 0;
    sub_D0048(16, 220, 142, "crypto/ec/ec_ameth.c", 120);
  }
  else if ( a1 == 6 )
  {
    v3 = EC_KEY_new();
    if ( v3 )
    {
      v4 = sub_EAC84(a2);
      v5 = sub_C4BE8(v4);
      v6 = v5;
      if ( v5 )
      {
        sub_C6288(v5, 1);
        if ( sub_C59BC(v3, v6) )
        {
          sub_C64B8(v6);
          return v3;
        }
      }
    }
    else
    {
      v6 = 0;
      sub_D0048(16, 220, 65, "crypto/ec/ec_ameth.c", 130);
    }
  }
  else
  {
    v6 = 0;
    v3 = 0;
    sub_D0048(16, 220, 142, "crypto/ec/ec_ameth.c", 141);
  }
  sub_C5410(v3);
  sub_C64B8(v6);
  return 0;
}

int __fastcall sub_AB988(int a1, int a2, int a3)
{
  int v6; // r0
  int v7; // r0
  int v8; // r5
  int v10; // r0
  int v11; // r2
  int v12; // r6
  int v13; // r4
  int v14; // r0

  v6 = sub_B7820();
  v7 = sub_B655C(v6);
  v8 = v7;
  if ( v7 )
  {
    if ( sub_B6ECC(v7, 108, 3, a2) <= 0 )
    {
      sub_D0048(20, 203, 2, "ssl/ssl_rsa.c", 248);
      goto LABEL_6;
    }
    if ( a3 == 1 )
    {
      v14 = sub_EEC84(v8, 0, *(_DWORD *)(a1 + 3900), *(char **)(a1 + 3904));
      v11 = 9;
      v12 = v14;
    }
    else
    {
      if ( a3 != 2 )
      {
        sub_D0048(20, 203, 124, "ssl/ssl_rsa.c", 260);
LABEL_6:
        BIO_vfree_0(v8);
        return 0;
      }
      v10 = sub_114D24(v8, 0);
      v11 = 13;
      v12 = v10;
    }
    if ( !v12 )
    {
      sub_D0048(20, 203, v11, "ssl/ssl_rsa.c", 264);
      goto LABEL_6;
    }
    v13 = sub_AB894(a1, v12);
    sub_DA240(v12);
    BIO_vfree_0(v8);
    return v13;
  }
  else
  {
    sub_D0048(20, 203, 7, "ssl/ssl_rsa.c", 243);
    BIO_vfree_0(0);
    return 0;
  }
}

int __fastcall sub_ABCD8(int a1, int a2, int a3)
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
      sub_D0048(20, 179, 2, "ssl/ssl_rsa.c", 454);
      goto LABEL_6;
    }
    if ( a3 == 2 )
    {
      v14 = sub_114690(v8, 0);
      v11 = 13;
      v12 = v14;
    }
    else
    {
      if ( a3 != 1 )
      {
        sub_D0048(20, 179, 124, "ssl/ssl_rsa.c", 466);
LABEL_6:
        BIO_vfree_0(v8);
        return 0;
      }
      v10 = sub_ECB2C(v8, 0, *(_DWORD *)(a1 + 112), *(_DWORD *)(a1 + 116));
      v11 = 9;
      v12 = v10;
    }
    if ( !v12 )
    {
      sub_D0048(20, 179, v11, "ssl/ssl_rsa.c", 470);
      goto LABEL_6;
    }
    v13 = sub_ABC4C(a1, v12);
    sub_F8154(v12);
    BIO_vfree_0(v8);
    return v13;
  }
  else
  {
    sub_D0048(20, 179, 7, "ssl/ssl_rsa.c", 449);
    BIO_vfree_0(0);
    return 0;
  }
}

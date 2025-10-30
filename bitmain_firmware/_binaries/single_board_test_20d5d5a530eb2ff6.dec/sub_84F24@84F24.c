int __fastcall sub_84F24(int a1, int a2)
{
  int v4; // r8
  int v5; // r0
  int v6; // r0
  int v7; // r6
  int v8; // r0
  int v9; // r0
  int v10; // r0
  int v11; // r4
  int v12; // r4
  int v13; // r0
  int v14; // r1
  int v15; // r2
  int v17; // [sp+Ch] [bp-4h] BYREF

  v17 = 0;
  v4 = sub_10B9F0(a1, sub_841DC);
  v5 = sub_B7820();
  v6 = sub_B655C(v5);
  v7 = v6;
  if ( !v6 )
  {
    v12 = 0;
    sub_D0048(20, 216, 65, "ssl/ssl_cert.c", 675);
    goto LABEL_12;
  }
  if ( !sub_B6ECC(v6, 108, 3, a2) )
    goto LABEL_11;
LABEL_3:
  v8 = sub_EF18C(v7, (int)&v17, 0, 0);
  if ( v8 )
  {
    while ( 1 )
    {
      v9 = sub_10E660(v17);
      if ( !v9 )
        break;
      v10 = sub_115E5C(v9);
      v11 = v10;
      if ( !v10 )
        break;
      if ( sub_10BC4C(a1, v10) < 0 )
      {
        if ( sub_10BD3C(a1, v11) )
          goto LABEL_3;
        v13 = v11;
        v12 = 0;
        X509_NAME_free(v13);
        goto LABEL_12;
      }
      X509_NAME_free(v11);
      v8 = sub_EF18C(v7, (int)&v17, 0, 0);
      if ( !v8 )
        goto LABEL_8;
    }
LABEL_11:
    v12 = 0;
    goto LABEL_12;
  }
LABEL_8:
  v12 = 1;
  sub_D00F0(v8);
LABEL_12:
  BIO_vfree_0(v7);
  X509_free(v17, v14, v15);
  sub_10B9F0(a1, v4);
  return v12;
}

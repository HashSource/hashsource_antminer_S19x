int __fastcall sub_84DD8(int a1)
{
  int v2; // r4
  int v3; // r0
  int v4; // r7
  int v5; // r0
  bool v6; // zf
  int v7; // r6
  int v8; // r5
  int v9; // r0
  int v10; // r0
  int v11; // r0
  int v12; // r1
  int v13; // r2
  int v14; // r0
  int v16; // r0
  int v17; // r1
  int v18; // r2
  _DWORD v19[2]; // [sp+Ch] [bp-8h] BYREF

  v2 = 0;
  v3 = sub_B7820();
  v4 = sub_B655C(v3);
  v19[0] = 0;
  v5 = sub_DF6B4(sub_841D8, sub_84170);
  v6 = v4 == 0;
  if ( v4 )
    v6 = v5 == 0;
  v7 = v5;
  v8 = v6;
  if ( v6 )
  {
    v8 = 0;
    sub_D0048(20, 185, 65, "ssl/ssl_cert.c", 613);
LABEL_19:
    X509_NAME_free(v2);
    v16 = v8;
    v8 = 0;
    sub_10BFDC(v16, X509_NAME_free);
    BIO_vfree_0(v4);
    X509_free(v19[0], v17, v18);
    sub_DF748(v7);
    return v8;
  }
  if ( !sub_B6ECC(v4, 108, 3, a1) )
  {
    v8 = 0;
    v2 = 0;
    goto LABEL_19;
  }
  v2 = v8;
  while ( sub_EF18C(v4, (int)v19, 0, 0) )
  {
    while ( 1 )
    {
      if ( !v8 )
      {
        v8 = sub_10BFCC();
        if ( !v8 )
        {
          sub_D0048(20, 185, 65, "ssl/ssl_cert.c", 626);
          goto LABEL_19;
        }
      }
      v9 = sub_10E660(v19[0]);
      v2 = v9;
      if ( !v9 )
        goto LABEL_19;
      v10 = sub_115E5C(v9);
      v2 = v10;
      if ( !v10 )
        goto LABEL_19;
      if ( !sub_DFA98(v7, v10) )
        break;
      v11 = v2;
      v2 = 0;
      X509_NAME_free(v11);
      if ( !sub_EF18C(v4, (int)v19, 0, 0) )
        goto LABEL_15;
    }
    sub_DF7A0(v7, v2);
    if ( !sub_10BD3C(v8, v2) )
      goto LABEL_19;
  }
LABEL_15:
  BIO_vfree_0(v4);
  X509_free(v19[0], v12, v13);
  v14 = sub_DF748(v7);
  if ( v8 )
  {
    sub_D00F0(v14);
    return v8;
  }
  return v8;
}

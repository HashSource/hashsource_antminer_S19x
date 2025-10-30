int __fastcall sub_ABB2C(int a1, int a2, int a3)
{
  int v6; // r0
  int v7; // r0
  int v8; // r5
  int v9; // r2
  int v10; // r4
  int v11; // r6
  int v12; // r1
  int v13; // r2
  int v15; // r0
  int v16; // r2
  int v17; // r0
  int v18; // [sp+0h] [bp-Ch]

  v6 = sub_B7820();
  v7 = sub_B655C(v6);
  v8 = v7;
  if ( !v7 )
  {
    v10 = 0;
    sub_D0048(20, 173, 7, "ssl/ssl_rsa.c", 366);
    v11 = 0;
    goto LABEL_7;
  }
  if ( sub_B6ECC(v7, 108, 3, a2) <= 0 )
  {
    v18 = 371;
    v9 = 2;
    goto LABEL_6;
  }
  if ( a3 == 2 )
  {
    v17 = sub_114408(v8, 0);
    v16 = 13;
    v10 = v17;
  }
  else
  {
    if ( a3 != 1 )
    {
      v18 = 382;
      v9 = 124;
LABEL_6:
      v10 = 0;
      v11 = 0;
      sub_D0048(20, 173, v9, "ssl/ssl_rsa.c", v18);
      goto LABEL_7;
    }
    v15 = sub_EF18C(v8, 0, *(_DWORD *)(a1 + 112), *(char **)(a1 + 116));
    v16 = 9;
    v10 = v15;
  }
  if ( v10 )
  {
    v11 = sub_ABAC0(a1, v10);
  }
  else
  {
    v11 = 0;
    sub_D0048(20, 173, v16, "ssl/ssl_rsa.c", 387);
  }
LABEL_7:
  X509_free(v10, v12, v13);
  BIO_vfree_0(v8);
  return v11;
}

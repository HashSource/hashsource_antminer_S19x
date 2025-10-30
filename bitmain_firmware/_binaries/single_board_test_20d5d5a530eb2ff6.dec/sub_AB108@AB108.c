int __fastcall sub_AB108(_DWORD *a1, int a2)
{
  int v4; // r3
  int v5; // r1
  int v6; // r0
  int v7; // r0
  int v8; // r6
  int v9; // r0
  int v10; // r0
  int v11; // r2
  _DWORD *v12; // r3
  int v14; // [sp+Ch] [bp-4h] BYREF

  if ( !sub_8559C(a2, &v14) )
  {
    v8 = 0;
    sub_D0048(20, 193, 247, "ssl/ssl_rsa.c", 133);
    return v8;
  }
  v4 = v14;
  v5 = 4 * v14;
  v6 = a1[5 * v14 + 5];
  if ( !v6 )
    goto LABEL_5;
  v7 = sub_10E89C(v6);
  v8 = v7;
  if ( !v7 )
  {
    sub_D0048(20, 193, 65, "ssl/ssl_rsa.c", 141);
    return v8;
  }
  v9 = sub_D9D74(v7, a2);
  sub_D00F0(v9);
  v10 = sub_10E8B4(a1[5 * v14 + 5], a2);
  v4 = v14;
  v5 = 4 * v14;
  if ( v10 )
  {
LABEL_5:
    v8 = 1;
    sub_DA240(a1[v4 + 6 + v5]);
    sub_D9C08(a2);
    v12 = &a1[5 * v14];
    v12[6] = a2;
    *a1 = v12 + 5;
    return v8;
  }
  X509_free(a1[5 * v14 + 5], v5, v11);
  a1[5 * v14 + 5] = 0;
  return 0;
}

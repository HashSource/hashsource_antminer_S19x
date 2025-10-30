int __fastcall sub_AB894(int a1, int a2)
{
  _DWORD *v3; // r5
  int v4; // r6
  int v5; // r3
  int v6; // r1
  int v7; // r0
  int v8; // r0
  int v9; // r0
  int v10; // r0
  int v11; // r2
  _DWORD *v12; // r3
  int v14; // [sp+Ch] [bp-4h] BYREF

  if ( a2 )
  {
    v3 = *(_DWORD **)(a1 + 1028);
    v4 = (int)sub_8559C(a2, &v14);
    if ( !v4 )
    {
      sub_D0048(20, 193, 247, "ssl/ssl_rsa.c", 133);
      return v4;
    }
    v5 = v14;
    v6 = 4 * v14;
    v7 = v3[5 * v14 + 5];
    if ( !v7 )
      goto LABEL_6;
    v8 = sub_10E89C(v7);
    v4 = v8;
    if ( !v8 )
    {
      sub_D0048(20, 193, 65, "ssl/ssl_rsa.c", 141);
      return v4;
    }
    v9 = sub_D9D74(v8, a2);
    sub_D00F0(v9);
    v10 = sub_10E8B4(v3[5 * v14 + 5], a2);
    v5 = v14;
    v6 = 4 * v14;
    if ( v10 )
    {
LABEL_6:
      v4 = 1;
      sub_DA240(v3[v5 + 6 + v6]);
      sub_D9C08(a2);
      v12 = &v3[5 * v14];
      v12[6] = a2;
      *v3 = v12 + 5;
      return v4;
    }
    X509_free(v3[5 * v14 + 5], v6, v11);
    v3[5 * v14 + 5] = 0;
    return 0;
  }
  else
  {
    sub_D0048(20, 201, 67, "ssl/ssl_rsa.c", 228);
    return 0;
  }
}

int __fastcall sub_AAFF8(_DWORD *a1, int a2)
{
  int v4; // r0
  int v5; // r7
  int v6; // r6
  int v7; // r3
  int v8; // r0
  _DWORD *v9; // r2
  int v10; // r1
  int v11; // r0
  int v12; // r0
  _DWORD *v13; // r3
  int v15; // r0
  int v16; // r0
  int v17; // [sp+Ch] [bp-8h] BYREF

  v4 = sub_10E89C(a2);
  v5 = v4;
  if ( v4 )
  {
    v6 = (int)sub_8559C(v4, &v17);
    if ( v6 )
    {
      v7 = v17;
      if ( v17 != 3 )
      {
LABEL_4:
        v8 = 4 * v7;
        v9 = &a1[5 * v7];
        v10 = v9[6];
        if ( v10 )
        {
          v11 = sub_D9D74(v5, v10);
          sub_D00F0(v11);
          v12 = sub_10E8B4(a2, a1[5 * v17 + 6]);
          v7 = v17;
          if ( !v12 )
          {
            v15 = sub_DA240(a1[5 * v17 + 6]);
            a1[5 * v17 + 6] = 0;
            sub_D00F0(v15);
            v7 = v17;
          }
          v8 = 4 * v7;
        }
        v6 = 1;
        X509_free(a1[v7 + 5 + v8], v10, v9);
        sub_10FD18(a2);
        v13 = &a1[5 * v17];
        v13[5] = a2;
        *a1 = v13 + 5;
        return v6;
      }
      v16 = sub_DA1F4(v5);
      v6 = sub_C5E34(v16);
      if ( v6 )
      {
        v7 = v17;
        goto LABEL_4;
      }
      sub_D0048(20, 191, 318, "ssl/ssl_rsa.c", 324);
    }
    else
    {
      sub_D0048(20, 191, 247, "ssl/ssl_rsa.c", 319);
    }
    return v6;
  }
  sub_D0048(20, 191, 268, "ssl/ssl_rsa.c", 314);
  return 0;
}

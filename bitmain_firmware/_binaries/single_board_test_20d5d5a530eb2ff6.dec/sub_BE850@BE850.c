int __fastcall sub_BE850(int *a1)
{
  int v2; // r4
  int v3; // r5
  int v4; // r7
  int v5; // r5
  int v7; // r5
  int v8; // r5
  int v9; // r0
  int v10; // r0
  int v11; // r0

  v2 = sub_BFD20();
  if ( v2 )
  {
    v3 = a1[2];
    v4 = a1[9];
    if ( !v3 || sub_B87C0(a1[2], 2) && !sub_B87C0(v3, 1) || (v3 = sub_B8A2C(v3)) != 0 )
    {
      if ( (sub_B87C8(*(int **)(v2 + 8)), *(_DWORD *)(v2 + 8) = v3, (v5 = a1[3]) == 0)
        || sub_B87C0(a1[3], 2) && !sub_B87C0(v5, 1)
        || (v5 = sub_B8A2C(v5)) != 0 )
      {
        sub_B87C8(*(int **)(v2 + 12));
        *(_DWORD *)(v2 + 12) = v5;
        if ( !v4 )
        {
          *(_DWORD *)(v2 + 16) = a1[4];
          return v2;
        }
        v7 = a1[9];
        if ( !v7 || sub_B87C0(a1[9], 2) && !sub_B87C0(v7, 1) || (v7 = sub_B8A2C(v7)) != 0 )
        {
          if ( (sub_B87C8(*(int **)(v2 + 36)), *(_DWORD *)(v2 + 36) = v7, (v8 = a1[10]) == 0)
            || sub_B87C0(a1[10], 2) && !sub_B87C0(v8, 1)
            || (v8 = sub_B8A2C(v8)) != 0 )
          {
            sub_B87C8(*(int **)(v2 + 40));
            v9 = *(_DWORD *)(v2 + 44);
            *(_DWORD *)(v2 + 40) = v8;
            CRYPTO_free(v9, "crypto/dh/dh_ameth.c", 407);
            *(_DWORD *)(v2 + 44) = 0;
            v10 = a1[11];
            *(_DWORD *)(v2 + 48) = 0;
            if ( !v10 )
              return v2;
            v11 = sub_E9E68(v10, a1[12], "crypto/dh/dh_ameth.c", 411);
            *(_DWORD *)(v2 + 44) = v11;
            if ( v11 )
            {
              *(_DWORD *)(v2 + 48) = a1[12];
              return v2;
            }
          }
        }
      }
    }
    sub_BFB8C(v2);
  }
  return 0;
}

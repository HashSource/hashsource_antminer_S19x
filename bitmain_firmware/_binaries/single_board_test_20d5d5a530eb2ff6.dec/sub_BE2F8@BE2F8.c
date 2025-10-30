int __fastcall sub_BE2F8(int a1, int a2)
{
  int v2; // r5
  int *v3; // r6
  void *v4; // r8
  int v5; // r4
  int v6; // r4
  int v9; // r0
  int v10; // r4
  int v11; // r4
  int v12; // r0
  int v13; // r0
  int v14; // r0
  int v15; // [sp+4h] [bp-4h]

  v2 = *(_DWORD *)(a1 + 24);
  if ( !v2 )
  {
    v15 = a2;
    v9 = sub_BFD20();
    a2 = v15;
    v2 = v9;
    *(_DWORD *)(a1 + 24) = v9;
    if ( !v9 )
      return 0;
  }
  v3 = *(int **)(a2 + 24);
  v4 = *(void **)(a2 + 12);
  v5 = v3[2];
  if ( v5 )
  {
    if ( !sub_B87C0(v3[2], 2) || sub_B87C0(v5, 1) )
    {
      v5 = sub_B8A2C(v5);
      if ( !v5 )
        return 0;
    }
  }
  sub_B87C8(*(int **)(v2 + 8));
  *(_DWORD *)(v2 + 8) = v5;
  v6 = v3[3];
  if ( v6 )
  {
    if ( !sub_B87C0(v3[3], 2) || sub_B87C0(v6, 1) )
    {
      v6 = sub_B8A2C(v6);
      if ( !v6 )
        return 0;
    }
  }
  sub_B87C8(*(int **)(v2 + 12));
  *(_DWORD *)(v2 + 12) = v6;
  if ( v4 != &dhx_asn1_meth )
  {
    *(_DWORD *)(v2 + 16) = v3[4];
    return 1;
  }
  v10 = v3[9];
  if ( v10 && (!sub_B87C0(v3[9], 2) || sub_B87C0(v10, 1)) )
  {
    v10 = sub_B8A2C(v10);
    if ( !v10 )
      return 0;
  }
  sub_B87C8(*(int **)(v2 + 36));
  *(_DWORD *)(v2 + 36) = v10;
  v11 = v3[10];
  if ( v11 )
  {
    if ( !sub_B87C0(v3[10], 2) || sub_B87C0(v11, 1) )
    {
      v11 = sub_B8A2C(v11);
      if ( !v11 )
        return 0;
    }
  }
  sub_B87C8(*(int **)(v2 + 40));
  v12 = *(_DWORD *)(v2 + 44);
  *(_DWORD *)(v2 + 40) = v11;
  CRYPTO_free(v12, "crypto/dh/dh_ameth.c", 407);
  *(_DWORD *)(v2 + 44) = 0;
  v13 = v3[11];
  *(_DWORD *)(v2 + 48) = 0;
  if ( v13 )
  {
    v14 = sub_E9E68(v13, v3[12], "crypto/dh/dh_ameth.c", 411);
    *(_DWORD *)(v2 + 44) = v14;
    if ( v14 )
    {
      *(_DWORD *)(v2 + 48) = v3[12];
      return 1;
    }
    return 0;
  }
  return 1;
}

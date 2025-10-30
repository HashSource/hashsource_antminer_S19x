int __fastcall sub_FB0BC(int a1, int a2, int a3, const void *a4, size_t n)
{
  _DWORD *v6; // r4
  int v9; // r1
  int v11; // r0
  int v12; // r6
  int v13; // r3
  int v15; // r2
  int v16; // r0
  int v17; // r0
  int v18; // r2
  void *v19; // r0
  void *v20; // r0
  void *v21; // r0
  void *v22; // r0
  int v23; // [sp+Ch] [bp-8h] BYREF

  v6 = *(_DWORD **)(a1 + 20);
  v9 = *(_DWORD *)(a1 + 8);
  v11 = v6[6];
  v12 = *(_DWORD *)(v9 + 24);
  if ( !v11 )
  {
    v18 = v6[10];
    if ( !v18 )
    {
      v21 = (void *)sub_D9AF8(v9);
      v22 = CRYPTO_malloc(v21);
      v6[10] = v22;
      if ( !v22 )
      {
LABEL_21:
        sub_D0048(4, 167, 65, (int)"crypto/rsa/rsa_pmeth.c", 107);
        return -1;
      }
      v18 = (int)v22;
    }
    v16 = sub_F7F20(a3, a2, v18, v12);
    v23 = v16;
    if ( !v16 )
      return 0;
LABEL_13:
    if ( n == v16 )
      return memcmp(a4, (const void *)v6[10], n) == 0;
    return 0;
  }
  if ( v6[5] == 1 )
  {
    v17 = sub_D8C70(v11);
    return sub_FB7A4(v17, a4, n, a2, a3, v12);
  }
  if ( n == sub_D8C78(v11) )
  {
    v13 = v6[5];
    if ( v13 != 5 )
    {
      if ( v13 != 6 )
        return -1;
      v15 = v6[10];
      if ( !v15 )
      {
        v19 = (void *)sub_D9AF8(*(_DWORD *)(a1 + 8));
        v20 = CRYPTO_malloc(v19);
        v6[10] = v20;
        v15 = (int)v20;
        if ( !v20 )
          goto LABEL_21;
      }
      if ( sub_F7F20(a3, a2, v15, v12) > 0 )
        return sub_FB20C(v12, a4, v6[6], v6[7], v6[10], v6[8]) > 0;
      return 0;
    }
    if ( sub_FAF90(a1, 0, &v23, a2, a3) <= 0 )
      return 0;
    v16 = v23;
    goto LABEL_13;
  }
  sub_D0048(4, 149, 143, (int)"crypto/rsa/rsa_pmeth.c", 254);
  return -1;
}

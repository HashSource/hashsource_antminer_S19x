int __fastcall sub_FADD8(int a1, int a2, int *a3, const void *a4, int a5)
{
  _DWORD *v6; // r4
  int v9; // r2
  int v11; // r0
  int v12; // r6
  size_t v13; // r7
  int v14; // r0
  int v15; // r3
  void *v16; // r1
  int v17; // r0
  int result; // r0
  void *v19; // r0
  void *v20; // r0
  void *v21; // r0
  int v22; // r5
  int v23; // r0
  int v24; // r0
  void *v25; // r0
  _DWORD v26[2]; // [sp+14h] [bp-8h] BYREF

  v6 = *(_DWORD **)(a1 + 20);
  v9 = *(_DWORD *)(a1 + 8);
  v11 = v6[6];
  v12 = *(_DWORD *)(v9 + 24);
  if ( !v11 )
  {
    result = sub_F7F00(a5, (int)a4, a2, v12);
    goto LABEL_10;
  }
  v13 = sub_D8C78(v11);
  if ( v13 != a5 )
  {
    sub_D0048(4, 142, 143, (int)"crypto/rsa/rsa_pmeth.c", 134);
    return -1;
  }
  v14 = sub_D8C70(v6[6]);
  v15 = v6[5];
  if ( v14 != 95 )
  {
    if ( v15 == 5 )
    {
      if ( sub_D9AF8(*(_DWORD *)(a1 + 8)) < v13 + 1 )
      {
        sub_D0048(4, 142, 120, (int)"crypto/rsa/rsa_pmeth.c", 150);
        return -1;
      }
      v21 = (void *)v6[10];
      if ( !v21 )
      {
        v25 = (void *)sub_D9AF8(*(_DWORD *)(a1 + 8));
        v21 = CRYPTO_malloc(v25);
        v6[10] = v21;
        if ( !v21 )
        {
          sub_D0048(4, 167, 65, (int)"crypto/rsa/rsa_pmeth.c", 107);
          sub_D0048(4, 142, 65, (int)"crypto/rsa/rsa_pmeth.c", 154);
          return -1;
        }
      }
      memcpy(v21, a4, v13);
      v22 = v6[10];
      v23 = sub_D8C70(v6[6]);
      *(_BYTE *)(v22 + v13) = sub_FBCAC(v23);
      result = sub_F7F00(v13 + 1, v6[10], a2, v12);
      goto LABEL_10;
    }
    if ( v15 != 1 )
    {
      if ( v15 != 6 )
        return -1;
      v16 = (void *)v6[10];
      if ( !v16 )
      {
        v19 = (void *)sub_D9AF8(*(_DWORD *)(a1 + 8));
        v20 = CRYPTO_malloc(v19);
        v6[10] = v20;
        v16 = v20;
        if ( !v20 )
        {
          sub_D0048(4, 167, 65, (int)"crypto/rsa/rsa_pmeth.c", 107);
          return -1;
        }
      }
      if ( !sub_FB224(v12, v16, a4, v6[6], v6[7], v6[8]) )
        return -1;
      v17 = sub_F7ED8(v12);
      result = sub_F7F00(v17, v6[10], a2, v12);
      goto LABEL_10;
    }
    v24 = sub_D8C70(v6[6]);
    result = sub_FB680(v24, a4, v13, a2, v26, v12);
    if ( result <= 0 )
      return result;
    goto LABEL_25;
  }
  if ( v15 != 1 )
    return -1;
  result = sub_FB5C0(0, a4, v13, a2, v26, v12);
  if ( result > 0 )
  {
LABEL_25:
    result = v26[0];
LABEL_10:
    if ( result >= 0 )
    {
      *a3 = result;
      return 1;
    }
  }
  return result;
}

int __fastcall sub_FAF90(int a1, void *a2, int *a3, int a4, int a5)
{
  _DWORD *v6; // r5
  int v10; // r0
  int v11; // r3
  int result; // r0
  int v13; // r0
  int v14; // r2
  int v15; // r0
  size_t v16; // r4
  int v17; // r8
  int v18; // r0
  void *v19; // r0
  void *v20; // r0
  int v21; // [sp+14h] [bp-8h] BYREF

  v6 = *(_DWORD **)(a1 + 20);
  v10 = v6[6];
  if ( !v10 )
  {
    result = sub_F7F20(a5, a4, (int)a2, *(_DWORD *)(*(_DWORD *)(a1 + 8) + 24));
LABEL_7:
    if ( result < 0 )
      return result;
    goto LABEL_8;
  }
  v11 = v6[5];
  if ( v11 != 5 )
  {
    if ( v11 != 1 )
      return -1;
    v13 = sub_D8C70(v10);
    if ( sub_FB7A0(v13, 0, 0, a2, &v21, a4, a5, *(_DWORD *)(*(_DWORD *)(a1 + 8) + 24)) > 0 )
    {
      result = v21;
      goto LABEL_7;
    }
    return 0;
  }
  v14 = v6[10];
  if ( !v14 )
  {
    v19 = (void *)sub_D9AF8(*(_DWORD *)(a1 + 8));
    v20 = CRYPTO_malloc(v19);
    v6[10] = v20;
    v14 = (int)v20;
    if ( !v20 )
    {
      sub_D0048(4, 167, 65, (int)"crypto/rsa/rsa_pmeth.c", 107);
      return -1;
    }
  }
  v15 = sub_F7F20(a5, a4, v14, *(_DWORD *)(*(_DWORD *)(a1 + 8) + 24));
  if ( v15 <= 0 )
    return 0;
  v16 = v15 - 1;
  v17 = *(unsigned __int8 *)(v6[10] + v15 - 1);
  v18 = sub_D8C70(v6[6]);
  if ( v17 != sub_FBCAC(v18) )
  {
    sub_D0048(4, 141, 100, (int)"crypto/rsa/rsa_pmeth.c", 210);
    return 0;
  }
  if ( v16 != sub_D8C78(v6[6]) )
  {
    sub_D0048(4, 141, 143, (int)"crypto/rsa/rsa_pmeth.c", 215);
    return 0;
  }
  if ( a2 )
    memcpy(a2, (const void *)v6[10], v16);
  result = v16;
LABEL_8:
  *a3 = result;
  return 1;
}

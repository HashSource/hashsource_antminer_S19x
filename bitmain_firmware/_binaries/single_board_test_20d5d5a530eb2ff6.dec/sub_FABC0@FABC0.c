int __fastcall sub_FABC0(int a1, int a2)
{
  _DWORD *v4; // r0
  int *v5; // r3
  _DWORD *v6; // r4
  int v7; // r0
  int v8; // r1
  int v9; // r5
  int v10; // r0
  int v11; // r0
  int v12; // r3
  int v13; // r1
  int v14; // r2
  void *v15; // r0

  v4 = sub_E0740((void *)0x34);
  if ( !v4 )
    return 0;
  v5 = *(int **)a1;
  *v4 = 2048;
  v6 = v4;
  v7 = *v5;
  v6[9] = -1;
  v6[2] = 2;
  v6[8] = -2;
  v8 = v7 == 912 ? 6 : 1;
  v6[5] = v8;
  *(_DWORD *)(a1 + 20) = v6;
  v9 = *(_DWORD *)(a2 + 20);
  *(_DWORD *)(a1 + 32) = v6 + 3;
  *(_DWORD *)(a1 + 36) = 2;
  v10 = *(_DWORD *)(v9 + 4);
  *v6 = *(_DWORD *)v9;
  if ( v10 )
  {
    v11 = sub_B8A2C(v10);
    v6[1] = v11;
    if ( !v11 )
      return 0;
  }
  v12 = *(_DWORD *)(v9 + 44);
  v13 = *(_DWORD *)(v9 + 24);
  v14 = *(_DWORD *)(v9 + 28);
  v6[5] = *(_DWORD *)(v9 + 20);
  v6[6] = v13;
  v6[7] = v14;
  if ( v12 )
  {
    CRYPTO_free((void *)v6[11]);
    v15 = sub_E9E68(*(const void **)(v9 + 44), *(void **)(v9 + 48));
    v6[11] = v15;
    if ( v15 )
    {
      v6[12] = *(_DWORD *)(v9 + 48);
      return 1;
    }
    return 0;
  }
  return 1;
}

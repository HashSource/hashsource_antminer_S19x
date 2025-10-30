_DWORD *__fastcall sub_10A658(int *a1, int *a2, int *a3)
{
  int v6; // r5
  int v7; // r4
  int v8; // r5
  signed int v9; // r4
  void *v10; // r5
  _DWORD *v11; // r0
  _DWORD *v12; // r4
  _BYTE v14[20]; // [sp+Ch] [bp-14h] BYREF

  v6 = sub_B85BC(a3);
  if ( a3 != a1 && sub_B82F8(a1, a3) >= 0 || a3 != a2 && sub_B82F8(a2, a3) >= 0 )
    return 0;
  v7 = v6 + 14;
  v8 = v6 + 7;
  if ( v8 >= 0 )
    v7 = v8;
  v9 = v7 >> 3;
  v10 = CRYPTO_malloc((void *)(2 * v9));
  if ( v10
    && sub_B8CD4(a1, (int)v10, v9) >= 0
    && sub_B8CD4(a2, (int)v10 + v9, v9) >= 0
    && (v11 = sub_D93D8(), sub_D18F0((int)v10, 2 * v9, (int)v14, 0, v11, 0)) )
  {
    v12 = sub_B8AEC(v14, 20, 0);
  }
  else
  {
    v12 = 0;
  }
  CRYPTO_free(v10);
  return v12;
}

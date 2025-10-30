int __fastcall sub_246C8(unsigned int *a1, int a2, __int16 a3)
{
  unsigned int v4; // r4
  unsigned int v7; // r5
  int v8; // r4
  int result; // r0
  unsigned int v10; // r12
  unsigned int v11; // r2

  v4 = *a1;
  v7 = sub_1FBB8(*a1);
  v8 = sub_64B04(v4, 8 * (v7 + 2), 0, 0);
  *a1 = v8;
  result = sub_64B04(0, a2, 0, 0);
  v10 = v8 + 8 * v7;
  v11 = v8 + 8 * v7 + 8;
  *(_WORD *)v10 = v7;
  *(_WORD *)(v10 + 2) = a3;
  *(_DWORD *)(v10 + 4) = result;
  *(_WORD *)v11 = 0;
  *(_DWORD *)(v11 + 4) = 0;
  *(_WORD *)(v11 + 2) = 128;
  return result;
}

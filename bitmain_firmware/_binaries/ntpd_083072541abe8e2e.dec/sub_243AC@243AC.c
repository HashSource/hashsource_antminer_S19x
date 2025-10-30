int __fastcall sub_243AC(unsigned int *a1, int a2, __int16 a3)
{
  unsigned int v5; // r4
  unsigned int v7; // r5
  int v8; // r4
  int result; // r0
  unsigned int v10; // r2
  _DWORD *v11; // r2

  v5 = *a1;
  v7 = sub_1F95C(*a1);
  v8 = sub_63BA4(v5, 8 * (v7 + 2), 0, 0);
  *a1 = v8;
  result = sub_63BA4(0, a2, 0, 0);
  *(_WORD *)(v8 + 8 * v7) = v7;
  v10 = v8 + 8 * v7;
  *(_DWORD *)(v10 + 4) = result;
  *(_WORD *)(v10 + 2) = a3;
  v11 = (_DWORD *)(v8 + 8 * v7 + 8);
  *v11 = 0x800000;
  v11[1] = 0;
  return result;
}

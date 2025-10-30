int *__fastcall sub_26D768(int a1, int a2, int a3, int a4, int a5, int a6, int a7)
{
  int v8; // r3
  signed int v9; // r10
  unsigned int v10; // r6
  int *v11; // r8
  int v13; // [sp+Ch] [bp-14h]

  v8 = *(_DWORD *)(*(_DWORD *)(a1 + 24) + 24) + 24 * a2;
  v9 = *(_DWORD *)v8;
  v10 = *(_DWORD *)(v8 + 8);
  v11 = (int *)sub_26BB80(*(_DWORD **)(v8 + 12));
  sub_26D694(v11, 0, v9, v9 >> 31, v10 >> 4, a3, v13, a5, a6, a7);
  return v11;
}

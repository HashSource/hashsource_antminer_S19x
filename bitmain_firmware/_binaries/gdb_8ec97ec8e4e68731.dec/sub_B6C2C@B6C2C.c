int __fastcall sub_B6C2C(int a1, int a2)
{
  int v3; // r3
  int *v5; // r12
  int v6; // lr
  int v7; // r2
  int v8; // r3
  int v9; // r12

  v3 = *(_DWORD *)(a2 + 4);
  v5 = *(int **)a1;
  v6 = *(_DWORD *)(a1 + 4);
  v7 = v3 + 1;
  v8 = a2 + 8 * v3;
  v9 = *v5;
  *(_DWORD *)(v8 + 12) = v6;
  *(_DWORD *)(v8 + 8) = v9;
  *(_DWORD *)(a2 + 4) = v7;
  return 0;
}

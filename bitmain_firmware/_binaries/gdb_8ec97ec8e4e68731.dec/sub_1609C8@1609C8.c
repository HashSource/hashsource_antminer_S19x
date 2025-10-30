int __fastcall sub_1609C8(int a1, int a2)
{
  int v4; // r4
  int v5; // r0
  int *v6; // r6
  int result; // r0
  _DWORD **v8; // r3
  _DWORD *v9; // r3

  v4 = ((int (__fastcall *)(int, int))loc_16EC88)(a1, dword_487764);
  v5 = a1;
  v6 = *(int **)(v4 + 4);
  result = sub_163938(v5, 8u);
  v8 = *(_DWORD ***)(v4 + 4);
  *v6 = result;
  v9 = *v8;
  *v9 = a2;
  *(_DWORD *)(v4 + 4) = v9 + 1;
  return result;
}

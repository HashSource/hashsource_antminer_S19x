int __fastcall sub_2C84D8(int a1, int a2, int *a3)
{
  int v6; // r0
  int v7; // r3
  int v8; // r0
  int v9; // r3
  int result; // r0

  v6 = (*(int (__fastcall **)(int))(*(_DWORD *)(a1 + 4) + 76))(a2);
  v7 = *(_DWORD *)(a1 + 4);
  *a3 = v6;
  v8 = (*(int (__fastcall **)(int))(v7 + 76))(a2 + 4);
  v9 = *(_DWORD *)(a1 + 4);
  a3[1] = v8;
  result = (*(int (__fastcall **)(int))(v9 + 80))(a2 + 8);
  a3[2] = result;
  return result;
}

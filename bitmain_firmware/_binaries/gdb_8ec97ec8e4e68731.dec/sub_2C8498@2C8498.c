int __fastcall sub_2C8498(int a1, int a2, int *a3)
{
  int v6; // r0
  int v7; // r3
  int result; // r0

  v6 = (*(int (__fastcall **)(int))(*(_DWORD *)(a1 + 4) + 76))(a2);
  v7 = *(_DWORD *)(a1 + 4);
  *a3 = v6;
  result = (*(int (__fastcall **)(int))(v7 + 76))(a2 + 4);
  a3[1] = result;
  a3[2] = 0;
  return result;
}

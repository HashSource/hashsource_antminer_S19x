int __fastcall sub_2CD4E0(int a1, int a2, int a3)
{
  __int16 v6; // r0
  int v7; // r3
  __int16 v8; // r0
  int v9; // r3
  int v10; // r0
  int v11; // r3
  int v12; // r0
  int v13; // r3
  int result; // r0

  v6 = (*(int (__fastcall **)(int))(*(_DWORD *)(a1 + 4) + 88))(a2);
  v7 = *(_DWORD *)(a1 + 4);
  *(_WORD *)a3 = v6;
  v8 = (*(int (__fastcall **)(int))(v7 + 88))(a2 + 2);
  v9 = *(_DWORD *)(a1 + 4);
  *(_WORD *)(a3 + 2) = v8;
  v10 = (*(int (__fastcall **)(int))(v9 + 76))(a2 + 4);
  v11 = *(_DWORD *)(a1 + 4);
  *(_DWORD *)(a3 + 4) = v10;
  v12 = (*(int (__fastcall **)(int))(v11 + 76))(a2 + 8);
  v13 = *(_DWORD *)(a1 + 4);
  *(_DWORD *)(a3 + 8) = v12;
  result = (*(int (__fastcall **)(int))(v13 + 76))(a2 + 12);
  *(_DWORD *)(a3 + 12) = result;
  return result;
}

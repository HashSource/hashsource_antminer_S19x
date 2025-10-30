int __fastcall sub_2CD328(int a1, int a2, int a3)
{
  __int16 v6; // r0
  int v7; // r3
  __int16 v8; // r0
  int v9; // r3
  __int16 v10; // r0
  int v11; // r3
  __int16 v12; // r0
  int v13; // r3
  int v14; // r0
  int v15; // r3
  int v16; // r0
  int v17; // r3
  int result; // r0

  v6 = (*(int (__fastcall **)(int))(*(_DWORD *)(a1 + 4) + 88))(a2);
  v7 = *(_DWORD *)(a1 + 4);
  *(_WORD *)a3 = v6;
  v8 = (*(int (__fastcall **)(int))(v7 + 88))(a2 + 2);
  v9 = *(_DWORD *)(a1 + 4);
  *(_WORD *)(a3 + 2) = v8;
  v10 = (*(int (__fastcall **)(int))(v9 + 88))(a2 + 4);
  v11 = *(_DWORD *)(a1 + 4);
  *(_WORD *)(a3 + 4) = v10;
  v12 = (*(int (__fastcall **)(int))(v11 + 88))(a2 + 6);
  v13 = *(_DWORD *)(a1 + 4);
  *(_WORD *)(a3 + 6) = v12;
  v14 = (*(int (__fastcall **)(int))(v13 + 76))(a2 + 8);
  v15 = *(_DWORD *)(a1 + 4);
  *(_DWORD *)(a3 + 8) = v14;
  v16 = (*(int (__fastcall **)(int))(v15 + 76))(a2 + 12);
  v17 = *(_DWORD *)(a1 + 4);
  *(_DWORD *)(a3 + 12) = v16;
  result = (*(int (__fastcall **)(int))(v17 + 76))(a2 + 16);
  *(_DWORD *)(a3 + 16) = result;
  return result;
}

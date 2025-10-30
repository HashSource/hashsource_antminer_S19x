int __fastcall sub_2C98F8(int a1, int a2, int *a3)
{
  int v3; // r3
  int v7; // r8
  char v8; // r7
  int v9; // r0
  int v10; // r3
  int v11; // r0
  int v12; // r3
  int v13; // r3
  int v14; // r0
  int v15; // r0
  int v16; // r3
  int v17; // r0
  int v18; // r3
  int v19; // r0
  int v20; // r3
  int result; // r0
  int v22; // r0
  int v23; // r3

  v3 = *(_DWORD *)(a1 + 4);
  v7 = a2 + 12;
  v8 = *(_BYTE *)(*(_DWORD *)(v3 + 444) + 465);
  v9 = (*(int (__fastcall **)(int))(v3 + 76))(a2);
  v10 = *(_DWORD *)(a1 + 4);
  *a3 = v9;
  v11 = (*(int (__fastcall **)(int))(v10 + 76))(a2 + 24);
  v12 = *(_DWORD *)(a1 + 4);
  a3[1] = v11;
  a3[2] = (*(int (__fastcall **)(int))(v12 + 76))(a2 + 4);
  v13 = *(_DWORD *)(a1 + 4);
  v14 = a2 + 8;
  if ( (v8 & 1) != 0 )
  {
    v22 = (*(int (__fastcall **)(int))(v13 + 80))(v14);
    v23 = *(_DWORD *)(a1 + 4);
    a3[3] = v22;
    a3[4] = (*(int (__fastcall **)(int))(v23 + 80))(v7);
  }
  else
  {
    v15 = (*(int (__fastcall **)(int))(v13 + 76))(v14);
    v16 = *(_DWORD *)(a1 + 4);
    a3[3] = v15;
    a3[4] = (*(int (__fastcall **)(int))(v16 + 76))(v7);
  }
  v17 = (*(int (__fastcall **)(int))(*(_DWORD *)(a1 + 4) + 76))(a2 + 16);
  v18 = *(_DWORD *)(a1 + 4);
  a3[5] = v17;
  v19 = (*(int (__fastcall **)(int))(v18 + 76))(a2 + 20);
  v20 = *(_DWORD *)(a1 + 4);
  a3[6] = v19;
  result = (*(int (__fastcall **)(int))(v20 + 76))(a2 + 28);
  a3[7] = result;
  return result;
}

int __fastcall sub_2C9148(int *a1, int a2, int *a3)
{
  char v6; // r7
  int v7; // r0
  int v8; // r3
  int v9; // r0
  int v10; // r3
  int v11; // r0
  int v12; // r3
  int v13; // r0
  int v14; // r0
  int v15; // r3
  int v16; // r0
  int v17; // r3
  int v18; // r0
  int v19; // r3
  int v20; // r0
  int v21; // r3
  int v22; // r0
  int v23; // r3
  int v24; // r0
  int v25; // r3
  int result; // r0

  v6 = *(_BYTE *)(*(_DWORD *)(*a1 + 444) + 465);
  v7 = (*(int (__fastcall **)(int))(*a1 + 76))(a2);
  v8 = *a1;
  *a3 = v7;
  v9 = (*(int (__fastcall **)(int))(v8 + 76))(a2 + 4);
  v10 = *a1;
  a3[1] = v9;
  v11 = (*(int (__fastcall **)(int))(v10 + 76))(a2 + 8);
  v12 = *a1;
  a3[2] = v11;
  v13 = a2 + 12;
  if ( (v6 & 1) != 0 )
    v14 = (*(int (__fastcall **)(int))(v12 + 80))(v13);
  else
    v14 = (*(int (__fastcall **)(int))(v12 + 76))(v13);
  v15 = *a1;
  a3[3] = v14;
  v16 = (*(int (__fastcall **)(int))(v15 + 76))(a2 + 16);
  v17 = *a1;
  a3[4] = v16;
  a3[5] = 0;
  v18 = (*(int (__fastcall **)(int))(v17 + 76))(a2 + 20);
  v19 = *a1;
  a3[6] = v18;
  v20 = (*(int (__fastcall **)(int))(v19 + 76))(a2 + 24);
  v21 = *a1;
  a3[7] = v20;
  v22 = (*(int (__fastcall **)(int))(v21 + 76))(a2 + 28);
  v23 = *a1;
  a3[8] = v22;
  v24 = (*(int (__fastcall **)(int))(v23 + 76))(a2 + 32);
  v25 = *a1;
  a3[9] = v24;
  result = (*(int (__fastcall **)(int))(v25 + 76))(a2 + 36);
  a3[11] = 0;
  a3[10] = result;
  a3[12] = 0;
  return result;
}

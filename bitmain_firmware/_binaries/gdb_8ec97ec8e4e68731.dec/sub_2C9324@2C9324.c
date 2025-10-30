int __fastcall sub_2C9324(int *a1, int *a2, int a3)
{
  int v3; // lr
  int v7; // r0
  int v8; // r2
  int v9; // r3
  char v10; // r7
  __int16 v11; // r0
  int v12; // r3
  __int16 v13; // r0
  int v14; // r3
  int v15; // r0
  int v16; // r3
  _DWORD *v17; // r0
  int v18; // r0
  int v19; // r3
  int v20; // r0
  int v21; // r3
  int v22; // r0
  int v23; // r3
  int v24; // r0
  int v25; // r3
  int v26; // r0
  int v27; // r3
  int v28; // r0
  int v29; // r3
  int v30; // r0
  int v31; // r3
  int v32; // r0
  int v33; // r3
  int v34; // r0
  int v35; // r3
  int result; // r0

  v3 = *a1;
  v7 = *a2;
  v8 = a2[2];
  v9 = a2[3];
  v10 = *(_BYTE *)(*(_DWORD *)(v3 + 444) + 465);
  *(_DWORD *)(a3 + 4) = a2[1];
  *(_DWORD *)(a3 + 8) = v8;
  *(_DWORD *)a3 = v7;
  *(_DWORD *)(a3 + 12) = v9;
  v11 = (*(int (__fastcall **)(int *))(*a1 + 88))(a2 + 4);
  v12 = *a1;
  *(_WORD *)(a3 + 36) = v11;
  v13 = (*(int (__fastcall **)(int))(v12 + 88))((int)a2 + 18);
  v14 = *a1;
  *(_WORD *)(a3 + 38) = v13;
  v15 = (*(int (__fastcall **)(int *))(v14 + 76))(a2 + 5);
  v16 = *a1;
  *(_DWORD *)(a3 + 28) = v15;
  v17 = a2 + 6;
  if ( (v10 & 1) != 0 )
    v18 = (*(int (__fastcall **)(_DWORD *))(v16 + 80))(v17);
  else
    v18 = (*(int (__fastcall **)(_DWORD *))(v16 + 76))(v17);
  v19 = *a1;
  *(_DWORD *)(a3 + 16) = v18;
  v20 = (*(int (__fastcall **)(int *))(v19 + 76))(a2 + 7);
  v21 = *a1;
  *(_DWORD *)(a3 + 20) = v20;
  v22 = (*(int (__fastcall **)(int *))(v21 + 76))(a2 + 8);
  v23 = *a1;
  *(_DWORD *)(a3 + 24) = v22;
  v24 = (*(int (__fastcall **)(int *))(v23 + 76))(a2 + 9);
  v25 = *a1;
  *(_DWORD *)(a3 + 32) = v24;
  v26 = (*(int (__fastcall **)(int *))(v25 + 88))(a2 + 10);
  v27 = *a1;
  *(_DWORD *)(a3 + 40) = v26;
  v28 = (*(int (__fastcall **)(int))(v27 + 88))((int)a2 + 42);
  v29 = *a1;
  *(_DWORD *)(a3 + 44) = v28;
  v30 = (*(int (__fastcall **)(int *))(v29 + 88))(a2 + 11);
  v31 = *a1;
  *(_DWORD *)(a3 + 48) = v30;
  v32 = (*(int (__fastcall **)(int))(v31 + 88))((int)a2 + 46);
  v33 = *a1;
  *(_DWORD *)(a3 + 52) = v32;
  v34 = (*(int (__fastcall **)(int *))(v33 + 88))(a2 + 12);
  v35 = *a1;
  *(_DWORD *)(a3 + 56) = v34;
  result = (*(int (__fastcall **)(int))(v35 + 88))((int)a2 + 50);
  *(_DWORD *)(a3 + 60) = result;
  return result;
}

int __fastcall sub_2C946C(int a1, int *a2, _DWORD *a3)
{
  int v7; // r2
  int v8; // r0
  int v9; // r3
  int v10; // r1
  unsigned int v11; // r0
  unsigned int v12; // r0
  unsigned int v13; // r0

  v7 = a2[2];
  v8 = *a2;
  v9 = a2[3];
  v10 = a2[1];
  *a3 = v8;
  a3[1] = v10;
  a3[2] = v7;
  a3[3] = v9;
  (*(void (__fastcall **)(_DWORD, _DWORD *))(*(_DWORD *)a1 + 96))(*((unsigned __int16 *)a2 + 18), a3 + 4);
  (*(void (__fastcall **)(_DWORD, int))(*(_DWORD *)a1 + 96))(*((unsigned __int16 *)a2 + 19), (int)a3 + 18);
  (*(void (__fastcall **)(int, _DWORD *))(*(_DWORD *)a1 + 84))(a2[7], a3 + 5);
  (*(void (__fastcall **)(int, _DWORD *))(*(_DWORD *)a1 + 84))(a2[4], a3 + 6);
  (*(void (__fastcall **)(int, _DWORD *))(*(_DWORD *)a1 + 84))(a2[5], a3 + 7);
  (*(void (__fastcall **)(int, _DWORD *))(*(_DWORD *)a1 + 84))(a2[6], a3 + 8);
  (*(void (__fastcall **)(int, _DWORD *))(*(_DWORD *)a1 + 84))(a2[8], a3 + 9);
  (*(void (__fastcall **)(int, _DWORD *))(*(_DWORD *)a1 + 96))(a2[10], a3 + 10);
  (*(void (__fastcall **)(int, int))(*(_DWORD *)a1 + 96))(a2[11], (int)a3 + 42);
  v11 = a2[12];
  if ( v11 >= 0xFFFF )
    v11 = 0xFFFF;
  (*(void (__fastcall **)(unsigned int, _DWORD *))(*(_DWORD *)a1 + 96))(v11, a3 + 11);
  (*(void (__fastcall **)(int, int))(*(_DWORD *)a1 + 96))(a2[13], (int)a3 + 46);
  v12 = a2[14];
  if ( v12 >= 0xFF00 )
    v12 = 0;
  (*(void (__fastcall **)(unsigned int, _DWORD *))(*(_DWORD *)a1 + 96))(v12, a3 + 12);
  v13 = a2[15];
  if ( v13 >= 0xFF00 )
    v13 = 0xFFFF;
  return (*(int (__fastcall **)(unsigned int, int))(*(_DWORD *)a1 + 96))(v13, (int)a3 + 50);
}

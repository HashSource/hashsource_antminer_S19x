int __fastcall sub_2C83C0(int a1, int a2, int a3, int a4)
{
  int v5; // r1
  char v9; // r7
  int v10; // r0
  int v11; // r3
  int v12; // r0
  int v13; // r0
  int v14; // r3
  unsigned int v15; // r0

  v5 = *(_DWORD *)(a1 + 4);
  v9 = *(_BYTE *)(*(_DWORD *)(v5 + 444) + 465);
  v10 = (*(int (__fastcall **)(int))(v5 + 76))(a2);
  v11 = *(_DWORD *)(a1 + 4);
  *(_DWORD *)(a4 + 8) = v10;
  v12 = a2 + 4;
  if ( (v9 & 1) != 0 )
    v13 = (*(int (__fastcall **)(int))(v11 + 80))(v12);
  else
    v13 = (*(int (__fastcall **)(int))(v11 + 76))(v12);
  v14 = *(_DWORD *)(a1 + 4);
  *(_DWORD *)a4 = v13;
  *(_DWORD *)(a4 + 4) = (*(int (__fastcall **)(int))(v14 + 76))(a2 + 8);
  *(_BYTE *)(a4 + 12) = *(_BYTE *)(a2 + 12);
  *(_BYTE *)(a4 + 13) = *(_BYTE *)(a2 + 13);
  v15 = (*(int (__fastcall **)(int))(*(_DWORD *)(a1 + 4) + 88))(a2 + 14);
  *(_DWORD *)(a4 + 16) = v15;
  if ( v15 != 0xFFFF )
  {
    if ( v15 >= 0xFF00 )
      *(_DWORD *)(a4 + 16) = v15 - 0x10000;
    goto LABEL_7;
  }
  if ( a3 )
  {
    *(_DWORD *)(a4 + 16) = (*(int (__fastcall **)(int))(*(_DWORD *)(a1 + 4) + 76))(a3);
LABEL_7:
    *(_BYTE *)(a4 + 14) = 0;
    return 1;
  }
  return 0;
}

int __fastcall sub_2A80EC(int a1, int a2, int a3, int *a4)
{
  _DWORD *v4; // r12
  int v10; // r9
  int (__fastcall *v11)(int); // r3
  int v12; // r4
  int v13; // r10
  int v14; // r0

  v4 = *(_DWORD **)(a1 + 4);
  if ( v4[1] != 5 || (*(_DWORD *)(*(_DWORD *)(a3 + 140) + 8) & 0x800) == 0 )
    return 0;
  v10 = a2 + 8;
  v11 = (int (__fastcall *)(int))v4[10];
  if ( *(_BYTE *)(*(_DWORD *)(v4[111] + 392) + 12) == 1 )
  {
    v12 = v11(a2);
    v13 = (*(int (__fastcall **)(int))(*(_DWORD *)(a1 + 4) + 40))(a2 + 4);
    v14 = (*(int (__fastcall **)(int))(*(_DWORD *)(a1 + 4) + 40))(v10);
  }
  else
  {
    v12 = v11(a2);
    v13 = (*(int (__fastcall **)(int))(*(_DWORD *)(a1 + 4) + 28))(v10);
    v14 = (*(int (__fastcall **)(int))(*(_DWORD *)(a1 + 4) + 28))(a2 + 16);
  }
  if ( v12 != 1 || v14 != 1 << *(_DWORD *)(a3 + 64) )
    return 0;
  *a4 = v13;
  return 1;
}

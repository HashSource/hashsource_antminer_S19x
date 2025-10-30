int __fastcall sub_2C99E8(int a1, _DWORD *a2, int a3)
{
  int v3; // r3
  int v7; // r2
  void (__fastcall *v8)(_DWORD, int); // r3
  int v9; // r7

  v3 = *(_DWORD *)(a1 + 4);
  v7 = *(_DWORD *)(v3 + 444);
  v8 = *(void (__fastcall **)(_DWORD, int))(v3 + 84);
  if ( (*(_BYTE *)(v7 + 466) & 0x40) != 0 )
    v9 = 0;
  else
    v9 = a2[4];
  v8(*a2, a3);
  (*(void (__fastcall **)(_DWORD, int))(*(_DWORD *)(a1 + 4) + 84))(a2[2], a3 + 4);
  (*(void (__fastcall **)(_DWORD, int))(*(_DWORD *)(a1 + 4) + 84))(a2[3], a3 + 8);
  (*(void (__fastcall **)(int, int))(*(_DWORD *)(a1 + 4) + 84))(v9, a3 + 12);
  (*(void (__fastcall **)(_DWORD, int))(*(_DWORD *)(a1 + 4) + 84))(a2[5], a3 + 16);
  (*(void (__fastcall **)(_DWORD, int))(*(_DWORD *)(a1 + 4) + 84))(a2[6], a3 + 20);
  (*(void (__fastcall **)(_DWORD, int))(*(_DWORD *)(a1 + 4) + 84))(a2[1], a3 + 24);
  return (*(int (__fastcall **)(_DWORD, int))(*(_DWORD *)(a1 + 4) + 84))(a2[7], a3 + 28);
}

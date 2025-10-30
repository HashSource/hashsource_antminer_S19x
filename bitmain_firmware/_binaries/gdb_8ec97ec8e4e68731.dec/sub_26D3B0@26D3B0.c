_BYTE *__fastcall sub_26D3B0(int a1, int a2, int *a3)
{
  int v4; // r8
  int v6; // r7
  _BYTE *v7; // r4
  int v8; // r0

  v4 = a3[16];
  v6 = a3[17];
  v7 = sub_26C4E0(a3);
  *((_DWORD *)v7 + 16) = ((int (__fastcall *)(int, int, int, _DWORD))loc_170478)(a1, a2, v4, 0);
  v8 = ((int (__fastcall *)(int, int, int, _DWORD))loc_170478)(a1, a2, v6, 0);
  sub_26D370((int)v7, v8);
  return v7;
}

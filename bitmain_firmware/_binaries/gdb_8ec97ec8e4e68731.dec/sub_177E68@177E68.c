int __fastcall sub_177E68(int a1, int a2, int a3)
{
  int v3; // r3
  int v7; // r0

  v3 = *(_DWORD *)(a1 + 24);
  if ( (*(_BYTE *)(v3 + 2) & 0x10) != 0 )
    sub_1B7250(*(_DWORD *)(v3 + 16));
  v7 = ((int (*)(void))loc_16EC88)();
  return ((int (__fastcall *)(int, int, int, _DWORD, int))loc_177CE0)(a1, a2, 1, *(_DWORD *)(v7 + 64), a3);
}

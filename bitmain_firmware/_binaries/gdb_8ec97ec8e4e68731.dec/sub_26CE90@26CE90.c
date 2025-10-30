int __fastcall sub_26CE90(int a1, int a2)
{
  int v4; // r2
  int v5; // r3
  int v6; // r3
  int result; // r0

  v4 = *(_DWORD *)(*(_DWORD *)(a1 + 64) + 24);
  v5 = *(_BYTE *)(v4 + 2) & 0x10;
  if ( (*(_BYTE *)(v4 + 2) & 0x10) != 0 )
    v5 = *(_DWORD *)(v4 + 16);
  if ( v5 == a2 )
    *(_DWORD *)(a1 + 64) = ((int (__fastcall *)(int))loc_176248)(a2);
  v6 = *(_DWORD *)(*(_DWORD *)(a1 + 68) + 24);
  result = *(_BYTE *)(v6 + 2) & 0x10;
  if ( (*(_BYTE *)(v6 + 2) & 0x10) != 0 )
    result = *(_DWORD *)(v6 + 16);
  if ( result == a2 )
  {
    result = ((int (*)(void))loc_176248)();
    *(_DWORD *)(a1 + 68) = result;
  }
  return result;
}

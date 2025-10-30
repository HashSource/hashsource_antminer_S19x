bool __fastcall sub_2BBA6C(int a1, int a2, int a3)
{
  int v3; // r12
  int v5; // r12

  if ( (*(_BYTE *)(a3 + 12) & 0xF) == 0xA && (*(_DWORD *)(a1 + 40) & 0x800) == 0 )
  {
    v5 = *(_DWORD *)(a2 + 48);
    if ( *(_DWORD *)(*(_DWORD *)(v5 + 4) + 4) == 5 )
      *(_BYTE *)(*(_DWORD *)(v5 + 160) + 2341) |= 0xCu;
  }
  v3 = *(_DWORD *)(a2 + 28);
  if ( *(_DWORD *)(v3 + 44) != 4 )
    return 0;
  if ( *(_DWORD *)(v3 + 420) )
    return sub_2CB5A0(a1, a2, a3) != 0;
  return 1;
}

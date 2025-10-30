int __fastcall sub_2E2EE8(int a1, int a2, int a3)
{
  int v3; // r3
  int v4; // r1
  int v5; // r3

  if ( !a1 || (*(_BYTE *)(a1 + 49) & 3u) - 1 <= 1 )
    return 1;
  if ( (*(_BYTE *)(a1 + 52) & 8) != 0 )
    return 1;
  if ( ((*(_BYTE *)(a1 + 51) & 0xA) != 0 || *(_BYTE *)(a1 + 12) != 3) && (*(_BYTE *)(a1 + 51) & 2) == 0 )
    return 0;
  if ( *(_DWORD *)(a1 + 32) == -1
    || (*(_BYTE *)a2 & 3u) <= 1
    || (*(_BYTE *)(a1 + 53) & 4) == 0
    && ((*(_BYTE *)a2 & 4) != 0
     || (*(_BYTE *)(a1 + 53) & 0x10) != 0
     || (*(_BYTE *)(a2 + 5) & 0x10) != 0 && (*(_BYTE *)(a1 + 52) & 0x10) == 0) )
  {
    return 1;
  }
  if ( (*(_BYTE *)(a1 + 49) & 3) == 0 )
    return 0;
  v3 = *(_DWORD *)(a2 + 28);
  if ( *(_DWORD *)(v3 + 40) != 1 )
    return 1;
  v4 = *(_DWORD *)(a2 + 92);
  v5 = *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(v3 + 56) + 4) + 444);
  if ( !v4 || v4 < 0 && (*(_BYTE *)(v5 + 467) & 4) == 0 )
  {
    if ( (*(int (__fastcall **)(_DWORD))(v5 + 360))(*(unsigned __int8 *)(a1 + 48)) )
      return a3;
    return 1;
  }
  return a3;
}

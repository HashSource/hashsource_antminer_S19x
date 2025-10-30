int __fastcall sub_2A81C4(int a1, int a2)
{
  int v2; // r3
  int result; // r0

  v2 = *(_DWORD *)(a1 + 4);
  if ( *(_DWORD *)(v2 + 4) != 5 )
    return 0;
  if ( a2 )
  {
    result = *(_DWORD *)(*(_DWORD *)(a2 + 140) + 8) & 0x800;
    if ( !result )
      return result;
  }
  else
  {
    result = (*(_DWORD *)(a1 + 40) >> 5) & 0x20000;
    if ( !result )
      return result;
  }
  if ( *(_BYTE *)(*(_DWORD *)(*(_DWORD *)(v2 + 444) + 392) + 12) == 1 )
    return 12;
  else
    return 24;
}

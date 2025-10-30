int __fastcall sub_82CF8(int a1)
{
  int v1; // r3
  int v2; // r3
  int v3; // r2
  int result; // r0
  bool v5; // r3

  v1 = *(_DWORD *)(a1 + 124);
  if ( !v1 )
    return -1;
  v2 = *(_DWORD *)(v1 + 528);
  if ( !v2 )
    return -1;
  v3 = *(_DWORD *)(a1 + 4);
  result = *(_DWORD *)(v2 + 52);
  if ( (*(_DWORD *)(*(_DWORD *)(v3 + 100) + 48) & 4) != 0 )
  {
    if ( result == 2313 )
      return 1028;
  }
  else
  {
    v5 = (*(_DWORD *)(v2 + 16) & 0x1C8) != 0;
    if ( result == 1285 && v5 )
      return 2313;
  }
  return result;
}

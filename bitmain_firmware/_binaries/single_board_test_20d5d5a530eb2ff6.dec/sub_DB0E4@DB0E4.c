int __fastcall sub_DB0E4(int a1, int a2)
{
  if ( a2 == -1 )
    return *(_DWORD *)(a1 + 36);
  if ( a2 < 0 || a2 > *(_DWORD *)(a1 + 36) )
    return 0;
  return *(_DWORD *)(*(_DWORD *)(a1 + 32) + 4 * a2);
}

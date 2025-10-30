int __fastcall sub_7B340(_DWORD *a1, int a2)
{
  if ( !a1 || *a1 || !a2 )
    return 0;
  if ( *(_DWORD **)(a2 + 4) == a1 + 7 )
    return 0;
  return *(_DWORD *)(a2 + 4);
}

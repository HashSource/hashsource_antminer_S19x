int __fastcall sub_116488(_DWORD *a1, _DWORD *a2, _DWORD *a3, _DWORD *a4, int a5)
{
  if ( a1 )
    *a1 = **(_DWORD **)a5;
  if ( a2 )
  {
    *a2 = *(_DWORD *)(*(_DWORD *)(a5 + 4) + 8);
    *a3 = **(_DWORD **)(a5 + 4);
  }
  if ( a4 )
    *a4 = *(_DWORD *)a5;
  return 1;
}

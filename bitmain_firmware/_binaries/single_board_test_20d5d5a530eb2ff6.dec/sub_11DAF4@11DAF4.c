int __fastcall sub_11DAF4(int a1, _DWORD *a2, _DWORD *a3)
{
  if ( *(_DWORD *)a1 )
    return 0;
  if ( a2 )
    *a2 = **(_DWORD **)(a1 + 4);
  if ( a3 )
    *a3 = *(_DWORD *)(*(_DWORD *)(a1 + 4) + 4);
  return 1;
}

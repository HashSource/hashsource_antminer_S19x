int __fastcall sub_AE64C(_DWORD *a1, int *a2, int *a3, _DWORD *a4, int a5)
{
  if ( a1 )
    *a1 = **(_DWORD **)(a5 + 4);
  if ( a2 )
  {
    *a2 = sub_AE2B4(*(_DWORD *)(a5 + 8));
    *a3 = sub_AE2A8(*(_DWORD *)(a5 + 8));
  }
  if ( a4 )
    *a4 = *(_DWORD *)(a5 + 4);
  return 1;
}

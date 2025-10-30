int __fastcall sub_A2D04(int a1, int *a2)
{
  int v3; // r0

  if ( !a1 )
    return 0;
  if ( *(_DWORD *)(a1 + 8) )
  {
    v3 = sub_864EC(*(_DWORD *)(a1 + 12));
    if ( !v3 )
      return 0;
  }
  else
  {
    v3 = 0;
  }
  if ( a2 )
    *a2 = v3;
  return 1;
}

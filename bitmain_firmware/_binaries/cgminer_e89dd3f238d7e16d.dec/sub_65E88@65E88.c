int __fastcall sub_65E88(_DWORD *a1, unsigned int a2)
{
  if ( !a1 || *a1 != 1 )
    return 0;
  if ( a2 < a1[3] )
    return *(_DWORD *)(a1[4] + 4 * a2);
  return 0;
}

int __fastcall sub_111424(int a1, int *a2)
{
  int v2; // r0

  v2 = sub_110B00(a1, a2);
  if ( *(_DWORD *)(v2 + 4) )
    return 3;
  if ( *(_DWORD *)(v2 + 8) )
    return 2;
  return 0;
}

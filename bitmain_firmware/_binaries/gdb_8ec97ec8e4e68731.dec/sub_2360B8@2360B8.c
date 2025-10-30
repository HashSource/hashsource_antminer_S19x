int __fastcall sub_2360B8(int a1, char *s)
{
  int v2; // r4
  int v3; // r6

  v2 = *(_DWORD *)(a1 + 24);
  v3 = *(_DWORD *)(a1 + 28);
  if ( v2 == v3 )
    return 0;
  while ( sub_33CAA0(v2, s) )
  {
    v2 += 48;
    if ( v3 == v2 )
      return 0;
  }
  return *(_DWORD *)(v2 + 24);
}

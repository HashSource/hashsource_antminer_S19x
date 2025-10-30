int __fastcall sub_26052C(_DWORD *a1, int a2, int a3)
{
  int v3; // r9
  int v5; // r7
  int v6; // r4
  int v7; // r5

  v3 = a2 - a3;
  if ( a2 - a3 <= 0 )
    return 0;
  v5 = 0;
  v6 = 1;
  while ( 1 )
  {
    v7 = 4 * v6++;
    if ( sub_173CD4(*(_DWORD *)(*a1 + v7), 100) <= 0 )
      break;
    if ( sub_173CD4(*(_DWORD *)(*a1 + v7), 10) <= 0 )
      v5 = 1;
    if ( v6 > v3 )
      return v5;
  }
  return 2;
}

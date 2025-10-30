int __fastcall sub_11A008(_DWORD *a1)
{
  int v2; // r4
  bool v3; // cc
  unsigned int v4; // r1

  if ( !a1 )
    return 0;
  v2 = 0;
  do
  {
    v3 = v2 < sub_10C010((int)a1);
    v4 = v2++;
    if ( !v3 )
      return 0;
  }
  while ( **(_DWORD **)(sub_10C01C(a1, v4) + 4) );
  return 1;
}

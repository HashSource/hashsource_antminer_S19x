int __fastcall sub_118DC4(int *a1, int a2, char *dest, char *a4, int a5)
{
  int v5; // r4
  bool v6; // zf
  _BOOL4 v7; // r5

  if ( a2 == 1 )
  {
    v5 = 4;
  }
  else
  {
    if ( a2 != 2 )
      return 0;
    v5 = 16;
  }
  v6 = dest == 0;
  if ( dest )
    v6 = a1 == 0;
  if ( v6 )
    return 0;
  v7 = v5 > a5;
  if ( !a4 )
    v7 = 1;
  if ( v7 || (unsigned int)*a1 > 1 || !sub_118368(a1, dest, a4, v5) )
    return 0;
  return v5;
}

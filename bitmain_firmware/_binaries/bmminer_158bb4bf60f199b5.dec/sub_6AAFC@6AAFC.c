int *__fastcall sub_6AAFC(int *a1, int a2)
{
  int *v2; // r3
  int *v3; // r12
  int i; // r2
  int *v6; // r2
  bool v7; // zf

  v2 = *(int **)(a2 + 4);
  v3 = a1 + 1;
  if ( v2 != a1 + 1 )
  {
    while ( v3 != (int *)*v2 )
      v2 = (int *)*v2;
    return v2;
  }
  for ( i = *a1; v3 != *(int **)(i + 4); i = *(_DWORD *)(i + 4) )
    ;
  if ( a2 == i )
    return 0;
  v6 = *(int **)(a2 + 8);
  if ( v3 == v6 )
    return a1 + 1;
  if ( a2 != v6[1] )
    return *(int **)(a2 + 8);
  while ( 1 )
  {
    v2 = (int *)v6[2];
    if ( v3 == v2 )
      break;
    v7 = v2[1] == (_DWORD)v6;
    v6 = (int *)v6[2];
    if ( !v7 )
      return v2;
  }
  return (int *)v6[2];
}

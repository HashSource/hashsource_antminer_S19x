int *__fastcall sub_7085C(int *a1, int a2)
{
  int *v2; // r2
  int *result; // r0
  int i; // r0
  int *v5; // r3
  bool v6; // zf

  v2 = *(int **)(a2 + 4);
  if ( v2 != a1 + 1 )
  {
    while ( a1 + 1 != (int *)*v2 )
      v2 = (int *)*v2;
    return v2;
  }
  for ( i = *a1; v2 != *(int **)(i + 4); i = *(_DWORD *)(i + 4) )
    ;
  if ( a2 != i )
  {
    v5 = *(int **)(a2 + 8);
    if ( v2 != v5 )
    {
      if ( a2 != v5[1] )
        return *(int **)(a2 + 8);
      while ( 1 )
      {
        result = (int *)v5[2];
        if ( v2 == result )
          break;
        v6 = result[1] == (_DWORD)v5;
        v5 = (int *)v5[2];
        if ( !v6 )
          return result;
      }
    }
    return v2;
  }
  return 0;
}

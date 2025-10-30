_DWORD *__fastcall sub_8FFD0(_DWORD *a1, int a2, int **a3)
{
  int *v3; // r5
  int *v5; // r6
  bool v7; // zf
  int v8; // r1
  int v9; // t1
  int v10; // r0
  int v11; // r1

  v3 = *a3;
  v5 = a3[1];
  *a1 = 0;
  a1[1] = 0;
  for ( a1[2] = 0; v5 != v3; a1[1] = v8 )
  {
    while ( 1 )
    {
      v9 = *v3++;
      v10 = sub_9033C(a2, v9);
      v11 = a1[1];
      if ( v11 != a1[2] )
        break;
      sub_91B54(a1);
      if ( v5 == v3 )
        return a1;
    }
    v7 = v11 == 0;
    v8 = v11 + 4;
    if ( !v7 )
      *(_DWORD *)(v8 - 4) = v10;
  }
  return a1;
}

double *__fastcall sub_6EF88(int a1)
{
  int v2; // r3
  void **v3; // r6
  int i; // r5
  char *v5; // r7
  int v6; // r0
  int v7; // r0
  unsigned int v9; // r3
  unsigned int j; // r5
  int v11; // r0
  void **v12; // r0

  if ( !a1 )
    return 0;
  v2 = *(_DWORD *)a1;
  if ( !*(_DWORD *)a1 )
  {
    v3 = (void **)sub_6DF5C();
    if ( v3 )
    {
      if ( !*(_DWORD *)a1 )
      {
        for ( i = sub_6BD80(a1 + 8); i; i = sub_6BE08(a1 + 8, i) )
        {
          v5 = (char *)sub_6BE20(i);
          v6 = sub_6BE30(i);
          v7 = sub_6EF88(v6);
          sub_6E894(v3, v5, v7);
          if ( *(_DWORD *)a1 )
            break;
        }
      }
      return (double *)v3;
    }
    return 0;
  }
  switch ( v2 )
  {
    case 1:
      v3 = (void **)sub_6E144();
      if ( v3 )
      {
        if ( *(_DWORD *)a1 == 1 )
        {
          v9 = *(_DWORD *)(a1 + 12);
          if ( v9 )
          {
            for ( j = 0; j < v9; ++j )
            {
              v11 = 0;
              if ( v9 > j )
                v11 = *(_DWORD *)(*(_DWORD *)(a1 + 16) + 4 * j);
              v12 = (void **)sub_6EF88(v11);
              sub_6ED4C(v3, v12);
              if ( *(_DWORD *)a1 != 1 )
                break;
              v9 = *(_DWORD *)(a1 + 12);
            }
          }
        }
        return (double *)v3;
      }
      return 0;
    case 2:
      return (double *)sub_6E2B0(*(const char **)(a1 + 8));
    case 3:
      return (double *)sub_6DC90(a1);
  }
  if ( v2 != 4 )
  {
    if ( (unsigned int)(v2 - 5) <= 2 )
      return (double *)a1;
    return 0;
  }
  return sub_6E480();
}

double *__fastcall sub_6EDF8(int a1)
{
  int v2; // r3
  void **v3; // r7
  int i; // r0
  int v6; // r0
  char *v7; // r5
  int v8; // r12
  unsigned int v9; // r3
  unsigned int j; // r5
  int v11; // r1

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
        for ( i = sub_6BD80(a1 + 8); i; i = sub_6BE08(a1 + 8, (int)(v7 - 16)) )
        {
          v6 = sub_6BE20(i);
          v7 = (char *)v6;
          if ( !v6 )
            break;
          v8 = sub_6BE30(v6 - 16);
          if ( !v8 )
            break;
          if ( *(_DWORD *)(v8 + 4) != -1 )
            ++*(_DWORD *)(v8 + 4);
          sub_6E894(v3, v7, v8);
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
              if ( j < v9 )
              {
                v11 = *(_DWORD *)(*(_DWORD *)(a1 + 16) + 4 * j);
                if ( v11 )
                {
                  if ( *(_DWORD *)(v11 + 4) != -1 )
                    ++*(_DWORD *)(v11 + 4);
                }
              }
              sub_6ED4C(v3, (void **)v11);
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

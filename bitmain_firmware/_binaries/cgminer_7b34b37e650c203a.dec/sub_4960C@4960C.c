double *__fastcall sub_4960C(int a1)
{
  _DWORD *v2; // r6
  int i; // r5
  char *v4; // r7
  int v5; // r0
  _DWORD *v6; // r0
  unsigned int v7; // r3
  unsigned int j; // r5
  int v9; // r0
  _DWORD *v10; // r0

  if ( a1 )
  {
    switch ( *(_DWORD *)a1 )
    {
      case 0:
        v2 = sub_48078();
        if ( !v2 )
          return 0;
        if ( !*(_DWORD *)a1 )
        {
          for ( i = sub_45CEC(a1 + 8); i; i = sub_45D64(a1 + 8, i) )
          {
            v4 = (char *)sub_45D7C(i);
            v5 = sub_45D84(i);
            v6 = (_DWORD *)sub_4960C(v5);
            sub_48CF4(v2, v4, v6);
            if ( *(_DWORD *)a1 )
              break;
          }
        }
        return (double *)v2;
      case 1:
        v2 = sub_48408();
        if ( !v2 )
          return 0;
        if ( *(_DWORD *)a1 == 1 )
        {
          v7 = *(_DWORD *)(a1 + 12);
          if ( v7 )
          {
            for ( j = 0; j < v7; ++j )
            {
              v9 = 0;
              if ( v7 > j )
                v9 = *(_DWORD *)(*(_DWORD *)(a1 + 16) + 4 * j);
              v10 = (_DWORD *)sub_4960C(v9);
              sub_4935C(v2, v10);
              if ( *(_DWORD *)a1 != 1 )
                break;
              v7 = *(_DWORD *)(a1 + 12);
            }
          }
        }
        return (double *)v2;
      case 2:
        return (double *)sub_4800C(*(_BYTE **)(a1 + 8), *(_DWORD *)(a1 + 12), 0);
      case 3:
        return (double *)sub_47F30(a1);
      case 4:
        return sub_488DC();
      case 5:
      case 6:
      case 7:
        return (double *)a1;
      default:
        return 0;
    }
  }
  return 0;
}

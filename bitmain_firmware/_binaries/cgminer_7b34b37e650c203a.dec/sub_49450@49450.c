double *__fastcall sub_49450(int a1)
{
  _DWORD *v2; // r7
  int i; // r0
  unsigned int v4; // r1
  int v5; // r0
  char *v6; // r5
  _DWORD *v7; // r0
  unsigned int *v8; // r3
  unsigned int v9; // r3
  unsigned int j; // r5
  _DWORD *v11; // r1
  unsigned int *v12; // r2
  unsigned int v13; // r3

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
          for ( i = sub_45CEC(a1 + 8); i; i = sub_45D64(a1 + 8, (int)(v6 - 16)) )
          {
            v5 = sub_45D7C(i);
            v6 = (char *)v5;
            if ( !v5 )
              break;
            v7 = (_DWORD *)sub_45D84(v5 - 16);
            v8 = v7 + 1;
            if ( !v7 )
              break;
            if ( v7[1] != -1 )
            {
              do
                v4 = __ldrex(v8);
              while ( __strex(v4 + 1, v8) );
              __dmb(0xBu);
            }
            sub_48CF4(v2, v6, v7);
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
          v9 = *(_DWORD *)(a1 + 12);
          if ( v9 )
          {
            for ( j = 0; j < v9; ++j )
            {
              v11 = 0;
              if ( v9 > j )
              {
                v11 = *(_DWORD **)(*(_DWORD *)(a1 + 16) + 4 * j);
                v12 = v11 + 1;
                if ( v11 )
                {
                  if ( v11[1] != -1 )
                  {
                    do
                      v13 = __ldrex(v12);
                    while ( __strex(v13 + 1, v12) );
                    __dmb(0xBu);
                  }
                }
              }
              sub_4935C(v2, v11);
              if ( *(_DWORD *)a1 != 1 )
                break;
              v9 = *(_DWORD *)(a1 + 12);
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

int *__fastcall sub_14A94(double a1)
{
  _DWORD *v1; // r4
  int *v2; // r6
  int *result; // r0
  int *v4; // r7
  int v5; // r0
  char *i; // r5
  _DWORD *v7; // r0
  unsigned int *v8; // r3
  unsigned int v9; // r1
  int v10; // r0
  unsigned int v11; // r3
  unsigned int j; // r5
  int *v13; // r1
  unsigned int *v14; // r2
  unsigned int v15; // r3

  v1 = (_DWORD *)LODWORD(a1);
  if ( !LODWORD(a1) )
    return v1;
  switch ( *(_DWORD *)LODWORD(a1) )
  {
    case 0:
      v4 = sub_13DEC();
      if ( v4 )
      {
        v5 = sub_13E80(v1);
        for ( i = (char *)sub_13EBC(v5); i; i = (char *)sub_13EBC(v10) )
        {
          v7 = (_DWORD *)sub_13EC4((int)(i - 16));
          v8 = v7 + 1;
          if ( !v7 )
            break;
          if ( v7[1] != -1 )
          {
            do
              v9 = __ldrex(v8);
            while ( __strex(v9 + 1, v8) );
            __dmb(0xFu);
          }
          sub_144B0(v4, i, v7);
          v10 = sub_13EA8(v1, (int)(i - 16));
        }
      }
      result = v4;
      break;
    case 1:
      v2 = sub_13ED4();
      if ( v2 )
      {
        if ( *v1 == 1 )
        {
          v11 = v1[3];
          if ( v11 )
          {
            for ( j = 0; j < v11; ++j )
            {
              v13 = 0;
              if ( j < v11 )
              {
                v13 = *(int **)(v1[4] + 4 * j);
                v14 = (unsigned int *)(v13 + 1);
                if ( v13 )
                {
                  if ( v13[1] != -1 )
                  {
                    do
                      v15 = __ldrex(v14);
                    while ( __strex(v15 + 1, v14) );
                    __dmb(0xFu);
                  }
                }
              }
              sub_1483C(v2, v13);
              if ( *v1 != 1 )
                break;
              v11 = v1[3];
            }
          }
        }
      }
      return v2;
    case 2:
      result = sub_13FC8(*(_BYTE **)(LODWORD(a1) + 8), *(_DWORD *)(LODWORD(a1) + 12));
      break;
    case 3:
      result = (int *)sub_14150(*(_QWORD *)(LODWORD(a1) + 8));
      break;
    case 4:
      result = (int *)sub_1419C(a1);
      break;
    case 5:
    case 6:
    case 7:
      return v1;
    default:
      result = 0;
      break;
  }
  return result;
}

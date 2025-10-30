int __fastcall sub_2142D0(int *a1)
{
  int result; // r0
  int v3; // r1
  int v4; // r2
  int v5; // r7
  int v6; // r0
  _DWORD *v7; // r8
  int *v8; // r1
  int v9; // r6
  int *v10; // r9
  int *i; // r2

  if ( !a1 )
    return 0;
  if ( dword_489690 )
  {
    result = sub_2117A4(a1);
    if ( !result )
      return result;
    if ( v4 == 1 )
      goto LABEL_10;
    if ( v4 == 2 )
    {
      v5 = sub_1B7250(*(_DWORD *)(v3 + 4));
      if ( ((int (*)(void))loc_16C2A8)() )
      {
        if ( dword_4896D8 )
        {
          v7 = *(_DWORD **)(dword_487D2C + 36);
          if ( v7 )
          {
            v8 = (int *)v7[43];
            v9 = dword_489690;
            v10 = (int *)v7[42];
            while ( 1 )
            {
              for ( i = v10; i < v8; i += 3 )
              {
                if ( *i && v9 )
                {
                  if ( sub_2117A4(i) )
                    i[2] = -1;
                }
              }
              if ( v8 == i )
              {
                v7 = (_DWORD *)*v7;
                if ( !v7 )
                  break;
                i = (int *)v7[43];
                v10 = (int *)v7[42];
              }
              else if ( (int *)v7[43] != i )
              {
                break;
              }
              v8 = i;
            }
          }
          dword_4896D8 = 0;
        }
        v6 = a1[2];
        if ( v6 != -1 )
          return v6 == 1;
        ((void (__fastcall *)(int, int *))loc_16C2F4)(v5, a1);
      }
LABEL_10:
      v6 = a1[2];
      return v6 == 1;
    }
  }
  return 0;
}

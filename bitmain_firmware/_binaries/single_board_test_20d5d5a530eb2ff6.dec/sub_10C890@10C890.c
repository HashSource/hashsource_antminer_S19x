int __fastcall sub_10C890(
        _DWORD *a1,
        int a2,
        int (*a3)(void),
        unsigned __int8 *(__fastcall *a4)(unsigned __int8 *result),
        int (**a5)(const char *s1, const char *s2))
{
  int result; // r0
  int *v9; // r7
  int v10; // r9
  unsigned int v11; // r4
  _DWORD *v12; // r6
  _DWORD *v13; // r0
  _DWORD *v14; // r6
  int v15; // r0

  if ( *a1 > a2 )
  {
    result = sub_DF6B4(a4, a5);
    v9 = (int *)result;
    if ( result )
    {
      v10 = sub_10C010(a1[1]);
      if ( v10 <= 0 )
      {
LABEL_10:
        sub_DF748(*(int **)(a1[2] + 4 * a2));
        *(_DWORD *)(a1[2] + 4 * a2) = v9;
        *(_DWORD *)(a1[3] + 4 * a2) = a3;
        return 1;
      }
      else
      {
        v11 = 0;
        if ( a3 )
        {
          while ( 1 )
          {
            v12 = (_DWORD *)sub_10C01C((_DWORD *)a1[1], v11);
            if ( a3() )
            {
              v13 = sub_DF7A0(v9, v12);
              if ( v13 )
                goto LABEL_16;
              if ( !sub_DFA98((int)v9, (int)v12) )
                break;
            }
            if ( ++v11 == v10 )
              goto LABEL_10;
          }
LABEL_17:
          a1[4] = 1;
          sub_DF748(v9);
          return 0;
        }
        else
        {
          v11 = 0;
          while ( 1 )
          {
            v14 = (_DWORD *)sub_10C01C((_DWORD *)a1[1], v11);
            v13 = sub_DF7A0(v9, v14);
            if ( v13 )
              break;
            ++v11;
            if ( !sub_DFA98((int)v9, (int)v14) )
              goto LABEL_17;
            if ( v10 == v11 )
              goto LABEL_10;
          }
LABEL_16:
          a1[4] = 2;
          v15 = sub_10BC4C(a1[1], (int)v13);
          a1[6] = v11;
          a1[5] = v15;
          sub_DF748(v9);
          return 0;
        }
      }
    }
    else
    {
      a1[4] = 1;
    }
  }
  else
  {
    a1[4] = 3;
    return 0;
  }
  return result;
}

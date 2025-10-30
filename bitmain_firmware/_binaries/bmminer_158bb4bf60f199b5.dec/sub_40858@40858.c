int __fastcall sub_40858(unsigned int *a1, int a2, char *nptr, unsigned __int8 a4, int a5)
{
  unsigned int *v6; // r6
  int v7; // r2
  int v8; // r1
  int v9; // r0
  int v10; // r7
  int v11; // r4
  unsigned __int8 v13; // [sp+18h] [bp+18h]

  if ( dword_242F4C )
  {
    v6 = a1;
    if ( nptr && *nptr )
    {
      v9 = strtol(nptr, 0, 10);
      v10 = v9;
      if ( v9 < 0 || v9 >= dword_242F4C )
      {
        v13 = a4;
        v7 = v9;
        a1 = v6;
        v8 = 26;
      }
      else
      {
        v11 = *(_DWORD *)(dword_244048 + 4 * v9);
        if ( *(_DWORD *)(v11 + 100) )
        {
          if ( dword_2440F8 <= 1 )
          {
            v13 = a4;
            v7 = v9;
            a1 = v6;
            v8 = 51;
          }
          else
          {
            *(_DWORD *)(v11 + 100) = 0;
            if ( v11 == sub_58084() )
              sub_59E6C(0);
            v13 = a4;
            v7 = v10;
            a1 = v6;
            v8 = 48;
          }
        }
        else
        {
          v13 = a4;
          v7 = v9;
          a1 = v6;
          v8 = 50;
        }
      }
    }
    else
    {
      v13 = a4;
      v7 = 0;
      v8 = 25;
    }
  }
  else
  {
    v13 = a4;
    v7 = 0;
    v8 = 8;
  }
  return sub_3F65C(a1, v8, v7, 0, v13);
}

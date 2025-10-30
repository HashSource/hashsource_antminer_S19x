bool __fastcall sub_8ED90(_DWORD *a1, int a2, int a3)
{
  int v4; // r4
  int (__fastcall *v6)(_DWORD *, _DWORD); // r3

  if ( !a3 )
    return 1;
  if ( !a1[7] )
  {
    if ( a2 == 1024 )
    {
      v4 = a1[364];
      if ( !v4 )
      {
        sub_95494(a1, 47, 556, 233, "ssl/statem/extensions.c", 1672);
        return v4;
      }
    }
    return 1;
  }
  if ( a1[980] )
  {
    if ( a1[35] )
    {
      if ( a1[26] == 9 )
      {
        if ( a1[364] )
        {
          if ( !a1[275] )
          {
            v6 = (int (__fastcall *)(_DWORD *, _DWORD))a1[992];
            if ( !v6 || v6(a1, a1[993]) )
            {
              a1[363] = 2;
              return sub_A59F0(a1, 97) != 0;
            }
          }
        }
      }
    }
  }
  a1[363] = 1;
  return 1;
}

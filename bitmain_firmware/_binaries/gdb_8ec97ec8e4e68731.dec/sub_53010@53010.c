_DWORD *__fastcall sub_53010(char *s1, size_t n, _DWORD *a3, int a4, _DWORD *a5)
{
  _DWORD *v5; // r4
  _DWORD *v6; // r9
  const char *v10; // r5

  v5 = a3;
  v6 = 0;
  *a5 = 0;
  if ( a3 )
  {
    while ( 1 )
    {
      v10 = (const char *)v5[1];
      if ( !strncmp(s1, v10, n) && (!a4 || v5[4]) )
      {
        v6 = v5;
        ++*a5;
        if ( !v10[n] )
          break;
      }
      v5 = (_DWORD *)*v5;
      if ( !v5 )
        return v6;
    }
    *a5 = 1;
    return v5;
  }
  else
  {
    return 0;
  }
}

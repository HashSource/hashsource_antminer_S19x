const char **__fastcall sub_E5B48(_DWORD *a1, char *s2, size_t n)
{
  _DWORD *i; // r9
  int v6; // r4
  int v7; // r6
  const char **v8; // r7
  const char **v9; // t1
  const char *v10; // r5

  for ( i = a1; i; i = (_DWORD *)*i )
  {
    v6 = i[1];
    v7 = (int)&i[v6 + 2];
    while ( --v6 >= 0 )
    {
      v9 = *(const char ***)(v7 - 4);
      v7 -= 4;
      v8 = v9;
      v10 = *v9;
      if ( *(unsigned __int8 *)*v9 == (unsigned __int8)*s2 && !strncmp(v10, s2, n) && !v10[n] )
        return v8;
    }
  }
  return (const char **)i;
}

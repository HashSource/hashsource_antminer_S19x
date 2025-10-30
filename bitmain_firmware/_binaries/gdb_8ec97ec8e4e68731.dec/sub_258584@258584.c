const char *__fastcall sub_258584(const char *a1, unsigned __int8 *a2)
{
  const char *v2; // r4
  int v3; // r5
  int v5; // r0
  bool v6; // zf
  _BOOL4 v7; // r0
  int v9; // r0
  _BOOL4 v10; // r5
  const char *v11; // r7
  int *v12; // r5
  size_t v13; // r6
  const char *v14; // t1
  size_t v15; // r0
  const char *v16; // r1
  size_t v17; // r7
  _BOOL4 v18; // r5

  if ( a1 == (const char *)a2 )
    return a1;
  v3 = *(unsigned __int8 *)a1;
  v2 = a1;
  v5 = isspace(v3);
  v6 = v5 == 0;
  v7 = v5 != 0;
  if ( v6 )
    v7 = v3 == 40;
  if ( !v7 )
  {
    v9 = v3;
    v10 = v3 == 95;
    if ( isalnum(v9) )
      v10 = 1;
    if ( v10 )
    {
      v11 = v2 + 1;
      do
      {
        v6 = a2 == (unsigned __int8 *)v11;
        v2 = v11++;
        if ( v6 )
          break;
        v18 = *(unsigned __int8 *)v2 == 95;
        if ( isalnum(*(unsigned __int8 *)v2) )
          v18 = 1;
      }
      while ( v18 );
    }
    else
    {
      v12 = (int *)&off_46DD4C;
      v13 = a2 - (unsigned __int8 *)v2;
      do
      {
        v14 = (const char *)*v12++;
        v15 = strlen(v14);
        v16 = v14;
        if ( v15 >= v13 )
          v17 = v13;
        else
          v17 = v15;
        if ( !strncmp(v2, v16, v17) )
        {
          v2 += v17;
          return v2;
        }
      }
      while ( &dword_46DDE0 != v12 );
      ++v2;
    }
  }
  return v2;
}

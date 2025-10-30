unsigned __int8 *__fastcall sub_F5DD0(unsigned __int8 *a1, char *s, const char *a3)
{
  const char *v3; // r6
  const char *v4; // r7
  int v6; // r4
  int v7; // r3
  unsigned __int8 *result; // r0
  int v9; // t1

  v3 = "'";
  if ( s )
    v3 = s;
  v4 = a3;
  if ( !a3 )
    v4 = (const char *)(*((int (**)(void))off_46D5A4[0] + 29))();
  v6 = *a1;
  if ( !*a1 )
    return a1;
  v7 = 0;
  while ( 1 )
  {
    if ( !v7 )
    {
      while ( !strchr(v3, v6) )
      {
        if ( !strchr(v4, v6) )
        {
          v9 = *++a1;
          v6 = v9;
          if ( v9 )
            continue;
        }
        return a1;
      }
      v7 = v6;
      goto LABEL_8;
    }
    if ( v7 == v6 )
      return a1 + 1;
LABEL_8:
    v6 = a1[1];
    result = ++a1;
    if ( !v6 )
      return result;
  }
}

_DWORD *__fastcall sub_17EBD4(_DWORD *a1, const char *a2, _DWORD *a3)
{
  const char *v6; // r0
  const char *v7; // r4
  const char *v8; // r6

  if ( !a2 || !*a2 )
  {
    *a3 = 0;
    *a1 = 0;
    return a1;
  }
  v6 = &a2[strlen(a2)];
  if ( *(v6 - 1) == 38 )
  {
    v7 = v6 - 1;
    if ( a2 < v6 - 1 )
    {
      v8 = v6 - 1;
      while ( 1 )
      {
        v7 = v8;
        if ( !isspace(*(unsigned __int8 *)--v8) )
          break;
        if ( v8 == a2 )
        {
          v7 = a2;
          break;
        }
      }
    }
    *a3 = 1;
    if ( a2 != v7 )
    {
      *a1 = sub_93330(a2, v7 - a2);
      return a1;
    }
    *a1 = 0;
    return a1;
  }
  *a3 = 0;
  *a1 = sub_327254(a2);
  return a1;
}

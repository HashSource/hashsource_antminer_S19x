int __fastcall sub_1BFEF8(const char *a1, int a2, int a3)
{
  const char *v5; // r6
  int v6; // r7
  int v7; // r0
  bool v8; // zf
  int result; // r0
  const char *v10; // r2
  const char *v11; // r4
  int v12; // r0
  const char *v13; // r8
  unsigned __int8 *v14; // r4
  int v15; // t1
  char *endptr; // [sp+4h] [bp-4h] BYREF

  v5 = a1;
  v6 = strncmp(a1, "__ct__", 6u);
  v7 = strncmp(v5, "__dt__", 6u);
  v8 = v6 == 0;
  if ( v6 )
    v8 = v7 == 0;
  if ( v8 )
  {
    v5 += 6;
    result = sub_25A6BC(a2, a3);
    if ( !v5 )
      return result;
  }
  else
  {
    result = sub_25A6BC(a2, a3);
  }
  if ( *v5 )
  {
    sub_25A6BC(" (", a3);
    if ( (unsigned int)*(unsigned __int8 *)v5 - 48 <= 9 )
    {
      do
      {
        v10 = v5 + 1;
        do
          v11 = v10++;
        while ( (unsigned int)*(unsigned __int8 *)v11 - 48 <= 9 );
        v12 = strtol(v5, &endptr, 0);
        v13 = &v11[v12];
        if ( v12 > 0 )
        {
          v14 = (unsigned __int8 *)(v11 - 1);
          do
          {
            v15 = *++v14;
            sub_25A4FC(v15, a3);
          }
          while ( v13 - 1 != (const char *)v14 );
        }
        v5 = v13;
        if ( !*v13 )
          break;
        sub_25A6BC(", ", a3);
      }
      while ( (unsigned int)*(unsigned __int8 *)v13 - 48 <= 9 );
    }
    return sub_25A6BC(")", a3);
  }
  return result;
}

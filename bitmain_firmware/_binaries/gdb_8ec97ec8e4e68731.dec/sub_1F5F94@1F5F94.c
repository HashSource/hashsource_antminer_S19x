int __fastcall sub_1F5F94(const char **a1, __int64 *a2)
{
  const char *v2; // r4
  int v3; // r6
  char *v6; // r0
  const char *v7; // r9
  int v8; // r8
  __int64 v9; // r6
  __int64 v10; // r2
  int v11; // r1
  unsigned int v12; // lr
  unsigned int v13; // r0
  int v14; // r12
  int v15; // r1
  __int64 v16; // r0

  v2 = *a1;
  if ( !*a1 )
    return -1;
  v3 = *(unsigned __int8 *)v2;
  if ( !*v2 )
    return -1;
  v6 = strchr(*a1, 44);
  if ( v6 )
  {
    v7 = v6 + 1;
    *v6 = 0;
    v2 = *a1;
    v3 = *(unsigned __int8 *)*a1;
  }
  else
  {
    v7 = &v2[strlen(v2)];
  }
  v8 = 1;
  while ( strchr("+-", v3) )
  {
    *a1 = ++v2;
    if ( v3 == 45 )
      v8 = -v8;
    v3 = *(unsigned __int8 *)v2;
  }
  *a2 = 0;
  if ( *v2 )
  {
    v9 = 0;
    do
    {
      v10 = 16 * v9;
      *a2 = 16 * v9;
      v11 = *(unsigned __int8 *)v2;
      v12 = v11 - 97;
      if ( (unsigned __int8)(v11 - 48) <= 9u )
      {
        v9 = v10 + v11 - 48;
        *a2 = v9;
      }
      else
      {
        v13 = v11 - 65;
        v14 = v11 - 87;
        v15 = v11 - 55;
        if ( v12 > 5 )
        {
          if ( v13 > 5 )
            return -1;
          v9 = v10 + v15;
          *a2 = v9;
        }
        else
        {
          v9 = v10 + v14;
          *a2 = v9;
        }
      }
      *a1 = ++v2;
    }
    while ( *v2 );
    v16 = v8 * v9;
  }
  else
  {
    v16 = 0;
  }
  *a2 = v16;
  *a1 = v7;
  return 0;
}

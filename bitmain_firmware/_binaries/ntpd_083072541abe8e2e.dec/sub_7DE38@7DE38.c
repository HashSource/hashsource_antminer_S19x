int __fastcall sub_7DE38(const char *a1)
{
  const char *v1; // r9
  int result; // r0
  int v3; // r3
  int v4; // t1
  char *v5; // r0
  char *v6; // r4
  int v7; // r3
  int v8; // t1

  v1 = a1;
  if ( !a1 || !*a1 )
    return fwrite("''", (size_t)&dword_0 + 1, 2u, stdout);
  if ( *a1 != 39 )
    goto LABEL_8;
  do
  {
    result = fwrite("\\'", 1u, 2u, stdout);
    v4 = *(unsigned __int8 *)++v1;
    v3 = v4;
  }
  while ( v4 == 39 );
  if ( v3 )
  {
LABEL_8:
    fputc(39, stdout);
    while ( 1 )
    {
      v5 = strchr(v1, 39);
      v6 = v5;
      if ( !v5 )
        break;
      fwrite(v1, v5 - v1, 1u, stdout);
      result = fputc(39, stdout);
      v7 = (unsigned __int8)*v6;
      if ( v7 == 39 )
      {
        do
        {
          result = fwrite("\\'", 1u, 2u, stdout);
          v8 = (unsigned __int8)*++v6;
          v7 = v8;
        }
        while ( v8 == 39 );
      }
      if ( !v7 )
        return result;
      v1 = v6;
      fputc(39, stdout);
    }
    fputs(v1, stdout);
    return fputc(39, stdout);
  }
  return result;
}

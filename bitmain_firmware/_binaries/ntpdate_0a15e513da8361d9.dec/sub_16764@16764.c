const char *__fastcall sub_16764(_DWORD *a1, char *s2)
{
  const char *v3; // r4
  const char *result; // r0

  if ( !a1 || *a1 != 1281586296 )
    sub_10C38();
  if ( !s2 )
    sub_10C38();
  v3 = (const char *)a1[4];
LABEL_6:
  result = *(const char **)v3;
  if ( *(_DWORD *)v3 )
  {
    while ( 1 )
    {
      if ( *((_DWORD *)v3 + 1) == -1 )
      {
        v3 = result;
        goto LABEL_6;
      }
      if ( !strcmp(result, s2) )
        return v3;
      v3 += 8;
      result = *(const char **)v3;
      if ( !*(_DWORD *)v3 )
        return result;
    }
  }
  return result;
}

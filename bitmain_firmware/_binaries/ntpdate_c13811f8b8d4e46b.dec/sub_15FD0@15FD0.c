const char *__fastcall sub_15FD0(_DWORD *a1, char *s2)
{
  const char *v3; // r4

  if ( !a1 || *a1 != 1281586296 )
    sub_1073C();
  if ( !s2 )
    sub_1073C();
  v3 = (const char *)a1[2];
  while ( *(_DWORD *)v3 )
  {
    if ( *((_DWORD *)v3 + 1) == -1 )
    {
      v3 = *(const char **)v3;
    }
    else
    {
      if ( !strcmp(*(const char **)v3, s2) )
        return v3;
      v3 += 8;
    }
  }
  return 0;
}

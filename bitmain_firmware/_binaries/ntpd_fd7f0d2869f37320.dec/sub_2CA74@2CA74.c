int __fastcall sub_2CA74(char *s1)
{
  int v1; // r4
  const char *v2; // r1

  v1 = dword_BA928;
  if ( !dword_BA928 )
    return v1;
  v2 = *(const char **)dword_BA928;
  if ( *(char **)dword_BA928 != s1 )
  {
    do
    {
      if ( !strcmp(s1, v2) )
        break;
      v1 = *(_DWORD *)(v1 + 8);
      if ( !v1 )
        return v1;
      v2 = *(const char **)v1;
    }
    while ( *(char **)v1 != s1 );
  }
  return *(_DWORD *)(v1 + 4);
}

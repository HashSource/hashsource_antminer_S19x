_DWORD *__fastcall sub_26D98(char *s1, int a2, int a3)
{
  int v6; // r4

  v6 = pkinfo;
  if ( !pkinfo )
    return sub_26B40(s1, a2, a3);
  while ( strcmp(s1, *(const char **)(v6 + 8)) )
  {
    v6 = *(_DWORD *)v6;
    if ( !v6 )
      return sub_26B40(s1, a2, a3);
  }
  return (_DWORD *)v6;
}

char *__fastcall sub_2F6568(int a1, int a2)
{
  char *v4; // r4
  const char *v6; // r1

  v4 = sub_2AD7AC(a1, *(const char **)(a2 + 24));
  if ( v4 )
    return v4;
  v6 = *(const char **)(a2 + 28);
  if ( v6 )
  {
    v4 = sub_2AD7AC(a1, v6);
    if ( v4 )
      return v4;
  }
  v4 = *(char **)(a1 + 100);
  if ( !v4 )
    return v4;
  while ( strncmp(*(const char **)v4, ".gnu.linkonce.wi.", 0x11u) )
  {
    v4 = (char *)*((_DWORD *)v4 + 3);
    if ( !v4 )
      return v4;
  }
  return v4;
}

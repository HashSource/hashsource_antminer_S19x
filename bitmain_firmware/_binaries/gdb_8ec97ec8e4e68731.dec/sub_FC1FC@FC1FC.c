const char **__fastcall sub_FC1FC(char *s2)
{
  int *v1; // r5
  int v2; // r8
  int v4; // r4
  const char **v5; // r6
  const char **v6; // t1

  v1 = &dword_47AFF0;
  v2 = dword_47AFF0;
  if ( dword_47AFF0 <= 0 )
    return 0;
  v4 = 0;
  while ( 1 )
  {
    v6 = (const char **)v1[1];
    ++v1;
    v5 = v6;
    ++v4;
    if ( !strcmp(*v6, s2) )
      break;
    if ( v4 == v2 )
      return 0;
  }
  return v5;
}

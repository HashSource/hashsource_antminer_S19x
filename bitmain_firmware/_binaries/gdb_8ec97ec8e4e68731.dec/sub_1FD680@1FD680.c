const char **__fastcall sub_1FD680(char *s1)
{
  int v1; // r8
  int v3; // r5
  int v4; // r4
  const char **v5; // r6
  const char **v6; // t1

  if ( !dword_48936C )
    return 0;
  v1 = *(_DWORD *)dword_48936C;
  if ( !*(_DWORD *)dword_48936C )
    return 0;
  v3 = dword_48936C + 4;
  v4 = 0;
  while ( 1 )
  {
    v6 = *(const char ***)(v3 + 4);
    v3 += 4;
    v5 = v6;
    ++v4;
    if ( !strcmp(s1, *v6) )
      break;
    if ( v1 == v4 )
      return 0;
  }
  return v5;
}

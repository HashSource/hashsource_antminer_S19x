char *__fastcall sub_197F94(char *a1)
{
  char *v1; // r4
  char *v2; // r0

  do
  {
    v2 = sub_197488(a1, 58);
    v1 = v2;
    if ( !v2 || !strncmp(v2, "::", 2u) )
      break;
    a1 = v1 + 1;
    if ( v1 == (char *)-1 )
      return 0;
    v1 = (char *)(unsigned __int8)v1[1];
  }
  while ( v1 );
  return v1;
}

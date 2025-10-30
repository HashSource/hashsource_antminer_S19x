const char *__fastcall sub_1943DC(char *s2)
{
  char *v2; // r4
  const char **v3; // r5
  const char **v4; // t1

  v2 = (char *)&off_46D5A8;
  do
  {
    v4 = *(const char ***)v2;
    v2 += 4;
    v3 = v4;
    if ( !strcmp(*v4, s2) )
      return v3[2];
  }
  while ( v2 != aWarningTheCurr );
  return (const char *)(strcmp(s2, "local") == 0);
}

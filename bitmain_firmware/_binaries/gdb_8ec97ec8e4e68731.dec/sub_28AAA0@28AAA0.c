const char *__fastcall sub_28AAA0(char *a1)
{
  char **v1; // r3
  const char *v2; // r2

  if ( a1 == (char *)&unk_46FF30 )
    return "emacs";
  v1 = &off_3FD2D0;
  v2 = "emacs-standard";
  do
  {
    v1 += 2;
    if ( v1[1] == a1 )
      break;
    v2 = v1[2];
  }
  while ( v2 );
  return v2;
}

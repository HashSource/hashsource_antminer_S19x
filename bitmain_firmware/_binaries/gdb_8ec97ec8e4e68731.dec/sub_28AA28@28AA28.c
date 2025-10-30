char *__fastcall sub_28AA28(char *s1)
{
  const char *v1; // r1
  int v3; // r4

  v1 = "emacs";
  v3 = 0;
  do
  {
    if ( !strcasecmp(s1, v1) )
      return (&off_3FD2D0)[2 * v3 + 1];
    ++v3;
    v1 = (&off_3FD2D0)[2 * v3];
  }
  while ( v1 );
  return 0;
}

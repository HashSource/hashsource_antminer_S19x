int __fastcall sub_99A88(char *s1)
{
  const char *v1; // r3
  char **v2; // r4
  int v4; // r5

  v1 = "SIGHUP";
  v2 = &off_36FC50;
  v4 = 1;
  while ( 1 )
  {
    v2 += 3;
    if ( v1 && !strcmp(s1, v1) )
      return v4;
    if ( ++v4 == 152 )
      break;
    v1 = v2[4];
  }
  return 143;
}

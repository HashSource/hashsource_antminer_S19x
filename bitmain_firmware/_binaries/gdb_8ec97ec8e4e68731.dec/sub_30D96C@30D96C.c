int __fastcall sub_30D96C(char *s1)
{
  const char *v1; // r1
  char **v2; // r4
  int v4; // r5
  const char *v5; // t1

  v1 = "none";
  v2 = &off_432D04;
  v4 = -1;
  while ( strcmp(s1, v1) )
  {
    v4 = (int)v2[4];
    if ( !v4 )
      break;
    v5 = v2[3];
    v2 += 3;
    v1 = v5;
  }
  return v4;
}

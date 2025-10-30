int __fastcall sub_1BD8C8(char *s1)
{
  const char *v1; // r1
  int v3; // r4

  v1 = "none";
  v3 = 0;
  while ( strcmp(s1, v1) )
  {
    if ( ++v3 == 21 )
      return 0;
    v1 = (&off_3C9F2C)[2 * v3];
  }
  if ( v3 == 20 )
    return 0;
  return v3;
}

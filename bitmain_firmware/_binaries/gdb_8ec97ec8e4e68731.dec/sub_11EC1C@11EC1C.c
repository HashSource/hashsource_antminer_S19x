bool __fastcall sub_11EC1C(char *s1, const char **a2)
{
  const char *v3; // r1
  const char *v5; // r1

  v3 = *a2;
  if ( v3 && !strcmp(s1, v3) )
    return 1;
  v5 = a2[1];
  return v5 && strcmp(s1, v5) == 0;
}

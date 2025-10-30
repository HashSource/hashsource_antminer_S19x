const char *__fastcall sub_4A5C4(const char **a1, const char *a2)
{
  const char *v3; // r4
  char *v4; // r0

  v3 = *a1;
  if ( *a1 && (v4 = strpbrk(*a1, a2)) != 0 )
  {
    *v4 = 0;
    *a1 = v4 + 1;
    return v3;
  }
  else
  {
    *a1 = 0;
    return v3;
  }
}

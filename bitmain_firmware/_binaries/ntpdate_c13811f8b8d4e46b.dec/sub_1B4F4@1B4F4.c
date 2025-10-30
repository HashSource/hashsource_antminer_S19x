const char *__fastcall sub_1B4F4(const char *a1)
{
  char *v2; // r0

  if ( !a1 )
    sub_1073C();
  v2 = strrchr(a1, 47);
  if ( v2 )
    return v2 + 1;
  else
    return a1;
}

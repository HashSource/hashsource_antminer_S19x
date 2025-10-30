const char **__fastcall sub_47A80(char *a1, __uid_t uid)
{
  const char **result; // r0

  result = (const char **)getpwuid(uid);
  if ( result )
  {
    result = (const char **)strncpy(a1, *result, 0x20u);
    a1[31] = 0;
  }
  else
  {
    *a1 = 0;
  }
  return result;
}

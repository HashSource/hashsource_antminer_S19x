const char **__fastcall sub_47A44(char *a1, __gid_t gid)
{
  const char **result; // r0

  result = (const char **)getgrgid(gid);
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

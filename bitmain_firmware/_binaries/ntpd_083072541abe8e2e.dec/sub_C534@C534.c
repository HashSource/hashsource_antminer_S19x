int __fastcall sub_C534(const char *a1, const char *a2)
{
  int result; // r0

  if ( !a1 )
    return 0;
  result = strcmp(a1, (const char *)sys_groupname);
  if ( result )
    return !a2 || strcmp(a1, a2) != 0;
  return result;
}

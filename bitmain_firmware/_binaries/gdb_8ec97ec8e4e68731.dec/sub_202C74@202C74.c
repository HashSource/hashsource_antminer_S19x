size_t __fastcall sub_202C74(const char *a1)
{
  size_t v2; // r0
  bool v3; // cf
  size_t result; // r0

  v2 = strlen(a1);
  v3 = v2 != 0;
  result = v2 - 1;
  if ( v3 && a1[result] == 47 )
    a1[result] = 0;
  return result;
}

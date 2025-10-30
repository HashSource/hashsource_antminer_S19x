int __fastcall sub_5B24C(const char **a1, const char *a2, size_t a3)
{
  const char *v4; // r4
  int v6; // r0
  const char *v7; // r4
  int result; // r0

  v4 = *a1;
  if ( strncmp(*a1, a2, a3) )
    return 0;
  v6 = (unsigned __int8)v4[a3];
  v7 = &v4[a3];
  if ( !v6 || (result = isspace(v6)) != 0 )
  {
    *a1 = v7;
    return 1;
  }
  return result;
}

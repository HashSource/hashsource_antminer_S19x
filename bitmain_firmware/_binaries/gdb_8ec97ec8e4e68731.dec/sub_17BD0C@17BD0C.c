char *__fastcall sub_17BD0C(const char *a1, _DWORD *a2, _DWORD *a3)
{
  char *v6; // r0
  char *result; // r0
  bool v8; // zf
  __int64 v9; // r0

  v6 = strrchr(a1, 46);
  if ( v6 )
  {
    *a3 = v6 + 1;
    *v6 = 0;
    result = strrchr(a1, 46);
    v8 = result == 0;
    if ( result )
      ++result;
    else
      *a2 = a1;
    if ( !v8 )
      *a2 = result;
  }
  else
  {
    v9 = sub_94700(
           (int)"go-lang.c",
           145,
           "%s: Assertion `%s' failed.",
           "void unpack_package_and_object(char*, const char**, const char**)",
           "last_dot != NULL");
    return (char *)sub_17BD90(v9, HIDWORD(v9));
  }
  return result;
}

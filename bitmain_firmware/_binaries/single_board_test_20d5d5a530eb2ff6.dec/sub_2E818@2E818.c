char *__fastcall sub_2E818(const char *a1, const char *a2)
{
  char *v4; // r0

  v4 = strstr(a1, "https");
  if ( a1 == v4 )
    return sub_2E4E0(v4, a2);
  else
    return sub_2E118(a1, a2);
}

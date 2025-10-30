int __fastcall sub_85E60(const char **a1, int a2)
{
  const char *v3; // r0
  const char *v4; // r3

  if ( !a1 )
    return sub_89984(2, "src/spec.c", 34, "a_spec is null or 0");
  v3 = a1[1];
  if ( a1[2310] )
    v4 = "true";
  else
    v4 = "false";
  return sub_89984(
           a2,
           "src/spec.c",
           41,
           "----spec[%p][%.*s][%s|%d][%s,%ld,%ld,%s][%s]----",
           a1,
           (int)v3,
           *a1,
           (const char *)a1 + 8,
           a1[1027],
           (const char *)a1 + 5137,
           a1[2311],
           a1[2312],
           v4,
           (const char *)a1 + 4112);
}

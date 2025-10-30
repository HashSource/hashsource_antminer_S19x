int __fastcall sub_1A6724(const char *a1, int a2, int a3)
{
  const char *v3; // r3
  int result; // r0

  v3 = a1;
  if ( !a1 )
    return sub_259858("\"maintenance space\" takes a numeric argument.\n", a2, a3, v3);
  v3 = (const char *)*(unsigned __int8 *)a1;
  if ( !*a1 )
    return sub_259858("\"maintenance space\" takes a numeric argument.\n", a2, a3, v3);
  result = strtol(a1, 0, 10);
  dword_487A98 = result;
  return result;
}

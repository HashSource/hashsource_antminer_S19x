bool __fastcall sub_59964(int a1)
{
  int v1; // r4
  int v2; // r4
  _BOOL4 result; // r0

  v1 = sub_9360C(a1);
  if ( strncmp((const char *)v1, "unlimited", 9u) )
    return 0;
  v2 = *(unsigned __int8 *)(v1 + 9);
  result = isspace(v2) != 0;
  if ( !v2 )
    return 1;
  return result;
}

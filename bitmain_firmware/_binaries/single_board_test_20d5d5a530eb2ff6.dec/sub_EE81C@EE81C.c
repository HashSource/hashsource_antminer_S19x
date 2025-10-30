int __fastcall sub_EE81C(const char *a1, const char *a2)
{
  signed int v4; // r4
  size_t v5; // r0
  const char *v6; // r4
  int result; // r0

  v4 = strlen(a1);
  v5 = strlen(a2);
  if ( v4 <= (int)(v5 + 1) )
    return 0;
  v6 = &a1[v4 - v5];
  result = strcmp(v6, a2);
  if ( result )
    return 0;
  if ( *(v6 - 1) == 32 )
    return v6 - 1 - a1;
  return result;
}

int __fastcall sub_21A6F4(const char *a1, const char *a2)
{
  size_t v4; // r5
  size_t v5; // r0
  int result; // r0
  size_t v7; // r4
  const char *v8; // r7

  v4 = strlen(a1);
  v5 = strlen(a2);
  if ( v4 < v5 )
    return 0;
  v7 = v5;
  v8 = &a1[v4 - v5];
  result = j_strcmp(v8, a2);
  if ( result )
    return 0;
  if ( v4 == v7 )
    return 1;
  if ( *a2 != 47 )
    return *((unsigned __int8 *)v8 - 1) == 47;
  return result;
}

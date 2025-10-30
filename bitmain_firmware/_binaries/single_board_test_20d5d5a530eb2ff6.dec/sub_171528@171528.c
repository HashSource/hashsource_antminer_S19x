int __fastcall sub_171528(const char ***a1, const char ***a2)
{
  const char *v2; // r0
  const char *v3; // r1
  int v5; // r1

  v2 = **a1;
  v3 = **a2;
  if ( v2 && v3 )
    return j_strcmp(v2, v3);
  v5 = v3 != 0;
  if ( v2 )
    return 1 - v5;
  else
    return -v5;
}

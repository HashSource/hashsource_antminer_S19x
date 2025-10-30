int __fastcall sub_336A98(const char **a1, const char **a2)
{
  const char *v2; // r0
  const char *v3; // r1

  v2 = *a1;
  v3 = *a2;
  if ( v2 == v3 )
    return 0;
  if ( !v2 )
    return 1;
  if ( v3 )
    return strcoll(v2, v3);
  return -1;
}

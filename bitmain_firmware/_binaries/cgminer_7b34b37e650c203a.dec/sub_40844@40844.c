const char *__fastcall sub_40844(unsigned int *a1, size_t *a2)
{
  const char *v4; // r0

  v4 = sub_404CC(a1, a2);
  if ( !v4 )
    return 0;
  while ( *v4 != 45 )
  {
    v4 = (const char *)sub_405B4((int)v4, a1, a2);
    if ( !v4 )
      return 0;
  }
  --*a2;
  return v4 + 1;
}

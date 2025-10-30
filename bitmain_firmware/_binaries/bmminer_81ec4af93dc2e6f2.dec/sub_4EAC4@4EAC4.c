const char *__fastcall sub_4EAC4(unsigned int *a1, size_t *a2)
{
  const char *v4; // r0

  v4 = sub_4E74C(a1, a2);
  if ( !v4 )
    return 0;
  while ( *v4 != 45 )
  {
    v4 = (const char *)sub_4E834((int)v4, a1, a2);
    if ( !v4 )
      return 0;
  }
  --*a2;
  return v4 + 1;
}

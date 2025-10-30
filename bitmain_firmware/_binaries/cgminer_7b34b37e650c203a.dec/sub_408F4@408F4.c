const char *__fastcall sub_408F4(unsigned int *a1)
{
  const char *result; // r0
  size_t v3; // [sp+4h] [bp-8h] BYREF

  v3 = 0;
  result = sub_404CC(a1, &v3);
  if ( !result )
    return 0;
  while ( *result == 45 )
  {
    result = (const char *)sub_405B4((int)result, a1, &v3);
    if ( !result )
      return 0;
  }
  return result;
}

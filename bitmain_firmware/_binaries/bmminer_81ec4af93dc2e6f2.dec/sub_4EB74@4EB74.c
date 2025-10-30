const char *__fastcall sub_4EB74(unsigned int *a1)
{
  const char *result; // r0
  size_t v3; // [sp+4h] [bp-8h] BYREF

  v3 = 0;
  result = sub_4E74C(a1, &v3);
  if ( !result )
    return 0;
  while ( *result == 45 )
  {
    result = (const char *)sub_4E834((int)result, a1, &v3);
    if ( !result )
      return 0;
  }
  return result;
}

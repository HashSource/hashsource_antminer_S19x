unsigned __int8 *__fastcall sub_50CA0(unsigned int *a1)
{
  unsigned __int8 *result; // r0
  int v3; // [sp+4h] [bp-8h] BYREF

  v3 = 0;
  result = (unsigned __int8 *)sub_50858(a1, &v3);
  if ( !result )
    return 0;
  while ( *result == 45 )
  {
    result = sub_50914((int)result, a1, &v3);
    if ( !result )
      return 0;
  }
  return result;
}

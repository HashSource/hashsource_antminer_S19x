unsigned __int8 *__fastcall sub_50D00(int a1, unsigned int *a2)
{
  unsigned __int8 *result; // r0
  int v4; // [sp+4h] [bp-8h] BYREF

  v4 = 1;
  result = sub_50914(a1, a2, &v4);
  if ( !result )
    return 0;
  while ( *result == 45 )
  {
    result = sub_50914((int)result, a2, &v4);
    if ( !result )
      return 0;
  }
  return result;
}

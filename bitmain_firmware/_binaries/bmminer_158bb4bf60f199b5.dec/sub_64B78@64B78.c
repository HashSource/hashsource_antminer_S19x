_BYTE *__fastcall sub_64B78(int a1, unsigned int *a2)
{
  _BYTE *result; // r0
  size_t v4; // [sp+4h] [bp-8h] BYREF

  v4 = 1;
  result = (_BYTE *)sub_647D8(a1, a2, &v4);
  if ( !result )
    return 0;
  while ( *result == 45 )
  {
    result = (_BYTE *)sub_647D8((int)result, a2, &v4);
    if ( !result )
      return 0;
  }
  return result;
}

_DWORD *__fastcall sub_1FB98(_DWORD *result)
{
  if ( (*result & 3) != 0 )
    *result = (*result & 0xFFFFFFFC) + 4;
  return result;
}

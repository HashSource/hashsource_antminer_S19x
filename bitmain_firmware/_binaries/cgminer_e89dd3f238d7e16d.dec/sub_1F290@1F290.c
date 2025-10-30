_DWORD *__fastcall sub_1F290(_DWORD *result)
{
  if ( (*result & 3) != 0 )
    *result = (*result & 0xFFFFFFFC) + 4;
  return result;
}

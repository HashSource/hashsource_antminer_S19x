_DWORD *__fastcall sub_21EF8(_DWORD *result)
{
  while ( (int)result[1] > 999999999 )
  {
    result[1] -= 1000000000;
    ++*result;
  }
  while ( (int)result[1] < 0 )
  {
    result[1] += 1000000000;
    --*result;
  }
  return result;
}

__int16 *__fastcall sub_50010(__int16 *result)
{
  if ( (int)result <= 0 )
  {
    result = &word_BE58C[54 * (_DWORD)result];
    if ( *((_DWORD *)result + 6) != -1 )
      return sub_190FC((int)(result + 2));
  }
  return result;
}

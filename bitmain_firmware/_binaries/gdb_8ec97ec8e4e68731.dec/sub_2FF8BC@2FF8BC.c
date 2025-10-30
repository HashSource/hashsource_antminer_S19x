_DWORD *__fastcall sub_2FF8BC(_DWORD *result, int a2)
{
  if ( result || (result = (_DWORD *)sub_2AAEC8(a2, 32)) != 0 )
  {
    result = (_DWORD *)sub_2AAF7C((int)result, a2);
    if ( result )
    {
      result[5] = 0;
      result[4] = 0;
      result[6] = 0;
      result[7] = 0;
    }
  }
  return result;
}

_DWORD *__fastcall sub_2B4070(_DWORD *result, int a2)
{
  if ( result || (result = (_DWORD *)sub_2AAEC8(a2, 68)) != 0 )
  {
    result = (_DWORD *)sub_2AAF7C((int)result, a2);
    if ( result )
    {
      result[3] = 0;
      result[7] = 0;
      result[5] = 0;
      result[6] = 0;
      result[8] = 0;
      result[9] = 0;
      result[10] = 0;
      result[11] = 0;
      result[13] = 0;
      result[15] = 0;
      result[16] = 0;
      result[4] = -1;
      result[12] = -1;
    }
  }
  return result;
}

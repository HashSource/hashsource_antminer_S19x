_DWORD *__fastcall sub_2FC848(_DWORD *result, int a2)
{
  if ( result || (result = (_DWORD *)sub_2AAEC8(a2, 36)) != 0 )
  {
    result = sub_2FC7E8(result, a2);
    if ( result )
    {
      result[7] = 0;
      result[8] = 0;
    }
  }
  return result;
}

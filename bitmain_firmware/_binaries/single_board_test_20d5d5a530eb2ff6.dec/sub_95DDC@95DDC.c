_DWORD *__fastcall sub_95DDC(_DWORD *result, int a2)
{
  _DWORD *v2; // r4

  if ( a2 == -1 )
  {
    if ( (unsigned int)(result[16] - 46) > 1 )
      return result;
LABEL_9:
    v2 = result;
    result = (_DWORD *)sub_95D9C((int)result, 1);
    if ( v2[26] == 3 )
      v2[26] = 7;
    return result;
  }
  if ( result[7] )
  {
    if ( result[26] != 12 )
      return result;
    goto LABEL_6;
  }
  if ( !a2 )
  {
LABEL_6:
    if ( result[16] == 46 )
      return (_DWORD *)sub_95D9C((int)result, 1);
    return result;
  }
  if ( (unsigned int)(result[16] - 46) <= 1 && result[26] != 4 )
    goto LABEL_9;
  return result;
}

_DWORD *__fastcall sub_20192C(int a1, unsigned int a2)
{
  _DWORD *result; // r0
  unsigned int *v3; // r3
  unsigned int v4; // r12

  result = *(_DWORD **)(a1 + 48);
  if ( result )
  {
    while ( 1 )
    {
      v3 = (unsigned int *)result[262];
      v4 = result[263];
      if ( (unsigned int)v3 < v4 )
        break;
LABEL_6:
      result = (_DWORD *)*result;
      if ( !result )
        return result;
    }
    while ( a2 < *v3 || a2 >= v3[1] )
    {
      v3 += 4;
      if ( (unsigned int)v3 >= v4 )
        goto LABEL_6;
    }
    result += 130;
  }
  return result;
}

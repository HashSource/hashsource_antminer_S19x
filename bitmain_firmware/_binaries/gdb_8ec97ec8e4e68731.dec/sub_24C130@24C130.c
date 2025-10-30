_DWORD *__fastcall sub_24C130(int a1, _DWORD *a2)
{
  _DWORD *result; // r0
  _DWORD *v5; // r3

  result = (_DWORD *)*a2;
  if ( !*a2 )
  {
LABEL_6:
    result = sub_93094(1u, 0x18u);
    v5 = (_DWORD *)*a2;
    result[1] = a1;
    *a2 = result;
    result[5] = v5;
    return result;
  }
  if ( a1 != result[1] )
  {
    while ( 1 )
    {
      result = (_DWORD *)result[5];
      if ( !result )
        break;
      if ( result[1] == a1 )
        return result;
    }
    goto LABEL_6;
  }
  return result;
}

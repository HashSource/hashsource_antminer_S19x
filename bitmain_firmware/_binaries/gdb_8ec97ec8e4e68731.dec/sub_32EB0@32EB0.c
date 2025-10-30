_DWORD *__fastcall sub_32EB0(int a1)
{
  int v2; // r5
  _DWORD *result; // r0

  v2 = sub_31060();
  if ( !*(_DWORD *)(v2 + 16) )
    sub_201664(0, 0, dword_46DBA8);
  if ( *(_DWORD *)(dword_487D2C + 32) == a1 )
    return *(_DWORD **)(v2 + 16);
  result = (_DWORD *)sub_200A78();
  if ( result )
  {
    if ( a1 == result[261] )
    {
      return *(_DWORD **)(result[1] + 12);
    }
    else
    {
      while ( 1 )
      {
        result = (_DWORD *)*result;
        if ( !result )
          break;
        if ( result[261] == a1 )
          return *(_DWORD **)(result[1] + 12);
      }
    }
  }
  return result;
}

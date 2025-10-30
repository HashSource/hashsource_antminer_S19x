_DWORD *__fastcall sub_2EF5B0(int a1, int a2, unsigned int a3)
{
  int v3; // r3
  _DWORD *result; // r0
  unsigned int v5; // r3
  unsigned int v6; // r3

  v3 = *(_DWORD *)(a1 + 160);
  if ( a3 <= 0x46 )
    return *(_DWORD **)(v3 + 852 * a2 + 12 * a3 + 600);
  result = *(_DWORD **)(v3 + 4 * a2 + 2300);
  if ( result )
  {
    v5 = result[1];
    if ( a3 == v5 )
    {
      return (_DWORD *)result[3];
    }
    else if ( a3 >= v5 )
    {
      while ( 1 )
      {
        result = (_DWORD *)*result;
        if ( !result )
          break;
        v6 = result[1];
        if ( v6 == a3 )
          return (_DWORD *)result[3];
        if ( v6 > a3 )
          return 0;
      }
    }
    else
    {
      return 0;
    }
  }
  return result;
}

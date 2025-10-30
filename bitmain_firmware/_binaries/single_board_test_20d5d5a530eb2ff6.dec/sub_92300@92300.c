unsigned __int16 *__fastcall sub_92300(unsigned __int16 **a1, int a2, int a3, unsigned __int16 **a4)
{
  unsigned __int16 *result; // r0
  unsigned __int16 *v5; // r6
  unsigned __int16 *v7; // r4
  int v8; // r5
  bool v9; // zf

  result = *a1;
  v5 = a1[1];
  if ( !v5 )
    return 0;
  v7 = 0;
  if ( a2 == 2 )
  {
    while ( *result != a3 )
    {
      v7 = (unsigned __int16 *)((char *)v7 + 1);
      result += 18;
      if ( v7 == v5 )
        return 0;
    }
  }
  else
  {
    while ( 1 )
    {
      if ( a3 == *result )
      {
        v8 = *((_DWORD *)result + 1);
        v9 = a2 == v8;
        if ( a2 != v8 )
          v9 = v8 == 2;
        if ( v9 )
          break;
      }
      v7 = (unsigned __int16 *)((char *)v7 + 1);
      result += 18;
      if ( v5 == v7 )
        return 0;
    }
  }
  if ( a4 )
    *a4 = v7;
  return result;
}

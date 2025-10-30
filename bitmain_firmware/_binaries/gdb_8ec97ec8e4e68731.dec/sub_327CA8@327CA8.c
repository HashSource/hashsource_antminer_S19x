int __fastcall sub_327CA8(int a1, int a2)
{
  int v2; // r2
  int v3; // r1
  bool v4; // cf
  int v5; // r12
  int result; // r0
  unsigned int v8; // lr
  int v9; // r2
  unsigned int v10; // r1
  unsigned int v11; // t1

  v2 = 2 * (a2 + 0x7FFFFFFF);
  v3 = 3 * (a2 - 1);
  v4 = __CFADD__(a1, v2);
  v5 = a1 + v2;
  result = v3 + 1;
  if ( !v4 )
  {
    v8 = *(unsigned __int16 *)(a1 + v2);
    if ( *(_WORD *)(a1 + v2) )
    {
LABEL_9:
      if ( v8 > 9 )
      {
        if ( v8 > 0x63 )
          result += 2;
        else
          ++result;
      }
    }
    else if ( v3 )
    {
      v9 = v5;
      v10 = v3 - 2 - 3 * ((unsigned int)(v5 - a1) >> 1);
      do
      {
        result -= 3;
        if ( result == v10 )
          break;
        v11 = *(unsigned __int16 *)(v9 - 2);
        v9 -= 2;
        v8 = v11;
        if ( v11 )
          goto LABEL_9;
      }
      while ( result != 1 );
    }
  }
  return result;
}

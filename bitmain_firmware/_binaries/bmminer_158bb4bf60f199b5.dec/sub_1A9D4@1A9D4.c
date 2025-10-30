int __fastcall sub_1A9D4(int a1)
{
  int v2; // r4
  int result; // r0
  int v4; // r3
  bool v5; // zf

  v2 = 0;
  do
  {
    while ( 1 )
    {
      result = (unsigned __int8)v2;
      v4 = dword_A0D68 + 4 * v2++;
      if ( *(_DWORD *)(v4 + 4) == 1 )
      {
        v5 = a1 == 255;
        if ( a1 != 255 )
          v5 = a1 == result;
        if ( v5 )
          break;
      }
      if ( v2 == 16 )
        return result;
    }
    result = sub_75B10(result);
  }
  while ( v2 != 16 );
  return result;
}

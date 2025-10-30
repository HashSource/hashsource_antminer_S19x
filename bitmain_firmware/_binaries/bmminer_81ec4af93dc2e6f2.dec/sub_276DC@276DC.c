int __fastcall sub_276DC(int a1)
{
  int v2; // r4
  int v3; // r0
  int v4; // r5
  int result; // r0
  bool v6; // zf

  v2 = 0;
  do
  {
    while ( 1 )
    {
      v3 = v2;
      v4 = (unsigned __int8)v2++;
      result = sub_266F0(v3);
      if ( result )
      {
        v6 = a1 == 255;
        if ( a1 != 255 )
          v6 = a1 == v4;
        if ( v6 )
          break;
      }
      if ( v2 == 4 )
        return result;
    }
    result = sub_772FC(v4);
  }
  while ( v2 != 4 );
  return result;
}

int __fastcall sub_28274(int a1)
{
  int v2; // r4
  int v3; // r0
  int v4; // r5
  int result; // r0

  v2 = 0;
  do
  {
    while ( 1 )
    {
      v3 = v2;
      v4 = (unsigned __int8)v2++;
      result = sub_266F0(v3);
      if ( result )
        break;
      if ( v2 == 4 )
        return result;
    }
    result = sub_77254(v4, a1);
  }
  while ( v2 != 4 );
  return result;
}

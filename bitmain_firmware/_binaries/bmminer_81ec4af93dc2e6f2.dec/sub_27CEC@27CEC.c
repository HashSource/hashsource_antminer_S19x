int __fastcall sub_27CEC(int a1)
{
  int i; // r4
  int result; // r0
  bool v4; // zf

  for ( i = 0; i != 4; ++i )
  {
    result = sub_266F0(i);
    if ( result )
    {
      v4 = a1 == i;
      if ( a1 != i )
        v4 = a1 == 255;
      result = (unsigned __int8)i;
      if ( v4 )
        result = sub_76F14((unsigned __int8)i, 1);
    }
  }
  return result;
}

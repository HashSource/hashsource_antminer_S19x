int __fastcall sub_2826C(int a1)
{
  int i; // r4
  int result; // r0
  bool v4; // zf

  for ( i = 0; i != 4; ++i )
  {
    result = sub_26C0C(i);
    if ( result )
    {
      v4 = a1 == 255;
      if ( a1 != 255 )
        v4 = a1 == i;
      if ( v4 )
        result = sub_7A358((unsigned __int8)i, 1);
    }
  }
  return result;
}

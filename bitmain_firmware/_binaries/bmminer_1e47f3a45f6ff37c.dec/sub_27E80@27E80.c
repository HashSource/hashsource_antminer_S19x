int __fastcall sub_27E80(int a1, int a2, int a3, int a4)
{
  int i; // r4
  int result; // r0
  bool v10; // zf

  for ( i = 0; i != 4; ++i )
  {
    result = sub_26C0C(i);
    if ( result )
    {
      v10 = a1 == 255;
      if ( a1 != 255 )
        v10 = a1 == i;
      if ( v10 )
        result = sub_78D9C((unsigned __int8)i, a2, a3, a4);
    }
  }
  return result;
}

int __fastcall sub_27BD0(int a1, int a2, int a3, unsigned __int8 a4)
{
  int v4; // r7
  int i; // r4
  int result; // r0
  bool v10; // zf

  v4 = a4;
  for ( i = 0; i != 4; ++i )
  {
    result = sub_26C0C(i);
    if ( result )
    {
      v10 = a1 == 255;
      if ( a1 != 255 )
        v10 = a1 == (unsigned __int8)i;
      if ( v10 )
      {
        if ( a3 )
          result = sub_79674((unsigned __int8)i, v4, v4);
        else
          result = sub_79648((unsigned __int8)i, a2);
      }
    }
  }
  return result;
}

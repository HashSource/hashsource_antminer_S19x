int __fastcall sub_27938(int a1, int a2, int a3, int a4)
{
  int i; // r4
  int result; // r0
  bool v10; // zf

  for ( i = 0; i != 4; ++i )
  {
    result = sub_266F0(i);
    if ( result )
    {
      v10 = a1 == i;
      if ( a1 != i )
        v10 = a1 == 255;
      result = (unsigned __int8)i;
      if ( v10 )
        result = sub_75924((unsigned __int8)i, a2, a3, a4);
    }
  }
  return result;
}

int __fastcall sub_28314(int a1, int a2, int a3, int a4)
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
        v10 = i == a1;
      if ( v10 )
      {
        if ( a2 )
          result = sub_7A738((unsigned __int8)i, a4, 0);
        else
          result = sub_7A728((unsigned __int8)i, a3, a4, 0);
      }
    }
  }
  return result;
}

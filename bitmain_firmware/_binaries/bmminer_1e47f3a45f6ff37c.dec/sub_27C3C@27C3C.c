int __fastcall sub_27C3C(int a1)
{
  int i; // r4
  int v3; // r5
  int result; // r0
  bool v5; // zf

  for ( i = 0; i != 4; ++i )
  {
    v3 = (unsigned __int8)i;
    result = sub_26C0C(i);
    if ( result )
    {
      v5 = a1 == 255;
      if ( a1 != 255 )
        v5 = a1 == v3;
      if ( v5 )
        result = sub_7A748(v3);
    }
  }
  return result;
}

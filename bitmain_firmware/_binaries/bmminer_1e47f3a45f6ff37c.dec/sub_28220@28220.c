int __fastcall sub_28220(int a1, int a2, int a3, int a4)
{
  int i; // r4
  int result; // r0

  for ( i = 0; i != 4; ++i )
  {
    result = sub_26C0C(i);
    if ( result )
      result = sub_7A2B0((unsigned __int8)i, a2, a3, a4);
  }
  return result;
}

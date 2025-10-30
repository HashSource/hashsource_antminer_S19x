int __fastcall sub_281E0(int a1, int a2)
{
  int i; // r4
  int result; // r0

  for ( i = 0; i != 4; ++i )
  {
    result = sub_26C0C(i);
    if ( result )
      result = sub_7A274((unsigned __int8)i, a2, 0);
  }
  return result;
}

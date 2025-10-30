int __fastcall sub_27B90(int a1)
{
  int i; // r4
  int result; // r0

  for ( i = 0; i != 4; ++i )
  {
    result = sub_26C0C(i);
    if ( result )
      result = sub_78EA0((unsigned __int8)i, a1);
  }
  return result;
}

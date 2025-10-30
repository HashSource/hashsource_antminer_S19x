int __fastcall sub_287AC(int a1)
{
  int i; // r4
  int result; // r0

  for ( i = 0; i != 4; ++i )
  {
    result = sub_26C0C(i);
    if ( result )
      result = sub_79C20((unsigned __int8)i, a1);
  }
  return result;
}

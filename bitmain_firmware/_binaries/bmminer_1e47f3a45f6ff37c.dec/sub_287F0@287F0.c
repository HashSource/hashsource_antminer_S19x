int __fastcall sub_287F0(int a1)
{
  int i; // r4
  int v3; // r5
  int result; // r0

  for ( i = 0; i != 4; ++i )
  {
    v3 = (unsigned __int8)i;
    result = sub_26C0C(i);
    if ( result )
      result = sub_7A6A0(v3, a1);
  }
  return result;
}

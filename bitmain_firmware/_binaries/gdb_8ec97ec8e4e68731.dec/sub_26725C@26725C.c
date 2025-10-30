int __fastcall sub_26725C(int result, int a2)
{
  bool v2; // zf

  v2 = result >> 31 == a2;
  if ( result >> 31 == a2 )
    v2 = 1;
  if ( !v2 )
    sub_946E0("Value out of range.");
  return result;
}

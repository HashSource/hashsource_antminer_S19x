int __fastcall sub_188E4(int a1, int a2)
{
  int result; // r0

  if ( sub_265C0(a1) )
    return sub_17F00(a1, 2, a2);
  result = sub_18828(a1, a2);
  if ( result != 255 )
    return (__int16)(result + 15);
  return result;
}

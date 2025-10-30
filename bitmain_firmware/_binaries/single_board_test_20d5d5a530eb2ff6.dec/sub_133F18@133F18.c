int __fastcall sub_133F18(int *a1, int *a2, int *a3, int *a4)
{
  int result; // r0

  result = BN_sub(a1, a2, a3);
  if ( result )
  {
    result = 1;
    if ( a1[3] )
      return BN_add(a1, a1, a4);
  }
  return result;
}

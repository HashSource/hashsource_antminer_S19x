int __fastcall sub_133B10(int *a1, int *a2, int *a3, int *a4, int ***a5)
{
  int result; // r0

  result = BN_sub(a1, a2, a3);
  if ( result )
    return sub_1337FC(a1, a1, a4, a5);
  return result;
}

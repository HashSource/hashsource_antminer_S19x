int __fastcall sub_B59E4(int a1, int a2, int a3)
{
  int result; // r0
  int *v7; // r0

  if ( sub_B55B4() != 1 )
    return -1;
  result = socket(a1, a2, a3);
  if ( result == -1 )
  {
    v7 = _errno_location();
    sub_D0048(2, 4, *v7, "crypto/bio/b_sock2.c", 49);
    sub_D0048(32, 140, 118, "crypto/bio/b_sock2.c", 50);
    return -1;
  }
  return result;
}

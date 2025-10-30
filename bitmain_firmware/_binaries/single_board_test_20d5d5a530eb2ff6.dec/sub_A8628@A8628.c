int __fastcall sub_A8628(unsigned int **a1, int a2, int *a3, int a4)
{
  int result; // r0

  result = sub_A8250(a1, a2 + a4, a3);
  if ( result )
  {
    *a3 += a4;
    return 1;
  }
  return result;
}

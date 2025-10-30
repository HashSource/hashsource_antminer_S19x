int __fastcall sub_17CA50(int a1, int a2, int a3, int *a4)
{
  int result; // r0

  result = _fxstat64(3, a2, a3);
  if ( result == -1 )
  {
    sub_17CA34(a4);
    return -1;
  }
  return result;
}

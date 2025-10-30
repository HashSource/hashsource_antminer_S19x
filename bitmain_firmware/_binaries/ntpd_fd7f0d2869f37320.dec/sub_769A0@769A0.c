int __fastcall sub_769A0(FILE *a1)
{
  int result; // r0
  int *v2; // r0

  result = fflush(a1);
  if ( result )
  {
    v2 = _errno_location();
    return sub_7BCF8(*v2, "./../lib/isc/unix/stdio.c", 105);
  }
  return result;
}

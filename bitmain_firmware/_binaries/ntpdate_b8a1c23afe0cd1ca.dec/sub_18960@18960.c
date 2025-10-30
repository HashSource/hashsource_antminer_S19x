int __fastcall sub_18960(FILE *a1, int a2, int a3)
{
  int result; // r0
  int *v4; // r0

  result = fseek(a1, a2, a3);
  if ( result )
  {
    v4 = _errno_location();
    return sub_1A3F8(*v4, "./../lib/isc/unix/stdio.c", 60);
  }
  return result;
}

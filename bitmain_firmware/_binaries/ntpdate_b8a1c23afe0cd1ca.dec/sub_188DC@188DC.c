int __fastcall sub_188DC(FILE *a1)
{
  int result; // r0
  int *v2; // r0

  result = fclose(a1);
  if ( result )
  {
    v2 = _errno_location();
    return sub_1A3F8(*v2, "./../lib/isc/unix/stdio.c", 49);
  }
  return result;
}

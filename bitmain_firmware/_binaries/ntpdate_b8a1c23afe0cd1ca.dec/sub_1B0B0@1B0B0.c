int __fastcall sub_1B0B0(const char *a1)
{
  int result; // r0
  int *v2; // r0

  if ( !a1 )
    sub_1073C();
  result = unlink(a1);
  if ( result )
  {
    v2 = _errno_location();
    return sub_1A3F8(*v2, "./../lib/isc/unix/file.c", 326);
  }
  return result;
}

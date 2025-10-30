int __fastcall sub_1B6F0(const char *a1)
{
  int result; // r0
  int *v2; // r0

  if ( !a1 )
    sub_10C38();
  result = unlink(a1);
  if ( result )
  {
    v2 = _errno_location();
    return sub_1AA10(*v2, "./../lib/isc/unix/file.c", 326);
  }
  return result;
}

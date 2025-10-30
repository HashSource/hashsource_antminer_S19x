int __fastcall sub_1A120(const char *a1)
{
  int *v2; // r0

  if ( !a1 )
    sub_1073C();
  if ( chdir(a1) >= 0 )
    return 0;
  v2 = _errno_location();
  return sub_1A3F8(*v2, "./../lib/isc/unix/dir.c", 169);
}

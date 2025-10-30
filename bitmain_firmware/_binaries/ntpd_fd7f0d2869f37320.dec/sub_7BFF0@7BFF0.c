int __fastcall sub_7BFF0(int a1, int a2)
{
  int result; // r0
  int *v3; // r0

  if ( !a1 )
    sub_6FC54((int)"./../lib/isc/unix/file.c", 92, 0, "file != ((void *)0)");
  if ( !a2 )
    sub_6FC54((int)"./../lib/isc/unix/file.c", 93, 0, "stats != ((void *)0)");
  result = _xstat64(3, a1, a2);
  if ( result )
  {
    v3 = _errno_location();
    return sub_7BCF8(*v3, "./../lib/isc/unix/file.c", 96);
  }
  return result;
}

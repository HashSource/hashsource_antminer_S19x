int __fastcall sub_7AC88(int a1, int a2)
{
  int result; // r0
  int *v3; // r0

  if ( !a1 )
    sub_6ECC0((int)"./../lib/isc/unix/file.c", 92, 0, "file != ((void *)0)");
  result = _xstat64(3, a1, a2);
  if ( result )
  {
    v3 = _errno_location();
    return sub_7A990(*v3, "./../lib/isc/unix/file.c", 96);
  }
  return result;
}

int __fastcall sub_7B6F4(const char *a1, const char *a2)
{
  int result; // r0
  int *v3; // r0

  if ( !a1 )
    sub_6ECC0((int)"./../lib/isc/unix/file.c", 333, 0, "oldname != ((void *)0)");
  if ( !a2 )
    sub_6ECC0((int)"./../lib/isc/unix/file.c", 334, 0, "newname != ((void *)0)");
  result = rename(a1, a2);
  if ( result )
  {
    v3 = _errno_location();
    return sub_7A990(*v3, "./../lib/isc/unix/file.c", 340);
  }
  return result;
}

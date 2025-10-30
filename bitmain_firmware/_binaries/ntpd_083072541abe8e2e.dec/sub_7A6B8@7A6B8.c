int __fastcall sub_7A6B8(const char *a1)
{
  int *v2; // r0

  if ( !a1 )
    sub_6ECC0((int)"./../lib/isc/unix/dir.c", 166, 0, "dirname != ((void *)0)");
  if ( chdir(a1) >= 0 )
    return 0;
  v2 = _errno_location();
  return sub_7A990(*v2, "./../lib/isc/unix/dir.c", 169);
}

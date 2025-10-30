const char *__fastcall sub_7BA8C(const char *a1)
{
  char *v2; // r0

  if ( !a1 )
    sub_6ECC0((int)"./../lib/isc/unix/file.c", 395, 0, "filename != ((void *)0)");
  v2 = strrchr(a1, 47);
  if ( v2 )
    return v2 + 1;
  else
    return a1;
}

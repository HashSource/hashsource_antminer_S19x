int __fastcall sub_7CE9C(const char *a1, void *a2, size_t a3)
{
  const char *v5; // r7
  size_t v6; // r2

  if ( !a1 )
    sub_6FC54((int)"./../lib/isc/unix/file.c", 409, 0, "filename != ((void *)0)");
  if ( !a2 )
    sub_6FC54((int)"./../lib/isc/unix/file.c", 410, 0, "buf != ((void *)0)");
  v5 = sub_7CE18(a1);
  v6 = strlen(v5) + 1;
  if ( v6 > a3 )
    return 19;
  memcpy(a2, v5, v6);
  return 0;
}

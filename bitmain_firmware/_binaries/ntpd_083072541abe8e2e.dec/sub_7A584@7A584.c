int __fastcall sub_7A584(_DWORD *a1)
{
  DIR *v2; // r0
  int result; // r0

  if ( !a1 || *a1 != 1145655850 || (v2 = (DIR *)a1[322]) == 0 )
    sub_6ECC0(
      (int)"./../lib/isc/unix/dir.c",
      142,
      0,
      "(((dir) != ((void *)0)) && (((const isc__magic_t *)(dir))->magic == ((('D') << 24 | ('I') << 16 | ('R') << 8 | ('*"
      "'))))) && dir->handle != ((void *)0)");
  result = closedir(v2);
  a1[322] = 0;
  return result;
}

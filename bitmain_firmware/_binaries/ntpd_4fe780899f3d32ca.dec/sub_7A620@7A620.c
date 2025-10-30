int __fastcall sub_7A620(_DWORD *a1)
{
  DIR *v1; // r0

  if ( !a1 || *a1 != 1145655850 || (v1 = (DIR *)a1[322]) == 0 )
    sub_6ECC0(
      (int)"./../lib/isc/unix/dir.c",
      153,
      0,
      "(((dir) != ((void *)0)) && (((const isc__magic_t *)(dir))->magic == ((('D') << 24 | ('I') << 16 | ('R') << 8 | ('*"
      "'))))) && dir->handle != ((void *)0)");
  rewinddir(v1);
  return 0;
}

int __fastcall sub_7A4A4(int a1)
{
  int v2; // r0
  int v3; // r3
  unsigned __int8 *v4; // r4
  unsigned int v5; // r2
  size_t v6; // r0

  if ( !a1 || *(_DWORD *)a1 != 1145655850 || !*(_DWORD *)(a1 + 1288) )
    sub_6ECC0(
      (int)"./../lib/isc/unix/dir.c",
      110,
      0,
      "(((dir) != ((void *)0)) && (((const isc__magic_t *)(dir))->magic == ((('D') << 24 | ('I') << 16 | ('R') << 8 | ('*"
      "'))))) && dir->handle != ((void *)0)");
  v2 = readdir64();
  if ( !v2 )
    return 29;
  v4 = (unsigned __int8 *)(v2 + 19);
  v5 = strlen((const char *)(v2 + 19)) + 1;
  if ( v5 > 0x100 )
    return 34;
  sub_6D4DC((_BYTE *)(a1 + 1028), v4, v5);
  v6 = strlen((const char *)v4);
  v3 = 0;
  *(_DWORD *)(a1 + 1284) = v6;
  return v3;
}

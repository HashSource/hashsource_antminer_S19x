void __fastcall sub_70284(_DWORD **a1)
{
  _DWORD *v2; // r4
  FILE *v3; // r0
  struct ifaddrs *v4; // r0
  void *v5; // r0

  if ( !a1 )
    sub_6ECC0((int)"./../lib/isc/unix/interfaceiter.c", 316, 0, "iterp != ((void *)0)");
  v2 = *a1;
  if ( !*a1 || *v2 != 1229343047 )
    sub_6ECC0(
      (int)"./../lib/isc/unix/interfaceiter.c",
      318,
      0,
      "(((iter) != ((void *)0)) && (((const isc__magic_t *)(iter))->magic == ((('I') << 24 | ('F') << 16 | ('I') << 8 | ('G')))))");
  v3 = (FILE *)v2[42];
  if ( v3 )
    fclose(v3);
  v4 = (struct ifaddrs *)v2[4];
  v2[42] = 0;
  if ( v4 )
    freeifaddrs(v4);
  v5 = (void *)v2[2];
  v2[4] = 0;
  if ( v5 )
    free(v5);
  free(v2);
  *a1 = 0;
}

bool __fastcall sub_722B8(_DWORD *a1, const char *a2)
{
  void *v3; // r0
  void *v4; // r0
  const char *v6; // [sp+4h] [bp-10h]

  if ( !a1 || *a1 != 1281582695 )
    sub_6ECC0(
      (int)"./../lib/isc/log.c",
      1001,
      0,
      "(((lcfg) != ((void *)0)) && (((const isc__magic_t *)(lcfg))->magic == ((('L') << 24 | ('c') << 16 | ('f') << 8 | ('g')))))");
  v3 = (void *)a1[8];
  if ( a2 && *a2 )
  {
    if ( v3 )
    {
      v6 = a2;
      free(v3);
      a2 = v6;
    }
    v4 = sub_63D08(a2);
    a1[8] = v4;
    return v4 == 0;
  }
  else
  {
    if ( v3 )
      free(v3);
    a1[8] = 0;
    return 0;
  }
}

bool __fastcall sub_73298(_DWORD *a1, const char *a2)
{
  void *v4; // r0
  void *v5; // r0
  void *v7; // r0

  if ( !a1 || *a1 != 1281582695 )
    sub_6FC54(
      (int)"./../lib/isc/log.c",
      1001,
      0,
      "(((lcfg) != ((void *)0)) && (((const isc__magic_t *)(lcfg))->magic == ((('L') << 24 | ('c') << 16 | ('f') << 8 | ('g')))))");
  if ( a2 && *a2 )
  {
    v4 = (void *)a1[8];
    if ( v4 )
      free(v4);
    v5 = sub_64C8C(a2);
    a1[8] = v5;
    return v5 == 0;
  }
  else
  {
    v7 = (void *)a1[8];
    if ( v7 )
      free(v7);
    a1[8] = 0;
    return 0;
  }
}

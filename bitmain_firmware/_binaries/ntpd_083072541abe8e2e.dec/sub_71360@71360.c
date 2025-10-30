const char *__fastcall sub_71360(_DWORD *a1, char *s2)
{
  const char *v3; // r4

  if ( !a1 || *a1 != 1281586296 )
    sub_6ECC0(
      (int)"./../lib/isc/log.c",
      616,
      0,
      "(((lctx) != ((void *)0)) && (((const isc__magic_t *)(lctx))->magic == ((('L') << 24 | ('c') << 16 | ('t') << 8 | ('x')))))");
  if ( !s2 )
    sub_6ECC0((int)"./../lib/isc/log.c", 617, 0, "name != ((void *)0)");
  v3 = (const char *)a1[2];
  while ( *(_DWORD *)v3 )
  {
    if ( *((_DWORD *)v3 + 1) == -1 )
    {
      v3 = *(const char **)v3;
    }
    else
    {
      if ( !strcmp(*(const char **)v3, s2) )
        return v3;
      v3 += 8;
    }
  }
  return 0;
}

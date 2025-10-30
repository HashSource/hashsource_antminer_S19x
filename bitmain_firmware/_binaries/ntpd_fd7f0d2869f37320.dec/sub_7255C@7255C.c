const char *__fastcall sub_7255C(_DWORD *a1, char *s2)
{
  const char *v3; // r4
  const char *result; // r0

  if ( !a1 || *a1 != 1281586296 )
    sub_6FC54(
      (int)"./../lib/isc/log.c",
      683,
      0,
      "(((lctx) != ((void *)0)) && (((const isc__magic_t *)(lctx))->magic == ((('L') << 24 | ('c') << 16 | ('t') << 8 | ('x')))))");
  if ( !s2 )
    sub_6FC54((int)"./../lib/isc/log.c", 684, 0, "name != ((void *)0)");
  v3 = (const char *)a1[4];
LABEL_6:
  result = *(const char **)v3;
  if ( *(_DWORD *)v3 )
  {
    while ( 1 )
    {
      if ( *((_DWORD *)v3 + 1) == -1 )
      {
        v3 = result;
        goto LABEL_6;
      }
      if ( !strcmp(result, s2) )
        return v3;
      v3 += 8;
      result = *(const char **)v3;
      if ( !*(_DWORD *)v3 )
        return result;
    }
  }
  return result;
}

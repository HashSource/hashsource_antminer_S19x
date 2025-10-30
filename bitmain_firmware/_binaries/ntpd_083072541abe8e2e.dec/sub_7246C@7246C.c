int __fastcall sub_7246C(int a1)
{
  pthread_mutex_t *v2; // r6
  _DWORD *i; // r4
  FILE *v4; // r0
  int result; // r0

  if ( !a1 || *(_DWORD *)a1 != 1281586296 )
    sub_6ECC0(
      (int)"./../lib/isc/log.c",
      1036,
      0,
      "(((lctx) != ((void *)0)) && (((const isc__magic_t *)(lctx))->magic == ((('L') << 24 | ('c') << 16 | ('t') << 8 | ('x')))))");
  v2 = (pthread_mutex_t *)(a1 + 28);
  if ( pthread_mutex_lock((pthread_mutex_t *)(a1 + 28)) )
    sub_6F61C("./../lib/isc/log.c", 1038, "((pthread_mutex_lock(((&lctx->lock))) == 0) ? 0 : 34) == 0");
  for ( i = *(_DWORD **)(*(_DWORD *)(a1 + 52) + 8); i; i = (_DWORD *)i[13] )
  {
    while ( 1 )
    {
      if ( i[1] == 3 )
      {
        v4 = (FILE *)i[4];
        if ( v4 )
          break;
      }
      i = (_DWORD *)i[13];
      if ( !i )
        goto LABEL_10;
    }
    fclose(v4);
    i[4] = 0;
  }
LABEL_10:
  result = pthread_mutex_unlock(v2);
  if ( result )
    sub_6F61C("./../lib/isc/log.c", 1048, "((pthread_mutex_unlock(((&lctx->lock))) == 0) ? 0 : 34) == 0");
  return result;
}

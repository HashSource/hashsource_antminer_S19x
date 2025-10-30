char *__fastcall sub_71F0C(_DWORD *a1, _DWORD *a2)
{
  int v3; // r5
  char *result; // r0
  _DWORD *v5; // r3
  _DWORD *v6; // [sp+0h] [bp-Ch] BYREF

  if ( !a1 || *a1 != 1281586296 )
    sub_6FC54(
      (int)"./../lib/isc/log.c",
      436,
      0,
      "(((lctx) != ((void *)0)) && (((const isc__magic_t *)(lctx))->magic == ((('L') << 24 | ('c') << 16 | ('t') << 8 | ('x')))))");
  if ( !a2 || *a2 != 1281582695 )
    sub_6FC54(
      (int)"./../lib/isc/log.c",
      437,
      0,
      "(((lcfg) != ((void *)0)) && (((const isc__magic_t *)(lcfg))->magic == ((('L') << 24 | ('c') << 16 | ('f') << 8 | ('g')))))");
  v3 = a2[1];
  if ( (_DWORD *)v3 != a1 )
    sub_6FC54((int)"./../lib/isc/log.c", 438, 0, "lcfg->lctx == lctx");
  result = sub_714BC((int)a2);
  if ( !result )
  {
    if ( pthread_mutex_lock((pthread_mutex_t *)(v3 + 28)) )
      sub_705AC("./../lib/isc/log.c", 449, "((pthread_mutex_lock(((&lctx->lock))) == 0) ? 0 : 34) == 0");
    v5 = *(_DWORD **)(v3 + 52);
    *(_DWORD *)(v3 + 52) = a2;
    v6 = v5;
    if ( pthread_mutex_unlock((pthread_mutex_t *)(v3 + 28)) )
      sub_705AC("./../lib/isc/log.c", 454, "((pthread_mutex_unlock(((&lctx->lock))) == 0) ? 0 : 34) == 0");
    sub_71C90(&v6);
    return 0;
  }
  return result;
}

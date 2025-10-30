char *__fastcall sub_70F38(int a1, _DWORD *a2)
{
  char *v4; // r7
  _DWORD *v6; // r3
  _DWORD *v7; // [sp+0h] [bp-8h] BYREF

  if ( !a1 || *(_DWORD *)a1 != 1281586296 )
    sub_6ECC0(
      (int)"./../lib/isc/log.c",
      436,
      0,
      "(((lctx) != ((void *)0)) && (((const isc__magic_t *)(lctx))->magic == ((('L') << 24 | ('c') << 16 | ('t') << 8 | ('x')))))");
  if ( !a2 || *a2 != 1281582695 )
    sub_6ECC0(
      (int)"./../lib/isc/log.c",
      437,
      0,
      "(((lcfg) != ((void *)0)) && (((const isc__magic_t *)(lcfg))->magic == ((('L') << 24 | ('c') << 16 | ('f') << 8 | ('g')))))");
  if ( a2[1] != a1 )
    sub_6ECC0((int)"./../lib/isc/log.c", 438, 0, "lcfg->lctx == lctx");
  v4 = sub_704E0((int)a2);
  if ( !v4 )
  {
    if ( pthread_mutex_lock((pthread_mutex_t *)(a1 + 28)) )
      sub_6F61C("./../lib/isc/log.c", 449, "((pthread_mutex_lock(((&lctx->lock))) == 0) ? 0 : 34) == 0");
    v6 = *(_DWORD **)(a1 + 52);
    *(_DWORD *)(a1 + 52) = a2;
    v7 = v6;
    if ( pthread_mutex_unlock((pthread_mutex_t *)(a1 + 28)) )
      sub_6F61C("./../lib/isc/log.c", 454, "((pthread_mutex_unlock(((&lctx->lock))) == 0) ? 0 : 34) == 0");
    sub_70CC0(&v7);
  }
  return v4;
}

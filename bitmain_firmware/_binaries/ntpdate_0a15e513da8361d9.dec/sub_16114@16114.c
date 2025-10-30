char *__fastcall sub_16114(_DWORD *a1, _DWORD *a2)
{
  int v3; // r5
  char *result; // r0
  _DWORD *v5; // r3
  _DWORD *v6; // [sp+0h] [bp-Ch] BYREF

  if ( !a1 || *a1 != 1281586296 )
    sub_10C38();
  if ( !a2 || *a2 != 1281582695 )
    sub_10C38();
  v3 = a2[1];
  if ( (_DWORD *)v3 != a1 )
    sub_10C38();
  result = sub_156C4((int)a2);
  if ( !result )
  {
    if ( pthread_mutex_lock((pthread_mutex_t *)(v3 + 28)) )
      sub_15644("./../lib/isc/log.c", 449, "((pthread_mutex_lock(((&lctx->lock))) == 0) ? 0 : 34) == 0");
    v5 = *(_DWORD **)(v3 + 52);
    *(_DWORD *)(v3 + 52) = a2;
    v6 = v5;
    if ( pthread_mutex_unlock((pthread_mutex_t *)(v3 + 28)) )
      sub_15644("./../lib/isc/log.c", 454, "((pthread_mutex_unlock(((&lctx->lock))) == 0) ? 0 : 34) == 0");
    sub_15E98(&v6);
    return 0;
  }
  return result;
}

int __fastcall sub_263C0(const void *a1, int a2)
{
  int v4; // r4
  _DWORD *v5; // r5
  int v6; // r2
  int v7; // r4
  void *v8; // r0
  int *v10; // r0
  int *v11; // r0
  int *v12; // r0
  int *v13; // r0
  int *v14; // r0
  int *v15; // r0
  void *ptr; // [sp+14h] [bp-808h] BYREF
  char s[2052]; // [sp+18h] [bp-804h] BYREF

  v4 = dword_241D64;
  ptr = 0;
  if ( byte_1AECC5 && (byte_244080 || byte_1AECC4 || dword_9E320 > 6) )
  {
    snprintf(s, 0x800u, "%s, rec job data %p size: %d\n", "bitmain_update_job_cb", a1, a2);
    sub_47AB4(7, s, 0);
  }
  if ( pthread_mutex_lock((pthread_mutex_t *)(v4 + 420)) )
  {
    v12 = _errno_location();
    snprintf(
      s,
      0x800u,
      "WTF MUTEX ERROR ON LOCK! errno=%d in %s %s():%d",
      *v12,
      "bmminer.c",
      "bitmain_update_job_cb",
      611);
    sub_47AB4(3, s, 1);
    sub_62EC0(1);
  }
  v5 = calloc(1u, 0x738u);
  sub_26118(v5, (int)a1, a2);
  if ( !*((_BYTE *)v5 + 640) )
  {
    strcpy(s, "Bitmain S9 has to use stratum pools");
    sub_47AB4(3, s, 1);
    sub_62EC0(1);
  }
  if ( pthread_mutex_lock((pthread_mutex_t *)v4) )
  {
    v10 = _errno_location();
    snprintf(
      s,
      0x800u,
      "WTF MUTEX ERROR ON LOCK! errno=%d in %s %s():%d",
      *v10,
      "bmminer.c",
      "bitmain_update_job_cb",
      622);
    sub_47AB4(3, s, 1);
    sub_62EC0(1);
  }
  if ( pthread_rwlock_wrlock((pthread_rwlock_t *)(v4 + 24)) )
  {
    v11 = _errno_location();
    snprintf(
      s,
      0x800u,
      "WTF WRLOCK ERROR ON LOCK! errno=%d in %s %s():%d",
      *v11,
      "bmminer.c",
      "bitmain_update_job_cb",
      622);
    sub_47AB4(3, s, 1);
    sub_62EC0(1);
  }
  *(_DWORD *)(v4 + 476) = *v5;
  sub_24434(v4 + 4176, v4 + 2328);
  *(_DWORD *)(v4 + 6032) = *(_DWORD *)(v4 + 6028);
  sub_24434(v4 + 2328, v4 + 480);
  *(_DWORD *)(v4 + 6028) = *(_DWORD *)(v4 + 6024);
  sub_24434(v4 + 480, (int)v5);
  v6 = dword_9C550 + 1;
  *(_DWORD *)(v4 + 6024) = dword_9C550 + 1;
  dword_9C550 = v6;
  if ( pthread_rwlock_unlock((pthread_rwlock_t *)(v4 + 24)) )
  {
    v14 = _errno_location();
    snprintf(
      s,
      0x800u,
      "WTF RWLOCK ERROR ON UNLOCK! errno=%d in %s %s():%d",
      *v14,
      "bmminer.c",
      "bitmain_update_job_cb",
      634);
    sub_47AB4(3, s, 1);
    sub_62EC0(1);
  }
  if ( pthread_mutex_unlock((pthread_mutex_t *)v4) )
  {
    v15 = _errno_location();
    snprintf(
      s,
      0x800u,
      "WTF MUTEX ERROR ON UNLOCK! errno=%d in %s %s():%d",
      *v15,
      "bmminer.c",
      "bitmain_update_job_cb",
      634);
    sub_47AB4(3, s, 1);
    sub_62EC0(1);
  }
  off_9E444();
  sub_23D5C(&ptr, (int)v5, *(_DWORD *)(v4 + 6024));
  pthread_mutex_lock(&stru_A0D98);
  sub_23FD4((unsigned __int8 *)ptr);
  pthread_mutex_unlock(&stru_A0D98);
  free(ptr);
  if ( pthread_mutex_unlock((pthread_mutex_t *)(v4 + 420)) )
  {
    v13 = _errno_location();
    snprintf(
      s,
      0x800u,
      "WTF MUTEX ERROR ON UNLOCK! errno=%d in %s %s():%d",
      *v13,
      "bmminer.c",
      "bitmain_update_job_cb",
      644);
    sub_47AB4(3, s, 1);
    sub_62EC0(1);
  }
  off_9E444();
  if ( (int)v5[427] > 0 )
  {
    v7 = 0;
    do
    {
      v8 = *(void **)(v5[169] + 4 * v7++);
      free(v8);
    }
    while ( v5[427] > v7 );
  }
  free((void *)v5[169]);
  free((void *)v5[392]);
  free((void *)v5[168]);
  free((void *)v5[153]);
  free(v5);
  return 0;
}

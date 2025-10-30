int __fastcall sub_37FD4(const void *a1, unsigned int a2)
{
  int v2; // r4
  const void *v3; // r7
  int v5; // r3
  void *v6; // r0
  int v7; // r7
  _DWORD *v9; // r5
  int v10; // r2
  int v11; // r4
  void *v12; // r0
  int *v13; // r0
  int v14; // r3
  int *v15; // r0
  int v16; // r3
  int *v17; // r0
  int v18; // r3
  int *v19; // r0
  int v20; // r3
  int *v21; // r0
  int v22; // r3
  int *v23; // r0
  int v24; // r3
  void *ptr; // [sp+1Ch] [bp-808h] BYREF
  char s[2052]; // [sp+20h] [bp-804h] BYREF

  v2 = dword_5C1F58;
  v3 = a1;
  ptr = 0;
  if ( byte_4B9A22 && (byte_5C0EFC || byte_4B9A21 || dword_B3094 > 6) )
  {
    snprintf(s, 0x800u, "%s, rec job data %p size: %d\n", "bitmain_update_job_cb", a1, a2);
    a1 = (const void *)sub_3B6AC(7, s, 0, v5);
  }
  if ( (unsigned int)sub_40F54(a1) <= 2 )
  {
    pthread_mutex_lock(&mutex);
    v6 = (void *)dword_B6E8C;
    if ( !dword_B6E8C || a2 > dword_B6E88 )
    {
      v6 = realloc((void *)dword_B6E8C, a2);
      dword_B6E8C = (int)v6;
    }
    memcpy(v6, v3, a2);
    v7 = 0;
    dword_B6E88 = a2;
    pthread_mutex_unlock(&mutex);
    return v7;
  }
  v9 = calloc(1u, 0x748u);
  if ( sub_37CF8(v9, (int)v3, a2) )
  {
    v7 = -1;
    free(v9);
    return v7;
  }
  if ( !*((_BYTE *)v9 + 656) )
  {
    strcpy(s, "Bitmain S9 has to use stratum pools");
    sub_3B6AC(3, s, 1, *(_DWORD *)"m pools");
  }
  if ( pthread_mutex_lock((pthread_mutex_t *)(v2 + 112)) )
  {
    v21 = _errno_location();
    snprintf(
      s,
      0x800u,
      "WTF MUTEX ERROR ON LOCK! errno=%d in %s %s():%d",
      *v21,
      "bmminer.c",
      "bitmain_update_job_cb",
      2320);
    sub_3B6AC(3, s, 1, v22);
  }
  if ( pthread_mutex_lock((pthread_mutex_t *)v2) )
  {
    v23 = _errno_location();
    snprintf(
      s,
      0x800u,
      "WTF MUTEX ERROR ON LOCK! errno=%d in %s %s():%d",
      *v23,
      "bmminer.c",
      "bitmain_update_job_cb",
      2322);
    sub_3B6AC(3, s, 1, v24);
  }
  if ( pthread_rwlock_wrlock((pthread_rwlock_t *)(v2 + 24)) )
  {
    v13 = _errno_location();
    snprintf(
      s,
      0x800u,
      "WTF WRLOCK ERROR ON LOCK! errno=%d in %s %s():%d",
      *v13,
      "bmminer.c",
      "bitmain_update_job_cb",
      2322);
    sub_3B6AC(3, s, 1, v14);
  }
  *(_DWORD *)(v2 + 168) = *v9;
  sub_42578(v2 + 5764, v2 + 3900);
  *(_DWORD *)(v2 + 7640) = *(_DWORD *)(v2 + 7636);
  sub_42578(v2 + 3900, v2 + 2036);
  *(_DWORD *)(v2 + 7636) = *(_DWORD *)(v2 + 7632);
  sub_42578(v2 + 2036, v2 + 172);
  *(_DWORD *)(v2 + 7632) = *(_DWORD *)(v2 + 7628);
  sub_42578(v2 + 172, v9);
  v10 = dword_B2FA8 + 1;
  *(_DWORD *)(v2 + 7628) = dword_B2FA8 + 1;
  dword_B2FA8 = v10;
  if ( pthread_rwlock_unlock((pthread_rwlock_t *)(v2 + 24)) )
  {
    v15 = _errno_location();
    snprintf(
      s,
      0x800u,
      "WTF RWLOCK ERROR ON UNLOCK! errno=%d in %s %s():%d",
      *v15,
      "bmminer.c",
      "bitmain_update_job_cb",
      2337);
    sub_3B6AC(3, s, 1, v16);
  }
  if ( pthread_mutex_unlock((pthread_mutex_t *)v2) )
  {
    v17 = _errno_location();
    snprintf(
      s,
      0x800u,
      "WTF MUTEX ERROR ON UNLOCK! errno=%d in %s %s():%d",
      *v17,
      "bmminer.c",
      "bitmain_update_job_cb",
      2337);
    sub_3B6AC(3, s, 1, v18);
  }
  off_B31B8();
  sub_41D58(&ptr, v9, *(_DWORD *)(v2 + 7628));
  pthread_mutex_lock(&stru_534CDC);
  sub_42000(ptr);
  pthread_mutex_unlock(&stru_534CDC);
  free(ptr);
  if ( pthread_mutex_unlock((pthread_mutex_t *)(v2 + 112)) )
  {
    v19 = _errno_location();
    snprintf(
      s,
      0x800u,
      "WTF MUTEX ERROR ON UNLOCK! errno=%d in %s %s():%d",
      *v19,
      "bmminer.c",
      "bitmain_update_job_cb",
      2347);
    sub_3B6AC(3, s, 1, v20);
  }
  off_B31B8();
  if ( (int)v9[431] > 0 )
  {
    v11 = 0;
    do
    {
      v12 = *(void **)(v9[173] + 4 * v11++);
      free(v12);
    }
    while ( v9[431] > v11 );
  }
  free((void *)v9[173]);
  free((void *)v9[396]);
  free((void *)v9[172]);
  free((void *)v9[157]);
  free(v9);
  return 0;
}

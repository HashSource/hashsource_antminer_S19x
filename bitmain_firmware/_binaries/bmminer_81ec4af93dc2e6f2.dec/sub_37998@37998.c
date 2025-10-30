int __fastcall sub_37998(const void *a1, unsigned int a2)
{
  const void *v2; // r7
  int v4; // r4
  int v5; // r3
  void *v6; // r0
  void **v8; // r5
  int v9; // r7
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

  v2 = a1;
  v4 = dword_5BD0A0;
  ptr = 0;
  if ( byte_4B6CA6 && (byte_5BC044 || byte_4B6CA5 || dword_AFC2C > 6) )
  {
    snprintf(s, 0x800u, "%s, rec job data %p size: %d\n", "bitmain_update_job_cb", a1, a2);
    a1 = (const void *)sub_3AF5C(7, s, 0, v5);
  }
  if ( (unsigned int)sub_3F36C(a1) > 2 )
  {
    v8 = (void **)calloc(1u, 0x738u);
    v9 = sub_376A8(v8, (int)v2, a2);
    if ( v9 )
    {
      v9 = -1;
      free(v8);
    }
    else
    {
      if ( !*((_BYTE *)v8 + 640) )
      {
        strcpy(s, "Bitmain S9 has to use stratum pools");
        sub_3AF5C(3, s, 1, *(_DWORD *)"m pools");
      }
      if ( pthread_mutex_lock((pthread_mutex_t *)(v4 + 112)) )
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
        sub_3AF5C(3, s, 1, v22);
      }
      if ( pthread_mutex_lock((pthread_mutex_t *)v4) )
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
        sub_3AF5C(3, s, 1, v24);
      }
      if ( pthread_rwlock_wrlock((pthread_rwlock_t *)(v4 + 24)) )
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
        sub_3AF5C(3, s, 1, v14);
      }
      *(_DWORD *)(v4 + 168) = *v8;
      sub_40984(v4 + 5716, v4 + 3868);
      *(_DWORD *)(v4 + 7576) = *(_DWORD *)(v4 + 7572);
      sub_40984(v4 + 3868, v4 + 2020);
      *(_DWORD *)(v4 + 7572) = *(_DWORD *)(v4 + 7568);
      sub_40984(v4 + 2020, v4 + 172);
      *(_DWORD *)(v4 + 7568) = *(_DWORD *)(v4 + 7564);
      sub_40984(v4 + 172, v8);
      v10 = dword_AFB40 + 1;
      *(_DWORD *)(v4 + 7564) = dword_AFB40 + 1;
      dword_AFB40 = v10;
      if ( pthread_rwlock_unlock((pthread_rwlock_t *)(v4 + 24)) )
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
        sub_3AF5C(3, s, 1, v16);
      }
      if ( pthread_mutex_unlock((pthread_mutex_t *)v4) )
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
        sub_3AF5C(3, s, 1, v18);
      }
      off_AFD50();
      sub_401B8(&ptr, v8, *(_DWORD *)(v4 + 7564));
      pthread_mutex_lock(&stru_4B6E50);
      sub_4044C(ptr);
      pthread_mutex_unlock(&stru_4B6E50);
      free(ptr);
      if ( pthread_mutex_unlock((pthread_mutex_t *)(v4 + 112)) )
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
        sub_3AF5C(3, s, 1, v20);
      }
      off_AFD50();
      if ( (int)v8[427] > 0 )
      {
        v11 = 0;
        do
        {
          v12 = (void *)*((_DWORD *)v8[169] + v11++);
          free(v12);
        }
        while ( (int)v8[427] > v11 );
      }
      free(v8[169]);
      free(v8[392]);
      free(v8[168]);
      free(v8[153]);
      free(v8);
    }
    return v9;
  }
  else
  {
    pthread_mutex_lock(&mutex);
    v6 = (void *)dword_B4114;
    if ( !dword_B4114 || dword_B4110 < a2 )
    {
      v6 = realloc((void *)dword_B4114, a2);
      dword_B4114 = (int)v6;
    }
    memcpy(v6, v2, a2);
    dword_B4110 = a2;
    pthread_mutex_unlock(&mutex);
    return 0;
  }
}

int __fastcall sub_24434(int result, int a2)
{
  pthread_mutex_t *v2; // r8
  int v3; // r4
  int v5; // r7
  size_t v6; // r5
  void *v7; // r0
  int v8; // r5
  void *v9; // r0
  int v10; // lr
  int v11; // r12
  _DWORD *v12; // r11
  int v13; // r5
  int v14; // r10
  _DWORD *v15; // r3
  _DWORD *v16; // r2
  int v17; // r12
  int v18; // r0
  int v19; // r1
  int v20; // r12
  int v21; // r0
  int v22; // r1
  int *v23; // r0
  int *v24; // r0
  int *v25; // r0
  int *v26; // r0
  char s[2088]; // [sp+10h] [bp-828h] BYREF

  if ( *(_DWORD *)(a2 + 672) )
  {
    v2 = (pthread_mutex_t *)(result + 212);
    v3 = result;
    v5 = *(_DWORD *)(a2 + 1708);
    v6 = *(_DWORD *)(a2 + 1572);
    if ( pthread_mutex_lock((pthread_mutex_t *)(result + 212)) )
    {
      v24 = _errno_location();
      snprintf(
        s,
        0x800u,
        "WTF MUTEX ERROR ON LOCK! errno=%d in %s %s():%d",
        *v24,
        "driver-btm-api.c",
        "copy_pool_stratum",
        1216);
      sub_47AB4(3, s, 1);
      sub_62EC0(1);
    }
    if ( pthread_rwlock_wrlock((pthread_rwlock_t *)(v3 + 236)) )
    {
      v25 = _errno_location();
      snprintf(
        s,
        0x800u,
        "WTF WRLOCK ERROR ON LOCK! errno=%d in %s %s():%d",
        *v25,
        "driver-btm-api.c",
        "copy_pool_stratum",
        1216);
      sub_47AB4(3, s, 1);
      sub_62EC0(1);
    }
    free(*(void **)(v3 + 672));
    free(*(void **)(v3 + 612));
    free(*(void **)(v3 + 1568));
    if ( (v6 & 3) != 0 )
      v6 = (v6 & 0xFFFFFFFC) + 4;
    v7 = calloc(v6, 1u);
    *(_DWORD *)(v3 + 1568) = v7;
    if ( !v7 )
    {
      strcpy(s, "Failed to calloc pool_stratum coinbase in c5");
      sub_47AB4(3, s, 1);
      sub_62EC0(1);
    }
    memcpy(v7, *(const void **)(a2 + 1568), v6);
    if ( *(int *)(v3 + 1708) > 0 )
    {
      v8 = 0;
      do
      {
        v9 = *(void **)(*(_DWORD *)(v3 + 676) + 4 * v8++);
        free(v9);
      }
      while ( *(_DWORD *)(v3 + 1708) > v8 );
    }
    if ( v5 )
    {
      v12 = realloc(*(void **)(v3 + 676), 4 * v5 + 1);
      *(_DWORD *)(v3 + 676) = v12;
      if ( v5 > 0 )
      {
        v13 = 0;
        while ( 1 )
        {
          v14 = 4 * v13;
          v12[v13] = malloc(0x20u);
          v15 = *(_DWORD **)(*(_DWORD *)(v3 + 676) + 4 * v13);
          if ( !v15 )
          {
            strcpy(s, "Failed to malloc pool_stratum swork merkle_bin");
            sub_47AB4(3, s, 1);
            sub_62EC0(1);
          }
          ++v13;
          v16 = *(_DWORD **)(*(_DWORD *)(a2 + 676) + v14);
          v17 = v16[1];
          v18 = v16[2];
          v19 = v16[3];
          *v15 = *v16;
          v15[1] = v17;
          v15[2] = v18;
          v15[3] = v19;
          v20 = v16[5];
          v21 = v16[6];
          v22 = v16[7];
          v15[4] = v16[4];
          v15[5] = v20;
          v15[6] = v21;
          v15[7] = v22;
          if ( v5 == v13 )
            break;
          v12 = *(_DWORD **)(v3 + 676);
        }
      }
    }
    *(_DWORD *)v3 = *(_DWORD *)a2;
    *(_QWORD *)(v3 + 1824) = *(_QWORD *)(a2 + 1824);
    *(_DWORD *)(v3 + 1572) = *(_DWORD *)(a2 + 1572);
    *(_DWORD *)(v3 + 1576) = *(_DWORD *)(a2 + 1576);
    *(_DWORD *)(v3 + 632) = *(_DWORD *)(a2 + 632);
    *(_DWORD *)(v3 + 1708) = *(_DWORD *)(a2 + 1708);
    *(_DWORD *)(v3 + 672) = _strdup(*(const char **)(a2 + 672));
    *(_DWORD *)(v3 + 612) = _strdup(*(const char **)(a2 + 612));
    v10 = *(_DWORD *)(a2 + 1808);
    v11 = *(_DWORD *)(a2 + 1812);
    *(_DWORD *)(v3 + 1804) = *(_DWORD *)(a2 + 1804);
    *(_DWORD *)(v3 + 1808) = v10;
    *(_DWORD *)(v3 + 1812) = v11;
    memcpy((void *)(v3 + 1580), (const void *)(a2 + 1580), 0x80u);
    if ( pthread_rwlock_unlock((pthread_rwlock_t *)(v3 + 236)) )
    {
      v26 = _errno_location();
      snprintf(
        s,
        0x800u,
        "WTF RWLOCK ERROR ON UNLOCK! errno=%d in %s %s():%d",
        *v26,
        "driver-btm-api.c",
        "copy_pool_stratum",
        1254);
      sub_47AB4(3, s, 1);
      sub_62EC0(1);
    }
    if ( pthread_mutex_unlock(v2) )
    {
      v23 = _errno_location();
      snprintf(
        s,
        0x800u,
        "WTF MUTEX ERROR ON UNLOCK! errno=%d in %s %s():%d",
        *v23,
        "driver-btm-api.c",
        "copy_pool_stratum",
        1254);
      sub_47AB4(3, s, 1);
      sub_62EC0(1);
    }
    return off_9E444();
  }
  return result;
}

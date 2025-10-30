int __fastcall sub_42578(int result, int a2)
{
  int v2; // r7
  size_t v3; // r5
  pthread_mutex_t *v4; // r8
  int v5; // r4
  void *v7; // r0
  int v8; // r5
  void *v9; // r0
  char *v10; // r0
  const void *v11; // r1
  int v12; // r6
  int v13; // t1
  int v14; // lr
  int v15; // r12
  _DWORD *v16; // r0
  _DWORD *v17; // r11
  int v18; // r5
  _DWORD *v19; // r2
  int v20; // r12
  int v21; // r0
  int v22; // r1
  int v23; // r12
  int v24; // r0
  int v25; // r1
  int v26; // r10
  _DWORD *v27; // r3
  int *v28; // r0
  int v29; // r3
  int *v30; // r0
  int v31; // r3
  int *v32; // r0
  int v33; // r3
  int *v34; // r0
  int v35; // r3
  char s[2052]; // [sp+10h] [bp-804h] BYREF

  v2 = *(_DWORD *)(a2 + 1724);
  v3 = *(_DWORD *)(a2 + 1588);
  if ( *(_DWORD *)(a2 + 688) )
  {
    v4 = (pthread_mutex_t *)(result + 212);
    v5 = result;
    if ( pthread_mutex_lock((pthread_mutex_t *)(result + 212)) )
    {
      v32 = _errno_location();
      snprintf(
        s,
        0x800u,
        "WTF MUTEX ERROR ON LOCK! errno=%d in %s %s():%d",
        *v32,
        "driver-btm-api.c",
        "copy_pool_stratum",
        2043);
      sub_3B6AC(3, s, 1, v33);
      nullsub_1();
    }
    if ( pthread_rwlock_wrlock((pthread_rwlock_t *)(v5 + 236)) )
    {
      v34 = _errno_location();
      snprintf(
        s,
        0x800u,
        "WTF WRLOCK ERROR ON LOCK! errno=%d in %s %s():%d",
        *v34,
        "driver-btm-api.c",
        "copy_pool_stratum",
        2043);
      sub_3B6AC(3, s, 1, v35);
      nullsub_1();
    }
    free(*(void **)(v5 + 688));
    free(*(void **)(v5 + 628));
    free(*(void **)(v5 + 1584));
    if ( (v3 & 3) != 0 )
      v3 = (v3 & 0xFFFFFFFC) + 4;
    v7 = calloc(v3, 1u);
    *(_DWORD *)(v5 + 1584) = v7;
    if ( !v7 )
    {
      strcpy(s, "Failed to calloc pool_stratum coinbase in c5");
      sub_3B6AC(3, s, 1, *(int *)"");
      nullsub_1();
      v7 = *(void **)(v5 + 1584);
    }
    memcpy(v7, *(const void **)(a2 + 1584), v3);
    if ( *(int *)(v5 + 1724) > 0 )
    {
      v8 = 0;
      do
      {
        v9 = *(void **)(*(_DWORD *)(v5 + 692) + 4 * v8++);
        free(v9);
      }
      while ( *(_DWORD *)(v5 + 1724) > v8 );
    }
    if ( v2 )
    {
      v16 = realloc(*(void **)(v5 + 692), 4 * v2 + 1);
      *(_DWORD *)(v5 + 692) = v16;
      if ( v2 > 0 )
      {
        v17 = v16;
        v18 = 0;
        while ( 1 )
        {
          v26 = 4 * v18;
          v17[v18] = malloc(0x20u);
          v27 = *(_DWORD **)(*(_DWORD *)(v5 + 692) + 4 * v18);
          if ( !v27 )
          {
            strcpy(s, "Failed to malloc pool_stratum swork merkle_bin");
            sub_3B6AC(3, s, 1, *(int *)"in");
            nullsub_1();
            v27 = *(_DWORD **)(*(_DWORD *)(v5 + 692) + 4 * v18);
          }
          ++v18;
          v19 = *(_DWORD **)(*(_DWORD *)(a2 + 692) + v26);
          v20 = v19[1];
          v21 = v19[2];
          v22 = v19[3];
          *v27 = *v19;
          v27[1] = v20;
          v27[2] = v21;
          v27[3] = v22;
          v23 = v19[5];
          v24 = v19[6];
          v25 = v19[7];
          v27[4] = v19[4];
          v27[5] = v23;
          v27[6] = v24;
          v27[7] = v25;
          if ( v18 == v2 )
            break;
          v17 = *(_DWORD **)(v5 + 692);
        }
      }
    }
    *(_DWORD *)v5 = *(_DWORD *)a2;
    *(_QWORD *)(v5 + 1840) = *(_QWORD *)(a2 + 1840);
    *(_DWORD *)(v5 + 1588) = *(_DWORD *)(a2 + 1588);
    *(_DWORD *)(v5 + 1592) = *(_DWORD *)(a2 + 1592);
    *(_DWORD *)(v5 + 648) = *(_DWORD *)(a2 + 648);
    *(_DWORD *)(v5 + 1724) = *(_DWORD *)(a2 + 1724);
    *(_DWORD *)(v5 + 688) = _strdup(*(const char **)(a2 + 688));
    v10 = _strdup(*(const char **)(a2 + 628));
    v11 = (const void *)(a2 + 1596);
    *(_DWORD *)(v5 + 628) = v10;
    v13 = *(_DWORD *)(a2 + 1820);
    v12 = a2 + 1820;
    v14 = *(_DWORD *)(v12 + 4);
    v15 = *(_DWORD *)(v12 + 8);
    *(_DWORD *)(v5 + 1820) = v13;
    *(_DWORD *)(v5 + 1824) = v14;
    *(_DWORD *)(v5 + 1828) = v15;
    memcpy((void *)(v5 + 1596), v11, 0x80u);
    if ( pthread_rwlock_unlock((pthread_rwlock_t *)(v5 + 236)) )
    {
      v28 = _errno_location();
      snprintf(
        s,
        0x800u,
        "WTF RWLOCK ERROR ON UNLOCK! errno=%d in %s %s():%d",
        *v28,
        "driver-btm-api.c",
        "copy_pool_stratum",
        2081);
      sub_3B6AC(3, s, 1, v29);
      nullsub_1();
    }
    if ( pthread_mutex_unlock(v4) )
    {
      v30 = _errno_location();
      snprintf(
        s,
        0x800u,
        "WTF MUTEX ERROR ON UNLOCK! errno=%d in %s %s():%d",
        *v30,
        "driver-btm-api.c",
        "copy_pool_stratum",
        2081);
      sub_3B6AC(3, s, 1, v31);
      nullsub_1();
    }
    return off_B31B8();
  }
  return result;
}

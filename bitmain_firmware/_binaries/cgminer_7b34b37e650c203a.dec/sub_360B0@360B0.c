int __fastcall sub_360B0(int a1, int a2)
{
  pthread_mutex_t *v2; // r8
  size_t v5; // r11
  int v6; // lr
  int v7; // r0
  int v8; // r3
  int v9; // r2
  int v10; // r5
  const void *v11; // r1
  int *v12; // r2
  char *v13; // r0
  unsigned int v14; // t1
  int v15; // r0
  char *v17; // r9
  const char *v18; // r0
  char *v19; // r8
  int *v20; // r0
  int *v21; // r0
  int *v22; // r0
  int *v23; // r0
  int *v24; // r0
  int *v25; // r0
  __int64 v26; // [sp+18h] [bp-86Ch] BYREF
  _BYTE v27[28]; // [sp+20h] [bp-864h] BYREF
  char v28; // [sp+3Ch] [bp-848h] BYREF
  char v29[28]; // [sp+40h] [bp-844h] BYREF
  int v30; // [sp+5Ch] [bp-828h] BYREF
  _BYTE v31[32]; // [sp+60h] [bp-824h] BYREF
  char s[2052]; // [sp+80h] [bp-804h] BYREF

  v2 = (pthread_mutex_t *)(a1 + 212);
  if ( pthread_mutex_lock((pthread_mutex_t *)(a1 + 212)) )
  {
    v20 = _errno_location();
    snprintf(s, 0x800u, "WTF MUTEX ERROR ON LOCK! errno=%d in %s %s():%d", *v20, "cgminer.c", "gen_stratum_work", 8360);
    goto LABEL_29;
  }
  if ( pthread_rwlock_wrlock((pthread_rwlock_t *)(a1 + 236)) )
  {
    v21 = _errno_location();
    snprintf(s, 0x800u, "WTF WRLOCK ERROR ON LOCK! errno=%d in %s %s():%d", *v21, "cgminer.c", "gen_stratum_work", 8360);
    goto LABEL_29;
  }
  v5 = *(_DWORD *)(a1 + 632);
  v6 = *(_DWORD *)(a1 + 1568);
  v7 = *(_DWORD *)(a1 + 1576);
  v26 = *(_QWORD *)(a1 + 624);
  sub_254E8((void *)(v6 + v7), &v26, v5, (int)"cgminer.c", (int)"gen_stratum_work", 8365);
  v8 = *(_DWORD *)(a1 + 624);
  v9 = *(_DWORD *)(a1 + 628);
  ++*(_QWORD *)(a1 + 624);
  *(_DWORD *)(a2 + 296) = v8;
  *(_DWORD *)(a2 + 300) = v9;
  *(_DWORD *)(a2 + 304) = *(_DWORD *)(a1 + 632);
  if ( pthread_rwlock_unlock((pthread_rwlock_t *)(a1 + 236)) )
  {
    v22 = _errno_location();
    snprintf(
      s,
      0x800u,
      "WTF RWLOCK ERROR ON UNLOCK! errno=%d in %s %s():%d",
      *v22,
      "cgminer.c",
      "gen_stratum_work",
      8371);
    goto LABEL_29;
  }
  if ( pthread_rwlock_rdlock((pthread_rwlock_t *)(a1 + 236)) )
  {
    v23 = _errno_location();
    snprintf(s, 0x800u, "WTF RDLOCK ERROR ON LOCK! errno=%d in %s %s():%d", *v23, "cgminer.c", "gen_stratum_work", 8371);
    goto LABEL_29;
  }
  v10 = pthread_mutex_unlock(v2);
  if ( v10 )
  {
    v24 = _errno_location();
    snprintf(
      s,
      0x800u,
      "WTF MUTEX ERROR ON UNLOCK! errno=%d in %s %s():%d",
      *v24,
      "cgminer.c",
      "gen_stratum_work",
      8371);
    goto LABEL_29;
  }
  sub_21C34(*(char **)(a1 + 1568), *(_DWORD *)(a1 + 1572), s);
  sub_21C34(s, 0x20u, v27);
  sub_254E8(v29, v27, 0x20u, (int)"cgminer.c", (int)"gen_stratum_work", 8375);
  if ( *(int *)(a1 + 1708) > 0 )
  {
    do
    {
      v11 = *(const void **)(*(_DWORD *)(a1 + 676) + 4 * v10++);
      sub_254E8(v31, v11, 0x20u, (int)"cgminer.c", (int)"gen_stratum_work", 8379);
      sub_21C34(v29, 0x40u, s);
      sub_21C34(s, 0x20u, v27);
      sub_254E8(v29, v27, 0x20u, (int)"cgminer.c", (int)"gen_stratum_work", 8381);
    }
    while ( *(_DWORD *)(a1 + 1708) > v10 );
  }
  v12 = (int *)&v28;
  v13 = (char *)&v26 + 4;
  do
  {
    v14 = v12[1];
    ++v12;
    *((_DWORD *)v13 + 1) = bswap32(v14);
    v13 += 4;
  }
  while ( &v30 != v12 );
  sub_254E8((void *)a2, (const void *)(a1 + 1580), 0x70u, (int)"cgminer.c", (int)"gen_stratum_work", 8390);
  sub_254E8((void *)(a2 + 36), v27, 0x20u, (int)"cgminer.c", (int)"gen_stratum_work", 8391);
  *(_QWORD *)(a2 + 312) = *(_QWORD *)(a1 + 1824);
  *(_DWORD *)(a2 + 288) = _strdup(*(const char **)(a1 + 672));
  *(_DWORD *)(a2 + 320) = _strdup(*(const char **)(a1 + 612));
  *(_DWORD *)(a2 + 308) = _strdup((const char *)(a1 + 1804));
  if ( pthread_rwlock_unlock((pthread_rwlock_t *)(a1 + 236)) )
  {
    v25 = _errno_location();
    snprintf(
      s,
      0x800u,
      "WTF RWLOCK ERROR ON UNLOCK! errno=%d in %s %s():%d",
      *v25,
      "cgminer.c",
      "gen_stratum_work",
      8402);
LABEL_29:
    sub_20F58(3, s, 1);
    sub_2E6B0(1, 1);
  }
  off_67ED8();
  if ( !byte_68BD5 )
    goto LABEL_12;
  v17 = sub_22C24(a2, 112);
  v18 = sub_22C24((int)v27, 32);
  v19 = (char *)v18;
  if ( byte_68BD5 )
  {
    if ( !byte_74500 && !byte_68BD4 && dword_67DB4 <= 6 )
      goto LABEL_21;
    snprintf(s, 0x800u, "Generated stratum merkle %s", v18);
    sub_20F58(7, s, 0);
    if ( !byte_68BD5 )
      goto LABEL_27;
    if ( !byte_74500 )
    {
LABEL_21:
      if ( !byte_68BD4 && dword_67DB4 <= 6 )
        goto LABEL_24;
    }
    snprintf(s, 0x800u, "Generated stratum header %s", v17);
    sub_20F58(7, s, 0);
    if ( byte_68BD5 )
    {
      if ( byte_74500 )
      {
LABEL_26:
        snprintf(
          s,
          0x800u,
          "Work job_id %s nonce2 %llu ntime %s",
          *(const char **)(a2 + 288),
          *(_QWORD *)(a2 + 296),
          *(const char **)(a2 + 308));
        sub_20F58(7, s, 0);
        goto LABEL_27;
      }
LABEL_24:
      if ( !byte_68BD4 && dword_67DB4 <= 6 )
        goto LABEL_27;
      goto LABEL_26;
    }
  }
LABEL_27:
  free(v17);
  free(v19);
LABEL_12:
  sub_2B3A4(a2);
  sub_2D950((void *)(a2 + 160));
  ++dword_767E0;
  if ( time(0) - dword_691A4 > 5 )
  {
    dword_691A4 = time(0);
    dword_691A8 = dword_767E0;
  }
  v15 = dword_691AC;
  *(_BYTE *)(a2 + 284) = 1;
  *(_DWORD *)(a2 + 336) = v15;
  *(_DWORD *)(a2 + 248) = 0;
  *(_BYTE *)(a2 + 280) = 0;
  *(_BYTE *)(a2 + 440) = 83;
  *(_DWORD *)(a2 + 244) = 60;
  *(_DWORD *)(a2 + 260) = a1;
  sub_2B1B0(a2);
  return sub_239A4((struct timeval *)(a2 + 264));
}

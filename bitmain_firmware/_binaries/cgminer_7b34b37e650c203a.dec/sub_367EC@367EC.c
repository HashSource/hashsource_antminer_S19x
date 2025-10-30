int __fastcall sub_367EC(int a1, int a2)
{
  int v2; // r5
  int v6; // r8
  int v7; // r9
  int v8; // r8
  const char *v9; // lr
  int v10; // r0
  int v11; // r1
  int v12; // r2
  int v13; // r3
  int *v14; // lr
  int v15; // r0
  int v16; // r1
  int v17; // r2
  int v18; // r3
  int v19; // r1
  int v20; // r2
  int *v21; // r0
  int *v22; // r0
  struct timeval v23; // [sp+10h] [bp-80Ch] BYREF
  _DWORD s[10]; // [sp+18h] [bp-804h] BYREF
  __int16 v25; // [sp+40h] [bp-7DCh]

  v2 = (unsigned __int8)byte_6917C;
  if ( !byte_6917C )
  {
    if ( dword_766C0 )
      return v2;
    if ( *(_DWORD *)(a1 + 336) != dword_691AC )
    {
      v2 = (unsigned __int8)byte_68BD5;
      if ( byte_68BD5 )
      {
        if ( byte_74500 || byte_68BD4 || dword_67DB4 > 6 )
        {
          strcpy((char *)s, "Work stale due to block mismatch");
          sub_20F58(7, (const char *)s, 0);
        }
        return v2;
      }
      return 1;
    }
    v6 = *(_DWORD *)(a1 + 276);
    v7 = *(_DWORD *)(a1 + 260);
    if ( v6 <= dword_68754 )
      v6 = dword_68758;
    if ( !a2 && *(_BYTE *)(v7 + 640) )
    {
      if ( !*(_BYTE *)(v7 + 641) || !*(_BYTE *)(v7 + 643) )
      {
        v2 = (unsigned __int8)byte_68BD5;
        if ( byte_68BD5 && (byte_74500 || byte_68BD4 || dword_67DB4 > 6) )
        {
          strcpy((char *)s, "Work stale due to stratum inactive");
          sub_20F58(7, (const char *)s, 0);
          return v2;
        }
        return 1;
      }
      if ( pthread_mutex_lock((pthread_mutex_t *)(v7 + 212)) )
        sub_2EFE0("stale_work", 5089);
      if ( pthread_rwlock_rdlock((pthread_rwlock_t *)(v7 + 236)) )
        sub_30138("stale_work", 5089);
      if ( pthread_mutex_unlock((pthread_mutex_t *)(v7 + 212)) )
      {
        v22 = _errno_location();
        snprintf(
          (char *)s,
          0x800u,
          "WTF MUTEX ERROR ON UNLOCK! errno=%d in %s %s():%d",
          *v22,
          "cgminer.c",
          "stale_work",
          5089);
LABEL_56:
        sub_20F58(3, (const char *)s, 1);
        sub_2E6B0(1, 1);
      }
      if ( strcmp(*(const char **)(a1 + 288), *(const char **)(v7 + 672)) )
      {
        if ( !pthread_rwlock_unlock((pthread_rwlock_t *)(v7 + 236)) )
        {
          off_67ED8();
          v2 = (unsigned __int8)byte_68BD5;
          if ( byte_68BD5 && (byte_74500 || byte_68BD4 || dword_67DB4 > 6) )
          {
            v9 = "Work stale due to stratum job_id mismatch";
            goto LABEL_42;
          }
          return 1;
        }
        goto LABEL_55;
      }
      if ( pthread_rwlock_unlock((pthread_rwlock_t *)(v7 + 236)) )
      {
LABEL_55:
        v21 = _errno_location();
        snprintf(
          (char *)s,
          0x800u,
          "WTF RWLOCK ERROR ON UNLOCK! errno=%d in %s %s():%d",
          *v21,
          "cgminer.c",
          "stale_work",
          5096);
        goto LABEL_56;
      }
      off_67ED8();
    }
    v8 = v6 - (int)(*(double *)(v7 + 448) * 5.0 + 1.0);
    sub_239A4(&v23);
    if ( v8 < 5 )
      v8 = 5;
    if ( v8 <= v23.tv_sec - *(_DWORD *)(a1 + 264) )
    {
      v2 = (unsigned __int8)byte_68BD5;
      if ( byte_68BD5 && (byte_74500 || byte_68BD4 || dword_67DB4 > 6) )
      {
        strcpy((char *)s, "Work stale due to expiry");
        sub_20F58(7, (const char *)s, 0);
        return v2;
      }
      return 1;
    }
    if ( a2 | (unsigned __int8)byte_755D4 ^ 1
      || v7 == sub_31FF4()
      || *(_BYTE *)(a1 + 282)
      || (unsigned int)(dword_68FD0 - 3) <= 1 )
    {
      return v2;
    }
    v2 = (unsigned __int8)byte_68BD5;
    if ( byte_68BD5 && (byte_74500 || byte_68BD4 || dword_67DB4 > 6) )
    {
      v9 = "Work stale due to fail only pool mismatch";
LABEL_42:
      v10 = *(_DWORD *)v9;
      v11 = *((_DWORD *)v9 + 1);
      v12 = *((_DWORD *)v9 + 2);
      v13 = *((_DWORD *)v9 + 3);
      v14 = (int *)(v9 + 16);
      s[0] = v10;
      s[1] = v11;
      s[2] = v12;
      s[3] = v13;
      v15 = *v14;
      v16 = v14[1];
      v17 = v14[2];
      v18 = v14[3];
      v14 += 4;
      s[4] = v15;
      s[5] = v16;
      s[6] = v17;
      s[7] = v18;
      v19 = v14[1];
      v20 = v14[2];
      s[8] = *v14;
      s[9] = v19;
      v25 = v20;
      sub_20F58(7, (const char *)s, 0);
      return v2;
    }
    return 1;
  }
  return 0;
}

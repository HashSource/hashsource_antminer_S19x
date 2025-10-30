int __fastcall sub_355FC(int a1)
{
  int v2; // r2
  int v3; // r1
  int v4; // r3
  int v5; // r12
  int v6; // r0
  int v7; // r1
  int v8; // r6
  _DWORD *v9; // r2
  int v10; // r3
  int v11; // r2
  int v12; // r12
  int v13; // r2
  int v14; // r3
  int v16; // r0
  int *v17; // r0
  int *v18; // r0
  struct timespec abstime; // [sp+10h] [bp-810h] BYREF
  struct timeval v20; // [sp+18h] [bp-808h] BYREF
  char s[2048]; // [sp+20h] [bp-800h] BYREF

  if ( pthread_mutex_lock((pthread_mutex_t *)dword_69010) )
  {
    v17 = _errno_location();
    snprintf(s, 0x800u, "WTF MUTEX ERROR ON LOCK! errno=%d in %s %s():%d", *v17, "cgminer.c", "hash_pop", 8182);
    goto LABEL_58;
  }
  if ( !dword_690EC || !*(_DWORD *)(*(_DWORD *)(dword_690EC + 344) + 12) )
  {
    if ( !a1 )
      goto LABEL_35;
    do
    {
      sub_239A4(&v20);
      abstime.tv_sec = v20.tv_sec + 10;
      abstime.tv_nsec = 1000 * v20.tv_usec;
      pthread_cond_signal(&stru_744D0);
      if ( pthread_cond_timedwait((pthread_cond_t *)(dword_755E0 + 40), (pthread_mutex_t *)dword_69010, &abstime) )
      {
        if ( !byte_69064 )
        {
          byte_69064 = 1;
          if ( byte_74500 || byte_68BD4 || dword_67DB4 > 3 )
          {
            strcpy(s, "Waiting for work to be available from pools.");
            sub_20F58(4, s, 0);
          }
        }
      }
    }
    while ( !dword_690EC || !*(_DWORD *)(*(_DWORD *)(dword_690EC + 344) + 12) );
  }
  if ( byte_69064 )
  {
    if ( byte_74500 || byte_68BD4 || dword_67DB4 > 3 )
    {
      strcpy(s, "Work available from pools, resuming.");
      sub_20F58(4, s, 0);
    }
    v2 = dword_690EC;
    byte_69064 = 0;
    if ( !dword_690EC )
      goto LABEL_43;
  }
  else
  {
    v2 = dword_690EC;
  }
  v3 = *(_DWORD *)(v2 + 344);
  if ( *(_DWORD *)(v3 + 12) <= dword_69188 || *(_BYTE *)(v2 + 273) || !*(_DWORD *)(v2 + 276) )
  {
    a1 = v2;
    goto LABEL_17;
  }
  a1 = *(_DWORD *)(v2 + 352);
  if ( !a1 )
LABEL_43:
    __und(0);
  while ( !*(_BYTE *)(a1 + 273) )
  {
    v16 = *(_DWORD *)(a1 + 352);
    if ( !*(_DWORD *)(a1 + 276) )
      break;
    a1 = *(_DWORD *)(a1 + 352);
    if ( !v16 )
      goto LABEL_43;
  }
LABEL_17:
  v4 = *(_DWORD *)(a1 + 348);
  if ( v4 )
  {
    v5 = *(_DWORD *)(v3 + 20);
    v6 = a1 + 344;
    if ( a1 != *(_DWORD *)(v3 + 16) - v5 )
    {
LABEL_19:
      v7 = dword_690EC;
      *(_DWORD *)(v4 + v5 + 8) = *(_DWORD *)(a1 + 352);
      v8 = *(_DWORD *)(a1 + 352);
LABEL_20:
      v9 = *(_DWORD **)(v7 + 344);
      if ( v8 )
      {
        *(_DWORD *)(v8 + v9[5] + 4) = *(_DWORD *)(a1 + 348);
        v9 = *(_DWORD **)(v7 + 344);
      }
      v10 = 12 * ((v9[1] - 1) & *(_DWORD *)(a1 + 372));
      --*(_DWORD *)(*v9 + v10 + 4);
      v11 = **(_DWORD **)(v7 + 344);
      v12 = *(_DWORD *)(v11 + v10);
      if ( v12 == v6 )
      {
        v7 = *(_DWORD *)(a1 + 360);
        *(_DWORD *)(v11 + v10) = v7;
      }
      v13 = *(_DWORD *)(a1 + 356);
      v14 = *(_DWORD *)(a1 + 360);
      if ( v12 == v6 )
        v7 = dword_690EC;
      if ( v13 )
      {
        *(_DWORD *)(v13 + 16) = v14;
        v14 = *(_DWORD *)(a1 + 360);
      }
      if ( v14 )
        *(_DWORD *)(v14 + 12) = *(_DWORD *)(a1 + 356);
      --*(_DWORD *)(*(_DWORD *)(v7 + 344) + 12);
      goto LABEL_31;
    }
LABEL_47:
    *(_DWORD *)(v3 + 16) = v4 + v5;
    v4 = *(_DWORD *)(a1 + 348);
    if ( v4 )
    {
      v5 = *(_DWORD *)(*(_DWORD *)(v2 + 344) + 20);
      goto LABEL_19;
    }
    v8 = *(_DWORD *)(a1 + 352);
LABEL_46:
    v7 = v8;
    dword_690EC = v8;
    goto LABEL_20;
  }
  v8 = *(_DWORD *)(a1 + 352);
  if ( v8 )
  {
    v5 = *(_DWORD *)(v3 + 20);
    v6 = a1 + 344;
    if ( a1 != *(_DWORD *)(v3 + 16) - v5 )
      goto LABEL_46;
    goto LABEL_47;
  }
  free(*(void **)v3);
  free(*(void **)(dword_690EC + 344));
  dword_690EC = 0;
LABEL_31:
  if ( !*(_BYTE *)(a1 + 273) && *(_DWORD *)(a1 + 276) )
    --dword_69188;
  pthread_cond_signal(&stru_744D0);
  pthread_cond_signal((pthread_cond_t *)(dword_755E0 + 40));
  dword_744A0 = time(0);
LABEL_35:
  if ( pthread_mutex_unlock((pthread_mutex_t *)dword_69010) )
  {
    v18 = _errno_location();
    snprintf(s, 0x800u, "WTF MUTEX ERROR ON UNLOCK! errno=%d in %s %s():%d", *v18, "cgminer.c", "hash_pop", 8254);
LABEL_58:
    sub_20F58(3, s, 1);
    sub_2E6B0(1, 1);
  }
  off_67ED8();
  return a1;
}

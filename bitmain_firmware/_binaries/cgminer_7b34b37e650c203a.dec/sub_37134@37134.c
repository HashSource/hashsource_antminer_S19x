void sub_37134()
{
  int v0; // r6
  int v1; // r4
  void **v2; // r3
  int v3; // r1
  char *v4; // r9
  int v5; // r0
  int v6; // r2
  void **v7; // r12
  char *v8; // r8
  _DWORD *v9; // r0
  int v10; // r2
  int v11; // r0
  void **v12; // lr
  _DWORD *v13; // r0
  _DWORD *v14; // r2
  int v15; // r0
  int *v16; // r0
  int *v17; // r0
  void **v18; // [sp+14h] [bp-808h] BYREF
  char s[2052]; // [sp+18h] [bp-804h] BYREF

  v0 = pthread_mutex_lock((pthread_mutex_t *)dword_69010);
  if ( v0 )
  {
    v16 = _errno_location();
    snprintf(s, 0x800u, "WTF MUTEX ERROR ON LOCK! errno=%d in %s %s():%d", *v16, "cgminer.c", "discard_stale", 5379);
    goto LABEL_39;
  }
  v18 = (void **)dword_690EC;
  if ( !dword_690EC )
  {
    pthread_cond_signal(&stru_744D0);
    if ( !pthread_mutex_unlock((pthread_mutex_t *)dword_69010) )
    {
      off_67ED8();
      return;
    }
    goto LABEL_41;
  }
  v1 = *(_DWORD *)(dword_690EC + 352);
  if ( !sub_367EC(dword_690EC, 0) )
    goto LABEL_19;
LABEL_4:
  v2 = v18;
  v3 = dword_690EC;
  v4 = (char *)v18[87];
  v5 = *(_DWORD *)(dword_690EC + 344);
  if ( v4 )
  {
    v6 = *(_DWORD *)(v5 + 20);
    v7 = v18 + 86;
    if ( v18 != (void **)(*(_DWORD *)(v5 + 16) - v6) )
    {
LABEL_6:
      *(_DWORD *)&v4[v6 + 8] = v2[88];
      v8 = (char *)v2[88];
LABEL_7:
      v9 = *(_DWORD **)(v3 + 344);
      if ( v8 )
      {
        *(_DWORD *)&v8[v9[5] + 4] = v2[87];
        v9 = *(_DWORD **)(v3 + 344);
      }
      v10 = 3 * ((v9[1] - 1) & (unsigned int)v2[93]);
      --*(_DWORD *)(*v9 + 4 * v10 + 4);
      v11 = **(_DWORD **)(v3 + 344);
      v12 = *(void ***)(v11 + 4 * v10);
      if ( v12 == v7 )
      {
        v3 = (int)v2[90];
        *(_DWORD *)(v11 + 4 * v10) = v3;
      }
      v13 = v2[89];
      v14 = v2[90];
      if ( v12 == v7 )
        v3 = dword_690EC;
      if ( v13 )
      {
        v13[4] = v14;
        v14 = v2[90];
      }
      if ( v14 )
        v14[3] = v2[89];
      --*(_DWORD *)(*(_DWORD *)(v3 + 344) + 12);
      goto LABEL_18;
    }
LABEL_25:
    *(_DWORD *)(v5 + 16) = &v4[v6];
    v4 = (char *)v2[87];
    if ( v4 )
    {
      v6 = *(_DWORD *)(*(_DWORD *)(v3 + 344) + 20);
      goto LABEL_6;
    }
    v8 = (char *)v2[88];
LABEL_24:
    v3 = (int)v8;
    dword_690EC = (int)v8;
    goto LABEL_7;
  }
  v8 = (char *)v18[88];
  if ( v8 )
  {
    v6 = *(_DWORD *)(v5 + 20);
    v7 = v18 + 86;
    if ( v18 != (void **)(*(_DWORD *)(v5 + 16) - v6) )
      goto LABEL_24;
    goto LABEL_25;
  }
  free(*(void **)v5);
  free(*(void **)(dword_690EC + 344));
  dword_690EC = 0;
LABEL_18:
  ++v0;
  sub_2CEA0(&v18, "cgminer.c", "discard_stale", 5386);
LABEL_19:
  while ( 1 )
  {
    v18 = (void **)v1;
    if ( !v1 )
      break;
    v15 = v1;
    v1 = *(_DWORD *)(v1 + 352);
    if ( sub_367EC(v15, 0) )
      goto LABEL_4;
  }
  pthread_cond_signal(&stru_744D0);
  if ( pthread_mutex_unlock((pthread_mutex_t *)dword_69010) )
  {
LABEL_41:
    v17 = _errno_location();
    snprintf(s, 0x800u, "WTF MUTEX ERROR ON UNLOCK! errno=%d in %s %s():%d", *v17, "cgminer.c", "discard_stale", 5392);
LABEL_39:
    sub_20F58(3, s, 1);
    sub_2E6B0(1, 1);
  }
  off_67ED8();
  if ( v0 && byte_68BD5 && (byte_74500 || byte_68BD4 || dword_67DB4 > 6) )
  {
    snprintf(s, 0x800u, "Discarded %d stales that didn't match current hash", v0);
    sub_20F58(7, s, 0);
  }
}

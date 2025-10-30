void **__fastcall sub_5BB20(int a1, void *a2)
{
  _DWORD *v2; // r10
  int v3; // r2
  int v4; // r0
  int v5; // r5
  int v6; // r12
  int v7; // r3
  int v8; // r1
  int v9; // r0
  int v10; // r11
  _DWORD *v11; // r2
  int v12; // r3
  int v13; // r2
  int v14; // r12
  int v15; // r2
  int v16; // r3
  time_t v17; // r0
  int v18; // r5
  int v19; // r3
  void **v20; // r0
  bool v21; // zf
  void **result; // r0
  double v23; // d7
  int v24; // r3
  int v25; // r1
  int *v26; // r0
  int *v27; // r0
  int v28; // r3
  int v29; // r3
  int v30; // r2
  char *v31; // r1
  int v32; // r3
  bool v33; // cc
  time_t v35; // [sp+18h] [bp-824h]
  void **v37; // [sp+24h] [bp-818h] BYREF
  struct timespec abstime; // [sp+28h] [bp-814h] BYREF
  struct timeval v39; // [sp+30h] [bp-80Ch] BYREF
  char s[2052]; // [sp+38h] [bp-804h] BYREF

  v37 = 0;
  v2 = *(_DWORD **)(a1 + 36);
  sub_51AAC(a1);
  if ( byte_1AECC5 && (byte_244080 || byte_1AECC4 || dword_9E320 > 6) )
  {
    strcpy(s, "Popping work from get queue to get work");
    sub_47AB4(7, s, 0);
  }
  v35 = time(0);
  while ( !v37 )
  {
    if ( pthread_mutex_lock((pthread_mutex_t *)dword_1AF0E4) )
    {
      v26 = _errno_location();
      snprintf(s, 0x800u, "WTF MUTEX ERROR ON LOCK! errno=%d in %s %s():%d", *v26, "cgminer.c", "hash_pop", 8176);
      goto LABEL_71;
    }
    while ( !dword_1AF1B4 || !*(_DWORD *)(*(_DWORD *)(dword_1AF1B4 + 344) + 12) )
    {
      sub_4A60C(&v39);
      abstime.tv_sec = v39.tv_sec + 10;
      abstime.tv_nsec = 1000 * v39.tv_usec;
      pthread_cond_signal(&stru_244050);
      if ( pthread_cond_timedwait((pthread_cond_t *)(dword_245160 + 40), (pthread_mutex_t *)dword_1AF0E4, &abstime) )
      {
        if ( !byte_1AF130 )
        {
          byte_1AF130 = 1;
          if ( byte_244080 || byte_1AECC4 || dword_9E320 > 3 )
          {
            strcpy(s, "Waiting for work to be available from pools.");
            sub_47AB4(4, s, 0);
          }
        }
      }
    }
    if ( byte_1AF130 )
    {
      if ( byte_244080 || byte_1AECC4 || dword_9E320 > 3 )
      {
        strcpy(s, "Work available from pools, resuming.");
        sub_47AB4(4, s, 0);
      }
      v3 = dword_1AF1B4;
      byte_1AF130 = 0;
      if ( !dword_1AF1B4 )
LABEL_23:
        __und(0);
    }
    else
    {
      v3 = dword_1AF1B4;
    }
    v4 = *(_DWORD *)(v3 + 344);
    if ( *(_DWORD *)(v4 + 12) > dword_1AFC48 && !*(_BYTE *)(v3 + 273) && *(_DWORD *)(v3 + 276) )
    {
      v5 = *(_DWORD *)(v3 + 352);
      if ( !v5 )
        goto LABEL_23;
      while ( !*(_BYTE *)(v5 + 273) )
      {
        v25 = *(_DWORD *)(v5 + 352);
        if ( !*(_DWORD *)(v5 + 276) )
          break;
        v5 = *(_DWORD *)(v5 + 352);
        if ( !v25 )
          goto LABEL_23;
      }
    }
    else
    {
      v5 = v3;
    }
    v6 = *(_DWORD *)(v5 + 348);
    if ( v6 )
    {
      v7 = *(_DWORD *)(v4 + 20);
      v8 = v5 + 344;
      if ( v5 != *(_DWORD *)(v4 + 16) - v7 )
        goto LABEL_32;
    }
    else
    {
      v10 = *(_DWORD *)(v5 + 352);
      if ( !v10 )
      {
        free(*(void **)v4);
        free(*(void **)(dword_1AF1B4 + 344));
        dword_1AF1B4 = 0;
        goto LABEL_44;
      }
      v7 = *(_DWORD *)(v4 + 20);
      v8 = v5 + 344;
      if ( v5 != *(_DWORD *)(v4 + 16) - v7 )
        goto LABEL_62;
    }
    *(_DWORD *)(v4 + 16) = v6 + v7;
    v6 = *(_DWORD *)(v5 + 348);
    if ( !v6 )
    {
      v10 = *(_DWORD *)(v5 + 352);
LABEL_62:
      v9 = v10;
      dword_1AF1B4 = v10;
      goto LABEL_33;
    }
    v7 = *(_DWORD *)(*(_DWORD *)(v3 + 344) + 20);
LABEL_32:
    v9 = dword_1AF1B4;
    *(_DWORD *)(v6 + v7 + 8) = *(_DWORD *)(v5 + 352);
    v10 = *(_DWORD *)(v5 + 352);
LABEL_33:
    v11 = *(_DWORD **)(v9 + 344);
    if ( v10 )
    {
      *(_DWORD *)(v10 + v11[5] + 4) = *(_DWORD *)(v5 + 348);
      v11 = *(_DWORD **)(v9 + 344);
    }
    v12 = 3 * ((v11[1] - 1) & *(_DWORD *)(v5 + 372));
    --*(_DWORD *)(*v11 + 4 * v12 + 4);
    v13 = **(_DWORD **)(v9 + 344);
    v14 = *(_DWORD *)(v13 + 4 * v12);
    if ( v8 == v14 )
      *(_DWORD *)(v13 + 4 * v12) = *(_DWORD *)(v5 + 360);
    v15 = *(_DWORD *)(v5 + 356);
    v16 = *(_DWORD *)(v5 + 360);
    if ( v8 == v14 )
      v9 = dword_1AF1B4;
    if ( v15 )
    {
      *(_DWORD *)(v15 + 16) = v16;
      v16 = *(_DWORD *)(v5 + 360);
    }
    if ( v16 )
      *(_DWORD *)(v16 + 12) = *(_DWORD *)(v5 + 356);
    --*(_DWORD *)(*(_DWORD *)(v9 + 344) + 12);
LABEL_44:
    if ( !*(_BYTE *)(v5 + 273) && *(_DWORD *)(v5 + 276) )
      --dword_1AFC48;
    pthread_cond_signal(&stru_244050);
    pthread_cond_signal((pthread_cond_t *)(dword_245160 + 40));
    dword_244020 = time(0);
    if ( pthread_mutex_unlock((pthread_mutex_t *)dword_1AF0E4) )
    {
      v27 = _errno_location();
      snprintf(s, 0x800u, "WTF MUTEX ERROR ON UNLOCK! errno=%d in %s %s():%d", *v27, "cgminer.c", "hash_pop", 8248);
LABEL_71:
      sub_47AB4(3, s, 1);
      sub_54CCC(1, 1);
    }
    off_9E444();
    v37 = (void **)v5;
    if ( !sub_5B638(v5, 0) )
      continue;
    sub_53380(&v37, "cgminer.c", "get_work", 8638);
    sub_55AA4();
  }
  v17 = time(0);
  v18 = v17 - v35;
  v19 = (unsigned __int8)byte_1AECC5;
  if ( v17 - v35 <= 0 )
  {
LABEL_78:
    if ( !v19 )
      goto LABEL_53;
    goto LABEL_79;
  }
  if ( !byte_1AECC5 )
  {
    v2[58] += v18;
    goto LABEL_53;
  }
  if ( byte_244080 || byte_1AECC4 || dword_9E320 > 6 )
  {
    snprintf(s, 0x800u, "Get work blocked for %ld seconds", v17 - v35);
    sub_47AB4(7, s, 0);
    v19 = (unsigned __int8)byte_1AECC5;
    v2[58] += v18;
    goto LABEL_78;
  }
  v2[58] += v18;
LABEL_79:
  if ( byte_244080 || byte_1AECC4 || dword_9E320 > 6 )
  {
    snprintf(s, 0x800u, "Got work from get queue to get work for thread %d", a2);
    sub_47AB4(7, s, 0);
  }
LABEL_53:
  v20 = v37;
  v21 = byte_1AF244 == 0;
  v37[64] = a2;
  if ( v21 )
    goto LABEL_55;
  v28 = v2[95] + v2[96];
  v2[95] = v28;
  if ( v28 <= 0 )
  {
    v2[96] = 1;
LABEL_96:
    sub_4C150(v20, (char *)&unk_1AFC4C + 160 * v28, 0xA0u, (int)"cgminer.c", (int)"set_benchmark_work", 8619);
    goto LABEL_55;
  }
  if ( v28 <= 15 )
    goto LABEL_96;
  v29 = v2[94];
  v30 = -1;
  v31 = (char *)&unk_1AF248;
  v2[96] = -1;
  v32 = v29 + 1;
  v33 = v32 <= 15;
  if ( v32 > 15 )
    v32 = 0;
  else
    v30 = 5 * v32;
  v2[94] = v32;
  if ( v33 )
    v31 = (char *)&unk_1AF248 + 32 * v30;
  sub_4C150(v20, v31, 0xA0u, (int)"cgminer.c", (int)"set_benchmark_work", 8615);
LABEL_55:
  sub_51AE4(a1);
  result = v37;
  *((_BYTE *)v37 + 272) = 1;
  v23 = *(double *)(v2[1] + 104);
  if ( v23 > *((double *)result + 47) )
    v23 = *((double *)result + 47);
  *((double *)result + 28) = v23;
  v24 = v2[1];
  if ( *(double *)(v24 + 112) > v23 )
    v23 = *(double *)(v24 + 112);
  *((double *)result + 28) = v23;
  return result;
}

void __fastcall sub_33AB4(_DWORD *a1)
{
  int v2; // r7
  _DWORD *v3; // r3
  int v4; // r4
  int v5; // r10
  int v6; // r1
  int v7; // r0
  int v8; // r2
  _DWORD *v9; // r12
  int v10; // r9
  _DWORD *v11; // r0
  int v12; // r2
  int v13; // r0
  _DWORD *v14; // lr
  int v15; // r0
  int v16; // r2
  int *v17; // r0
  int *v18; // r0
  void **v19; // [sp+14h] [bp-804h] BYREF
  char s[2048]; // [sp+18h] [bp-800h] BYREF

  v2 = pthread_mutex_lock((pthread_mutex_t *)dword_69010);
  if ( v2 )
  {
    v17 = _errno_location();
    snprintf(s, 0x800u, "WTF MUTEX ERROR ON LOCK! errno=%d in %s %s():%d", *v17, "cgminer.c", "clear_pool_work", 7398);
    goto LABEL_37;
  }
  v3 = (_DWORD *)dword_690EC;
  v19 = (void **)dword_690EC;
  if ( !dword_690EC )
  {
    if ( !pthread_mutex_unlock((pthread_mutex_t *)dword_69010) )
    {
      off_67ED8();
      return;
    }
    goto LABEL_38;
  }
  v4 = *(_DWORD *)(dword_690EC + 352);
  if ( *(_DWORD **)(dword_690EC + 260) == a1 )
    goto LABEL_6;
LABEL_4:
  v19 = (void **)v4;
  if ( v4 )
  {
    while ( 1 )
    {
      v3 = (_DWORD *)v4;
      v4 = *(_DWORD *)(v4 + 352);
      if ( (_DWORD *)v3[65] != a1 )
        goto LABEL_4;
LABEL_6:
      v5 = v3[87];
      v6 = dword_690EC;
      v7 = *(_DWORD *)(dword_690EC + 344);
      if ( v5 )
        break;
      v10 = v3[88];
      if ( v10 )
      {
        v8 = *(_DWORD *)(v7 + 20);
        v9 = v3 + 86;
        if ( v3 != (_DWORD *)(*(_DWORD *)(v7 + 16) - v8) )
          goto LABEL_29;
LABEL_30:
        *(_DWORD *)(v7 + 16) = v5 + v8;
        v5 = v3[87];
        if ( v5 )
        {
          v8 = *(_DWORD *)(*(_DWORD *)(v6 + 344) + 20);
          goto LABEL_8;
        }
        v10 = v3[88];
LABEL_29:
        v6 = v10;
        dword_690EC = v10;
LABEL_9:
        v11 = *(_DWORD **)(v6 + 344);
        if ( v10 )
        {
          *(_DWORD *)(v10 + v11[5] + 4) = v3[87];
          v11 = *(_DWORD **)(v6 + 344);
        }
        v12 = 3 * ((v11[1] - 1) & v3[93]);
        --*(_DWORD *)(*v11 + 4 * v12 + 4);
        v13 = **(_DWORD **)(v6 + 344);
        v14 = *(_DWORD **)(v13 + 4 * v12);
        if ( v14 == v9 )
        {
          v6 = v3[90];
          *(_DWORD *)(v13 + 4 * v12) = v6;
        }
        v15 = v3[89];
        v16 = v3[90];
        if ( v14 == v9 )
          v6 = dword_690EC;
        if ( v15 )
        {
          *(_DWORD *)(v15 + 16) = v16;
          v16 = v3[90];
        }
        if ( v16 )
          *(_DWORD *)(v16 + 12) = v3[89];
        --*(_DWORD *)(*(_DWORD *)(v6 + 344) + 12);
        goto LABEL_20;
      }
      free(*(void **)v7);
      free(*(void **)(dword_690EC + 344));
      dword_690EC = 0;
LABEL_20:
      ++v2;
      sub_2CBA8(&v19, "cgminer.c", "clear_pool_work", 7404);
      v19 = (void **)v4;
      if ( !v4 )
        goto LABEL_21;
    }
    v8 = *(_DWORD *)(v7 + 20);
    v9 = v3 + 86;
    if ( v3 == (_DWORD *)(*(_DWORD *)(v7 + 16) - v8) )
      goto LABEL_30;
LABEL_8:
    *(_DWORD *)(v5 + v8 + 8) = v3[88];
    v10 = v3[88];
    goto LABEL_9;
  }
LABEL_21:
  if ( pthread_mutex_unlock((pthread_mutex_t *)dword_69010) )
  {
LABEL_38:
    v18 = _errno_location();
    snprintf(s, 0x800u, "WTF MUTEX ERROR ON UNLOCK! errno=%d in %s %s():%d", *v18, "cgminer.c", "clear_pool_work", 7408);
LABEL_37:
    sub_20F58(3, s, 1);
    sub_2E6B0(1, 1);
  }
  off_67ED8();
  if ( v2 && (byte_74500 || byte_68BD4 || dword_67DB4 > 5) )
  {
    snprintf(s, 0x800u, "Cleared %d work items due to stratum disconnect on pool %d", v2, *a1);
    sub_20F58(6, s, 0);
  }
}

int __fastcall sub_3D93C(int a1)
{
  pthread_mutex_t *v2; // r0
  int v3; // r0
  int v4; // r2
  int v5; // r4
  int v6; // r0
  unsigned int v7; // r3
  unsigned int v8; // r1
  int v9; // r0
  unsigned int v10; // r3
  unsigned int v11; // r1
  int v12; // r0
  unsigned int v13; // r5
  int v14; // r3
  int v15; // r7
  char *v16; // r8
  __int64 v17; // r2
  int v18; // r3
  int v19; // r1
  int *v20; // r2
  int v21; // r4
  __int64 v22; // r2
  int v23; // r5
  _DWORD *v24; // r7
  int v25; // r10
  int v26; // r0
  unsigned int v27; // r3
  char *v28; // r5
  unsigned int v29; // r4
  int v30; // r4
  char *v31; // r9
  unsigned int v32; // r3
  int v33; // r3
  _DWORD *v34; // r3
  unsigned int v35; // r2
  unsigned int v36; // r1
  bool v37; // cc
  int v38; // r2
  int v39; // r3
  int v40; // r6
  int v41; // r5
  char *v42; // r3
  _DWORD *v43; // r1
  unsigned int v44; // r7
  char *v45; // r12
  int v46; // lr
  int v47; // r2
  int v48; // lr
  char *v49; // r10
  bool v50; // zf
  int v51; // r12
  bool v52; // zf
  bool v53; // zf
  char *v54; // r11
  int v55; // r12
  char *v57; // r0
  void *v58; // r0
  int *v59; // r0
  int *v60; // r0
  unsigned int i; // [sp+14h] [bp-810h]
  char s[2052]; // [sp+20h] [bp-804h] BYREF

  if ( byte_68BD5 && (byte_74500 || byte_68BD4 || dword_67DB4 > 6) )
  {
    snprintf(s, 0x800u, "Pushing work from pool %d to hash queue", **(_DWORD **)(a1 + 260));
    sub_20F58(7, s, 0);
  }
  *(_DWORD *)(a1 + 336) = dword_691AC;
  sub_3A5D0(a1);
  v2 = (pthread_mutex_t *)dword_69010;
  ++*(_DWORD *)(*(_DWORD *)(a1 + 260) + 68);
  if ( pthread_mutex_lock(v2) )
  {
    v60 = _errno_location();
    snprintf(s, 0x800u, "WTF MUTEX ERROR ON LOCK! errno=%d in %s %s():%d", *v60, "cgminer.c", "hash_push", 5777);
LABEL_107:
    sub_20F58(3, s, 1);
    sub_2E6B0(1, 1);
  }
  if ( !*(_BYTE *)(a1 + 273) && *(_DWORD *)(a1 + 276) )
    ++dword_69188;
  v3 = dword_755E0;
  v4 = *(unsigned __int8 *)(dword_755E0 + 8);
  if ( *(_BYTE *)(dword_755E0 + 8) )
    goto LABEL_95;
  v5 = dword_690EC;
  v6 = (*(unsigned __int8 *)(a1 + 340)
      + 17973517
      + (*(unsigned __int8 *)(a1 + 343) << 24)
      + (*(unsigned __int8 *)(a1 + 342) << 16)
      + (*(unsigned __int8 *)(a1 + 341) << 8))
     ^ 0x7F76D;
  v7 = (-1622558010 - v6) ^ (v6 << 8);
  *(_DWORD *)(a1 + 364) = a1 + 340;
  v8 = (-17973517 - v6 - v7) ^ (v7 >> 13);
  *(_DWORD *)(a1 + 368) = 4;
  v9 = (v6 - v7 - v8) ^ (v8 >> 12);
  v10 = (v7 - v8 - v9) ^ (v9 << 16);
  v11 = (v8 - v9 - v10) ^ (v10 >> 5);
  v12 = (v9 - v10 - v11) ^ (v11 >> 3);
  v13 = (v11 - v12 - ((v10 - v11 - v12) ^ (v12 << 10))) ^ (((v10 - v11 - v12) ^ (v12 << 10)) >> 15);
  *(_DWORD *)(a1 + 372) = v13;
  if ( v5 )
  {
    v14 = *(_DWORD *)(v5 + 344);
    v15 = a1 + 344;
    *(_DWORD *)(a1 + 352) = v4;
    *(_DWORD *)(a1 + 344) = v14;
    *(_DWORD *)(a1 + 348) = *(_DWORD *)(*(_DWORD *)(v5 + 344) + 16) - *(_DWORD *)(*(_DWORD *)(v5 + 344) + 20);
    *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(v5 + 344) + 16) + 8) = a1;
    *(_DWORD *)(*(_DWORD *)(v5 + 344) + 16) = a1 + 344;
    v16 = *(char **)(v5 + 344);
  }
  else
  {
    *(_DWORD *)(a1 + 352) = 0;
    *(_DWORD *)(a1 + 348) = 0;
    dword_690EC = a1;
    v57 = (char *)malloc(0x2Cu);
    v16 = v57;
    *(_DWORD *)(a1 + 344) = v57;
    if ( !v57 )
      goto LABEL_109;
    memset(v57 + 12, 0, 0x20u);
    v15 = a1 + 344;
    *((_DWORD *)v16 + 1) = 32;
    *((_DWORD *)v16 + 4) = a1 + 344;
    *((_DWORD *)v16 + 2) = 5;
    *((_DWORD *)v16 + 5) = 344;
    v58 = calloc(0x180u, 1u);
    *(_DWORD *)v16 = v58;
    if ( !v58 )
      goto LABEL_109;
    v5 = a1;
    *((_DWORD *)v16 + 10) = -1609490463;
  }
  ++*((_DWORD *)v16 + 3);
  v17 = *(_QWORD *)*(_DWORD *)(v5 + 344);
  v18 = 12 * ((HIDWORD(v17) - 1) & v13);
  ++*(_DWORD *)(v17 + v18 + 4);
  LODWORD(v17) = *(_DWORD *)(**(_DWORD **)(v5 + 344) + v18);
  *(_DWORD *)(a1 + 356) = 0;
  *(_DWORD *)(a1 + 360) = v17;
  LODWORD(v17) = **(_DWORD **)(v5 + 344);
  v19 = *(_DWORD *)(v17 + v18);
  v20 = (int *)(v17 + v18);
  if ( v19 )
  {
    *(_DWORD *)(v19 + 12) = v15;
    v20 = (int *)(**(_DWORD **)(v5 + 344) + v18);
  }
  *v20 = v15;
  v21 = dword_690EC;
  v22 = *(_QWORD *)(**(_DWORD **)(dword_690EC + 344) + v18 + 4);
  if ( (unsigned int)v22 >= 10 * (HIDWORD(v22) + 1) )
  {
    v23 = *(_DWORD *)(a1 + 344);
    if ( *(_DWORD *)(v23 + 36) != 1 )
    {
      v24 = calloc(24 * *(_DWORD *)(v23 + 4), 1u);
      if ( v24 )
      {
        v25 = 0;
        *(_DWORD *)(v23 + 24) = (((2 * *(_DWORD *)(v23 + 4) - 1) & *(_DWORD *)(v23 + 12)) != 0)
                              + (*(_DWORD *)(v23 + 12) >> (*(_BYTE *)(v23 + 8) + 1));
        *(_DWORD *)(*(_DWORD *)(a1 + 344) + 28) = 0;
        v26 = *(_DWORD *)(a1 + 344);
        v27 = *(_DWORD *)(v26 + 4);
        if ( v27 )
        {
          for ( i = 0; i < v27; ++i )
          {
            v28 = *(char **)(*(_DWORD *)v26 + v25);
            if ( v28 )
            {
              v29 = v27;
              while ( 1 )
              {
                v16 = (char *)*((_DWORD *)v28 + 4);
                v30 = 3 * ((2 * v29 - 1) & *((_DWORD *)v28 + 7));
                v31 = (char *)&v24[v30];
                v32 = *((_DWORD *)v31 + 1) + 1;
                *((_DWORD *)v31 + 1) = v32;
                if ( v32 > *(_DWORD *)(v26 + 24) )
                {
                  ++*(_DWORD *)(v26 + 28);
                  *((_DWORD *)v31 + 2) = sub_498D8(*((_DWORD *)v31 + 1), *(_DWORD *)(*(_DWORD *)(a1 + 344) + 24));
                }
                *((_DWORD *)v28 + 3) = 0;
                *((_DWORD *)v28 + 4) = v24[v30];
                v33 = v24[v30];
                if ( v33 )
                  *(_DWORD *)(v33 + 12) = v28;
                v24[v30] = v28;
                v26 = *(_DWORD *)(a1 + 344);
                if ( !v16 )
                  break;
                v29 = *(_DWORD *)(v26 + 4);
                v28 = v16;
              }
              v27 = *(_DWORD *)(v26 + 4);
            }
            v25 += 12;
          }
        }
        free(*(void **)v26);
        *(_DWORD *)(*(_DWORD *)(a1 + 344) + 4) *= 2;
        ++*(_DWORD *)(*(_DWORD *)(a1 + 344) + 8);
        **(_DWORD **)(a1 + 344) = v24;
        v34 = *(_DWORD **)(a1 + 344);
        v21 = dword_690EC;
        v35 = v34[7];
        v36 = v34[3];
        v37 = v35 > v36 >> 1;
        if ( v35 <= v36 >> 1 )
          v38 = 0;
        else
          v38 = v34[8];
        if ( v37 )
          ++v38;
        v34[8] = v38;
        v39 = *(_DWORD *)(a1 + 344);
        if ( *(_DWORD *)(v39 + 32) > 1u )
          *(_DWORD *)(v39 + 36) = 1;
        v3 = dword_755E0;
        if ( !v21 )
          goto LABEL_95;
        goto LABEL_38;
      }
LABEL_109:
      exit(-1);
    }
  }
  v3 = dword_755E0;
LABEL_38:
  v40 = v21 + 344;
  v41 = 1;
  do
  {
    v42 = (char *)v40;
    v40 = 0;
    v43 = 0;
    v44 = 0;
    do
    {
      ++v44;
      if ( v41 )
      {
        v45 = (char *)*((_DWORD *)v42 + 2);
        if ( v45 && (v46 = *(_DWORD *)(*(_DWORD *)(v21 + 344) + 20), (v45 += v46) != 0) )
        {
          v47 = 1;
          do
          {
            if ( v47 == v41 )
            {
              v48 = v47;
              goto LABEL_48;
            }
            v45 = (char *)*((_DWORD *)v45 + 2);
            ++v47;
            if ( !v45 )
              break;
            v45 += v46;
          }
          while ( v45 );
          v48 = v41;
        }
        else
        {
          v48 = v41;
          v47 = 1;
        }
      }
      else
      {
        v45 = v42;
        v48 = 0;
        v47 = 0;
      }
LABEL_48:
      v49 = v42;
      v42 = v45;
      while ( v47 )
      {
        v53 = v42 == 0;
        if ( v42 )
          v53 = v48 == 0;
        if ( v53 )
        {
          if ( v49 )
          {
            v16 = (char *)*((_DWORD *)v49 + 2);
            if ( v16 )
              v16 += *(_DWORD *)(*(_DWORD *)(v21 + 344) + 20);
            goto LABEL_71;
          }
        }
        else
        {
          v16 = *(char **)(*(_DWORD *)(v21 + 344) + 20);
          if ( *(_DWORD *)(v49 - v16 + 264) - *(_DWORD *)(v42 - v16 + 264) > 0 )
          {
            v51 = *((_DWORD *)v42 + 2);
            if ( v51 )
              v51 += (int)v16;
LABEL_58:
            --v48;
            if ( !v43 )
            {
              v43 = v42;
              v42 = (char *)v51;
              goto LABEL_76;
            }
            v16 = &v42[-*(_DWORD *)(*(_DWORD *)(v21 + 344) + 20)];
            v43[2] = v16;
            if ( !v42 )
            {
              v43 = 0;
              v42 = (char *)v51;
              continue;
            }
            goto LABEL_62;
          }
          if ( v49 )
          {
            v55 = *((_DWORD *)v49 + 2);
            if ( v55 )
              v16 += v55;
            else
              v16 = 0;
            goto LABEL_71;
          }
        }
        v16 = v49;
LABEL_71:
        --v47;
        if ( !v43 )
        {
          v43 = v49;
          v49 = v16;
LABEL_76:
          v40 = (int)v43;
          if ( v43 )
          {
            v16 = 0;
            goto LABEL_63;
          }
          continue;
        }
        if ( !v49 )
        {
          v43[2] = 0;
          v43 = 0;
          v49 = v16;
          continue;
        }
        v51 = (int)v42;
        v42 = v49;
        v54 = &v49[-*(_DWORD *)(*(_DWORD *)(v21 + 344) + 20)];
        v49 = v16;
        v43[2] = v54;
LABEL_62:
        v16 = (char *)v43 - *(_DWORD *)(*(_DWORD *)(v21 + 344) + 20);
        v43 = v42;
        v42 = (char *)v51;
LABEL_63:
        v43[1] = v16;
      }
      v50 = v48 == 0;
      if ( v48 )
        v50 = v42 == 0;
      if ( !v50 )
      {
        v51 = *((_DWORD *)v42 + 2);
        v52 = v51 == 0;
        if ( v51 )
          v16 = *(char **)(v21 + 344);
        else
          v51 = v47;
        if ( !v52 )
        {
          v16 = (char *)*((_DWORD *)v16 + 5);
          v51 += (int)v16;
        }
        goto LABEL_58;
      }
    }
    while ( v42 );
    if ( v43 )
      v43[2] = 0;
    if ( v44 <= 1 )
      goto LABEL_94;
    v41 *= 2;
  }
  while ( v40 );
  v43 = 0;
LABEL_94:
  *(_DWORD *)(*(_DWORD *)(v21 + 344) + 16) = v43;
  dword_690EC = v40 - *(_DWORD *)(*(_DWORD *)(v21 + 344) + 20);
LABEL_95:
  pthread_cond_broadcast((pthread_cond_t *)(v3 + 40));
  if ( pthread_mutex_unlock((pthread_mutex_t *)dword_69010) )
  {
    v59 = _errno_location();
    snprintf(s, 0x800u, "WTF MUTEX ERROR ON UNLOCK! errno=%d in %s %s():%d", *v59, "cgminer.c", "hash_push", 5795);
    goto LABEL_107;
  }
  return off_67ED8();
}

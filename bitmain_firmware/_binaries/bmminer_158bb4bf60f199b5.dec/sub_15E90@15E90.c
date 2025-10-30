int __fastcall sub_15E90(int a1)
{
  int v1; // r4
  _WORD *v2; // r9
  int i; // r10
  int v4; // r1
  _WORD *v5; // r3
  _WORD *v6; // r11
  int j; // r6
  _WORD *v8; // r4
  int v9; // r5
  int v10; // r2
  int v11; // r1
  int v12; // r3
  double v13; // d7
  double v14; // d6
  double v15; // d6
  int v16; // r9
  pthread_mutex_t *v17; // r11
  pthread_mutex_t *v18; // r5
  int v19; // t1
  pthread_mutex_t *v20; // r12
  int k; // r0
  pthread_mutex_t *v22; // r2
  int m; // r3
  int v24; // lr
  __int16 v25; // r1
  bool v26; // zf
  __int16 v27; // r1
  pthread_mutex_t *v28; // r10
  int v29; // r6
  int v30; // t1
  pthread_mutex_t *v31; // r4
  int n; // lr
  pthread_mutex_t *v33; // r1
  int ii; // r2
  int v35; // r0
  __int16 v36; // r3
  bool v37; // zf
  int v38; // r4
  int v39; // r9
  int v40; // r10
  char *v41; // r8
  char *v42; // r4
  int jj; // r6
  int v44; // r5
  int v45; // r2
  bool v46; // zf
  int v47; // r2
  int v48; // r1
  int v49; // r3
  const char *v50; // r3
  int v51; // t1
  pthread_mutex_t *v52; // r6
  int kk; // lr
  pthread_mutex_t *v54; // r0
  pthread_mutex_t *v55; // r1
  int v56; // r12
  int v57; // r2
  int v58; // r3
  int v59; // r2
  int *v60; // r3
  pthread_mutex_t *v61; // r0
  int v62; // r1
  int align_low; // r2
  int v64; // r1
  int v65; // r2
  int result; // r0
  __int16 v67; // r8
  int v68; // r2
  int v69; // r1
  const char *v70; // r3
  int *v71; // r0
  int *v72; // r0
  int *v73; // r0
  int *v74; // r0
  int v76; // [sp+20h] [bp-834h]
  int v77; // [sp+2Ch] [bp-828h]
  int v78; // [sp+30h] [bp-824h]
  pthread_mutex_t *v79; // [sp+30h] [bp-824h]
  int v80; // [sp+34h] [bp-820h]
  int v81; // [sp+3Ch] [bp-818h]
  unsigned __int8 v82; // [sp+43h] [bp-811h] BYREF
  int v83; // [sp+44h] [bp-810h] BYREF
  int v84; // [sp+48h] [bp-80Ch] BYREF
  int v85; // [sp+4Ch] [bp-808h]
  char s[2052]; // [sp+50h] [bp-804h] BYREF

  v1 = dword_A0D68;
  v2 = &unk_9F80C;
  for ( i = 0; i != 16; ++i )
  {
    while ( *(_DWORD *)(v1 + 4 * i + 4) != 1 )
    {
      ++i;
      v2 += 54;
      if ( i == 16 )
        goto LABEL_22;
    }
    v4 = 0;
    v5 = v2;
    v2[2] = 255;
    v2[3] = 255;
    v2[4] = 0;
    v2[5] = 0;
    *v2 = -127;
    v2[1] = -127;
    do
    {
      ++v4;
      v5[8] = 255;
      *((_BYTE *)v5 + 15) = 1;
      v5[14] = 255;
      v5 += 12;
      *((_BYTE *)v5 + 3) = 1;
    }
    while ( v4 != 4 );
    v6 = v2;
    for ( j = 0; j != 4; ++j )
    {
      v8 = v6;
      v9 = 0;
      do
      {
        v10 = *((unsigned __int8 *)v8 + 14);
        v11 = *((unsigned __int8 *)v8 + 13);
        v82 = -1;
        if ( sub_14528(i, v11, v10, 0, &v82) )
        {
          v12 = (__int16)(v82 - 64);
          if ( v9 )
          {
            v13 = (double)v12;
            if ( a1 )
              v14 = 8.2952;
            else
              v14 = 11.243;
            if ( a1 )
              v15 = v13 * 0.8755 - v14;
            else
              v15 = v13 * 0.9705 - v14;
            LOWORD(v12) = (int)v15;
          }
          v8[8] = v12;
          *((_BYTE *)v8 + 15) = 0;
        }
        else
        {
          v8[8] = 255;
          *((_BYTE *)v8 + 15) = 1;
          if ( (unsigned int)dword_9E31C > 3 )
          {
            snprintf(
              s,
              0x800u,
              "read temp sensor failed: chain = %d, sensor = %d, chip = %d, reg = %d\n",
              i,
              j,
              *((unsigned __int8 *)v8 + 13),
              *((unsigned __int8 *)v8 + 14));
            sub_47AB4(3, s, 0);
          }
        }
        v26 = v9 == 1;
        v8 += 6;
        v9 = 1;
      }
      while ( !v26 );
      v6 += 12;
    }
    v2 += 54;
    v1 = dword_A0D68;
  }
LABEL_22:
  v16 = v1;
  v17 = (pthread_mutex_t *)&unk_9F80C;
  dword_A05D0 = 0;
  dword_A05D4 = 0;
  dword_A05D8 = 0;
  dword_A05DC = 0;
  v18 = (pthread_mutex_t *)&unk_9F80C;
  do
  {
    while ( 1 )
    {
      v19 = *(_DWORD *)(v16 + 4);
      v16 += 4;
      if ( v19 == 1 )
        break;
      v18 = (pthread_mutex_t *)((char *)v18 + 108);
      if ( v18 == &mutex )
        goto LABEL_36;
    }
    v20 = v18;
    for ( k = 0; k != 4; ++k )
    {
      v22 = v20;
      for ( m = 0; m != 4; m += 2 )
      {
        if ( !v22->__size[15] )
        {
          v24 = (unsigned __int8)v22->__size[12];
          v25 = *((_WORD *)&v22->__align + 8);
          v26 = v24 == 65;
          if ( v24 != 65 )
            v26 = v24 == 17;
          if ( v26 )
          {
            v27 = v25 + *(_WORD *)((char *)&dword_A05D0 + m);
            ++*(_WORD *)((char *)&dword_A05D8 + m);
            *(_WORD *)((char *)&dword_A05D0 + m) = v27;
          }
          else
          {
            v67 = *(_WORD *)((char *)&dword_A05D4 + m);
            ++*(_WORD *)((char *)&dword_A05DC + m);
            *(_WORD *)((char *)&dword_A05D4 + m) = v25 + v67;
          }
        }
        v22 = (pthread_mutex_t *)((char *)v22 + 12);
      }
      ++v20;
    }
    v18 = (pthread_mutex_t *)((char *)v18 + 108);
  }
  while ( v18 != &mutex );
LABEL_36:
  v80 = (__int16)dword_A05D8;
  if ( (_WORD)dword_A05D8 )
    LOWORD(dword_A05D0) = sub_772E8((__int16)dword_A05D0);
  v78 = (__int16)dword_A05DC;
  if ( (_WORD)dword_A05DC )
    LOWORD(dword_A05D4) = sub_772E8((__int16)dword_A05D4);
  v76 = SHIWORD(dword_A05D8);
  if ( HIWORD(dword_A05D8) )
    HIWORD(dword_A05D0) = sub_772E8(SHIWORD(dword_A05D0));
  v77 = SHIWORD(dword_A05DC);
  if ( HIWORD(dword_A05DC) )
    HIWORD(dword_A05D4) = sub_772E8(SHIWORD(dword_A05D4));
  v81 = v1;
  dword_A05E0 = 0;
  dword_A05E4 = 0;
  v28 = (pthread_mutex_t *)&unk_9F80C;
  v29 = v1;
  do
  {
    while ( 1 )
    {
      v30 = *(_DWORD *)(v29 + 4);
      v29 += 4;
      if ( v30 == 1 )
        break;
      v28 = (pthread_mutex_t *)((char *)v28 + 108);
      if ( v28 == v18 )
        goto LABEL_58;
    }
    v31 = v28;
    for ( n = 0; n != 4; ++n )
    {
      v33 = v31;
      for ( ii = 0; ii != 4; ii += 2 )
      {
        if ( !v33->__size[15] )
        {
          v35 = (unsigned __int8)v33->__size[12];
          v36 = *((_WORD *)&v33->__align + 8);
          v37 = v35 == 65;
          if ( v35 != 65 )
            v37 = v35 == 17;
          if ( v37 )
            *(_WORD *)((char *)&dword_A05E0 + ii) += (v36 - *(_WORD *)((char *)&dword_A05D0 + ii))
                                                   * (v36 - *(_WORD *)((char *)&dword_A05D0 + ii));
          else
            *(_WORD *)((char *)&dword_A05E4 + ii) += (v36 - *(_WORD *)((char *)&dword_A05D4 + ii))
                                                   * (v36 - *(_WORD *)((char *)&dword_A05D4 + ii));
        }
        v33 = (pthread_mutex_t *)((char *)v33 + 12);
      }
      ++v31;
    }
    v28 = (pthread_mutex_t *)((char *)v28 + 108);
  }
  while ( v28 != v18 );
LABEL_58:
  v38 = v81;
  if ( v80 )
    LOWORD(dword_A05E0) = sub_772E8((__int16)dword_A05E0);
  if ( v78 )
    LOWORD(dword_A05E4) = sub_772E8((__int16)dword_A05E4);
  if ( v76 )
    HIWORD(dword_A05E0) = sub_772E8(SHIWORD(dword_A05E0));
  if ( v77 )
    HIWORD(dword_A05E4) = sub_772E8(SHIWORD(dword_A05E4));
  v39 = 0;
  v79 = v28;
  do
  {
    while ( *(_DWORD *)(v38 + 4 * v39 + 4) != 1 )
    {
      if ( ++v39 == 16 )
        goto LABEL_85;
    }
    v40 = 0;
    v41 = (char *)&unk_9F80C + 108 * v39;
    do
    {
      v42 = v41;
      for ( jj = 0; ; jj = 1 )
      {
        v44 = (unsigned __int8)v42[15];
        if ( !v42[15] )
        {
          v45 = (unsigned __int8)v42[12];
          v46 = v45 == 65;
          if ( v45 != 65 )
            v46 = v45 == 17;
          if ( v46 )
          {
            v47 = *((__int16 *)&dword_A05E0 + jj);
            if ( v47 > 100 )
            {
              v48 = *((__int16 *)v42 + 8);
              v49 = v48 - *((__int16 *)&dword_A05D0 + jj);
              if ( (float)(v49 * v49) > (float)((float)v47 * 2.7) )
              {
                v42[15] = 1;
                if ( (unsigned int)dword_9E31C > 3 )
                {
                  v50 = "chip";
                  if ( !jj )
                    v50 = "pcb";
                  snprintf(
                    s,
                    0x800u,
                    "[OUTLIER] air_in, chain = %d, sensor = %d, chip = %d, type = %s, temp = %d\n",
                    v39,
                    v40,
                    (unsigned __int8)v42[13],
                    v50,
                    v48);
                  sub_47AB4(3, s, v44);
                }
              }
            }
          }
          else
          {
            v68 = *((__int16 *)&dword_A05E4 + jj);
            if ( v68 > 100 )
            {
              v69 = *((__int16 *)v42 + 8);
              if ( (float)((v69 - *((__int16 *)&dword_A05D4 + jj)) * (v69 - *((__int16 *)&dword_A05D4 + jj))) > (float)((float)v68 * 2.7) )
              {
                v42[15] = 1;
                if ( (unsigned int)dword_9E31C > 3 )
                {
                  v70 = "chip";
                  if ( !jj )
                    v70 = "pcb";
                  snprintf(
                    s,
                    0x800u,
                    "[OUTLIER] air_out, chain = %d, sensor = %d, chip = %d, type = %s, temp = %d\n",
                    v39,
                    v40,
                    (unsigned __int8)v42[13],
                    v70,
                    v69);
                  sub_47AB4(3, s, 0);
                }
              }
            }
          }
        }
        v42 += 12;
        if ( jj == 1 )
          break;
      }
      ++v40;
      v41 += 24;
    }
    while ( v40 != 4 );
    ++v39;
    v38 = dword_A0D68;
  }
  while ( v39 != 16 );
LABEL_85:
  v84 = 16711935;
  v83 = -8257663;
  v85 = 0;
  do
  {
    while ( 1 )
    {
      v51 = *(_DWORD *)(v38 + 4);
      v38 += 4;
      if ( v51 == 1 )
        break;
      v17 = (pthread_mutex_t *)((char *)v17 + 108);
      if ( v17 == v79 )
        goto LABEL_106;
    }
    v52 = v17;
    for ( kk = 0; kk != 4; ++kk )
    {
      v54 = v52;
      v55 = v17;
      v56 = 0;
      do
      {
        v57 = (unsigned __int8)v54->__size[15];
        *((_WORD *)&v55->__align + 4) += v57;
        if ( !v57 )
        {
          v58 = *((__int16 *)&v54->__align + 8);
          v59 = *((__int16 *)&v55->__align + 2);
          if ( SLOWORD(v55->__align) < v58 )
            LOWORD(v55->__lock) = v58;
          if ( v59 > v58 )
            *((_WORD *)&v55->__align + 2) = v58;
        }
        v26 = v56 == 1;
        v55 = (pthread_mutex_t *)((char *)v55 + 2);
        v56 = 1;
        v54 = (pthread_mutex_t *)((char *)v54 + 12);
      }
      while ( !v26 );
      ++v52;
    }
    v60 = &v83;
    v61 = v17;
    do
    {
      v62 = *((__int16 *)&v61->__align + 4);
      *((_WORD *)v60 + 4) += v62;
      if ( v62 != 4 )
      {
        align_low = SLOWORD(v61->__align);
        v64 = *((__int16 *)v60 + 2);
        if ( *(__int16 *)v60 < align_low )
          *(_WORD *)v60 = align_low;
        v65 = *((__int16 *)&v61->__align + 2);
        if ( v64 > v65 )
          *((_WORD *)v60 + 2) = v65;
      }
      v60 = (int *)((char *)v60 + 2);
      v61 = (pthread_mutex_t *)((char *)v61 + 2);
    }
    while ( &v84 != v60 );
    v17 = (pthread_mutex_t *)((char *)v17 + 108);
  }
  while ( v17 != v79 );
LABEL_106:
  if ( pthread_mutex_lock(&mutex) )
  {
    v72 = _errno_location();
    snprintf(
      s,
      0x800u,
      "WTF MUTEX ERROR ON LOCK! errno=%d in %s %s():%d",
      *v72,
      "temperature/temperature.c",
      "get_temp_stats",
      450);
    sub_47AB4(3, s, 1);
    sub_62EC0(1);
  }
  if ( pthread_rwlock_wrlock(&stru_9FEE4) )
  {
    v73 = _errno_location();
    snprintf(
      s,
      0x800u,
      "WTF WRLOCK ERROR ON LOCK! errno=%d in %s %s():%d",
      *v73,
      "temperature/temperature.c",
      "get_temp_stats",
      450);
    sub_47AB4(3, s, 1);
    sub_62EC0(1);
  }
  memcpy(&unk_9FF10, &unk_9F80C, 0x6C0u);
  dword_9FF04 = v83;
  dword_9FF08 = v84;
  dword_9FF0C = v85;
  if ( pthread_rwlock_unlock(&stru_9FEE4) )
  {
    v74 = _errno_location();
    snprintf(
      s,
      0x800u,
      "WTF RWLOCK ERROR ON UNLOCK! errno=%d in %s %s():%d",
      *v74,
      "temperature/temperature.c",
      "get_temp_stats",
      453);
    sub_47AB4(3, s, 1);
    sub_62EC0(1);
  }
  if ( pthread_mutex_unlock(&mutex) )
  {
    v71 = _errno_location();
    snprintf(
      s,
      0x800u,
      "WTF MUTEX ERROR ON UNLOCK! errno=%d in %s %s():%d",
      *v71,
      "temperature/temperature.c",
      "get_temp_stats",
      453);
    sub_47AB4(3, s, 1);
    sub_62EC0(1);
  }
  result = off_9E444();
  if ( (unsigned int)dword_9E31C > 4 )
  {
    snprintf(
      s,
      0x800u,
      "[GLOBAL TEMP]  PCB: %d ~ %d, bad = %d; CHIP: %d ~ %d, bad = %d;\n",
      (__int16)dword_9FF08,
      (__int16)dword_9FF04,
      (__int16)dword_9FF0C,
      SHIWORD(dword_9FF08),
      SHIWORD(dword_9FF04),
      SHIWORD(dword_9FF0C));
    return sub_47AB4(4, s, 0);
  }
  return result;
}

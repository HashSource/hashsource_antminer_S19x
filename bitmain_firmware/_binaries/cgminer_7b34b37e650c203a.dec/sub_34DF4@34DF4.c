void __noreturn sub_34DF4()
{
  int v0; // r11
  int v1; // r5
  _DWORD *v2; // r4
  __int64 v3; // r6
  double v4; // r0
  double v5; // d7
  double v6; // d6
  int v7; // r6
  int *v8; // r12
  int v9; // r7
  bool v10; // zf
  int *v11; // r12
  int v12; // r7
  int v13; // lr
  int v14; // r5
  int v15; // r1
  _DWORD *v16; // r3
  int v17; // r6
  int v18; // r7
  int v19; // r0
  int **v20; // r2
  int v21; // r12
  int v22; // r3
  int v23; // r3
  int v24; // r3
  int v25; // r1
  int v26; // r1
  int v27; // r3
  int v28; // r3
  __int64 v29; // r2
  int v30; // r6
  char *v31; // r1
  int v32; // r1
  int *v33; // r0
  int *v34; // r0
  int *v35; // r0
  const char *v36; // r12
  int v37; // r1
  int v38; // [sp+14h] [bp-838h]
  int v39; // [sp+14h] [bp-838h]
  pthread_mutex_t *mutex; // [sp+18h] [bp-834h]
  pthread_mutex_t *mutexa; // [sp+18h] [bp-834h]
  void **v42; // [sp+28h] [bp-824h]
  struct timespec tp; // [sp+30h] [bp-81Ch] BYREF
  struct timeval v44; // [sp+38h] [bp-814h] BYREF
  struct timeval v45; // [sp+40h] [bp-80Ch] BYREF
  char s[2052]; // [sp+48h] [bp-804h] BYREF

  pthread_setcanceltype(1, 0);
  sub_250A8("Watchpool");
  sub_2C148();
  v0 = 0;
  sub_23A18(&tp);
  while ( 1 )
  {
    if ( ++v0 >= 121 )
      v0 = 0;
    sub_239A4(&v44);
    if ( dword_733CC > 0 )
      break;
LABEL_19:
    if ( *(_BYTE *)(sub_31FF4() + 97) )
      sub_34178(0);
    if ( dword_68FD0 == 2 && v44.tv_sec - dword_69180 > 60 * dword_73464 )
    {
      sub_239A4((struct timeval *)&dword_69180);
      sub_34178(0);
    }
    sub_23A24(&tp.tv_sec);
    sub_23A18(&tp);
  }
  v1 = 0;
  while ( 1 )
  {
    v2 = *(_DWORD **)(dword_744C8 + 4 * v1);
    if ( !byte_6917C && !dword_766C0 )
      break;
LABEL_13:
    if ( v0 == 120 )
    {
      v3 = *((_QWORD *)v2 + 5);
      v4 = sub_4A11C(
             (int)v3 - v2[38],
             (unsigned __int64)(v3 - (int)v2[38]) >> 32,
             (int)v3 - v2[38],
             (unsigned __int64)(v3 - (int)v2[38]) >> 32);
      v5 = *((double *)v2 + 18);
      v2[38] = v3;
      v6 = (v5 + v4 * 0.63) / 1.63;
      *((double *)v2 + 18) = v6;
      v2[39] = (int)v6;
    }
    if ( v2[25] && !*((_BYTE *)v2 + 284) )
    {
      if ( sub_2F1E8(v2, 1) )
      {
        if ( sub_2F180((int)v2, (_BYTE *)v2 + 97) )
          sub_32238(v2);
      }
      else
      {
        sub_239A4((struct timeval *)v2 + 17);
      }
      if ( !*((_BYTE *)v2 + 97) && !dword_68FD0 )
      {
        v7 = v2[1];
        if ( v7 < sub_3218C() && v44.tv_sec - v2[34] > dword_68750 )
        {
          if ( byte_74500 || byte_68BD4 || dword_67DB4 > 3 )
          {
            snprintf(s, 0x800u, "Pool %d %s stable for >%d seconds", *v2, (const char *)v2[41], dword_68750);
            sub_20F58(4, s, 0);
          }
          sub_34178(0);
        }
      }
    }
    if ( dword_733CC <= ++v1 )
      goto LABEL_19;
  }
  mutex = (pthread_mutex_t *)(v2 + 47);
  sub_239A4(&v45);
  if ( pthread_mutex_lock((pthread_mutex_t *)(v2 + 47)) )
  {
    v33 = _errno_location();
    snprintf(s, 0x800u, "WTF MUTEX ERROR ON LOCK! errno=%d in %s %s():%d", *v33, "cgminer.c", "reap_curl", 10158);
    goto LABEL_90;
  }
  v8 = (int *)v2[86];
  v9 = *v8;
  v10 = v2 + 86 == v8;
  v11 = v8 - 1;
  v12 = v9 - 4;
  if ( v10 )
  {
    if ( pthread_mutex_unlock(mutex) )
      goto LABEL_96;
    off_67ED8();
  }
  else
  {
    v13 = v2[72];
    if ( v13 > 1 )
    {
      v38 = v1;
      v14 = 0;
      while ( 1 )
      {
        if ( v45.tv_sec - v11[3] > 300 )
        {
          v2[72] = v13 - 1;
          ++v14;
          v15 = v11[1];
          v16 = (_DWORD *)v11[2];
          *(_DWORD *)(v15 + 4) = v16;
          *v16 = v15;
          free(v11);
        }
        if ( v2 + 86 == (_DWORD *)(v12 + 4) )
          break;
        v13 = v2[72];
        v11 = (int *)v12;
        if ( v13 <= 1 )
        {
          v1 = v38;
          goto LABEL_41;
        }
        v12 = *(_DWORD *)(v12 + 4) - 4;
      }
      v30 = v14;
      v1 = v38;
      if ( pthread_mutex_unlock(mutex) )
      {
LABEL_96:
        v35 = _errno_location();
        v36 = "reap_curl";
        v37 = 10176;
LABEL_93:
        snprintf(s, 0x800u, "WTF MUTEX ERROR ON UNLOCK! errno=%d in %s %s():%d", *v35, "cgminer.c", v36, v37);
LABEL_90:
        sub_20F58(3, s, 1);
        sub_2E6B0(1, 1);
      }
      off_67ED8();
      if ( v30 && byte_68BD5 && (byte_74500 || byte_68BD4 || dword_67DB4 > 6) )
      {
        v31 = "";
        if ( v30 != 1 )
          v31 = "s";
        snprintf(s, 0x800u, "Reaped %d curl%s from pool %d", v30, v31, *v2);
        sub_20F58(7, s, 0);
      }
    }
  }
LABEL_41:
  mutexa = (pthread_mutex_t *)time(0);
  v39 = pthread_mutex_lock(&stru_690F0);
  if ( v39 )
  {
    v34 = _errno_location();
    snprintf(
      s,
      0x800u,
      "WTF MUTEX ERROR ON LOCK! errno=%d in %s %s():%d",
      *v34,
      "cgminer.c",
      "prune_stratum_shares",
      10194);
    goto LABEL_90;
  }
  v17 = dword_69108;
  if ( !dword_69108 )
  {
    if ( pthread_mutex_unlock(&stru_690F0) )
    {
LABEL_92:
      v35 = _errno_location();
      v36 = "prune_stratum_shares";
      v37 = 10207;
      goto LABEL_93;
    }
    off_67ED8();
    goto LABEL_13;
  }
  v18 = *(_DWORD *)(dword_69108 + 8);
  if ( v2 == *(_DWORD **)(*(_DWORD *)(dword_69108 + 36) + 260) )
    goto LABEL_46;
LABEL_44:
  if ( !v18 )
  {
LABEL_60:
    if ( pthread_mutex_unlock(&stru_690F0) )
      goto LABEL_92;
    off_67ED8();
    if ( v39 )
    {
      if ( byte_74500 || byte_68BD4 || dword_67DB4 > 3 )
      {
        snprintf(s, 0x800u, "Lost %d shares due to no stratum share response from pool %d", v39, *v2);
        sub_20F58(4, s, 0);
      }
      v29 = *(_QWORD *)&dword_73318;
      v2[30] += v39;
      *(_QWORD *)&dword_73318 = v29 + v39;
    }
    goto LABEL_13;
  }
  while ( 1 )
  {
    v17 = v18;
    v18 = *(_DWORD *)(v18 + 8);
    if ( v2 != *(_DWORD **)(*(_DWORD *)(v17 + 36) + 260) )
      goto LABEL_44;
LABEL_46:
    if ( (int)mutexa <= *(_DWORD *)(v17 + 44) + 120 )
      goto LABEL_44;
    v19 = *(_DWORD *)(v17 + 4);
    v20 = (int **)dword_69108;
    v21 = *(_DWORD *)dword_69108;
    if ( v19 )
      break;
    v32 = *(_DWORD *)(v17 + 8);
    if ( v32 )
    {
      v22 = *(_DWORD *)(v21 + 20);
      if ( v17 != *(_DWORD *)(v21 + 16) - v22 )
        goto LABEL_81;
LABEL_82:
      *(_DWORD *)(v21 + 16) = v19 + v22;
      v19 = *(_DWORD *)(v17 + 4);
      if ( !v19 )
      {
        v32 = *(_DWORD *)(v17 + 8);
LABEL_81:
        v20 = (int **)v32;
        dword_69108 = v32;
LABEL_50:
        v23 = *(_DWORD *)(v17 + 8);
        if ( v23 )
          *(_DWORD *)(v23 + (*v20)[5] + 4) = *(_DWORD *)(v17 + 4);
        v24 = 3 * (((*v20)[1] - 1) & *(_DWORD *)(v17 + 28));
        v25 = **v20 + 12 * (((*v20)[1] - 1) & *(_DWORD *)(v17 + 28));
        --*(_DWORD *)(v25 + 4);
        v26 = **v20;
        if ( *(_DWORD *)(v26 + 4 * v24) == v17 )
          *(_DWORD *)(v26 + 4 * v24) = *(_DWORD *)(v17 + 16);
        v27 = *(_DWORD *)(v17 + 12);
        if ( v27 )
          *(_DWORD *)(v27 + 16) = *(_DWORD *)(v17 + 16);
        v28 = *(_DWORD *)(v17 + 16);
        if ( v28 )
          *(_DWORD *)(v28 + 12) = *(_DWORD *)(v17 + 12);
        --(*v20)[3];
        goto LABEL_59;
      }
      v22 = (*v20)[5];
LABEL_49:
      *(_DWORD *)(v19 + v22 + 8) = *(_DWORD *)(v17 + 8);
      goto LABEL_50;
    }
    v42 = (void **)dword_69108;
    free(*(void **)v21);
    free(*v42);
    dword_69108 = 0;
LABEL_59:
    ++v39;
    sub_2CBA8((void ***)(v17 + 36), "cgminer.c", "prune_stratum_shares", 10201);
    free((void *)v17);
    if ( !v18 )
      goto LABEL_60;
  }
  v22 = *(_DWORD *)(v21 + 20);
  if ( v17 == *(_DWORD *)(v21 + 16) - v22 )
    goto LABEL_82;
  goto LABEL_49;
}

void __fastcall sub_3E108(struct timeval *a1)
{
  _DWORD *tv_usec; // r4
  int v2; // r5
  double *v3; // r12
  __int64 v4; // kr08_8
  double v5; // d6
  double v6; // d5
  double v7; // d7
  _BYTE *v8; // r3
  int v9; // r0
  int *v10; // r0
  double *v11; // r0
  double v12; // d6
  double v13; // d7
  double v14; // d5
  int *v15; // r0
  int *v16; // r0
  int *v17; // r0
  void *arg[2]; // [sp+14h] [bp-80Ch] BYREF
  pthread_t v19; // [sp+1Ch] [bp-804h] BYREF
  char s[2048]; // [sp+20h] [bp-800h] BYREF

  arg[0] = a1;
  tv_usec = (_DWORD *)a1[32].tv_usec;
  sub_239A4(a1 + 54);
  if ( byte_6917C )
  {
    v2 = *(_DWORD *)(sub_31B04(*((_DWORD *)arg[0] + 64)) + 36);
    if ( pthread_mutex_lock(&stru_766C4) )
    {
      v10 = _errno_location();
      snprintf(
        s,
        0x800u,
        "WTF MUTEX ERROR ON LOCK! errno=%d in %s %s():%d",
        *v10,
        "cgminer.c",
        "submit_work_async",
        8688);
    }
    else
    {
      v3 = (double *)arg[0];
      v4 = qword_755D8;
      ++*(_DWORD *)(v2 + 36);
      qword_755D8 = v4 + 1;
      v5 = dbl_73370;
      ++*((_QWORD *)tv_usec + 1);
      *(double *)(v2 + 200) = *(double *)(v2 + 200) + v3[47];
      v6 = v3[47];
      v7 = *((double *)tv_usec + 9) + v6;
      dbl_73370 = v5 + v6;
      *((double *)tv_usec + 9) = v7;
      if ( !pthread_mutex_unlock(&stru_766C4) )
      {
        off_67ED8();
        if ( byte_74500 || byte_68BD4 || dword_67DB4 > 4 )
        {
          snprintf(
            s,
            0x800u,
            "Accepted %s %d benchmark share nonce %08x",
            *(const char **)(*(_DWORD *)(v2 + 4) + 8),
            *(_DWORD *)(v2 + 8),
            *((_DWORD *)arg[0] + 19));
          sub_20F58(5, s, 0);
        }
        return;
      }
      v15 = _errno_location();
      snprintf(
        s,
        0x800u,
        "WTF MUTEX ERROR ON UNLOCK! errno=%d in %s %s():%d",
        *v15,
        "cgminer.c",
        "submit_work_async",
        8695);
    }
LABEL_49:
    sub_20F58(3, s, 1);
    sub_2E6B0(1, 1);
  }
  if ( !sub_367EC((int)arg[0], 1) )
  {
    v8 = arg[0];
    if ( *((_BYTE *)arg[0] + 284) )
      goto LABEL_10;
    goto LABEL_24;
  }
  if ( byte_6875D )
  {
    if ( byte_74500 || byte_68BD4 || dword_67DB4 > 4 )
    {
      snprintf(s, 0x800u, "Pool %d stale share detected, submitting as user requested", *tv_usec);
LABEL_22:
      sub_20F58(5, s, 0);
    }
  }
  else
  {
    if ( !*((_BYTE *)tv_usec + 104) )
    {
      if ( byte_74500 || byte_68BD4 || dword_67DB4 > 4 )
      {
        snprintf(s, 0x800u, "Pool %d stale share detected, discarding", *tv_usec);
        sub_20F58(5, s, 0);
      }
      sub_35A94("discard", (_DWORD *)arg[0]);
      if ( pthread_mutex_lock(&stru_766C4) )
      {
        v16 = _errno_location();
        snprintf(
          s,
          0x800u,
          "WTF MUTEX ERROR ON LOCK! errno=%d in %s %s():%d",
          *v16,
          "cgminer.c",
          "submit_work_async",
          8716);
      }
      else
      {
        v11 = (double *)arg[0];
        v12 = *((double *)tv_usec + 11);
        v13 = dbl_766B8;
        ++tv_usec[30];
        v14 = v11[47];
        ++qword_73318;
        *((double *)tv_usec + 11) = v12 + v14;
        dbl_766B8 = v13 + v14;
        if ( !pthread_mutex_unlock(&stru_766C4) )
        {
          off_67ED8();
          sub_2CBA8((void ***)arg, "cgminer.c", "submit_work_async", 8725);
          return;
        }
        v17 = _errno_location();
        snprintf(
          s,
          0x800u,
          "WTF MUTEX ERROR ON UNLOCK! errno=%d in %s %s():%d",
          *v17,
          "cgminer.c",
          "submit_work_async",
          8723);
      }
      goto LABEL_49;
    }
    if ( byte_74500 || byte_68BD4 || dword_67DB4 > 4 )
    {
      snprintf(s, 0x800u, "Pool %d stale share detected, submitting as pool requested", *tv_usec);
      goto LABEL_22;
    }
  }
  v8 = arg[0];
  *((_BYTE *)arg[0] + 281) = 1;
  if ( v8[284] )
  {
LABEL_10:
    if ( byte_68BD5 )
    {
      if ( !byte_74500 && !byte_68BD4 && dword_67DB4 <= 6 )
      {
        v9 = tv_usec[182];
        if ( !v9 )
        {
LABEL_15:
          if ( dword_67DB4 <= 3 )
          {
            if ( tv_usec[182] )
            {
LABEL_17:
              sub_2CBA8((void ***)arg, "cgminer.c", "submit_work_async", 8739);
              return;
            }
            goto LABEL_63;
          }
LABEL_37:
          strcpy(s, "Discarding work from removed pool");
          sub_20F58(4, s, 0);
          if ( tv_usec[182] )
            goto LABEL_17;
          if ( byte_74500 || byte_68BD4 )
          {
LABEL_40:
            snprintf(s, 0x800u, "Pushing pool %d work to stratum queue", *tv_usec);
            sub_20F58(5, s, 0);
            goto LABEL_17;
          }
LABEL_63:
          if ( dword_67DB4 <= 4 )
            goto LABEL_17;
          goto LABEL_40;
        }
        goto LABEL_34;
      }
      snprintf(s, 0x800u, "Pushing pool %d work to stratum queue", *tv_usec);
      sub_20F58(7, s, 0);
    }
    v9 = tv_usec[182];
    if ( !v9 )
      goto LABEL_35;
    v8 = arg[0];
LABEL_34:
    if ( sub_233D4(v9, (int)v8) )
      return;
LABEL_35:
    if ( byte_74500 || byte_68BD4 )
      goto LABEL_37;
    goto LABEL_15;
  }
LABEL_24:
  if ( byte_74500 || byte_68BD4 || dword_67DB4 > 4 )
  {
    strcpy(s, "Pushing submit work to work thread");
    sub_20F58(5, s, 0);
    v8 = arg[0];
  }
  if ( pthread_create(&v19, 0, (void *(*)(void *))sub_2B4EC, v8) )
  {
    strcpy(s, "Failed to create submit_work_thread");
    sub_20F58(3, s, 1);
    sub_2E6B0(1, 1);
  }
}

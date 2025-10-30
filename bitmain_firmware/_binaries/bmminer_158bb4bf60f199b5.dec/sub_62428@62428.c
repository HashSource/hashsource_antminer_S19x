void __fastcall sub_62428(struct timeval *a1)
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
  sub_4A60C(a1 + 54);
  if ( byte_1AF244 )
  {
    v2 = *(_DWORD *)(sub_57BAC(*((_DWORD *)arg[0] + 64)) + 36);
    if ( pthread_mutex_lock(&stru_246244) )
    {
      v10 = _errno_location();
      snprintf(
        s,
        0x800u,
        "WTF MUTEX ERROR ON LOCK! errno=%d in %s %s():%d",
        *v10,
        "cgminer.c",
        "submit_work_async",
        8682);
    }
    else
    {
      v3 = (double *)arg[0];
      v4 = qword_245158;
      ++*(_DWORD *)(v2 + 36);
      qword_245158 = v4 + 1;
      v5 = dbl_242EF0;
      ++*((_QWORD *)tv_usec + 1);
      *(double *)(v2 + 200) = *(double *)(v2 + 200) + v3[47];
      v6 = v3[47];
      v7 = *((double *)tv_usec + 9) + v6;
      dbl_242EF0 = v5 + v6;
      *((double *)tv_usec + 9) = v7;
      if ( !pthread_mutex_unlock(&stru_246244) )
      {
        off_9E444();
        if ( byte_244080 || byte_1AECC4 || dword_9E320 > 4 )
        {
          snprintf(
            s,
            0x800u,
            "Accepted %s %d benchmark share nonce %08x",
            *(const char **)(*(_DWORD *)(v2 + 4) + 8),
            *(_DWORD *)(v2 + 8),
            *((_DWORD *)arg[0] + 19));
          sub_47AB4(5, s, 0);
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
        8689);
    }
LABEL_49:
    sub_47AB4(3, s, 1);
    sub_54CCC(1, 1);
  }
  if ( !sub_5B638((int)arg[0], 1) )
  {
    v8 = arg[0];
    if ( *((_BYTE *)arg[0] + 284) )
      goto LABEL_10;
    goto LABEL_24;
  }
  if ( byte_9EDA0 )
  {
    if ( byte_244080 || byte_1AECC4 || dword_9E320 > 4 )
    {
      snprintf(s, 0x800u, "Pool %d stale share detected, submitting as user requested", *tv_usec);
LABEL_22:
      sub_47AB4(5, s, 0);
    }
  }
  else
  {
    if ( !*((_BYTE *)tv_usec + 104) )
    {
      if ( byte_244080 || byte_1AECC4 || dword_9E320 > 4 )
      {
        snprintf(s, 0x800u, "Pool %d stale share detected, discarding", *tv_usec);
        sub_47AB4(5, s, 0);
      }
      sub_5B390("discard", (_DWORD *)arg[0]);
      if ( pthread_mutex_lock(&stru_246244) )
      {
        v16 = _errno_location();
        snprintf(
          s,
          0x800u,
          "WTF MUTEX ERROR ON LOCK! errno=%d in %s %s():%d",
          *v16,
          "cgminer.c",
          "submit_work_async",
          8710);
      }
      else
      {
        v11 = (double *)arg[0];
        v12 = *((double *)tv_usec + 11);
        v13 = dbl_246238;
        ++tv_usec[30];
        v14 = v11[47];
        ++qword_242E98;
        *((double *)tv_usec + 11) = v12 + v14;
        dbl_246238 = v13 + v14;
        if ( !pthread_mutex_unlock(&stru_246244) )
        {
          off_9E444();
          sub_53084((void ***)arg, "cgminer.c", "submit_work_async", 8719);
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
          8717);
      }
      goto LABEL_49;
    }
    if ( byte_244080 || byte_1AECC4 || dword_9E320 > 4 )
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
    if ( byte_1AECC5 )
    {
      if ( !byte_244080 && !byte_1AECC4 && dword_9E320 <= 6 )
      {
        v9 = tv_usec[182];
        if ( !v9 )
        {
LABEL_15:
          if ( dword_9E320 <= 3 )
          {
            if ( tv_usec[182] )
            {
LABEL_17:
              sub_53084((void ***)arg, "cgminer.c", "submit_work_async", 8733);
              return;
            }
            goto LABEL_63;
          }
LABEL_37:
          strcpy(s, "Discarding work from removed pool");
          sub_47AB4(4, s, 0);
          if ( tv_usec[182] )
            goto LABEL_17;
          if ( byte_244080 || byte_1AECC4 )
          {
LABEL_40:
            snprintf(s, 0x800u, "Pushing pool %d work to stratum queue", *tv_usec);
            sub_47AB4(5, s, 0);
            goto LABEL_17;
          }
LABEL_63:
          if ( dword_9E320 <= 4 )
            goto LABEL_17;
          goto LABEL_40;
        }
        goto LABEL_34;
      }
      snprintf(s, 0x800u, "Pushing pool %d work to stratum queue", *tv_usec);
      sub_47AB4(7, s, 0);
    }
    v9 = tv_usec[182];
    if ( !v9 )
      goto LABEL_35;
    v8 = arg[0];
LABEL_34:
    if ( sub_4A03C(v9, (int)v8) )
      return;
LABEL_35:
    if ( byte_244080 || byte_1AECC4 )
      goto LABEL_37;
    goto LABEL_15;
  }
LABEL_24:
  if ( byte_244080 || byte_1AECC4 || dword_9E320 > 4 )
  {
    strcpy(s, "Pushing submit work to work thread");
    sub_47AB4(5, s, 0);
    v8 = arg[0];
  }
  if ( pthread_create(&v19, 0, (void *(*)(void *))sub_51E24, v8) )
  {
    strcpy(s, "Failed to create submit_work_thread");
    sub_47AB4(3, s, 1);
    sub_54CCC(1, 1);
  }
}

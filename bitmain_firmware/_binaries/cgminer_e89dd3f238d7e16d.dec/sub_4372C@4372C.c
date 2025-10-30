void __fastcall sub_4372C(__time_t *a1)
{
  void *arg[2]; // [sp+Ch] [bp-830h] BYREF
  char v2[2048]; // [sp+14h] [bp-828h] BYREF
  pthread_t newthread; // [sp+814h] [bp-28h] BYREF
  int v4; // [sp+818h] [bp-24h]
  _DWORD *v5; // [sp+81Ch] [bp-20h]

  arg[0] = a1;
  v5 = (_DWORD *)a1[65];
  sub_21AC0(a1 + 108);
  if ( byte_86E18 )
  {
    v4 = sub_2DF58(*((_DWORD *)arg[0] + 64));
    sub_2D2FC(&stru_90DC4, "cgminer.c", "submit_work_async", 8767);
    ++*(_DWORD *)(v4 + 36);
    ++*(_QWORD *)&dword_90F20;
    ++*((_QWORD *)v5 + 1);
    *(double *)(v4 + 200) = *(double *)(v4 + 200) + *((double *)arg[0] + 47);
    dbl_92F58 = *((double *)arg[0] + 47) + dbl_92F58;
    *((double *)v5 + 9) = *((double *)v5 + 9) + *((double *)arg[0] + 47);
    sub_2D434(&stru_90DC4, "cgminer.c", "submit_work_async", 8774);
    if ( byte_90DC0 || byte_865D1 || dword_857E4 > 4 )
    {
      snprintf(
        v2,
        0x800u,
        "Accepted %s %d benchmark share nonce %08x",
        *(const char **)(*(_DWORD *)(v4 + 4) + 8),
        *(_DWORD *)(v4 + 8),
        *((_DWORD *)arg[0] + 19));
      sub_1DB6C(5, v2, 0);
    }
    return;
  }
  if ( !sub_34A50((int)arg[0], 1) )
    goto LABEL_24;
  if ( byte_85AA5 )
  {
    if ( byte_865D0 && (byte_90DC0 || byte_865D1 || dword_857E4 > 6) )
    {
      snprintf(v2, 0x800u, "Pool %d stale share detected, submitting as user requested", *v5);
      sub_1DB6C(7, v2, 0);
    }
LABEL_23:
    *((_BYTE *)arg[0] + 281) = 1;
LABEL_24:
    if ( *((_BYTE *)arg[0] + 284) )
    {
      if ( byte_865D0 && (byte_90DC0 || byte_865D1 || dword_857E4 > 6) )
      {
        snprintf(v2, 0x800u, "Pushing pool %d work to stratum queue", *v5);
        sub_1DB6C(7, v2, 0);
      }
      if ( !v5[182] || (unsigned __int8)sub_20ED4(v5[182], (int)arg[0]) != 1 )
      {
        if ( byte_90DC0 || byte_865D1 || dword_857E4 > 3 )
        {
          strcpy(v2, "Discarding work from removed pool");
          sub_1DB6C(4, v2, 0);
        }
        if ( !v5[182] && (byte_90DC0 || byte_865D1 || dword_857E4 > 4) )
        {
          snprintf(v2, 0x800u, "Pushing pool %d work to stratum queue", *v5);
          sub_1DB6C(5, v2, 0);
        }
        sub_30E0C(arg, "cgminer.c", "submit_work_async", 8818);
      }
    }
    else
    {
      if ( byte_90DC0 || byte_865D1 || dword_857E4 > 4 )
      {
        strcpy(v2, "Pushing submit work to work thread");
        sub_1DB6C(5, v2, 0);
      }
      if ( pthread_create(&newthread, 0, (void *(*)(void *))sub_34560, arg[0]) )
      {
        strcpy(v2, "Failed to create submit_work_thread");
        sub_1DB6C(3, v2, 1);
        sub_4B2A0(1);
      }
    }
    return;
  }
  if ( *((_BYTE *)v5 + 104) )
  {
    if ( byte_90DC0 || byte_865D1 || dword_857E4 > 4 )
    {
      snprintf(v2, 0x800u, "Pool %d stale share detected, submitting as pool requested", *v5);
      sub_1DB6C(5, v2, 0);
    }
    goto LABEL_23;
  }
  if ( byte_90DC0 || byte_865D1 || dword_857E4 > 4 )
  {
    snprintf(v2, 0x800u, "Pool %d stale share detected, discarding", *v5);
    sub_1DB6C(5, v2, 0);
  }
  sub_2E008("discard", (_DWORD *)arg[0]);
  sub_2D2FC(&stru_90DC4, "cgminer.c", "submit_work_async", 8795);
  ++*(_QWORD *)&dword_942F8;
  ++v5[30];
  dbl_90F28 = *((double *)arg[0] + 47) + dbl_90F28;
  *((double *)v5 + 11) = *((double *)v5 + 11) + *((double *)arg[0] + 47);
  sub_2D434(&stru_90DC4, "cgminer.c", "submit_work_async", 8802);
  sub_30E0C(arg, "cgminer.c", "submit_work_async", 8804);
}

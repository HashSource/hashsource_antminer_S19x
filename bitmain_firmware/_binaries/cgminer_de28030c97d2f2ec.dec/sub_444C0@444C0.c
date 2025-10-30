void __fastcall sub_444C0(__time_t *a1)
{
  void *arg[2]; // [sp+Ch] [bp-818h] BYREF
  char v2[2048]; // [sp+14h] [bp-810h] BYREF
  pthread_t newthread; // [sp+814h] [bp-10h] BYREF
  int v4; // [sp+818h] [bp-Ch]
  _DWORD *v5; // [sp+81Ch] [bp-8h]

  arg[0] = a1;
  v5 = (_DWORD *)a1[65];
  sub_22308(a1 + 108);
  if ( byte_87FB0 )
  {
    v4 = sub_2EF64(*((_DWORD *)arg[0] + 64));
    sub_2E354(&stru_91F5C, "cgminer.c", "submit_work_async", 8767);
    ++*(_DWORD *)(v4 + 36);
    ++*(_QWORD *)&dbl_920B8;
    ++*((_QWORD *)v5 + 1);
    *(double *)(v4 + 200) = *(double *)(v4 + 200) + *((double *)arg[0] + 47);
    dbl_940F0 = *((double *)arg[0] + 47) + dbl_940F0;
    *((double *)v5 + 9) = *((double *)v5 + 9) + *((double *)arg[0] + 47);
    sub_2E484(&stru_91F5C, "cgminer.c", "submit_work_async", 8774);
    if ( byte_91F58 || byte_87769 || dword_8697C > 4 )
    {
      snprintf(
        v2,
        0x800u,
        "Accepted %s %d benchmark share nonce %08x",
        *(const char **)(*(_DWORD *)(v4 + 4) + 8),
        *(_DWORD *)(v4 + 8),
        *((_DWORD *)arg[0] + 19));
      sub_1E4EC(5, v2, 0);
    }
    return;
  }
  if ( !sub_35AAC((int)arg[0], 1) )
    goto LABEL_25;
  if ( byte_86C3D )
  {
    if ( byte_87768 && (byte_91F58 || byte_87769 || dword_8697C > 6) )
    {
      snprintf(v2, 0x800u, "Pool %d stale share detected, submitting as user requested", *v5);
      sub_1E4EC(7, v2, 0);
    }
LABEL_24:
    *((_BYTE *)arg[0] + 281) = 1;
LABEL_25:
    if ( *((_BYTE *)arg[0] + 284) )
    {
      if ( byte_87768 && (byte_91F58 || byte_87769 || dword_8697C > 6) )
      {
        snprintf(v2, 0x800u, "Pushing pool %d work to stratum queue", *v5);
        sub_1E4EC(7, v2, 0);
      }
      if ( !v5[186] || (unsigned __int8)sub_2175C(v5[186], (int)arg[0]) != 1 )
      {
        if ( byte_91F58 || byte_87769 || dword_8697C > 3 )
        {
          strcpy(v2, "Discarding work from removed pool");
          sub_1E4EC(4, v2, 0);
        }
        if ( !v5[186] && (byte_91F58 || byte_87769 || dword_8697C > 4) )
        {
          snprintf(v2, 0x800u, "Pushing pool %d work to stratum queue", *v5);
          sub_1E4EC(5, v2, 0);
        }
        sub_31F40(arg, "cgminer.c", "submit_work_async", 8818);
      }
    }
    else
    {
      if ( byte_91F58 || byte_87769 || dword_8697C > 4 )
      {
        strcpy(v2, "Pushing submit work to work thread");
        sub_1E4EC(5, v2, 0);
      }
      if ( pthread_create(&newthread, 0, (void *(*)(void *))sub_355C8, arg[0]) )
      {
        strcpy(v2, "Failed to create submit_work_thread");
        sub_1E4EC(3, v2, 1);
        sub_4BFB0(1);
      }
    }
    return;
  }
  if ( *((_BYTE *)v5 + 104) )
  {
    if ( byte_91F58 || byte_87769 || dword_8697C > 4 )
    {
      snprintf(v2, 0x800u, "Pool %d stale share detected, submitting as pool requested", *v5);
      sub_1E4EC(5, v2, 0);
    }
    goto LABEL_24;
  }
  if ( byte_91F58 || byte_87769 || dword_8697C > 4 )
  {
    snprintf(v2, 0x800u, "Pool %d stale share detected, discarding", *v5);
    sub_1E4EC(5, v2, 0);
  }
  sub_2F014("discard", (_DWORD *)arg[0]);
  sub_2E354(&stru_91F5C, "cgminer.c", "submit_work_async", 8795);
  ++*(_QWORD *)&dbl_95490;
  ++v5[30];
  dbl_920C0 = *((double *)arg[0] + 47) + dbl_920C0;
  *((double *)v5 + 11) = *((double *)v5 + 11) + *((double *)arg[0] + 47);
  sub_2E484(&stru_91F5C, "cgminer.c", "submit_work_async", 8802);
  sub_31F40(arg, "cgminer.c", "submit_work_async", 8804);
}

int __fastcall sub_42C20(int a1, int a2)
{
  __int64 v2; // r0
  __int64 v3; // r2
  char v7[12]; // [sp+18h] [bp-88Ch] BYREF
  __int64 v8; // [sp+818h] [bp-8Ch] BYREF
  _BYTE v9[32]; // [sp+824h] [bp-80h] BYREF
  int v10; // [sp+844h] [bp-60h] BYREF
  _BYTE v11[32]; // [sp+864h] [bp-40h] BYREF
  void *v12; // [sp+884h] [bp-20h]
  void *ptr; // [sp+888h] [bp-1Ch]
  _BYTE *v14; // [sp+88Ch] [bp-18h]
  _BYTE *v15; // [sp+890h] [bp-14h]
  int i; // [sp+894h] [bp-10h]

  sub_2D95C(a1 + 212, "cgminer.c", "gen_stratum_work", 8439);
  sub_2CDE4();
  v8 = v2;
  sub_2AF08(
    (void *)(*(_DWORD *)(a1 + 1568) + *(_DWORD *)(a1 + 1576)),
    &v8,
    *(_DWORD *)(a1 + 632),
    "cgminer.c",
    "gen_stratum_work",
    8444);
  v3 = *(_QWORD *)(a1 + 624);
  *(_QWORD *)(a1 + 624) = v3 + 1;
  *(_QWORD *)(a2 + 296) = v3;
  *(_DWORD *)(a2 + 304) = *(_DWORD *)(a1 + 632);
  sub_2D9B0(a1 + 212, "cgminer.c", "gen_stratum_work", 8450);
  sub_42698(*(_DWORD *)(a1 + 1568), (int)v11, *(_DWORD *)(a1 + 1572));
  sub_2AF08(v9, v11, 0x20u, "cgminer.c", "gen_stratum_work", 8454);
  for ( i = 0; i < *(_DWORD *)(a1 + 1708); ++i )
  {
    sub_2AF08(&v10, *(const void **)(*(_DWORD *)(a1 + 676) + 4 * i), 0x20u, "cgminer.c", "gen_stratum_work", 8458);
    sub_42698((int)v9, (int)v11, 64);
    sub_2AF08(v9, v11, 0x20u, "cgminer.c", "gen_stratum_work", 8460);
  }
  v15 = v9;
  v14 = v11;
  sub_2D140((unsigned int)v11, (int)v9);
  sub_2AF08((void *)a2, (const void *)(a1 + 1580), 0x70u, "cgminer.c", "gen_stratum_work", 8469);
  sub_2AF08((void *)(a2 + 36), v11, 0x20u, "cgminer.c", "gen_stratum_work", 8470);
  *(_QWORD *)(a2 + 312) = *(_QWORD *)(a1 + 1824);
  *(_DWORD *)(a2 + 288) = strdup(*(const char **)(a1 + 672));
  *(_DWORD *)(a2 + 320) = strdup(*(const char **)(a1 + 612));
  *(_DWORD *)(a2 + 308) = strdup((const char *)(a1 + 1804));
  sub_2DA1C(a1 + 212, "cgminer.c", "gen_stratum_work", 8481);
  if ( byte_865D0 )
  {
    ptr = sub_1FE6C(a2, 112);
    v12 = sub_1FE6C((int)v11, 32);
    if ( byte_865D0 && (byte_90DC0 || byte_865D1 || dword_857E4 > 6) )
    {
      snprintf(v7, 0x800u, "Generated stratum merkle %s", (const char *)v12);
      sub_1DB6C(7, v7, 0);
    }
    if ( byte_865D0 && (byte_90DC0 || byte_865D1 || dword_857E4 > 6) )
    {
      snprintf(v7, 0x800u, "Generated stratum header %s", (const char *)ptr);
      sub_1DB6C(7, v7, 0);
    }
    if ( byte_865D0 && (byte_90DC0 || byte_865D1 || dword_857E4 > 6) )
    {
      snprintf(
        v7,
        0x800u,
        "Work job_id %s nonce2 %llu ntime %s",
        *(const char **)(a2 + 288),
        *(_QWORD *)(a2 + 296),
        *(const char **)(a2 + 308));
      sub_1DB6C(7, v7, 0);
    }
    free(ptr);
    free(v12);
  }
  sub_30BB8(a2);
  sub_426E4((void *)(a2 + 160));
  ++dword_90F44;
  if ( time(0) - dword_86CD0 > 5 )
  {
    dword_86CD0 = time(0);
    dword_86CCC = dword_90F44;
  }
  *(_DWORD *)(a2 + 260) = a1;
  *(_BYTE *)(a2 + 284) = 1;
  *(_DWORD *)(a2 + 248) = 0;
  *(_BYTE *)(a2 + 280) = 0;
  *(_BYTE *)(a2 + 440) = 83;
  *(_DWORD *)(a2 + 336) = dword_86EF4;
  *(_DWORD *)(a2 + 244) = 60;
  sub_32DC0(a2);
  return sub_21AC0((__time_t *)(a2 + 264));
}

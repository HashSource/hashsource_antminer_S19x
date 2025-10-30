int __fastcall sub_439D8(int a1, int a2)
{
  __int64 v2; // r2
  char v6[4]; // [sp+18h] [bp-884h] BYREF
  __int64 v7; // [sp+818h] [bp-84h] BYREF
  _BYTE v8[32]; // [sp+824h] [bp-78h] BYREF
  int v9; // [sp+844h] [bp-58h] BYREF
  _BYTE v10[32]; // [sp+864h] [bp-38h] BYREF
  void *v11; // [sp+884h] [bp-18h]
  void *ptr; // [sp+888h] [bp-14h]
  _BYTE *v13; // [sp+88Ch] [bp-10h]
  _BYTE *v14; // [sp+890h] [bp-Ch]
  int i; // [sp+894h] [bp-8h]

  sub_2E980(a1 + 212, "cgminer.c", "gen_stratum_work", 8439);
  v7 = *(_QWORD *)(a1 + 640);
  sub_2BEFC(
    (void *)(*(_DWORD *)(a1 + 1584) + *(_DWORD *)(a1 + 1592)),
    &v7,
    *(_DWORD *)(a1 + 648),
    "cgminer.c",
    "gen_stratum_work",
    8444);
  v2 = *(_QWORD *)(a1 + 640);
  *(_QWORD *)(a1 + 640) = v2 + 1;
  *(_QWORD *)(a2 + 296) = v2;
  *(_DWORD *)(a2 + 304) = *(_DWORD *)(a1 + 648);
  sub_2E9D0(a1 + 212, "cgminer.c", "gen_stratum_work", 8450);
  sub_43490(*(_DWORD *)(a1 + 1584), (int)v10, *(_DWORD *)(a1 + 1588));
  sub_2BEFC(v8, v10, 0x20u, "cgminer.c", "gen_stratum_work", 8454);
  for ( i = 0; *(_DWORD *)(a1 + 1724) > i; ++i )
  {
    sub_2BEFC(&v9, *(const void **)(*(_DWORD *)(a1 + 692) + 4 * i), 0x20u, "cgminer.c", "gen_stratum_work", 8458);
    sub_43490((int)v8, (int)v10, 64);
    sub_2BEFC(v8, v10, 0x20u, "cgminer.c", "gen_stratum_work", 8460);
  }
  v14 = v8;
  v13 = v10;
  sub_2E1A8((unsigned int)v10, (int)v8);
  sub_2BEFC((void *)a2, (const void *)(a1 + 1596), 0x70u, "cgminer.c", "gen_stratum_work", 8469);
  sub_2BEFC((void *)(a2 + 36), v10, 0x20u, "cgminer.c", "gen_stratum_work", 8470);
  *(_QWORD *)(a2 + 312) = *(_QWORD *)(a1 + 1840);
  *(_DWORD *)(a2 + 288) = strdup(*(const char **)(a1 + 688));
  *(_DWORD *)(a2 + 320) = strdup(*(const char **)(a1 + 628));
  *(_DWORD *)(a2 + 308) = strdup((const char *)(a1 + 1820));
  sub_2EA38(a1 + 212, "cgminer.c", "gen_stratum_work", 8481);
  if ( byte_87768 )
  {
    ptr = sub_20744(a2, 112);
    v11 = sub_20744((int)v10, 32);
    if ( byte_87768 && (byte_91F58 || byte_87769 || dword_8697C > 6) )
    {
      snprintf(v6, 0x800u, "Generated stratum merkle %s", (const char *)v11);
      sub_1E4EC(7, v6, 0);
    }
    if ( byte_87768 && (byte_91F58 || byte_87769 || dword_8697C > 6) )
    {
      snprintf(v6, 0x800u, "Generated stratum header %s", (const char *)ptr);
      sub_1E4EC(7, v6, 0);
    }
    if ( byte_87768 && (byte_91F58 || byte_87769 || dword_8697C > 6) )
    {
      snprintf(
        v6,
        0x800u,
        "Work job_id %s nonce2 %llu ntime %s",
        *(const char **)(a2 + 288),
        *(_QWORD *)(a2 + 296),
        *(const char **)(a2 + 308));
      sub_1E4EC(7, v6, 0);
    }
    free(ptr);
    free(v11);
  }
  sub_31CF4(a2);
  sub_434D8((void *)(a2 + 160));
  ++dword_920DC;
  if ( time(0) - dword_87E68 > 5 )
  {
    dword_87E68 = time(0);
    dword_87E64 = dword_920DC;
  }
  *(_DWORD *)(a2 + 260) = a1;
  *(_BYTE *)(a2 + 284) = 1;
  *(_DWORD *)(a2 + 248) = 0;
  *(_BYTE *)(a2 + 280) = 0;
  *(_BYTE *)(a2 + 440) = 83;
  *(_DWORD *)(a2 + 336) = dword_8808C;
  *(_DWORD *)(a2 + 244) = 60;
  sub_33E64(a2);
  return sub_22308((__time_t *)(a2 + 264));
}

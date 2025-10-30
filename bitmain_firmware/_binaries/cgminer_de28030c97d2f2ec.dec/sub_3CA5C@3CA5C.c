void __fastcall sub_3CA5C(int a1, __int64 a2)
{
  double v3; // d0
  int v4; // r4
  int *v5; // r0
  char *v6; // r0
  double v7; // r0
  double v8; // d8
  double v9; // r0
  int v10; // r4
  double v11; // r0
  int v12; // r4
  double v13; // r0
  int v14; // r4
  double v15; // r0
  int v16; // r4
  double v17; // r0
  double v18; // r0
  double v19; // r0
  double v20; // r0
  double v21; // r0
  double v22; // r0
  double v23; // r0
  double v24; // r0
  double v25; // r0
  double v26; // r0
  int v27; // r4
  double v28; // d8
  int i; // [sp+24h] [bp-A08h]
  char v32[4]; // [sp+28h] [bp-A04h] BYREF
  char v33[4]; // [sp+128h] [bp-904h] BYREF
  char v34[16]; // [sp+928h] [bp-104h] BYREF
  char v35[16]; // [sp+938h] [bp-F4h] BYREF
  char v36[16]; // [sp+948h] [bp-E4h] BYREF
  char v37[16]; // [sp+958h] [bp-D4h] BYREF
  char v38[16]; // [sp+968h] [bp-C4h] BYREF
  struct sysinfo info; // [sp+978h] [bp-B4h] BYREF
  unsigned __int64 v40; // [sp+9B8h] [bp-74h]
  double v41; // [sp+9C0h] [bp-6Ch]
  int v42; // [sp+9C8h] [bp-64h]
  int v43; // [sp+9CCh] [bp-60h]
  double v44; // [sp+9D0h] [bp-5Ch]
  double v45; // [sp+9D8h] [bp-54h]
  int v46; // [sp+9E0h] [bp-4Ch]
  int v47; // [sp+9E4h] [bp-48h]
  int v48; // [sp+9E8h] [bp-44h]
  int v49; // [sp+9ECh] [bp-40h]
  double v50; // [sp+9F0h] [bp-3Ch]
  int j; // [sp+9F8h] [bp-34h]
  int v52; // [sp+9FCh] [bp-30h]
  __int64 v53; // [sp+A00h] [bp-2Ch]
  __int64 v54; // [sp+A08h] [bp-24h]
  char v55; // [sp+A17h] [bp-15h]

  v55 = 0;
  v54 = 0;
  v53 = 0;
  v52 = 0;
  j = 0;
  if ( sysinfo(&info) )
  {
    if ( byte_91F58 || byte_87769 || dword_8697C > 5 )
    {
      v4 = *_errno_location();
      v5 = _errno_location();
      v6 = strerror(*v5);
      snprintf(v33, 0x800u, "Failed to get sysinfo, errno:%u, reason:%s\n", v4, v6);
      sub_1E4EC(6, v33, 0);
    }
    dword_9539C = time(0);
  }
  else
  {
    dword_9539C = info.uptime;
  }
  sub_22308(&dword_88070);
  sub_226B0();
  v50 = v3;
  v49 = dword_88070;
  v48 = dword_88070 - dword_898BC;
  if ( dword_88070 - dword_898BC < dword_86C20 )
  {
    if ( a1 < 0 )
      return;
  }
  else
  {
    byte_87FB9 = byte_87FBA != byte_87FB9;
    dword_898BC = v49;
    v55 = 1;
  }
  sub_21CA0((int)&unk_898B4, (int)&dword_88070);
  if ( a1 < 0 )
  {
    sub_2E354(&stru_920A0, "cgminer.c", "hashmeter", 7160);
    for ( i = 0; i < dword_953F0; ++i )
    {
      v43 = sub_2EEF8(i);
      v42 = *(_DWORD *)(v43 + 36);
      sub_226B0();
      v41 = v3;
      sub_21CA0(v42 + 140, (int)&dword_88070);
      LODWORD(v18) = v42 + 48;
      sub_32058(v18);
      LODWORD(v19) = v42 + 56;
      sub_32058(v19);
      LODWORD(v20) = v42 + 64;
      sub_32058(v20);
      v3 = 0.0;
      LODWORD(v21) = v42 + 72;
      sub_32058(v21);
    }
    sub_2E484(&stru_920A0, "cgminer.c", "hashmeter", 7175);
  }
  else
  {
    v47 = sub_2EEF8(a1);
    v46 = *(_DWORD *)(v47 + 36);
    sub_21CA0(v47 + 44, (int)&dword_88070);
    *(_DWORD *)(v46 + 240) = v49;
    sub_226B0();
    v45 = v3;
    sub_21CA0(v46 + 140, (int)&dword_88070);
    v7 = sub_68E74(a2, HIDWORD(a2));
    v44 = v7 / v45 / 1000000.0;
    if ( byte_87768 && (byte_91F58 || byte_87769 || dword_8697C > 6) )
    {
      snprintf(v33, 0x800u, "[thread %d: %llu hashes, %.1f mhash/sec]", a1, a2, v44);
      sub_1E4EC(7, v33, 0);
    }
    a2 = sub_68EE0(a2, HIDWORD(a2), 1000000, 0);
    sub_2E354(&stru_920A0, "cgminer.c", "hashmeter", 7131);
    v8 = *(double *)(v46 + 80);
    v9 = sub_68E74(a2, HIDWORD(a2));
    *(double *)(v46 + 80) = v8 + v9;
    v10 = v46 + 48;
    v11 = sub_68E74(a2, HIDWORD(a2));
    LODWORD(v11) = v10;
    sub_32058(v11);
    v12 = v46 + 56;
    v13 = sub_68E74(a2, HIDWORD(a2));
    LODWORD(v13) = v12;
    sub_32058(v13);
    v14 = v46 + 64;
    v15 = sub_68E74(a2, HIDWORD(a2));
    LODWORD(v15) = v14;
    sub_32058(v15);
    v16 = v46 + 72;
    v17 = sub_68E74(a2, HIDWORD(a2));
    LODWORD(v17) = v16;
    sub_32058(v17);
    sub_2E484(&stru_920A0, "cgminer.c", "hashmeter", 7138);
    if ( byte_951DC && v55 )
    {
      sub_325F4(v32, 0x100u, v46);
      printf("%s          \r", v32);
      fflush((FILE *)stdout);
    }
  }
  sub_2E354(&stru_920A0, "cgminer.c", "hashmeter", 7178);
  dbl_91F50 = sub_68E74(a2, HIDWORD(a2)) + dbl_91F50;
  if ( v55 )
  {
    if ( ++dword_87B38 > 11 )
      dword_87B38 = 0;
    for ( j = 0; j <= 11; ++j )
    {
      if ( *(double *)&qword_87AD8[j] >= 0.0 )
      {
        v22 = sub_68E74(v53, HIDWORD(v53));
        v53 = sub_68F40(
                COERCE_UNSIGNED_INT64(v22 + *(double *)&qword_87AD8[j]),
                HIDWORD(COERCE_UNSIGNED_INT64(v22 + *(double *)&qword_87AD8[j])));
        ++v52;
      }
    }
    if ( v52 <= 0 )
      v54 = a2;
    else
      v54 = sub_68EE0(v53, HIDWORD(v53), v52, v52 >> 31);
    v23 = sub_68E74(v54, HIDWORD(v54));
    LODWORD(v23) = &dbl_95390;
    sub_32058(v23);
    v24 = sub_68E74(a2, HIDWORD(a2));
    LODWORD(v24) = &dbl_954A0;
    sub_32058(v24);
    v25 = sub_68E74(a2, HIDWORD(a2));
    LODWORD(v25) = &dbl_95498;
    sub_32058(v25);
    v26 = sub_68E74(a2, HIDWORD(a2));
    LODWORD(v26) = &dbl_92088;
    sub_32058(v26);
    *(_QWORD *)&dword_95350 = sub_68F40(
                                COERCE_UNSIGNED_INT64(dbl_95390 * 1000000.0),
                                HIDWORD(COERCE_UNSIGNED_INT64(dbl_95390 * 1000000.0)));
    qword_87AD8[dword_87B38] = 0;
  }
  v27 = dword_87B38;
  v28 = *(double *)&qword_87AD8[dword_87B38];
  *(double *)&qword_87AD8[v27] = v28 + sub_68E74(a2, HIDWORD(a2));
  dbl_87478 = (double)dword_9539C - (double)dword_9535C;
  if ( (double)dword_9539C - (double)dword_9535C - dbl_87488 <= 86400.0 )
  {
    dbl_87488 = dbl_87478;
  }
  else
  {
    if ( byte_91F58 || byte_87769 || dword_8697C > 2 )
    {
      snprintf(v33, 0x800u, "cgminer time error total_secs = %f last_total_secs = %f", dbl_87478, dbl_87488);
      sub_1E4EC(3, v33, 0);
    }
    sub_2E484(&stru_920A0, "cgminer.c", "hashmeter", 7226);
    sub_3C0CC();
    sub_2E354(&stru_920A0, "cgminer.c", "hashmeter", 7228);
  }
  if ( v55 )
  {
    v40 = sub_68F40(
            COERCE_UNSIGNED_INT64(dbl_91F50 / dbl_87478 * 1000000.0),
            HIDWORD(COERCE_UNSIGNED_INT64(dbl_91F50 / dbl_87478 * 1000000.0)));
    sub_32154(v40, v38, 0x10u, 4);
    v40 = sub_68F40(COERCE_UNSIGNED_INT64(dbl_95390 * 1000000.0), HIDWORD(COERCE_UNSIGNED_INT64(dbl_95390 * 1000000.0)));
    dbl_87B40 = (double)((int)dbl_95390 / 10) / 100.0;
    sub_32154(v40, v37, 0x10u, 4);
    v40 = sub_68F40(COERCE_UNSIGNED_INT64(dbl_954A0 * 1000000.0), HIDWORD(COERCE_UNSIGNED_INT64(dbl_954A0 * 1000000.0)));
    sub_32154(v40, v36, 0x10u, 4);
    v40 = sub_68F40(COERCE_UNSIGNED_INT64(dbl_95498 * 1000000.0), HIDWORD(COERCE_UNSIGNED_INT64(dbl_95498 * 1000000.0)));
    sub_32154(v40, v35, 0x10u, 4);
    v40 = sub_68F40(COERCE_UNSIGNED_INT64(dbl_92088 * 1000000.0), HIDWORD(COERCE_UNSIGNED_INT64(dbl_92088 * 1000000.0)));
    sub_32154(v40, v34, 0x10u, 4);
    snprintf(byte_88380, 0x100u, "(%ds):%s (1m):%s (5m):%s (15m):%s (avg):%sh/s", dword_86C20, v37, v36, v35, v34, v38);
  }
  sub_2E484(&stru_920A0, "cgminer.c", "hashmeter", 7269);
  if ( v55 )
  {
    printf("%s          \r", byte_88380);
    fflush((FILE *)stdout);
  }
}

void __fastcall sub_3BB74(int a1, __int64 a2)
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
  double v27; // d8
  int i; // [sp+24h] [bp-A08h]
  char v31[4]; // [sp+28h] [bp-A04h] BYREF
  char v32[4]; // [sp+128h] [bp-904h] BYREF
  char v33[16]; // [sp+928h] [bp-104h] BYREF
  char v34[16]; // [sp+938h] [bp-F4h] BYREF
  char v35[16]; // [sp+948h] [bp-E4h] BYREF
  char v36[16]; // [sp+958h] [bp-D4h] BYREF
  char v37[16]; // [sp+968h] [bp-C4h] BYREF
  struct sysinfo info; // [sp+978h] [bp-B4h] BYREF
  unsigned __int64 v39; // [sp+9B8h] [bp-74h]
  double v40; // [sp+9C0h] [bp-6Ch]
  double v41; // [sp+9C8h] [bp-64h]
  int v42; // [sp+9D0h] [bp-5Ch]
  int v43; // [sp+9D4h] [bp-58h]
  double v44; // [sp+9D8h] [bp-54h]
  int v45; // [sp+9E0h] [bp-4Ch]
  int v46; // [sp+9E4h] [bp-48h]
  int v47; // [sp+9E8h] [bp-44h]
  int v48; // [sp+9ECh] [bp-40h]
  double v49; // [sp+9F0h] [bp-3Ch]
  int j; // [sp+9F8h] [bp-34h]
  int v51; // [sp+9FCh] [bp-30h]
  __int64 v52; // [sp+A00h] [bp-2Ch]
  __int64 v53; // [sp+A08h] [bp-24h]
  char v54; // [sp+A17h] [bp-15h]

  v54 = 0;
  v53 = 0;
  v52 = 0;
  v51 = 0;
  j = 0;
  if ( sysinfo(&info) )
  {
    if ( byte_90DC0 || byte_865D1 || dword_857E4 > 5 )
    {
      v4 = *_errno_location();
      v5 = _errno_location();
      v6 = strerror(*v5);
      snprintf(v32, 0x800u, "Failed to get sysinfo, errno:%u, reason:%s\n", v4, v6);
      sub_1DB6C(6, v32, 0);
    }
    dword_94204 = time(0);
  }
  else
  {
    dword_94204 = info.uptime;
  }
  sub_21AC0(&dword_86ED8);
  sub_21E88();
  v49 = v3;
  v48 = dword_86ED8;
  v47 = dword_86ED8 - dword_88724;
  if ( dword_86ED8 - dword_88724 < dword_85A88 )
  {
    if ( a1 < 0 )
      return;
  }
  else
  {
    byte_86E21 = byte_86E22 != byte_86E21;
    dword_88724 = v48;
    v54 = 1;
  }
  sub_21430((int)&unk_8871C, (int)&dword_86ED8);
  if ( a1 < 0 )
  {
    sub_2D2FC(&stru_90F08, "cgminer.c", "hashmeter", 7160);
    for ( i = 0; i < dword_94258; ++i )
    {
      v46 = sub_2DEEC(i);
      v45 = *(_DWORD *)(v46 + 36);
      sub_21E88();
      v44 = v3;
      sub_21430(v45 + 140, (int)&dword_86ED8);
      LODWORD(v18) = v45 + 48;
      sub_30F28(v18);
      LODWORD(v19) = v45 + 56;
      sub_30F28(v19);
      LODWORD(v20) = v45 + 64;
      sub_30F28(v20);
      v3 = 0.0;
      LODWORD(v21) = v45 + 72;
      sub_30F28(v21);
    }
    sub_2D434(&stru_90F08, "cgminer.c", "hashmeter", 7175);
  }
  else
  {
    v43 = sub_2DEEC(a1);
    v42 = *(_DWORD *)(v43 + 36);
    sub_21430(v43 + 44, (int)&dword_86ED8);
    *(_DWORD *)(v42 + 240) = v48;
    sub_21E88();
    v41 = v3;
    sub_21430(v42 + 140, (int)&dword_86ED8);
    v7 = sub_68204(a2, HIDWORD(a2));
    v40 = v7 / v41 / 1000000.0;
    if ( byte_865D0 && (byte_90DC0 || byte_865D1 || dword_857E4 > 6) )
    {
      snprintf(v32, 0x800u, "[thread %d: %llu hashes, %.1f mhash/sec]", a1, a2, v40);
      sub_1DB6C(7, v32, 0);
    }
    a2 = sub_68270(a2, HIDWORD(a2), 1000000, 0);
    sub_2D2FC(&stru_90F08, "cgminer.c", "hashmeter", 7131);
    v8 = *(double *)(v42 + 80);
    v9 = sub_68204(a2, HIDWORD(a2));
    *(double *)(v42 + 80) = v8 + v9;
    v10 = v42 + 48;
    v11 = sub_68204(a2, HIDWORD(a2));
    LODWORD(v11) = v10;
    sub_30F28(v11);
    v12 = v42 + 56;
    v13 = sub_68204(a2, HIDWORD(a2));
    LODWORD(v13) = v12;
    sub_30F28(v13);
    v14 = v42 + 64;
    v15 = sub_68204(a2, HIDWORD(a2));
    LODWORD(v15) = v14;
    sub_30F28(v15);
    v16 = v42 + 72;
    v17 = sub_68204(a2, HIDWORD(a2));
    LODWORD(v17) = v16;
    sub_30F28(v17);
    sub_2D434(&stru_90F08, "cgminer.c", "hashmeter", 7138);
    if ( byte_94044 && v54 )
    {
      sub_314CC(v31, 0x100u, v42);
      printf("%s          \r", v31);
      fflush((FILE *)stdout);
    }
  }
  sub_2D2FC(&stru_90F08, "cgminer.c", "hashmeter", 7178);
  dbl_90DB8 = sub_68204(a2, HIDWORD(a2)) + dbl_90DB8;
  if ( v54 )
  {
    if ( ++dword_869A0 > 11 )
      dword_869A0 = 0;
    for ( j = 0; j <= 11; ++j )
    {
      if ( *(double *)&qword_86940[j] >= 0.0 )
      {
        v22 = sub_68204(v52, HIDWORD(v52));
        v52 = sub_682D0(
                COERCE_UNSIGNED_INT64(v22 + *(double *)&qword_86940[j]),
                HIDWORD(COERCE_UNSIGNED_INT64(v22 + *(double *)&qword_86940[j])));
        ++v51;
      }
    }
    if ( v51 <= 0 )
      v53 = a2;
    else
      v53 = sub_68270(v52, HIDWORD(v52), v51, v51 >> 31);
    v23 = sub_68204(v53, HIDWORD(v53));
    LODWORD(v23) = &dbl_941F8;
    sub_30F28(v23);
    v24 = sub_68204(a2, HIDWORD(a2));
    LODWORD(v24) = &dbl_94308;
    sub_30F28(v24);
    v25 = sub_68204(a2, HIDWORD(a2));
    LODWORD(v25) = &dbl_94300;
    sub_30F28(v25);
    v26 = sub_68204(a2, HIDWORD(a2));
    LODWORD(v26) = &dbl_90EF0;
    sub_30F28(v26);
    *(_QWORD *)&dword_941B8 = sub_682D0(
                                COERCE_UNSIGNED_INT64(dbl_941F8 * 1000000.0),
                                HIDWORD(COERCE_UNSIGNED_INT64(dbl_941F8 * 1000000.0)));
    qword_86940[dword_869A0] = 0;
  }
  v27 = *(double *)&qword_86940[dword_869A0];
  *(double *)&qword_86940[dword_869A0] = v27 + sub_68204(a2, HIDWORD(a2));
  dbl_862E0 = (double)dword_94204 - (double)dword_941C4;
  if ( (double)dword_94204 - (double)dword_941C4 - dbl_862F0 <= 86400.0 )
  {
    dbl_862F0 = dbl_862E0;
  }
  else
  {
    if ( byte_90DC0 || byte_865D1 || dword_857E4 > 2 )
    {
      snprintf(v32, 0x800u, "cgminer time error total_secs = %f last_total_secs = %f", dbl_862E0, dbl_862F0);
      sub_1DB6C(3, v32, 0);
    }
    sub_2D434(&stru_90F08, "cgminer.c", "hashmeter", 7226);
    sub_3B1A8();
    sub_2D2FC(&stru_90F08, "cgminer.c", "hashmeter", 7228);
  }
  if ( v54 )
  {
    v39 = sub_682D0(
            COERCE_UNSIGNED_INT64(dbl_90DB8 / dbl_862E0 * 1000000.0),
            HIDWORD(COERCE_UNSIGNED_INT64(dbl_90DB8 / dbl_862E0 * 1000000.0)));
    sub_31028(v39, v37, 0x10u, 4);
    v39 = sub_682D0(COERCE_UNSIGNED_INT64(dbl_941F8 * 1000000.0), HIDWORD(COERCE_UNSIGNED_INT64(dbl_941F8 * 1000000.0)));
    dbl_869A8 = (double)((int)dbl_941F8 / 10) / 100.0;
    sub_31028(v39, v36, 0x10u, 4);
    v39 = sub_682D0(COERCE_UNSIGNED_INT64(dbl_94308 * 1000000.0), HIDWORD(COERCE_UNSIGNED_INT64(dbl_94308 * 1000000.0)));
    sub_31028(v39, v35, 0x10u, 4);
    v39 = sub_682D0(COERCE_UNSIGNED_INT64(dbl_94300 * 1000000.0), HIDWORD(COERCE_UNSIGNED_INT64(dbl_94300 * 1000000.0)));
    sub_31028(v39, v34, 0x10u, 4);
    v39 = sub_682D0(COERCE_UNSIGNED_INT64(dbl_90EF0 * 1000000.0), HIDWORD(COERCE_UNSIGNED_INT64(dbl_90EF0 * 1000000.0)));
    sub_31028(v39, v33, 0x10u, 4);
    snprintf(byte_871E8, 0x100u, "(%ds):%s (1m):%s (5m):%s (15m):%s (avg):%sh/s", dword_85A88, v36, v35, v34, v33, v37);
  }
  sub_2D434(&stru_90F08, "cgminer.c", "hashmeter", 7269);
  if ( v54 )
  {
    printf("%s          \r", byte_871E8);
    fflush((FILE *)stdout);
  }
}

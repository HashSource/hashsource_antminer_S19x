void __fastcall sub_375EC(int a1, __int64 a2)
{
  double v3; // d0
  int v5; // r4
  char *v6; // r0
  int v7; // r5
  double v8; // d9
  int v9; // r6
  int v10; // r5
  double v11; // r0
  double v12; // r0
  double v13; // r0
  double v14; // r0
  double v15; // d10
  int v16; // r3
  int v17; // r3
  int v18; // r6
  double v19; // r0
  int *v20; // r11
  double v21; // d8
  double v22; // r0
  int v23; // r11
  int v24; // r3
  double v25; // d5
  int v26; // r0
  int v27; // r6
  double v28; // r0
  double v29; // r0
  double v30; // d10
  double v31; // d6
  double v32; // d7
  double v33; // d5
  double v34; // d7
  unsigned __int64 v35; // r0
  unsigned __int64 v36; // r0
  unsigned __int64 v37; // r0
  unsigned __int64 v38; // r0
  unsigned __int64 v39; // r0
  double v40; // r0
  double v41; // r0
  double v42; // r0
  double v43; // r0
  double v44; // r0
  double v45; // r0
  int *v46; // r0
  int *v47; // r0
  int v48; // r3
  int v49; // r12
  int v50; // r3
  int v51; // r12
  char v53[16]; // [sp+28h] [bp-884h] BYREF
  char v54[16]; // [sp+38h] [bp-874h] BYREF
  char v55[16]; // [sp+48h] [bp-864h] BYREF
  char v56[16]; // [sp+58h] [bp-854h] BYREF
  struct sysinfo info; // [sp+68h] [bp-844h] BYREF
  char s[2052]; // [sp+A8h] [bp-804h] BYREF

  if ( sysinfo(&info) )
  {
    if ( byte_74500 || byte_68BD4 || dword_67DB4 > 5 )
    {
      v5 = *_errno_location();
      v6 = strerror(v5);
      snprintf(s, 0x800u, "Failed to get sysinfo, errno:%u, reason:%s\n", v5, v6);
      sub_20F58(6, s, 0);
    }
    dword_74484 = time(0);
  }
  else
  {
    dword_74484 = info.uptime;
  }
  sub_239A4((struct timeval *)&dword_69018);
  sub_23C94();
  v7 = dword_69018;
  v8 = v3;
  if ( dword_68730 > dword_69018 - dword_6A5B0 )
  {
    if ( a1 < 0 )
      return;
    v23 = 0;
    sub_257F8(&unk_6907C, &dword_69018);
  }
  else
  {
    dword_6A5B0 = dword_69018;
    sub_257F8(&unk_6907C, &dword_69018);
    if ( a1 < 0 )
    {
      v9 = pthread_mutex_lock(&stru_76838);
      if ( !v9 )
      {
        if ( dword_75588 > 0 )
        {
          do
          {
            while ( 1 )
            {
              v10 = *(_DWORD *)(sub_31B04(v9) + 36);
              sub_23C94();
              sub_257F8((void *)(v10 + 140), &dword_69018);
              if ( v3 > 0.0 )
                break;
              if ( dword_75588 <= ++v9 )
                goto LABEL_15;
            }
            LODWORD(v11) = v10 + 48;
            v12 = sub_2C538(v11);
            LODWORD(v12) = v10 + 56;
            v13 = sub_2C538(v12);
            LODWORD(v13) = v10 + 64;
            v14 = sub_2C538(v13);
            LODWORD(v14) = v10 + 72;
            ++v9;
            v3 = 0.0;
            sub_2C538(v14);
          }
          while ( dword_75588 > v9 );
        }
LABEL_15:
        if ( pthread_mutex_unlock(&stru_76838) )
        {
          v50 = *_errno_location();
          v51 = 7106;
          goto LABEL_74;
        }
        off_67ED8();
        if ( !pthread_mutex_lock(&stru_76838) )
        {
          v15 = sub_4A10C(a2, HIDWORD(a2));
          v16 = dword_690E8;
          dbl_756A8 = dbl_756A8 + v15;
          goto LABEL_18;
        }
LABEL_68:
        v46 = _errno_location();
        snprintf(s, 0x800u, "WTF MUTEX ERROR ON LOCK! errno=%d in %s %s():%d", *v46, "cgminer.c", "hashmeter", 7109);
        goto LABEL_69;
      }
      v48 = *_errno_location();
      v49 = 7091;
LABEL_72:
      snprintf(s, 0x800u, "WTF MUTEX ERROR ON LOCK! errno=%d in %s %s():%d", v48, "cgminer.c", "hashmeter", v49);
      goto LABEL_69;
    }
    v23 = 1;
  }
  v26 = sub_31B04(a1);
  v27 = *(_DWORD *)(v26 + 36);
  sub_257F8((void *)(v26 + 44), &dword_69018);
  *(_DWORD *)(v27 + 240) = v7;
  sub_23C94();
  sub_257F8((void *)(v27 + 140), &dword_69018);
  if ( byte_68BD5 && (byte_74500 || byte_68BD4 || dword_67DB4 > 6) )
  {
    v28 = sub_4A10C(a2, HIDWORD(a2));
    snprintf(s, 0x800u, "[thread %d: %llu hashes, %.1f mhash/sec]", a1, a2, v28 / v3 / 1000000.0);
    sub_20F58(7, s, 0);
  }
  a2 = sub_4A178(a2, HIDWORD(a2), 1000000, 0);
  if ( pthread_mutex_lock(&stru_76838) )
  {
    v48 = *_errno_location();
    v49 = 7062;
    goto LABEL_72;
  }
  v29 = sub_4A10C(a2, HIDWORD(a2));
  v15 = v29;
  *(double *)(v27 + 80) = *(double *)(v27 + 80) + v29;
  if ( v3 > 0.0 )
  {
    LODWORD(v29) = v27 + 48;
    v40 = sub_2C538(v29);
    LODWORD(v40) = v27 + 56;
    v41 = sub_2C538(v40);
    LODWORD(v41) = v27 + 64;
    v42 = sub_2C538(v41);
    LODWORD(v42) = v27 + 72;
    sub_2C538(v42);
  }
  if ( pthread_mutex_unlock(&stru_76838) )
  {
    v50 = *_errno_location();
    v51 = 7069;
    goto LABEL_74;
  }
  off_67ED8();
  if ( ((unsigned __int8)v23 & (unsigned __int8)byte_73388) != 0 )
  {
    sub_2E7D0(s, 0x100u, v27);
    printf("%s          \r", s);
    fflush((FILE *)stdout);
    if ( pthread_mutex_lock(&stru_76838) )
      goto LABEL_68;
    v16 = dword_690E8;
    dbl_756A8 = dbl_756A8 + v15;
    goto LABEL_18;
  }
  if ( pthread_mutex_lock(&stru_76838) )
    goto LABEL_68;
  v16 = dword_690E8;
  dbl_756A8 = dbl_756A8 + v15;
  if ( v23 )
  {
LABEL_18:
    v17 = v16 + 1;
    v18 = 0;
    LODWORD(v19) = 0;
    if ( v17 > 11 )
      v17 = 0;
    HIDWORD(v19) = 0;
    dword_690E8 = v17;
    v20 = (int *)dbl_69088;
    do
    {
      v21 = *(double *)v20;
      v20 += 2;
      if ( v21 >= 0.0 )
      {
        v22 = sub_4A10C(LODWORD(v19), HIDWORD(v19));
        ++v18;
        v19 = COERCE_DOUBLE(sub_4A1D8(COERCE_UNSIGNED_INT64(v22 + v21), HIDWORD(COERCE_UNSIGNED_INT64(v22 + v21))));
      }
    }
    while ( v20 != &dword_690E8 );
    if ( v18 )
    {
      v19 = COERCE_DOUBLE(sub_4A178(LODWORD(v19), HIDWORD(v19), v18, v18 >> 31));
      a2 = *(_QWORD *)&v19;
    }
    if ( (double)dword_68730 > 0.0 )
    {
      v45 = sub_4A10C(a2, HIDWORD(a2));
      LODWORD(v45) = &dbl_75590;
      v19 = sub_2C538(v45);
      if ( v8 <= 0.0 )
        goto LABEL_28;
    }
    else if ( v8 <= 0.0 )
    {
LABEL_28:
      v23 = 1;
      *(_QWORD *)&dword_73470 = sub_4A1D8(
                                  COERCE_UNSIGNED_INT64(dbl_75590 * 1000000.0),
                                  HIDWORD(COERCE_UNSIGNED_INT64(dbl_75590 * 1000000.0)));
      v24 = dword_690E8;
      v25 = 0.0;
      dbl_69088[dword_690E8] = 0.0;
      goto LABEL_44;
    }
    LODWORD(v19) = &dbl_75690;
    v43 = sub_2C538(v19);
    LODWORD(v43) = &dbl_75688;
    v44 = sub_2C538(v43);
    if ( v8 > 0.0 )
    {
      LODWORD(v44) = &dbl_75698;
      sub_2C538(v44);
    }
    goto LABEL_28;
  }
  v24 = dword_690E8;
  v25 = dbl_69088[dword_690E8];
LABEL_44:
  v30 = v15 + v25;
  v31 = (double)dword_74484;
  v32 = (double)dword_73320;
  v33 = dbl_68740;
  dbl_69088[v24] = v30;
  v34 = v31 - v32;
  dbl_68720 = v34;
  if ( v34 - v33 > 86400.0 )
  {
    if ( byte_74500 || byte_68BD4 || dword_67DB4 > 2 )
    {
      snprintf(s, 0x800u, "cgminer time error total_secs = %f last_total_secs = %f", v34, v33);
      sub_20F58(3, s, 0);
    }
    if ( !pthread_mutex_unlock(&stru_76838) )
    {
      off_67ED8();
      sub_32DA0();
      if ( !pthread_mutex_lock(&stru_76838) )
      {
        if ( !v23 )
          goto LABEL_51;
LABEL_56:
        v35 = sub_4A1D8(
                COERCE_UNSIGNED_INT64(dbl_756A8 / dbl_68720 * 1000000.0),
                HIDWORD(COERCE_UNSIGNED_INT64(dbl_756A8 / dbl_68720 * 1000000.0)));
        sub_2AEF8(v35, v53, 0x10u, 4);
        dbl_6A5B8 = (double)((int)dbl_75590 / 10) / 100.0;
        v36 = sub_4A1D8(
                COERCE_UNSIGNED_INT64(dbl_75590 * 1000000.0),
                HIDWORD(COERCE_UNSIGNED_INT64(dbl_75590 * 1000000.0)));
        sub_2AEF8(v36, v54, 0x10u, 4);
        v37 = sub_4A1D8(
                COERCE_UNSIGNED_INT64(dbl_75690 * 1000000.0),
                HIDWORD(COERCE_UNSIGNED_INT64(dbl_75690 * 1000000.0)));
        sub_2AEF8(v37, v55, 0x10u, 4);
        v38 = sub_4A1D8(
                COERCE_UNSIGNED_INT64(dbl_75688 * 1000000.0),
                HIDWORD(COERCE_UNSIGNED_INT64(dbl_75688 * 1000000.0)));
        sub_2AEF8(v38, v56, 0x10u, 4);
        v39 = sub_4A1D8(
                COERCE_UNSIGNED_INT64(dbl_75698 * 1000000.0),
                HIDWORD(COERCE_UNSIGNED_INT64(dbl_75698 * 1000000.0)));
        sub_2AEF8(v39, s, 0x10u, 4);
        snprintf(
          byte_6A5C0,
          0x100u,
          "(%ds):%s (1m):%s (5m):%s (15m):%s (avg):%sh/s",
          dword_68730,
          v54,
          v55,
          v56,
          s,
          v53);
        if ( !pthread_mutex_unlock(&stru_76838) )
        {
          off_67ED8();
          printf("%s          \r", byte_6A5C0);
          fflush((FILE *)stdout);
          return;
        }
        goto LABEL_70;
      }
      v48 = *_errno_location();
      v49 = 7159;
      goto LABEL_72;
    }
    v50 = *_errno_location();
    v51 = 7157;
LABEL_74:
    snprintf(s, 0x800u, "WTF MUTEX ERROR ON UNLOCK! errno=%d in %s %s():%d", v50, "cgminer.c", "hashmeter", v51);
LABEL_69:
    sub_20F58(3, s, 1);
    sub_2E6B0(1, 1);
  }
  dbl_68740 = v34;
  if ( v23 )
    goto LABEL_56;
LABEL_51:
  if ( pthread_mutex_unlock(&stru_76838) )
  {
LABEL_70:
    v47 = _errno_location();
    snprintf(s, 0x800u, "WTF MUTEX ERROR ON UNLOCK! errno=%d in %s %s():%d", *v47, "cgminer.c", "hashmeter", 7200);
    goto LABEL_69;
  }
  off_67ED8();
}

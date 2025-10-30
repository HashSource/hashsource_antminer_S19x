void __fastcall sub_5E2EC(int a1, __int64 a2)
{
  double v3; // d0
  int v5; // r4
  char *v6; // r0
  int v7; // r11
  double v8; // d9
  int v9; // r6
  int v10; // r4
  double v11; // r0
  double v12; // r0
  double v13; // r0
  double v14; // r0
  double v15; // d10
  int v16; // r3
  int *v17; // r11
  int v18; // r3
  int v19; // r8
  double v20; // r0
  double v21; // d8
  double v22; // r0
  int v23; // r10
  int v24; // r3
  double v25; // d5
  int v26; // r0
  int v27; // r4
  double v28; // r0
  double v29; // r0
  double v30; // d10
  double v31; // d6
  double v32; // d5
  double v33; // d7
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
  char v53[16]; // [sp+20h] [bp-884h] BYREF
  char v54[16]; // [sp+30h] [bp-874h] BYREF
  char v55[16]; // [sp+40h] [bp-864h] BYREF
  char v56[16]; // [sp+50h] [bp-854h] BYREF
  struct sysinfo info; // [sp+60h] [bp-844h] BYREF
  char s[2052]; // [sp+A0h] [bp-804h] BYREF

  if ( sysinfo(&info) )
  {
    if ( byte_244080 || byte_1AECC4 || dword_9E320 > 5 )
    {
      v5 = *_errno_location();
      v6 = strerror(v5);
      snprintf(s, 0x800u, "Failed to get sysinfo, errno:%u, reason:%s\n", v5, v6);
      sub_47AB4(6, s, 0);
    }
    dword_244004 = time(0);
  }
  else
  {
    dword_244004 = info.uptime;
  }
  sub_4A60C((struct timeval *)&dword_1AF0EC);
  sub_4A8FC();
  v7 = dword_1AF0EC;
  v8 = v3;
  if ( dword_9ED78 > dword_1AF0EC - dword_1B064C )
  {
    if ( a1 < 0 )
      return;
    v23 = 0;
    sub_4C460(algn_1AF148, &dword_1AF0EC);
  }
  else
  {
    dword_1B064C = dword_1AF0EC;
    sub_4C460(algn_1AF148, &dword_1AF0EC);
    if ( a1 < 0 )
    {
      v9 = pthread_mutex_lock(&stru_2463B8);
      if ( !v9 )
      {
        if ( dword_245108 > 0 )
        {
          do
          {
            while ( 1 )
            {
              v10 = *(_DWORD *)(sub_57BAC(v9) + 36);
              sub_4A8FC();
              sub_4C460((void *)(v10 + 140), &dword_1AF0EC);
              if ( v3 > 0.0 )
                break;
              if ( dword_245108 <= ++v9 )
                goto LABEL_15;
            }
            LODWORD(v11) = v10 + 48;
            v12 = sub_529E0(v11);
            LODWORD(v12) = v10 + 56;
            v13 = sub_529E0(v12);
            LODWORD(v13) = v10 + 64;
            v14 = sub_529E0(v13);
            LODWORD(v14) = v10 + 72;
            ++v9;
            v3 = 0.0;
            sub_529E0(v14);
          }
          while ( dword_245108 > v9 );
        }
LABEL_15:
        if ( pthread_mutex_unlock(&stru_2463B8) )
        {
          v50 = *_errno_location();
          v51 = 7100;
          goto LABEL_74;
        }
        off_9E444();
        if ( !pthread_mutex_lock(&stru_2463B8) )
        {
          v15 = sub_778A4(a2, HIDWORD(a2));
          v16 = dword_1AF1B0;
          dbl_245228 = dbl_245228 + v15;
          goto LABEL_18;
        }
LABEL_68:
        v46 = _errno_location();
        snprintf(s, 0x800u, "WTF MUTEX ERROR ON LOCK! errno=%d in %s %s():%d", *v46, "cgminer.c", "hashmeter", 7103);
        goto LABEL_69;
      }
      v48 = *_errno_location();
      v49 = 7085;
LABEL_72:
      snprintf(s, 0x800u, "WTF MUTEX ERROR ON LOCK! errno=%d in %s %s():%d", v48, "cgminer.c", "hashmeter", v49);
      goto LABEL_69;
    }
    v23 = 1;
  }
  v26 = sub_57BAC(a1);
  v27 = *(_DWORD *)(v26 + 36);
  sub_4C460((void *)(v26 + 44), &dword_1AF0EC);
  *(_DWORD *)(v27 + 240) = v7;
  sub_4A8FC();
  sub_4C460((void *)(v27 + 140), &dword_1AF0EC);
  if ( byte_1AECC5 && (byte_244080 || byte_1AECC4 || dword_9E320 > 6) )
  {
    v28 = sub_778A4(a2, HIDWORD(a2));
    snprintf(s, 0x800u, "[thread %d: %llu hashes, %.1f mhash/sec]", a1, a2, v28 / v3 / 1000000.0);
    sub_47AB4(7, s, 0);
  }
  a2 = sub_77910(a2, HIDWORD(a2), &unk_F4240, 0);
  if ( pthread_mutex_lock(&stru_2463B8) )
  {
    v48 = *_errno_location();
    v49 = 7056;
    goto LABEL_72;
  }
  v29 = sub_778A4(a2, HIDWORD(a2));
  v15 = v29;
  *(double *)(v27 + 80) = *(double *)(v27 + 80) + v29;
  if ( v3 > 0.0 )
  {
    LODWORD(v29) = v27 + 48;
    v40 = sub_529E0(v29);
    LODWORD(v40) = v27 + 56;
    v41 = sub_529E0(v40);
    LODWORD(v41) = v27 + 64;
    v42 = sub_529E0(v41);
    LODWORD(v42) = v27 + 72;
    sub_529E0(v42);
  }
  if ( pthread_mutex_unlock(&stru_2463B8) )
  {
    v50 = *_errno_location();
    v51 = 7063;
    goto LABEL_74;
  }
  off_9E444();
  if ( ((unsigned __int8)v23 & (unsigned __int8)byte_242F08) != 0 )
  {
    sub_54DA8(s, 0x100u, v27);
    printf("%s          \r", s);
    fflush((FILE *)stdout);
    if ( pthread_mutex_lock(&stru_2463B8) )
      goto LABEL_68;
    v16 = dword_1AF1B0;
    dbl_245228 = dbl_245228 + v15;
    goto LABEL_18;
  }
  if ( pthread_mutex_lock(&stru_2463B8) )
    goto LABEL_68;
  v16 = dword_1AF1B0;
  dbl_245228 = dbl_245228 + v15;
  if ( v23 )
  {
LABEL_18:
    v17 = (int *)&unk_1AF150;
    v18 = v16 + 1;
    v19 = 0;
    v20 = 0.0;
    if ( v18 > 11 )
      v18 = 0;
    dword_1AF1B0 = v18;
    do
    {
      v21 = *(double *)v17;
      v17 += 2;
      if ( v21 >= 0.0 )
      {
        v22 = sub_778A4(LODWORD(v20), HIDWORD(v20));
        ++v19;
        v20 = COERCE_DOUBLE(sub_77970(COERCE_UNSIGNED_INT64(v22 + v21), HIDWORD(COERCE_UNSIGNED_INT64(v22 + v21))));
      }
    }
    while ( v17 != &dword_1AF1B0 );
    if ( v19 )
    {
      v20 = COERCE_DOUBLE(sub_77910(LODWORD(v20), HIDWORD(v20), v19, v19 >> 31));
      a2 = *(_QWORD *)&v20;
    }
    if ( (double)dword_9ED78 > 0.0 )
    {
      v45 = sub_778A4(a2, HIDWORD(a2));
      LODWORD(v45) = &dbl_245110;
      v20 = sub_529E0(v45);
      if ( v8 <= 0.0 )
        goto LABEL_28;
    }
    else if ( v8 <= 0.0 )
    {
LABEL_28:
      v23 = 1;
      *(_QWORD *)&dword_242FF0 = sub_77970(
                                   COERCE_UNSIGNED_INT64(dbl_245110 * 1000000.0),
                                   HIDWORD(COERCE_UNSIGNED_INT64(dbl_245110 * 1000000.0)));
      v24 = dword_1AF1B0;
      v25 = 0.0;
      dbl_1AF158[dword_1AF1B0 - 1] = 0.0;
      goto LABEL_44;
    }
    LODWORD(v20) = &dbl_245210;
    v43 = sub_529E0(v20);
    LODWORD(v43) = &dbl_245208;
    v44 = sub_529E0(v43);
    if ( v8 > 0.0 )
    {
      LODWORD(v44) = &dbl_245218;
      sub_529E0(v44);
    }
    goto LABEL_28;
  }
  v24 = dword_1AF1B0;
  v25 = dbl_1AF158[dword_1AF1B0 - 1];
LABEL_44:
  v30 = v15 + v25;
  v31 = (double)dword_244004;
  v32 = dbl_9ED88;
  v33 = (double)dword_242EA0;
  dbl_1AF158[v24 - 1] = v30;
  v34 = v31 - v33;
  dbl_9ED68 = v34;
  if ( v34 - v32 > 86400.0 )
  {
    if ( byte_244080 || byte_1AECC4 || dword_9E320 > 2 )
    {
      snprintf(s, 0x800u, "cgminer time error total_secs = %f last_total_secs = %f", v34, v32);
      sub_47AB4(3, s, 0);
    }
    if ( !pthread_mutex_unlock(&stru_2463B8) )
    {
      off_9E444();
      sub_58E30();
      if ( !pthread_mutex_lock(&stru_2463B8) )
      {
        if ( !v23 )
          goto LABEL_51;
LABEL_56:
        v35 = sub_77970(
                COERCE_UNSIGNED_INT64(dbl_245228 / dbl_9ED68 * 1000000.0),
                HIDWORD(COERCE_UNSIGNED_INT64(dbl_245228 / dbl_9ED68 * 1000000.0)));
        sub_51B18(v35, v53, 0x10u, 4);
        dbl_1B0650 = (double)((int)dbl_245110 / 10) / 100.0;
        v36 = sub_77970(
                COERCE_UNSIGNED_INT64(dbl_245110 * 1000000.0),
                HIDWORD(COERCE_UNSIGNED_INT64(dbl_245110 * 1000000.0)));
        sub_51B18(v36, v54, 0x10u, 4);
        v37 = sub_77970(
                COERCE_UNSIGNED_INT64(dbl_245210 * 1000000.0),
                HIDWORD(COERCE_UNSIGNED_INT64(dbl_245210 * 1000000.0)));
        sub_51B18(v37, v55, 0x10u, 4);
        v38 = sub_77970(
                COERCE_UNSIGNED_INT64(dbl_245208 * 1000000.0),
                HIDWORD(COERCE_UNSIGNED_INT64(dbl_245208 * 1000000.0)));
        sub_51B18(v38, v56, 0x10u, 4);
        v39 = sub_77970(
                COERCE_UNSIGNED_INT64(dbl_245218 * 1000000.0),
                HIDWORD(COERCE_UNSIGNED_INT64(dbl_245218 * 1000000.0)));
        sub_51B18(v39, s, 0x10u, 4);
        snprintf(
          byte_1B0658,
          0x100u,
          "(%ds):%s (1m):%s (5m):%s (15m):%s (avg):%sh/s",
          dword_9ED78,
          v54,
          v55,
          v56,
          s,
          v53);
        if ( !pthread_mutex_unlock(&stru_2463B8) )
        {
          off_9E444();
          printf("%s          \r", byte_1B0658);
          fflush((FILE *)stdout);
          return;
        }
        goto LABEL_70;
      }
      v48 = *_errno_location();
      v49 = 7153;
      goto LABEL_72;
    }
    v50 = *_errno_location();
    v51 = 7151;
LABEL_74:
    snprintf(s, 0x800u, "WTF MUTEX ERROR ON UNLOCK! errno=%d in %s %s():%d", v50, "cgminer.c", "hashmeter", v51);
LABEL_69:
    sub_47AB4(3, s, 1);
    sub_54CCC(1, 1);
  }
  dbl_9ED88 = v34;
  if ( v23 )
    goto LABEL_56;
LABEL_51:
  if ( pthread_mutex_unlock(&stru_2463B8) )
  {
LABEL_70:
    v47 = _errno_location();
    snprintf(s, 0x800u, "WTF MUTEX ERROR ON UNLOCK! errno=%d in %s %s():%d", *v47, "cgminer.c", "hashmeter", 7194);
    goto LABEL_69;
  }
  off_9E444();
}

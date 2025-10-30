int __fastcall sub_65AC(int *a1)
{
  int v2; // r0
  int tv_nsec; // r3
  __time_t tv_sec; // r4
  int v5; // r2
  int v6; // r1
  __time_t v7; // r12
  int v8; // r2
  int v9; // r0
  bool v10; // cc
  int v11; // r1
  int v12; // r1
  bool v13; // cc
  int v14; // r9
  int v15; // r0
  double v16; // d0
  double v17; // r0
  int v18; // r2
  __int64 v19; // r10
  bool v20; // cf
  unsigned int v21; // r9
  int v22; // r2
  int v23; // r3
  int v24; // lr
  int v25; // r2
  int result; // r0
  int v27; // r12
  int v28; // r12
  int v29; // r9
  int v30; // r1
  int v31; // r1
  int v32; // lr
  int v33; // r9
  bool v34; // cc
  struct timespec tp; // [sp+4h] [bp-10h] BYREF
  int v36; // [sp+Ch] [bp-8h]

  v2 = clock_gettime(0, &tp);
  if ( v2 < 0 )
    sub_3530();
  tv_nsec = tp.tv_nsec;
  if ( trunc_os_clock )
  {
    tv_nsec = (int)((double)(int)((double)tp.tv_nsec * 0.000000001 / sys_tick) * 1000000000.0 * sys_tick);
    tp.tv_nsec = tv_nsec;
  }
  tv_sec = tp.tv_sec;
  v5 = tv_nsec + 50000000;
  if ( tv_nsec + 50000000 < 0 )
  {
    v2 = tp.tv_sec;
    do
    {
      v5 += 1000000000;
      --v2;
    }
    while ( v5 < 0 );
  }
  else if ( v5 > 999999999 )
  {
    v5 = tv_nsec - 950000000;
    if ( tv_nsec - 950000000 <= 999999999 )
      v2 = tp.tv_sec + 1;
    else
      v5 = 23680;
    if ( tv_nsec - 950000000 > 999999999 )
    {
      HIWORD(v5) = -29755;
      v2 = tp.tv_sec + 2;
      v5 += tv_nsec;
    }
  }
  else
  {
    v2 = tp.tv_sec;
  }
  if ( (int)qword_332B8 < v2 )
    v6 = (int)qword_332B8 <= v2;
  else
    v6 = -((int)qword_332B8 > v2);
  if ( !v6 )
  {
    if ( v5 > SHIDWORD(qword_332B8) )
      v6 = v5 >= SHIDWORD(qword_332B8);
    else
      v6 = -(v5 < SHIDWORD(qword_332B8));
  }
  if ( v6 == -1 )
  {
    dword_332C0 = 1;
    ++sys_lamport;
  }
  qword_332B8 = (__int64)tp;
  v7 = qword_332C4;
  v8 = LODWORD(sys_fuzz_nsec) + HIDWORD(qword_332C4);
  if ( LODWORD(sys_fuzz_nsec) + HIDWORD(qword_332C4) < 0 )
  {
    do
    {
      v8 += 1000000000;
      --v7;
    }
    while ( v8 < 0 );
  }
  else if ( v8 > 999999999 )
  {
    v9 = v8 - 1000000000;
    v10 = v8 - 1000000000 <= 999999999;
    if ( v8 - 1000000000 <= 999999999 )
      v7 = qword_332C4 + 1;
    else
      v8 -= 2013265920;
    if ( v10 )
      v8 = v9;
    else
      v8 += 13238272;
    if ( !v10 )
    {
      v7 += 2;
      v8 += 27648;
    }
  }
  if ( v7 < tp.tv_sec )
    v11 = v7 <= tp.tv_sec;
  else
    v11 = -(v7 > tp.tv_sec);
  if ( v11 )
  {
    if ( v11 != -1 )
      goto LABEL_33;
  }
  else
  {
    if ( v8 < tv_nsec )
      v30 = v8 <= tv_nsec;
    else
      v30 = -(v8 > tv_nsec);
    if ( v30 != -1 )
      goto LABEL_33;
  }
  v31 = v8 - tv_nsec;
  v32 = v7 - tp.tv_sec;
  if ( v8 - tv_nsec < 0 )
  {
    do
    {
      v31 += 1000000000;
      --v32;
    }
    while ( v31 < 0 );
  }
  else if ( v31 > 999999999 )
  {
    v33 = v31 - 1000000000;
    v34 = v31 - 1000000000 <= 999999999;
    if ( v31 - 1000000000 <= 999999999 )
      ++v32;
    else
      v31 -= 2013265920;
    if ( v34 )
      v31 = v33;
    else
      v31 += 13238272;
    if ( !v34 )
    {
      v32 += 2;
      v31 += 27648;
    }
  }
  if ( v32 <= 0 )
  {
    if ( !dword_332C0 )
    {
      tp.tv_sec = v7;
      tp.tv_nsec = v8;
      tv_sec = v7;
      LODWORD(qword_332C4) = v7;
      HIDWORD(qword_332C4) = v8;
      tv_nsec = v8;
      if ( v8 >= 0 )
        goto LABEL_43;
      do
      {
LABEL_85:
        tv_nsec += 1000000000;
        --tv_sec;
      }
      while ( tv_nsec < 0 );
      goto LABEL_43;
    }
  }
  else if ( !dword_332C0 )
  {
    sub_A828(3, "get_systime Lamport advance exceeds one second (%.9f)", (double)v32 + (double)v31 * 0.000000001);
    exit(1);
  }
LABEL_33:
  qword_332C4 = (__int64)tp;
  if ( tv_nsec < 0 )
    goto LABEL_85;
  if ( tv_nsec > 999999999 )
  {
    v12 = tv_nsec - 1000000000;
    v13 = tv_nsec - 1000000000 <= 999999999;
    if ( tv_nsec - 1000000000 <= 999999999 )
      tv_sec = tp.tv_sec + 1;
    else
      tv_nsec -= 2013265920;
    if ( v13 )
      tv_nsec = v12;
    else
      tv_nsec += 13238272;
    if ( !v13 )
    {
      tv_sec += 2;
      tv_nsec += 27648;
    }
  }
LABEL_43:
  v14 = sub_1C3E8(500000000, (__PAIR64__(tv_nsec, 0) + 500000000) >> 32, 1000000000, 0);
  v15 = sub_CC30();
  v16 = ((double)v15 + (double)v15) * 2.32830644e-10 * sys_fuzz;
  LODWORD(v17) = 32;
  ldexp(v17, v18);
  if ( v16 < 0.0 )
    v19 = -sub_1C428(COERCE_UNSIGNED_INT64(-v16), HIDWORD(COERCE_UNSIGNED_INT64(-v16)));
  else
    v19 = sub_1C428(LODWORD(v16), HIDWORD(v16));
  v20 = __CFADD__((_DWORD)v19, v14);
  v21 = v19 + v14;
  v22 = v20;
  v23 = tv_sec - 2085978496 + HIDWORD(v19) + v22;
  v24 = dword_332C0;
  v25 = v21;
  if ( qword_332CC )
  {
    if ( dword_332C0 )
    {
      LODWORD(qword_332CC) = v23;
      HIDWORD(qword_332CC) = v21;
      goto LABEL_50;
    }
    if ( sys_fuzz > 0.0 )
    {
      v27 = v21 < HIDWORD(qword_332CC) ? v23 - 1 : v23;
      v28 = v27 - qword_332CC;
      v29 = v21 == HIDWORD(qword_332CC) ? v28 - 1 : v28;
      if ( v29 < 0 )
      {
        v25 = HIDWORD(qword_332CC) + 1;
        if ( HIDWORD(qword_332CC) == -1 )
          v24 = 1;
        v23 = v24 + qword_332CC;
        ++sys_tsrounding;
      }
    }
    LODWORD(qword_332CC) = v23;
    HIDWORD(qword_332CC) = v25;
  }
  else
  {
    LODWORD(qword_332CC) = v23;
    HIDWORD(qword_332CC) = v21;
    if ( dword_332C0 )
LABEL_50:
      dword_332C0 = 0;
  }
  result = v36;
  a1[1] = v25;
  *a1 = v23;
  return result;
}

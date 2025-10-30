int __fastcall sub_5F724(int *a1)
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
  int v15; // r1
  int v16; // r0
  double v17; // d0
  double v18; // r0
  int v19; // r2
  __int64 v20; // r10
  bool v21; // cf
  unsigned int v22; // r9
  int v23; // r2
  int v24; // r3
  int v25; // lr
  int v26; // r2
  int result; // r0
  int v28; // r12
  int v29; // r12
  int v30; // r9
  int v31; // r1
  int v32; // r1
  int v33; // lr
  int v34; // r9
  bool v35; // cc
  struct timespec tp; // [sp+4h] [bp-10h] BYREF
  int v37; // [sp+Ch] [bp-8h]

  v2 = clock_gettime(0, &tp);
  if ( v2 < 0 )
    sub_C5C4();
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
  if ( (int)qword_106F20 < v2 )
    v6 = (int)qword_106F20 <= v2;
  else
    v6 = -((int)qword_106F20 > v2);
  if ( !v6 )
  {
    if ( v5 > SHIDWORD(qword_106F20) )
      v6 = v5 >= SHIDWORD(qword_106F20);
    else
      v6 = -(v5 < SHIDWORD(qword_106F20));
  }
  if ( v6 == -1 )
  {
    dword_106F28 = 1;
    ++sys_lamport;
  }
  qword_106F20 = (__int64)tp;
  v7 = qword_106F2C;
  v8 = LODWORD(sys_fuzz_nsec) + HIDWORD(qword_106F2C);
  if ( LODWORD(sys_fuzz_nsec) + HIDWORD(qword_106F2C) < 0 )
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
      v7 = qword_106F2C + 1;
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
      v31 = v8 <= tv_nsec;
    else
      v31 = -(v8 > tv_nsec);
    if ( v31 != -1 )
      goto LABEL_33;
  }
  v32 = v8 - tv_nsec;
  v33 = v7 - tp.tv_sec;
  if ( v8 - tv_nsec < 0 )
  {
    do
    {
      v32 += 1000000000;
      --v33;
    }
    while ( v32 < 0 );
  }
  else if ( v32 > 999999999 )
  {
    v34 = v32 - 1000000000;
    v35 = v32 - 1000000000 <= 999999999;
    if ( v32 - 1000000000 <= 999999999 )
      ++v33;
    else
      v32 -= 2013265920;
    if ( v35 )
      v32 = v34;
    else
      v32 += 13238272;
    if ( !v35 )
    {
      v33 += 2;
      v32 += 27648;
    }
  }
  if ( v33 <= 0 )
  {
    if ( !dword_106F28 )
    {
      tp.tv_sec = v7;
      tp.tv_nsec = v8;
      tv_sec = v7;
      LODWORD(qword_106F2C) = v7;
      HIDWORD(qword_106F2C) = v8;
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
  else if ( !dword_106F28 )
  {
    sub_64E00(3, "get_systime Lamport advance exceeds one second (%.9f)", (double)v33 + (double)v32 * 0.000000001);
    exit(1);
  }
LABEL_33:
  qword_106F2C = (__int64)tp;
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
  v14 = sub_8BFD0(500000000, (__PAIR64__(tv_nsec, 0) + 500000000) >> 32, 1000000000, 0);
  v16 = sub_68AE4(v14, v15);
  v17 = ((double)v16 + (double)v16) * 2.32830644e-10 * sys_fuzz;
  LODWORD(v18) = 32;
  ldexp(v18, v19);
  if ( v17 < 0.0 )
    v20 = -sub_8C010(COERCE_UNSIGNED_INT64(-v17), HIDWORD(COERCE_UNSIGNED_INT64(-v17)));
  else
    v20 = sub_8C010(LODWORD(v17), HIDWORD(v17));
  v21 = __CFADD__((_DWORD)v20, v14);
  v22 = v20 + v14;
  v23 = v21;
  v24 = tv_sec - 2085978496 + HIDWORD(v20) + v23;
  v25 = dword_106F28;
  v26 = v22;
  if ( qword_106F34 )
  {
    if ( dword_106F28 )
    {
      LODWORD(qword_106F34) = v24;
      HIDWORD(qword_106F34) = v22;
      goto LABEL_50;
    }
    if ( sys_fuzz > 0.0 )
    {
      v28 = v22 < HIDWORD(qword_106F34) ? v24 - 1 : v24;
      v29 = v28 - qword_106F34;
      v30 = v22 == HIDWORD(qword_106F34) ? v29 - 1 : v29;
      if ( v30 < 0 )
      {
        v26 = HIDWORD(qword_106F34) + 1;
        if ( HIDWORD(qword_106F34) == -1 )
          v25 = 1;
        v24 = v25 + qword_106F34;
        ++sys_tsrounding;
      }
    }
    LODWORD(qword_106F34) = v24;
    HIDWORD(qword_106F34) = v26;
  }
  else
  {
    LODWORD(qword_106F34) = v24;
    HIDWORD(qword_106F34) = v22;
    if ( dword_106F28 )
LABEL_50:
      dword_106F28 = 0;
  }
  result = v37;
  a1[1] = v26;
  *a1 = v24;
  return result;
}

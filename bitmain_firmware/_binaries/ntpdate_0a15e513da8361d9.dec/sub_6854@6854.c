int __fastcall sub_6854(__int64 *a1)
{
  int tv_nsec; // r12
  __time_t tv_sec; // r8
  int v4; // r3
  __time_t v5; // r2
  int v6; // r2
  __time_t v7; // lr
  int v8; // r3
  int v9; // r2
  __int64 v10; // r8
  __int64 v11; // r0
  int v12; // r4
  int v13; // r5
  int v14; // r2
  int v15; // s15
  double v16; // r0
  double v17; // d0
  __int64 v18; // r0
  __int64 v19; // r4
  unsigned int v20; // kr08_4
  int v21; // r2
  int v22; // r2
  int v23; // r3
  int v24; // r1
  bool v25; // cc
  int v26; // r2
  int v27; // r1
  int v28; // r5
  bool v29; // cc
  struct timespec tp; // [sp+Ch] [bp-10h] BYREF

  if ( clock_gettime(0, &tp) < 0 )
    sub_3660();
  if ( trunc_os_clock )
  {
    tv_nsec = (int)(sys_tick * ((double)(int)((double)tp.tv_nsec * 0.000000001 / sys_tick) * 1000000000.0));
    tp.tv_nsec = tv_nsec;
  }
  else
  {
    tv_nsec = tp.tv_nsec;
  }
  tv_sec = tp.tv_sec;
  v4 = tv_nsec + 50000000;
  if ( tv_nsec + 50000000 < 0 )
  {
    v5 = tp.tv_sec;
    do
    {
      --v5;
      v4 += 1000000000;
    }
    while ( v4 < 0 );
  }
  else if ( v4 > 999999999 )
  {
    v4 = tv_nsec - 950000000;
    if ( tv_nsec - 950000000 > 999999999 )
    {
      v5 = tp.tv_sec + 2;
      v4 = tv_nsec - 1950000000;
    }
    else
    {
      v5 = tp.tv_sec + 1;
    }
  }
  else
  {
    v5 = tp.tv_sec;
  }
  if ( (int)qword_332B8 < v5 )
    v6 = (int)qword_332B8 <= v5;
  else
    v6 = -((int)qword_332B8 > v5);
  if ( !v6 )
  {
    if ( SHIDWORD(qword_332B8) < v4 )
      v6 = SHIDWORD(qword_332B8) <= v4;
    else
      v6 = -(SHIDWORD(qword_332B8) > v4);
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
      --v7;
      v8 += 1000000000;
    }
    while ( v8 < 0 );
  }
  else if ( v8 > 999999999 )
  {
    v24 = v8 - 1000000000;
    v25 = v8 - 1000000000 <= 999999999;
    if ( v8 - 1000000000 <= 999999999 )
      v7 = qword_332C4 + 1;
    else
      v8 -= 2013265920;
    if ( v25 )
      v8 = v24;
    else
      v8 += 13238272;
    if ( !v25 )
    {
      v7 += 2;
      v8 += 27648;
    }
  }
  if ( tp.tv_sec > v7 )
    v9 = tp.tv_sec >= v7;
  else
    v9 = -(tp.tv_sec < v7);
  if ( !v9 )
  {
    if ( v8 < tv_nsec )
      v9 = v8 <= tv_nsec;
    else
      v9 = -(v8 > tv_nsec);
  }
  if ( v9 == -1 )
  {
    v26 = v8 - tv_nsec;
    v27 = v7 - tp.tv_sec;
    if ( v8 - tv_nsec < 0 )
    {
      do
      {
        --v27;
        v26 += 1000000000;
      }
      while ( v26 < 0 );
    }
    else if ( v26 > 999999999 )
    {
      v28 = v26 - 1000000000;
      v29 = v26 - 1000000000 <= 999999999;
      if ( v26 - 1000000000 <= 999999999 )
        ++v27;
      else
        v26 -= 2013265920;
      if ( v29 )
        v26 = v28;
      else
        v26 += 13238272;
      if ( !v29 )
      {
        v27 += 2;
        v26 += 27648;
      }
    }
    if ( v27 <= 0 )
    {
      if ( !dword_332C0 )
      {
        tp.tv_sec = v7;
        tp.tv_nsec = v8;
        tv_sec = v7;
        LODWORD(qword_332C4) = v7;
        HIDWORD(qword_332C4) = v8;
        if ( v8 >= 0 )
          goto LABEL_33;
        do
        {
LABEL_44:
          --tv_sec;
          v8 += 1000000000;
        }
        while ( v8 < 0 );
        goto LABEL_33;
      }
    }
    else if ( !dword_332C0 )
    {
      sub_ABF8(3, "get_systime Lamport advance exceeds one second (%.9f)", (double)v27 + (double)v26 * 0.000000001);
      exit(1);
    }
  }
  v8 = tv_nsec;
  qword_332C4 = (__int64)tp;
  if ( tv_nsec < 0 )
    goto LABEL_44;
  if ( tv_nsec > 999999999 )
  {
    v8 = tv_nsec - 1000000000;
    if ( tv_nsec - 1000000000 > 999999999 )
    {
      tv_sec = tp.tv_sec + 2;
      v8 = tv_nsec - 2000000000;
    }
    else
    {
      tv_sec = tp.tv_sec + 1;
    }
  }
LABEL_33:
  HIDWORD(v10) = 0;
  v11 = vshld_n_s64(vshrd_n_s64(vdup_n_s32(v8).n64_i64[0], 0x20u), 0x20u) + 500000000;
  v12 = tv_sec - 2085978496;
  v13 = sub_1C980(v11, HIDWORD(v11), 1000000000, 0);
  v15 = sub_D068();
  LODWORD(v16) = 32;
  v17 = ((double)v15 + (double)v15) * 2.32830644e-10 * sys_fuzz;
  if ( v17 >= 0.0 )
  {
    LODWORD(v10) = 0;
  }
  else
  {
    v17 = -v17;
    LODWORD(v10) = 1;
  }
  ldexp(v16, v14);
  v18 = sub_1C9C0(LODWORD(v17), HIDWORD(v17)) ^ -v10;
  v20 = v13 + v10 + v18;
  LODWORD(v19) = (__PAIR64__(v12, v13) + v10 + v18) >> 32;
  HIDWORD(v19) = v20;
  if ( qword_332CC )
  {
    if ( dword_332C0 )
    {
      qword_332CC = v19;
      goto LABEL_38;
    }
    if ( sys_fuzz > 0.0 )
    {
      if ( v20 < HIDWORD(qword_332CC) )
        v21 = v19 - 1;
      else
        v21 = v19;
      v22 = v21 - qword_332CC;
      if ( v20 == HIDWORD(qword_332CC) )
        v23 = v22 - 1;
      else
        v23 = v22;
      if ( v23 < 0 )
      {
        HIDWORD(v19) = HIDWORD(qword_332CC) + 1;
        LODWORD(v19) = (HIDWORD(qword_332CC) == -1) + (_DWORD)qword_332CC;
        ++sys_tsrounding;
      }
    }
    qword_332CC = v19;
  }
  else
  {
    qword_332CC = v19;
    if ( dword_332C0 )
LABEL_38:
      dword_332C0 = 0;
  }
  *a1 = v19;
  return v18;
}

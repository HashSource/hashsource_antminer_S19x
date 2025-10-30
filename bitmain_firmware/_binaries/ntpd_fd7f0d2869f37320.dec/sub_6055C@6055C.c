int __fastcall sub_6055C(__int64 *a1)
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
  __int64 v11; // d17
  int v12; // r4
  int v13; // r5
  int v14; // r1
  int v15; // r2
  int v16; // s15
  double v17; // r0
  double v18; // d0
  __int64 v19; // r0
  __int64 v20; // r4
  unsigned int v21; // kr08_4
  int v22; // r2
  int v23; // r2
  int v24; // r3
  int v25; // r1
  bool v26; // cc
  int v27; // r2
  int v28; // r1
  int v29; // r5
  bool v30; // cc
  struct timespec tp; // [sp+Ch] [bp-10h] BYREF

  if ( clock_gettime(0, &tp) < 0 )
    sub_C6F0();
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
  if ( (int)qword_107F40 < v5 )
    v6 = (int)qword_107F40 <= v5;
  else
    v6 = -((int)qword_107F40 > v5);
  if ( !v6 )
  {
    if ( SHIDWORD(qword_107F40) < v4 )
      v6 = SHIDWORD(qword_107F40) <= v4;
    else
      v6 = -(SHIDWORD(qword_107F40) > v4);
  }
  if ( v6 == -1 )
  {
    dword_107F48 = 1;
    ++sys_lamport;
  }
  qword_107F40 = (__int64)tp;
  v7 = qword_107F4C;
  v8 = LODWORD(sys_fuzz_nsec) + HIDWORD(qword_107F4C);
  if ( LODWORD(sys_fuzz_nsec) + HIDWORD(qword_107F4C) < 0 )
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
    v25 = v8 - 1000000000;
    v26 = v8 - 1000000000 <= 999999999;
    if ( v8 - 1000000000 <= 999999999 )
      v7 = qword_107F4C + 1;
    else
      v8 -= 2013265920;
    if ( v26 )
      v8 = v25;
    else
      v8 += 13238272;
    if ( !v26 )
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
    v27 = v8 - tv_nsec;
    v28 = v7 - tp.tv_sec;
    if ( v8 - tv_nsec < 0 )
    {
      do
      {
        --v28;
        v27 += 1000000000;
      }
      while ( v27 < 0 );
    }
    else if ( v27 > 999999999 )
    {
      v29 = v27 - 1000000000;
      v30 = v27 - 1000000000 <= 999999999;
      if ( v27 - 1000000000 <= 999999999 )
        ++v28;
      else
        v27 -= 2013265920;
      if ( v30 )
        v27 = v29;
      else
        v27 += 13238272;
      if ( !v30 )
      {
        v28 += 2;
        v27 += 27648;
      }
    }
    if ( v28 <= 0 )
    {
      if ( !dword_107F48 )
      {
        tp.tv_sec = v7;
        tp.tv_nsec = v8;
        tv_sec = v7;
        LODWORD(qword_107F4C) = v7;
        HIDWORD(qword_107F4C) = v8;
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
    else if ( !dword_107F48 )
    {
      sub_65D40(3, "get_systime Lamport advance exceeds one second (%.9f)", (double)v28 + (double)v27 * 0.000000001);
      exit(1);
    }
  }
  v8 = tv_nsec;
  qword_107F4C = (__int64)tp;
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
  v11 = vshld_n_s64(vshrd_n_s64(vdup_n_s32(v8).n64_i64[0], 0x20u), 0x20u);
  v12 = tv_sec - 2085978496;
  v13 = sub_8D518(v11 + 500000000, (unsigned __int64)(v11 + 500000000) >> 32, 1000000000, 0);
  v16 = sub_69A2C(v13, v14);
  LODWORD(v17) = 32;
  v18 = ((double)v16 + (double)v16) * 2.32830644e-10 * sys_fuzz;
  if ( v18 >= 0.0 )
  {
    LODWORD(v10) = 0;
  }
  else
  {
    v18 = -v18;
    LODWORD(v10) = 1;
  }
  ldexp(v17, v15);
  v19 = sub_8D558(LODWORD(v18), HIDWORD(v18)) ^ -v10;
  v21 = v13 + v10 + v19;
  LODWORD(v20) = (__PAIR64__(v12, v13) + v10 + v19) >> 32;
  HIDWORD(v20) = v21;
  if ( qword_107F54 )
  {
    if ( dword_107F48 )
    {
      qword_107F54 = v20;
      goto LABEL_38;
    }
    if ( sys_fuzz > 0.0 )
    {
      if ( v21 < HIDWORD(qword_107F54) )
        v22 = v20 - 1;
      else
        v22 = v20;
      v23 = v22 - qword_107F54;
      if ( v21 == HIDWORD(qword_107F54) )
        v24 = v23 - 1;
      else
        v24 = v23;
      if ( v24 < 0 )
      {
        HIDWORD(v20) = HIDWORD(qword_107F54) + 1;
        LODWORD(v20) = (HIDWORD(qword_107F54) == -1) + (_DWORD)qword_107F54;
        ++sys_tsrounding;
      }
    }
    qword_107F54 = v20;
  }
  else
  {
    qword_107F54 = v20;
    if ( dword_107F48 )
LABEL_38:
      dword_107F48 = 0;
  }
  *a1 = v20;
  return v19;
}

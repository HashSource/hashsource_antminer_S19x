int sub_7094()
{
  double v0; // d0
  __int64 v1; // r4
  double v2; // d8
  double v3; // d0
  unsigned int v4; // kr00_4
  __int64 v5; // r0
  bool v6; // nf
  unsigned int v7; // r9
  double v8; // d0
  unsigned __int64 v9; // d8
  unsigned __int64 v10; // r4
  int v11; // r7
  _BOOL4 v12; // r3
  int tv_nsec; // r4
  __time_t tv_sec; // r8
  signed int v15; // r3
  __time_t v16; // r5
  __int64 v17; // d16
  int v18; // r0
  bool v19; // cf
  unsigned int v20; // r7
  int v21; // r2
  __int64 v22; // r0
  int v23; // r3
  int result; // r0
  __int64 v25; // [sp+0h] [bp-4Ch]
  _BOOL4 v26; // [sp+Ch] [bp-40h]
  int v27; // [sp+14h] [bp-38h]
  int v28; // [sp+20h] [bp-2Ch] BYREF
  time_t timer; // [sp+28h] [bp-24h] BYREF
  int v30; // [sp+2Ch] [bp-20h] BYREF
  int v31; // [sp+30h] [bp-1Ch]
  __time_t v32; // [sp+34h] [bp-18h]
  int v33; // [sp+38h] [bp-14h]
  struct timespec tp; // [sp+3Ch] [bp-10h] BYREF

  HIDWORD(v1) = 0;
  v2 = v0;
  timer = 0x7FFFFFFF;
  v3 = sys_residual;
  if ( sys_residual >= 0.0 )
  {
    LODWORD(v1) = 0;
  }
  else
  {
    v3 = -sys_residual;
    LODWORD(v1) = 1;
  }
  ldexp(NAN, _stack_chk_guard);
  v5 = sub_1C9C0(LODWORD(v3), HIDWORD(v3)) ^ -v1;
  v4 = v5;
  LODWORD(v5) = 32;
  v6 = v2 < 0.0;
  if ( v2 < 0.0 )
    v2 = -v2;
  v25 = __PAIR64__(HIDWORD(v5), v4) + v1;
  v7 = v6;
  v8 = v2;
  ldexp(*(double *)&v5, v4 + v1);
  v9 = vshrd_n_u64(vdup_n_s32(v7).n64_u64[0], 0x20u);
  v10 = (sub_1C9C0(LODWORD(v8), HIDWORD(v8)) ^ -(__int64)v9) + v9;
  v11 = v10 + v25;
  v27 = HIDWORD(v10);
  v12 = __CFADD__((_DWORD)v10, (_DWORD)v25);
  v26 = v12;
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
  if ( tv_nsec < 0 )
  {
    v15 = tv_nsec;
    v16 = tp.tv_sec;
    do
    {
      --v16;
      v15 += 1000000000;
    }
    while ( v15 < 0 );
  }
  else if ( tv_nsec > 999999999 )
  {
    v15 = tv_nsec - 1000000000;
    if ( tv_nsec - 1000000000 > 999999999 )
    {
      v16 = tp.tv_sec + 2;
      v15 = tv_nsec - 2000000000;
    }
    else
    {
      v16 = tp.tv_sec + 1;
    }
  }
  else
  {
    v15 = tv_nsec;
    v16 = tp.tv_sec;
  }
  v17 = vshld_n_s64(vshrd_n_s64(vdup_n_s32(v15).n64_i64[0], 0x20u), 0x20u);
  v18 = sub_1C980(v17 + 500000000, (unsigned __int64)(v17 + 500000000) >> 32, 1000000000, 0);
  v32 = tv_sec;
  v33 = (tv_nsec + 500) / 1000;
  v19 = __CFADD__(v18, v11);
  v20 = v18 + v11;
  sub_B624((int)&v28, HIDWORD(v25) - 2085978496 + v27 + v26 + v19 + v16, &timer);
  v21 = v28;
  v22 = 1000000LL * v20 + 0x80000000LL;
  if ( HIDWORD(v22) == 1000000 )
    v21 = v28 + 1;
  v30 = v21;
  v23 = (1000000 * (unsigned __int64)v20 + 0x80000000) >> 32;
  if ( HIDWORD(v22) == 1000000 )
    v23 = 0;
  v31 = v23;
  if ( sub_A1CC(&v30, 0) )
  {
    sub_ABF8(3, "step-systime: %m");
    result = enable_panic_check;
    if ( enable_panic_check )
    {
      result = allow_panic;
      if ( allow_panic )
      {
        sub_ABF8(3, "step_systime: allow_panic is TRUE!");
        return 0;
      }
    }
  }
  else
  {
    dword_332C0 = v7;
    sys_residual = 0.0;
    if ( step_callback )
      ((void (*)(void))step_callback)();
    sub_6608(v30, v31, v32, v33);
    if ( enable_panic_check && allow_panic )
    {
      sub_ABF8(3, "step_systime: allow_panic is TRUE!");
      if ( allow_panic )
        sub_10C38("systime.c", 589, 2, "!allow_panic");
    }
    return 1;
  }
  return result;
}

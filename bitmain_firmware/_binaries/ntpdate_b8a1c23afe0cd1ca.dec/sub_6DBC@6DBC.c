int sub_6DBC()
{
  double v0; // d0
  double v1; // d8
  double v2; // d0
  __int64 v3; // r0
  int v4; // r2
  __int64 v5; // kr08_8
  __int64 v6; // r2
  int v7; // r4
  _BOOL4 v8; // r8
  int v9; // r7
  int tv_nsec; // r1
  __time_t tv_sec; // r9
  int v12; // r0
  bool v13; // cf
  unsigned int v14; // r4
  __int64 v15; // r2
  int v16; // r0
  int result; // r0
  int v18; // r2
  bool v19; // cc
  double v20; // d0
  int v21; // [sp+0h] [bp-24h] BYREF
  time_t timer; // [sp+8h] [bp-1Ch] BYREF
  _DWORD v23[2]; // [sp+Ch] [bp-18h] BYREF
  struct timespec tp; // [sp+14h] [bp-10h] BYREF

  timer = 0x7FFFFFFF;
  v1 = v0;
  v2 = sys_residual;
  if ( sys_residual < 0.0 )
  {
    v20 = -sys_residual;
    ldexp(NAN, _stack_chk_guard);
    v3 = -sub_1C428(LODWORD(v20), HIDWORD(v20));
  }
  else
  {
    ldexp(NAN, _stack_chk_guard);
    v3 = sub_1C428(LODWORD(v2), HIDWORD(v2));
  }
  v5 = v3;
  LODWORD(v3) = 32;
  ldexp(*(double *)&v3, v4);
  if ( v1 < 0.0 )
    v6 = -sub_1C428(COERCE_UNSIGNED_INT64(-v1), HIDWORD(COERCE_UNSIGNED_INT64(-v1)));
  else
    v6 = sub_1C428(LODWORD(v1), HIDWORD(v1));
  v7 = v5 + v6;
  v8 = __CFADD__((_DWORD)v5, (_DWORD)v6);
  v9 = HIDWORD(v5) - 2085978496 + HIDWORD(v6);
  if ( clock_gettime(0, &tp) < 0 )
    sub_3530();
  tv_nsec = tp.tv_nsec;
  if ( trunc_os_clock )
  {
    tv_nsec = (int)((double)(int)((double)tp.tv_nsec * 0.000000001 / sys_tick) * 1000000000.0 * sys_tick);
    tp.tv_nsec = tv_nsec;
  }
  tv_sec = tp.tv_sec;
  if ( tv_nsec < 0 )
  {
    do
    {
      tv_nsec += 1000000000;
      --tv_sec;
    }
    while ( tv_nsec < 0 );
  }
  else if ( tv_nsec > 999999999 )
  {
    v18 = tv_nsec - 1000000000;
    v19 = tv_nsec - 1000000000 <= 999999999;
    if ( tv_nsec - 1000000000 <= 999999999 )
      tv_sec = tp.tv_sec + 1;
    else
      tv_nsec -= 2013265920;
    if ( v19 )
      tv_nsec = v18;
    else
      tv_nsec += 13238272;
    if ( !v19 )
    {
      tv_sec += 2;
      tv_nsec += 27648;
    }
  }
  v12 = sub_1C3E8(500000000, tv_nsec, 1000000000, 0);
  v13 = __CFADD__(v7, v12);
  v14 = v7 + v12;
  sub_B15C((int)&v21, v8 + v9 + tv_sec + v13, &timer);
  v15 = 1000000LL * v14 + 0x80000000LL;
  v16 = v21;
  if ( HIDWORD(v15) == 1000000 )
  {
    v16 = v21 + 1;
    HIDWORD(v15) = 0;
  }
  v23[0] = v16;
  v23[1] = HIDWORD(v15);
  if ( sub_9DCC(v23, 0, v15) )
  {
    sub_A828(3, "step-systime: %m");
    result = enable_panic_check;
    if ( enable_panic_check )
    {
      result = allow_panic;
      if ( allow_panic )
      {
        sub_A828(3, "step_systime: allow_panic is TRUE!");
        return 0;
      }
    }
  }
  else
  {
    dword_332C0 = v1 < 0.0;
    sys_residual = 0.0;
    if ( step_callback )
      step_callback(0, 0, &qword_332B8);
    if ( enable_panic_check && allow_panic )
    {
      sub_A828(3, "step_systime: allow_panic is TRUE!");
      if ( allow_panic )
        sub_1073C("systime.c", 589, 2, "!allow_panic");
    }
    return 1;
  }
  return result;
}

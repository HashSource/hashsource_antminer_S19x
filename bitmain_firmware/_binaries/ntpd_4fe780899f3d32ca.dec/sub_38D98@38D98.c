int *sub_38D98()
{
  int v0; // r6
  int v1; // r8
  int v2; // r10
  double v3; // d8
  _BOOL4 v4; // r1
  bool v5; // cc
  int v6; // r3
  double v7; // r0
  unsigned int v8; // r12
  unsigned __int64 v9; // r0
  double v10; // r0
  double v11; // d0
  int v12; // r2
  double v13; // r0
  double v14; // d0
  int v15; // r2
  int v17; // [sp+8h] [bp-14h]
  int v18; // [sp+14h] [bp-8h] BYREF
  unsigned int v19; // [sp+18h] [bp-4h]
  int v20; // [sp+1Ch] [bp+0h] BYREF
  unsigned int v21; // [sp+20h] [bp+4h]

  v0 = 0;
  v1 = 0;
  v17 = 0;
  v2 = 0;
  v3 = 1.0;
  sub_335A4(3);
  sys_stratum = 16;
  sys_refid = 1414090313;
  sys_peer = 0;
  sys_rootdelay = 0.0;
  sys_rootdisp = 0.0;
  dword_108C0C = 0;
  sys_reftime = 0;
  sys_jitter = 0.0;
  ((void (*)(void))sub_5F600)();
  trunc_os_clock = 0;
  sub_5F724(&v20);
  do
  {
    sub_5F724(&v18);
    v6 = v18 - v20;
    LODWORD(v7) = v18;
    if ( v19 < v21 )
      --v6;
    v8 = v19 - v21;
    v20 = v18;
    v21 = v19;
    if ( v6 == 0 || (unsigned int)v6 >= 0x80000000 )
    {
      v4 = v8 > 0x55;
      if ( v6 )
        v4 = 0;
      if ( !v4 )
      {
        ++v2;
        goto LABEL_7;
      }
      if ( v1 < v2 )
        v1 = v2;
      ++v0;
      v9 = __PAIR64__(v6, 0) + v8;
LABEL_18:
      v10 = COERCE_DOUBLE(sub_8BEC4(v9, HIDWORD(v9)));
      v11 = v10;
      LODWORD(v10) = -32;
      v7 = ldexp(v10, v12);
      goto LABEL_19;
    }
    if ( v1 < v2 )
      v1 = v2;
    ++v0;
    v9 = __PAIR64__(v6, 0) + v8;
    if ( v6 >= 0 )
      goto LABEL_18;
    v13 = COERCE_DOUBLE(sub_8BEC4(-v8, (unsigned __int64)-(__int64)(__PAIR64__(v6, 0) + v8) >> 32));
    v14 = v13;
    LODWORD(v13) = -32;
    v7 = ldexp(v13, v15);
    v11 = -v14;
LABEL_19:
    v2 = 0;
    if ( v11 < v3 )
      v3 = v11;
LABEL_7:
    v5 = v17 + 1 <= 49999999;
    if ( v17 + 1 <= 49999999 )
      v5 = v0 <= 11;
    ++v17;
  }
  while ( v5 );
  if ( v0 <= 11 )
  {
    sub_64E00(3, "Fatal error: precision could not be measured (MINSTEP too large?)");
    exit(1);
  }
  sub_5F600(LODWORD(v7));
  measured_tick = v3;
  sub_386B0();
  sub_64E00(6, "proto: precision = %.3f usec (%d)", sys_tick * 1000000.0, sys_precision);
  if ( sys_fuzz < sys_tick )
    sub_64E00(5, "proto: fuzz beneath %.3f usec", sys_fuzz * 1000000.0);
  sub_5F724(&v20);
  sys_survivors = 0;
  sys_manycastserver = 0;
  sys_bclient = 0;
  sys_bdelay = -0.05;
  sys_authenticate = 1;
  sys_stattime = current_time;
  orphwait = (int)sys_orphwait + current_time;
  sub_38C70();
  byte_108BDB = 96;
  byte_108BDC = 0x80;
  byte_108BDD = -96;
  sys_ttl[0] = 0;
  byte_108BD9 = 32;
  byte_108BDA = 64;
  byte_108BDF = -32;
  byte_108BDE = -64;
  sys_ttlmax = 7;
  hardpps_enable = 0;
  stats_control = 1;
  return &hardpps_enable;
}

int *sub_39588()
{
  int v0; // r8
  int v1; // r9
  double v2; // d8
  int v3; // r6
  int v4; // r11
  int v5; // r0
  unsigned int v6; // r12
  unsigned int v7; // r3
  double v8; // r0
  _BOOL4 v9; // r2
  unsigned int v10; // r4
  __int64 v11; // r0
  double v12; // r0
  double v13; // d0
  int v14; // r2
  bool v15; // cc
  __int64 v17; // [sp+8h] [bp-34h]
  int v18; // [sp+24h] [bp-18h] BYREF
  unsigned int v19; // [sp+28h] [bp-14h]
  int v20; // [sp+2Ch] [bp-10h] BYREF
  unsigned int v21; // [sp+30h] [bp-Ch]

  v0 = 0;
  v1 = 0;
  v2 = 1.0;
  v3 = 0;
  v4 = 0;
  v5 = sub_33ADC(3);
  sys_stratum = 16;
  sys_refid = *(_DWORD *)"INIT";
  sys_peer = 0;
  sys_rootdelay = 0.0;
  sys_rootdisp = 0.0;
  dword_109C2C = 0;
  sys_reftime = 0;
  sys_jitter = 0.0;
  sub_60434(v5);
  trunc_os_clock = 0;
  sub_6055C(&v20);
  do
  {
    sub_6055C(&v18);
    v6 = v19 - v21;
    v7 = v18 - v20;
    LODWORD(v8) = v18;
    if ( v19 < v19 - v21 )
      --v7;
    v20 = v18;
    v21 = v19;
    if ( v7 != 0 && v7 < 0x80000000 )
      goto LABEL_9;
    v9 = v7 == 0;
    if ( v6 <= 0x55 )
      v9 = 0;
    if ( v9 )
    {
LABEL_9:
      HIDWORD(v17) = v7;
      LODWORD(v17) = 0;
      v10 = v7 >> 31;
      if ( v4 < v3 )
        v4 = v3;
      ++v1;
      v11 = (-(__int64)v10 ^ (v17 + v6)) + v10;
      v3 = 0;
      v12 = COERCE_DOUBLE(sub_8D40C(v11, HIDWORD(v11)));
      v13 = v12;
      LODWORD(v12) = -32;
      v8 = ldexp(v12, v14);
      if ( v10 )
        v13 = -v13;
      if ( v13 < v2 )
        v2 = v13;
    }
    else
    {
      ++v3;
    }
    ++v0;
    v15 = v1 <= 11;
    if ( v1 <= 11 )
      v15 = v0 <= 49999999;
  }
  while ( v15 );
  if ( v1 <= 11 )
  {
    sub_65D40(3, "Fatal error: precision could not be measured (MINSTEP too large?)");
    exit(1);
  }
  sub_60434(LODWORD(v8));
  measured_tick = v2;
  sub_38E94();
  sub_65D40(6, "proto: precision = %.3f usec (%d)", sys_tick * 1000000.0, sys_precision);
  if ( sys_fuzz < sys_tick )
    sub_65D40(5, "proto: fuzz beneath %.3f usec", sys_fuzz * 1000000.0);
  sub_6055C(&v20);
  sys_survivors = 0;
  sys_manycastserver = 0;
  sys_bclient = 0;
  sys_bdelay = -0.05;
  sys_authenticate = 1;
  sys_stattime = current_time;
  orphwait = (int)sys_orphwait + current_time;
  sub_39460();
  byte_109BFB = 96;
  sys_ttl[0] = 0;
  byte_109BF9 = 32;
  byte_109BFA = 64;
  byte_109BFC = 0x80;
  byte_109BFD = -96;
  byte_109BFE = -64;
  byte_109BFF = -32;
  sys_ttlmax = 7;
  hardpps_enable = 0;
  stats_control = 1;
  return &hardpps_enable;
}

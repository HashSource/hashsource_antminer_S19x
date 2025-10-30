void (__fastcall *sub_40ED4())(int, unsigned __int16 **)
{
  _DWORD *v0; // r0
  int v1; // r3
  unsigned int v2; // r2
  _DWORD *v3; // r4
  unsigned __int8 v4; // r3
  int v5; // r11
  unsigned int v6; // r3
  int v7; // r10
  int v8; // r0
  int v9; // r0
  _BOOL4 v10; // r10
  int v11; // r1
  int v12; // r0
  void (__fastcall *result)(int, unsigned __int16 **); // r0
  int v14; // r3
  int v15; // r1
  int v16; // r0
  int v17; // r0
  double v18; // d0
  const char *v19; // r2
  _DWORD *v20; // r0
  _DWORD *v21; // r4
  int v22; // r11
  int v23; // r2
  int v24; // r10
  int v25; // r2
  time_t v26; // [sp+4h] [bp-38h] BYREF
  int v27; // [sp+8h] [bp-34h] BYREF
  _QWORD s[4]; // [sp+10h] [bp-2Ch] BYREF

  if ( ++current_time >= (unsigned int)dword_BCBC4 )
  {
    ++dword_BCBC4;
    sub_301E4();
    v20 = (_DWORD *)peer_list;
    if ( !peer_list )
      goto LABEL_11;
    do
    {
      v21 = (_DWORD *)*v20;
      if ( (v20[17] & 8) != 0 )
        sub_3987C((int)v20);
      v20 = v21;
    }
    while ( v21 );
  }
  v0 = (_DWORD *)peer_list;
  if ( peer_list )
  {
    while ( 1 )
    {
      v1 = v0[178];
      v2 = v0[180];
      v3 = (_DWORD *)*v0;
      if ( v1 > 0 )
        v0[178] = v1 - 1;
      if ( v2 > current_time )
        goto LABEL_5;
      if ( (v0[17] & 8) != 0 )
      {
        sub_3992C();
LABEL_5:
        v0 = v3;
        if ( !v3 )
          break;
      }
      else
      {
        sub_36448((int)v0);
        v0 = v3;
        if ( !v3 )
          break;
      }
    }
  }
LABEL_11:
  v4 = sys_orphan;
  if ( sys_orphan <= 15 && !sys_peer && current_time > (unsigned int)orphwait )
  {
    if ( sys_leap == 3 )
    {
      sub_335A4(0);
      if ( crypto_flags )
        sub_279FC();
      v4 = sys_orphan;
    }
    sys_stratum = v4;
    if ( v4 <= 1u )
      v25 = 20300;
    else
      v25 = 16777343;
    if ( v4 <= 1u )
      HIWORD(v25) = 20559;
    sys_refid = v25;
    sys_offset = 0.0;
    sys_rootdelay = 0.0;
    sys_rootdisp = 0.0;
  }
  sub_5F724(&v27);
  time(&v26);
  if ( leapsec )
  {
    v5 = (unsigned __int8)sys_leap;
  }
  else
  {
    v6 = current_time;
    v5 = (unsigned __int8)sys_leap;
    if ( (current_time & 7) != 0 )
    {
      if ( sys_leap == 3 )
        goto LABEL_35;
      goto LABEL_57;
    }
  }
  v7 = v27;
  v8 = pll_control;
  if ( pll_control )
  {
    v8 = kern_enable;
    if ( kern_enable )
      v8 = 1;
  }
  sub_2D220(v8);
  if ( v5 == 3 )
  {
    sub_2DB18();
    memset(s, 0, sizeof(s));
    if ( !leapsec )
    {
      v9 = 0;
      v10 = 0;
LABEL_23:
      leapdif = 0;
      goto LABEL_24;
    }
    v10 = 0;
LABEL_74:
    v22 = 0;
    sub_25EE0((__int16 *)&byte_9[1], 0, 0);
    goto LABEL_75;
  }
  v17 = sub_2D7D0(s, v7, &v26);
  if ( v17 )
  {
    v18 = (double)SLOWORD(s[3]);
    if ( v18 < 0.0 )
    {
      if ( clock_max_back <= 0.0 )
      {
        v19 = "Positive leap second, no step correction. System clock will be inaccurate for a long time.";
      }
      else if ( clock_max_back < -v18 )
      {
        sub_5FF34(v17);
        v19 = "Positive leap second, stepped backward.";
      }
      else
      {
        v19 = "Positive leap second, no step correction. System clock will be inaccurate for a long time.";
      }
    }
    else
    {
      if ( v18 <= 0.0 )
        goto LABEL_66;
      if ( clock_max_fwd <= 0.0 )
      {
        v19 = "Negative leap second, no step correction. System clock will be inaccurate for a long time.";
      }
      else if ( v18 > clock_max_fwd )
      {
        sub_5FF34(v17);
        v19 = "Negative leap second, stepped forward.";
      }
      else
      {
        v19 = "Negative leap second, no step correction. System clock will be inaccurate for a long time.";
      }
    }
    sub_64E00(5, "%s", v19);
LABEL_66:
    v10 = 1;
    sub_25EE0((__int16 *)&byte_9[2], 0, 0);
    leapsec = 0;
    sys_tai = SWORD2(s[2]);
    if ( HIWORD(s[2]) )
      v9 = LODWORD(s[2]) <= 2;
    else
      v9 = 0;
    goto LABEL_23;
  }
  v22 = BYTE2(s[3]);
  v24 = sys_tai;
  sys_tai = SWORD2(s[2]);
  v10 = v24 != SWORD2(s[2]);
  if ( !leapsec )
  {
    if ( (unsigned int)BYTE2(s[3]) - 1 > 1 )
    {
      if ( HIWORD(s[2]) )
        v9 = LODWORD(s[2]) <= 2;
      else
        v9 = 0;
      goto LABEL_23;
    }
    if ( BYTE3(s[3]) )
      sub_25EE0((__int16 *)((char *)&dword_88 + 1), sys_peer, 0);
    else
      sub_25EE0((__int16 *)byte_9, 0, 0);
    goto LABEL_75;
  }
  if ( BYTE2(s[3]) <= (unsigned int)leapsec )
  {
    if ( BYTE2(s[3]) >= (unsigned int)leapsec )
    {
      v23 = SHIWORD(s[2]);
      v9 = LODWORD(s[2]) <= 2;
      if ( !HIWORD(s[2]) )
        v9 = 0;
      goto LABEL_78;
    }
    if ( !BYTE2(s[3]) )
      goto LABEL_74;
  }
LABEL_75:
  v23 = SHIWORD(s[2]);
  leapsec = v22;
  v9 = LODWORD(s[2]) <= 2;
  if ( !HIWORD(s[2]) )
    v9 = 0;
  if ( !v22 )
    goto LABEL_23;
LABEL_78:
  leapdif = v23;
LABEL_24:
  v11 = leap_sec_in_progress;
  leap_sec_in_progress = v9;
  if ( v11 != v9 )
    sub_335A4((unsigned __int8)sys_leap);
  if ( v10 )
    sub_27AA0();
  if ( sys_leap == 3 )
    goto LABEL_58;
  if ( (unsigned int)leapsec <= 1 || !leapdif )
  {
LABEL_57:
    sub_335A4(0);
LABEL_58:
    v6 = current_time;
    goto LABEL_35;
  }
  if ( leapdif <= 0 )
    v12 = 2;
  else
    v12 = 1;
  sub_335A4(v12);
  v6 = current_time;
LABEL_35:
  if ( dword_BCBD0 <= v6 )
  {
    dword_BCBD0 += 900;
    sub_30520();
    v6 = current_time;
  }
  if ( dword_BCBDC <= v6 )
  {
    dword_BCBDC += 1 << sys_automax;
    sub_626D0();
    v6 = current_time;
  }
  result = (void (__fastcall *)(int, unsigned __int16 **))&dword_BCBC4;
  if ( dword_BCBE0 && dword_BCBE0 <= v6 )
  {
    dword_BCBE0 += 1 << sys_revoke;
    result = (void (__fastcall *)(int, unsigned __int16 **))RAND_bytes(&sys_private, 4, dword_BCBE0);
    v6 = current_time;
  }
  if ( interface_interval && dword_BCBD4 <= v6 )
  {
    sub_40E80(interface_interval + v6);
    result = sub_18908(0, 0);
    v6 = current_time;
  }
  if ( dword_BCBD8 && dword_BCBD8 <= v6 )
  {
    result = (void (__fastcall *)(int, unsigned __int16 **))sub_69654();
    v6 = current_time;
  }
  if ( dword_BCBC8 <= v6 )
  {
    dword_BCBC8 += 3600;
    sub_419E0();
    v14 = dword_BCBCC;
    if ( dword_BCBCC > (unsigned int)current_time )
    {
      v15 = v27;
      v16 = 0;
    }
    else
    {
      v14 = dword_BCBCC + 86400;
      v15 = v27;
      v16 = 1;
    }
    if ( dword_BCBCC <= (unsigned int)current_time )
      dword_BCBCC = v14;
    return (void (__fastcall *)(int, unsigned __int16 **))sub_42670(v16, v15, &v26, v14);
  }
  return result;
}

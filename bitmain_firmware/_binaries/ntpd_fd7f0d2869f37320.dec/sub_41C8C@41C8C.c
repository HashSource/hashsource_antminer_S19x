void (__fastcall *sub_41C8C())(int, unsigned __int16 **)
{
  _DWORD *v0; // r0
  int v1; // r3
  unsigned int v2; // r2
  _DWORD *v3; // r4
  unsigned __int8 v4; // r3
  unsigned int v5; // r3
  void (__fastcall *result)(int, unsigned __int16 **); // r0
  int v7; // r3
  int v8; // r1
  int v9; // r0
  int v10; // r10
  int v11; // r11
  int v12; // r0
  _BOOL4 v13; // r10
  unsigned int v14; // r3
  unsigned int v15; // r11
  _BOOL4 v16; // r3
  int v17; // r2
  int v18; // r3
  int v19; // r2
  int v20; // r0
  __int64 *v21; // r0
  double v22; // d0
  const char *v23; // r2
  _DWORD *v24; // r0
  _DWORD *v25; // r4
  int v26; // r2
  int v27; // r10
  time_t v28; // [sp+4h] [bp-38h] BYREF
  int v29; // [sp+8h] [bp-34h] BYREF
  __int64 v30; // [sp+10h] [bp-2Ch] BYREF
  int v31; // [sp+18h] [bp-24h]
  int v32; // [sp+1Ch] [bp-20h]
  unsigned int v33; // [sp+20h] [bp-1Ch]
  int v34; // [sp+24h] [bp-18h]
  int v35; // [sp+28h] [bp-14h]
  int v36; // [sp+2Ch] [bp-10h]

  if ( ++current_time >= (unsigned int)dword_BDBD8 )
  {
    ++dword_BDBD8;
    sub_306F8();
    v24 = (_DWORD *)peer_list;
    if ( !peer_list )
      goto LABEL_11;
    do
    {
      v25 = (_DWORD *)*v24;
      if ( (v24[17] & 8) != 0 )
        sub_3A064((int)v24);
      v24 = v25;
    }
    while ( v25 );
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
        sub_3A114((int)v0);
LABEL_5:
        v0 = v3;
        if ( !v3 )
          break;
      }
      else
      {
        sub_36A10((int)v0);
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
      sub_33ADC(0);
      if ( crypto_flags )
        sub_27DEC();
      v4 = sys_orphan;
    }
    sys_stratum = v4;
    if ( v4 <= 1u )
      sys_refid = *(_DWORD *)"LOOP";
    else
      sys_refid = 16777343;
    sys_offset = 0.0;
    sys_rootdelay = 0.0;
    sys_rootdisp = 0.0;
  }
  sub_6055C(&v29);
  time(&v28);
  if ( !leapsec )
  {
    v5 = current_time;
    if ( (current_time & 7) != 0 )
    {
      if ( sys_leap == 3 )
        goto LABEL_18;
      goto LABEL_16;
    }
  }
  v10 = v29;
  v11 = (unsigned __int8)sys_leap;
  v12 = pll_control;
  if ( pll_control )
  {
    v12 = kern_enable;
    if ( kern_enable )
      v12 = 1;
  }
  sub_2D5FC(v12);
  if ( v11 == 3 )
  {
    sub_2DF74();
    v13 = 0;
    v30 = 0;
    v31 = 0;
    v32 = 0;
    v33 = 0;
    v34 = 0;
    v35 = 0;
    v36 = 0;
    v14 = leapsec;
LABEL_44:
    v15 = 0;
LABEL_45:
    if ( v15 < v14 )
    {
      v16 = v14 != 0;
      if ( v15 )
        v16 = 0;
      if ( v16 )
        sub_26294(10, 0, 0);
      v14 = v15;
      leapsec = v15;
    }
    goto LABEL_51;
  }
  v21 = sub_2DBF8(&v30, v10, &v28);
  if ( v21 )
  {
    v22 = (double)(__int16)v35;
    if ( v22 < 0.0 )
    {
      if ( clock_max_back <= 0.0 )
      {
        v23 = "Positive leap second, no step correction. System clock will be inaccurate for a long time.";
      }
      else if ( clock_max_back < -v22 )
      {
        sub_60D9C(v21);
        v23 = "Positive leap second, stepped backward.";
      }
      else
      {
        v23 = "Positive leap second, no step correction. System clock will be inaccurate for a long time.";
      }
    }
    else
    {
      if ( v22 <= 0.0 )
      {
LABEL_75:
        v13 = 1;
        sub_26294(11, 0, 0);
        v14 = 0;
        leapsec = 0;
        sys_tai = (__int16)v34;
        goto LABEL_44;
      }
      if ( clock_max_fwd <= 0.0 )
      {
        v23 = "Negative leap second, no step correction. System clock will be inaccurate for a long time.";
      }
      else if ( v22 > clock_max_fwd )
      {
        sub_60D9C(v21);
        v23 = "Negative leap second, stepped forward.";
      }
      else
      {
        v23 = "Negative leap second, no step correction. System clock will be inaccurate for a long time.";
      }
    }
    sub_65D40(5, "%s", v23);
    goto LABEL_75;
  }
  v14 = leapsec;
  v26 = leapsec;
  v15 = BYTE2(v35);
  if ( leapsec )
    v26 = 1;
  v27 = sys_tai;
  if ( BYTE2(v35) <= 2u )
    v26 |= 1u;
  sys_tai = (__int16)v34;
  v13 = (__int16)v34 != v27;
  if ( !v26 )
  {
    v14 = 0;
    goto LABEL_77;
  }
  if ( BYTE2(v35) <= (unsigned int)leapsec )
    goto LABEL_45;
  if ( !leapsec )
  {
    if ( HIBYTE(v35) )
      sub_26294(137, sys_peer, 0);
    else
      sub_26294(9, HIBYTE(v35), (const char *)HIBYTE(v35));
  }
  leapsec = v15;
  v14 = v15;
LABEL_51:
  if ( v14 )
  {
    v17 = SHIWORD(v34);
    leapdif = SHIWORD(v34);
    goto LABEL_53;
  }
LABEL_77:
  v17 = SHIWORD(v34);
  leapdif = v14;
LABEL_53:
  v18 = v17;
  if ( v17 )
    v18 = 1;
  v19 = leap_sec_in_progress;
  if ( v33 > 2 )
    v18 = 0;
  leap_sec_in_progress = v18;
  if ( v19 != v18 )
    sub_33ADC((unsigned __int8)sys_leap);
  if ( v13 )
    sub_27E64();
  if ( sys_leap == 3 )
    goto LABEL_17;
  if ( (unsigned int)leapsec <= 1 || !leapdif )
  {
LABEL_16:
    sub_33ADC(0);
LABEL_17:
    v5 = current_time;
    goto LABEL_18;
  }
  if ( leapdif <= 0 )
    v20 = 2;
  else
    v20 = 1;
  sub_33ADC(v20);
  v5 = current_time;
LABEL_18:
  if ( dword_BDBE4 <= v5 )
  {
    dword_BDBE4 += 900;
    sub_30A6C();
    v5 = current_time;
  }
  if ( dword_BDBF0 <= v5 )
  {
    dword_BDBF0 += 1 << sys_automax;
    sub_635E8();
    v5 = current_time;
  }
  result = (void (__fastcall *)(int, unsigned __int16 **))&dword_BDBD8;
  if ( dword_BDBF4 && dword_BDBF4 <= v5 )
  {
    dword_BDBF4 += 1 << sys_revoke;
    result = (void (__fastcall *)(int, unsigned __int16 **))RAND_bytes(&sys_private, 4, dword_BDBF4);
    v5 = current_time;
  }
  if ( interface_interval && dword_BDBE8 <= v5 )
  {
    sub_41C38(v5 + interface_interval);
    result = sub_18BA4(0, 0);
    v5 = current_time;
  }
  if ( dword_BDBEC && dword_BDBEC <= v5 )
  {
    result = (void (__fastcall *)(int, unsigned __int16 **))sub_6A5D4(result);
    v5 = current_time;
  }
  if ( dword_BDBDC <= v5 )
  {
    dword_BDBDC += 3600;
    sub_42798();
    v7 = dword_BDBE0;
    if ( dword_BDBE0 > (unsigned int)current_time )
    {
      v8 = v29;
      v9 = 0;
    }
    else
    {
      v7 = dword_BDBE0 + 86016;
      v8 = v29;
      v9 = 1;
    }
    if ( dword_BDBE0 <= (unsigned int)current_time )
    {
      v7 += 384;
      dword_BDBE0 = v7;
    }
    return (void (__fastcall *)(int, unsigned __int16 **))sub_4342C(v9, v8, &v28, v7);
  }
  return result;
}

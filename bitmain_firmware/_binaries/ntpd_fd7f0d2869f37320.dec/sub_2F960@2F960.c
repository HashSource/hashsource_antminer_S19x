int __fastcall sub_2F960(int a1)
{
  double v1; // d0
  int v2; // r8
  double v4; // d8
  double v5; // d16
  double *v6; // r2
  double v7; // d17
  double v8; // d16
  double v9; // d16
  unsigned int v10; // r1
  unsigned int v11; // r2
  int v12; // r7
  bool v13; // cf
  double v14; // r0
  double v15; // d10
  double v16; // d9
  int v17; // r0
  int v18; // r0
  double v19; // d16
  int v20; // r0
  double v22; // d12
  double v23; // d11
  double v24; // r0
  int v25; // r2
  double v26; // d11
  double v27; // d13
  double v28; // d12
  double v29; // r0
  int v30; // r2
  double v31; // d0
  int v32; // r2
  double v33; // r0
  int v34; // r2
  int v35; // r3
  unsigned int v36; // r3
  unsigned int v37; // r3
  int v38; // r0
  int *v39; // r0
  void *v40; // r3
  int v41; // s15
  int v42; // r0
  int *v43; // r0
  double v44; // d16
  double v45; // d11
  double v46; // d11
  double v47; // d0
  int v48; // [sp+14h] [bp-68h]
  int v49; // [sp+18h] [bp-64h]
  int v50; // [sp+1Ch] [bp-60h]
  char v51[80]; // [sp+24h] [bp-58h] BYREF

  v2 = ntp_enable;
  if ( !ntp_enable )
  {
    sub_42BD4((unsigned __int8)sys_poll);
    return v2;
  }
  v4 = v1;
  if ( fabs(v1) > clock_panic && clock_panic > 0.0 && !allow_panic )
  {
    v2 = -1;
    sub_6D00C(v51, 80, "%+.0f s; set clock manually within %.0f s.", v1, clock_panic);
    sub_26294(7, 0, v51);
    return v2;
  }
  allow_panic = 0;
  v2 = mode_ntpdate;
  if ( mode_ntpdate )
  {
    if ( v1 > clock_max_fwd && clock_max_fwd > 0.0 || -v1 > clock_max_back && clock_max_back > 0.0 )
    {
      ((void (*)(void))sub_60D9C)();
      sub_65D40(5, "ntpd: time set %+.6f s", v1);
      _printf_chk(1, "ntpd: time set %+.6fs\n", v1);
    }
    else
    {
      ((void (*)(void))sub_60B0C)();
      sub_65D40(5, "ntpd: time slew %+.6f s", v1);
      _printf_chk(1, "ntpd: time slew %+.6fs\n", v1);
    }
    sub_42BD4((unsigned __int8)sys_poll);
    exit(0);
  }
  if ( dword_BBE5C )
  {
    v5 = *(double *)(a1 + 616);
    v6 = (double *)(dword_BBE5C + 8 * dword_BBE60);
    if ( v5 < *v6 )
    {
      *v6 = v5;
      v5 = *(double *)(a1 + 616);
    }
    v7 = dbl_BBE68;
    if ( dbl_BBE68 > v5 )
    {
      v7 = v5;
      dbl_BBE68 = v5;
    }
    v8 = v5 - v7;
    if ( v1 <= 0.0 )
      v9 = v8 * 0.5;
    else
      v9 = -(v8 * 0.5);
    v4 = v1 + v9;
  }
  v10 = *(unsigned __int8 *)(a1 + 65);
  v11 = *(unsigned __int8 *)(a1 + 66);
  v12 = (unsigned __int8)sys_poll;
  if ( (unsigned __int8)sys_poll >= v10 )
    v10 = (unsigned __int8)sys_poll;
  else
    sys_poll = *(_BYTE *)(a1 + 65);
  v13 = v11 >= v10;
  HIDWORD(v14) = 1480;
  if ( !v13 )
    sys_poll = v11;
  v15 = drift_comp;
  v16 = (double)(unsigned int)(current_time - dword_BAB28);
  if ( v4 > clock_max_fwd && clock_max_fwd > 0.0 || -v4 > clock_max_back && clock_max_back > 0.0 )
  {
    if ( !force_step_once )
      goto LABEL_21;
  }
  else if ( !force_step_once )
  {
    v22 = last_offset;
    LODWORD(v14) = sys_precision;
    v23 = clock_jitter;
    v24 = ldexp(v14, (int)&sys_precision);
    v26 = v23 * v23;
    if ( fabs(v4 - v22) <= 1.0 )
    {
      LODWORD(v24) = sys_precision;
      v24 = ldexp(v24, v25);
      v28 = fabs(v4 - last_offset);
      v27 = 1.0;
    }
    else
    {
      v27 = fabs(v4 - last_offset);
      v28 = v27;
    }
    LODWORD(v24) = sys_precision;
    v29 = ldexp(v24, v25);
    if ( v28 <= 1.0 )
    {
      v31 = 1.0;
      LODWORD(v29) = sys_precision;
      v29 = ldexp(v29, v30);
    }
    else
    {
      v31 = fabs(v4 - last_offset);
    }
    clock_jitter = sqrt(v26 + (v27 * v31 - v26) * 0.125);
    if ( state == 1 )
    {
      v48 = 1;
      sub_60B0C(LODWORD(v29), HIDWORD(v29));
      sub_2EBA0(4);
    }
    else
    {
      if ( state == 4 )
      {
        if ( v16 < clock_minstep )
          return v2;
        sub_2F724();
        v15 = drift_comp;
      }
      if ( !LODWORD(freq_cnt) )
      {
        v32 = (unsigned __int8)sys_poll;
        LODWORD(v29) = (unsigned __int8)allan_xpt;
        if ( (unsigned __int8)sys_poll >= (unsigned int)(unsigned __int8)allan_xpt )
        {
          LODWORD(v29) = (unsigned __int8)sys_poll;
          v45 = dbl_BAB20;
          v29 = ldexp(v29, (unsigned __int8)sys_poll);
          v46 = v4 - v45;
          if ( v16 < 1.0 )
          {
            LODWORD(v29) = (unsigned __int8)sys_poll;
            v29 = ldexp(v29, v32);
            v47 = 1.0 * 0.25;
          }
          else
          {
            v47 = v16 * 0.25;
          }
          LODWORD(v29) = (unsigned __int8)allan_xpt;
          v15 = v15 + v46 / v47;
        }
        v33 = ldexp(v29, v32);
        if ( v16 > 1.0 )
        {
          LODWORD(v33) = (unsigned __int8)allan_xpt;
          v33 = ldexp(v33, v34);
          v16 = 1.0;
        }
        LODWORD(v33) = (unsigned __int8)sys_poll;
        ldexp(v33, v34);
        v15 = v15 + v4 * v16 / (1.0 * 64.0 * (1.0 * 64.0));
      }
      sub_2EBA0(5);
      if ( fabs(v4) < 0.0005 )
        freq_cnt = 0.0;
      v48 = 1;
    }
    goto LABEL_26;
  }
  force_step_once = 0;
  sub_65D40(5, "Doing intital time step");
LABEL_21:
  switch ( state )
  {
    case 4:
      if ( v16 < clock_minstep )
        return v2;
      sub_2F724();
      v15 = drift_comp;
      break;
    case 5:
      sub_6D00C(v51, 80, "%+.6f s", v4);
      sub_26294(3, 0, v51);
      state = 3;
      return v2;
    case 3:
      break;
    default:
      goto LABEL_24;
  }
  if ( v16 < clock_minstep )
    return v2;
LABEL_24:
  sub_6D00C(v51, 80, "%+.6f s", v4);
  v17 = sub_26294(12, 0, v51);
  v18 = sub_60D9C(v17);
  sub_419B8(v18);
  tc_counter = 0;
  ldexp(COERCE_DOUBLE((unsigned __int64)sys_precision), 1504);
  clock_jitter = 1.0;
  if ( state == 1 )
  {
    v2 = 2;
    sub_2EBA0(4);
    return v2;
  }
  sub_2EBA0(5);
  v48 = 2;
LABEL_26:
  if ( pll_control && kern_enable && !LODWORD(freq_cnt) )
  {
    memset(&dword_BBCC0, 0, 0x80u);
    if ( ext_enable )
    {
      dword_BBCC0 = 16;
    }
    else
    {
      dword_BBCD8 = (unsigned __int8)sys_poll;
      dword_BBCC0 = 8253;
      v44 = -0.5;
      if ( dbl_BAB20 >= 0.0 )
        v44 = 0.5;
      dword_BBCC4 = (int)(v44 + dbl_BAB20 * 1000000000.0);
      dword_BBCD0 = (unsigned int)(clock_jitter * 1000000.0);
      dword_BBCD4 = 1;
      dword_BBCCC = (unsigned int)((sys_rootdisp + sys_rootdelay * 0.5) * 1000000.0);
      if ( hardpps_enable )
      {
        dword_BBCD4 = 7;
        if ( (pll_status & 4) == 0 )
          sub_2EC54("PPS enabled", pll_status, 7);
      }
      else if ( (pll_status & 4) != 0 )
      {
        sub_2EC54("PPS disabled", pll_status, 1);
      }
      if ( sys_leap == 1 )
      {
        dword_BBCD4 |= 0x10u;
      }
      else if ( sys_leap == 2 )
      {
        dword_BBCD4 |= 0x20u;
      }
    }
    v38 = adjtimex((struct timex *)&dword_BBCC0);
    if ( v38 < 0 || v38 != kernel_status )
    {
      kernel_status = v38;
      v50 = v38;
      v39 = _errno_location();
      sub_2EF04("local_clock", v50, *v39, hardpps_enable, 0, 822);
    }
    v40 = &unk_BCB18;
    pll_status = dword_BBCD4;
    if ( (dword_BBCD4 & 4) != 0 )
      v40 = (void *)dword_BBCF4;
    v41 = dword_BBCC8;
    if ( (dword_BBCD4 & 4) != 0 )
      v41 = (int)v40;
    dbl_BAB20 = (double)dword_BBCC4 / 1000000000.0;
    if ( (dword_BBCD4 & 4) != 0 )
      clock_jitter = (double)v41 / 1000000000.0;
    v15 = (double)dword_BBCC8 / 6.5536e10;
    if ( dword_BBE70 != sys_tai )
    {
      dword_BBE70 = sys_tai;
      dword_BBCD8 = sys_tai;
      dword_BBCC0 = 128;
      v42 = adjtimex((struct timex *)&dword_BBCC0);
      if ( v42 )
      {
        v49 = v42;
        v43 = _errno_location();
        sub_2EF04("local_clock", v49, *v43, 0, 1, 852);
      }
    }
  }
  if ( fabs(v15) > 0.0005 )
    sub_65D40(5, "frequency error %.0f PPM exceeds tolerance %.0f PPM", v15 * 1000000.0, 500.0);
  v19 = (v15 - drift_comp) * (v15 - drift_comp);
  if ( v15 <= 0.0005 )
  {
    if ( v15 < -0.0005 )
      v15 = -0.0005;
    drift_comp = v15;
  }
  else
  {
    drift_comp = 0.0005;
  }
  clock_stability = sqrt(clock_stability * clock_stability + (v19 - clock_stability * clock_stability) * 0.125);
  if ( SLODWORD(freq_cnt) <= 0 )
  {
    v20 = (unsigned __int8)sys_poll;
    if ( fabs(dbl_BAB20) >= clock_jitter * 4.0 )
    {
      v35 = tc_counter - 2 * (unsigned __int8)sys_poll;
      if ( v35 < -30 )
      {
        v37 = *(unsigned __int8 *)(a1 + 65);
        tc_counter = -30;
        if ( v37 < (unsigned __int8)sys_poll )
        {
          tc_counter = 0;
          v20 = (unsigned __int8)--sys_poll;
        }
        goto LABEL_38;
      }
    }
    else
    {
      v35 = (unsigned __int8)sys_poll + tc_counter;
      if ( v35 > 30 )
      {
        v36 = *(unsigned __int8 *)(a1 + 66);
        tc_counter = 30;
        if ( v36 > (unsigned __int8)sys_poll )
        {
          tc_counter = 0;
          v20 = (unsigned __int8)++sys_poll;
        }
        goto LABEL_38;
      }
    }
    tc_counter = v35;
  }
  else
  {
    v20 = (unsigned __int8)sys_poll;
    tc_counter = 0;
  }
LABEL_38:
  if ( v12 != v20 )
  {
    sub_348C4(a1, v20);
    v20 = (unsigned __int8)sys_poll;
  }
  v2 = v48;
  sub_42BD4(v20);
  return v2;
}

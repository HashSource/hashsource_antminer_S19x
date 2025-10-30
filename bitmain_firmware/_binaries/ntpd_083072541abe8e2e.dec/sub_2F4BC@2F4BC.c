int __fastcall sub_2F4BC(int a1)
{
  double v1; // d0
  int v2; // r5
  double v4; // d8
  double v5; // d7
  double *v6; // r3
  double v7; // d6
  double v8; // d7
  double v9; // d7
  unsigned int v10; // r2
  int v11; // r7
  double v12; // d9
  double v13; // d10
  __int16 *v14; // r0
  int v15; // r0
  double v16; // r0
  int *v17; // r0
  double v18; // d6
  int *v19; // r0
  double v20; // d7
  double v21; // d7
  double v22; // d0
  double v23; // d8
  int v24; // r0
  double v26; // r0
  double v27; // d11
  double v28; // d12
  double v29; // r0
  int v30; // r2
  double *v31; // r2
  double v32; // d13
  double v33; // d12
  double v34; // r0
  int v35; // r2
  double v36; // d0
  double v37; // d0
  double v38; // d11
  int v39; // r2
  double v40; // r0
  int v41; // r2
  int v42; // r3
  unsigned int v43; // r3
  unsigned int v44; // r3
  double v45; // d7
  double v46; // d11
  double v47; // d11
  double v48; // d0
  int v49; // [sp+18h] [bp-64h]
  int v50; // [sp+1Ch] [bp-60h]
  char v51[80]; // [sp+24h] [bp-58h] BYREF

  v2 = ntp_enable;
  if ( !ntp_enable )
  {
    sub_41E10((unsigned __int8)sys_poll);
    return v2;
  }
  v4 = v1;
  if ( fabs(v1) > clock_panic && clock_panic > 0.0 && !allow_panic )
  {
    sub_6C054(v51, 80, "%+.0f s; set clock manually within %.0f s.", v1, clock_panic);
    v2 = -1;
    sub_25EE0((__int16 *)&byte_7, 0, v51);
    return v2;
  }
  allow_panic = 0;
  v2 = mode_ntpdate;
  if ( mode_ntpdate )
  {
    if ( clock_max_fwd < v1 && clock_max_fwd > 0.0 || -v1 > clock_max_back && clock_max_back > 0.0 )
    {
      sub_5FF34(a1);
      sub_64E00(5, "ntpd: time set %+.6f s", v1);
      _printf_chk(1, "ntpd: time set %+.6fs\n", v1);
    }
    else
    {
      sub_5FCA8();
      sub_64E00(5, "ntpd: time slew %+.6f s", v1);
      _printf_chk(1, "ntpd: time slew %+.6fs\n", v1);
    }
    sub_41E10((unsigned __int8)sys_poll);
    exit(0);
  }
  if ( dword_B9E58 )
  {
    v5 = *(double *)(a1 + 616);
    v6 = (double *)(dword_B9E58 + 8 * dword_B9E5C);
    if ( v5 < *v6 )
    {
      *v6 = v5;
      v5 = *(double *)(a1 + 616);
    }
    v7 = dbl_B9E60;
    if ( dbl_B9E60 > v5 )
    {
      v7 = v5;
      dbl_B9E60 = v5;
    }
    v8 = v5 - v7;
    if ( v1 <= 0.0 )
      v9 = v8 * 0.5;
    else
      v9 = -(v8 * 0.5);
    v4 = v1 + v9;
  }
  v10 = *(unsigned __int8 *)(a1 + 65);
  v11 = (unsigned __int8)sys_poll;
  if ( (unsigned __int8)sys_poll >= v10 )
    v10 = (unsigned __int8)sys_poll;
  else
    sys_poll = *(_BYTE *)(a1 + 65);
  if ( *(unsigned __int8 *)(a1 + 66) < v10 )
    sys_poll = *(_BYTE *)(a1 + 66);
  v12 = (double)(unsigned int)(current_time - dword_B9B28);
  v13 = drift_comp;
  if ( clock_max_fwd < v4 && clock_max_fwd > 0.0 || -v4 > clock_max_back && clock_max_back > 0.0 )
  {
    if ( !force_step_once )
      goto LABEL_31;
    goto LABEL_68;
  }
  if ( force_step_once )
  {
LABEL_68:
    force_step_once = 0;
    sub_64E00(5, "Doing intital time step");
LABEL_31:
    switch ( state )
    {
      case 4:
        if ( clock_minstep > v12 )
          return v2;
        sub_2F1EC();
        v13 = drift_comp;
        break;
      case 5:
        sub_6C054(v51, 80, "%+.6f s", v4);
        sub_25EE0((__int16 *)((char *)&dword_0 + 3), 0, v51);
        state = 3;
        return v2;
      case 3:
        break;
      default:
        goto LABEL_34;
    }
    if ( clock_minstep > v12 )
      return v2;
LABEL_34:
    sub_6C054(v51, 80, "%+.6f s", v4);
    v14 = sub_25EE0((__int16 *)&byte_9[3], 0, v51);
    v15 = sub_5FF34(v14);
    sub_40C14(v15);
    tc_counter = 0;
    ldexp(COERCE_DOUBLE((unsigned __int64)sys_precision), 1508);
    clock_jitter = 1.0;
    if ( state == 1 )
    {
      v2 = 2;
      sub_2E750((__int16 *)&byte_4);
      return v2;
    }
    v2 = 2;
    LODWORD(v16) = sub_2E750((__int16 *)&byte_5);
    goto LABEL_36;
  }
  HIDWORD(v26) = 1460;
  LODWORD(v26) = sys_precision;
  v27 = clock_jitter * clock_jitter;
  v28 = fabs(v4 - last_offset);
  v29 = ldexp(v26, (int)&last_offset);
  if ( v28 <= 1.0 )
  {
    LODWORD(v29) = sys_precision;
    v29 = ldexp(v29, v30);
    v32 = 1.0;
    v33 = fabs(v4 - last_offset);
  }
  else
  {
    v31 = &last_offset;
    v32 = fabs(v4 - last_offset);
    v33 = v32;
  }
  LODWORD(v29) = sys_precision;
  v34 = ldexp(v29, (int)v31);
  if ( v33 <= 1.0 )
  {
    v36 = 1.0;
    LODWORD(v34) = sys_precision;
    v34 = ldexp(v34, v35);
  }
  else
  {
    v36 = fabs(v4 - last_offset);
  }
  v37 = v27 + (v32 * v36 - v27) * 0.125;
  v38 = sqrt(v37);
  if ( v37 < 0.0 )
    v34 = sqrt(v34);
  clock_jitter = v38;
  if ( state == 1 )
  {
    v2 = 1;
    sub_5FCA8();
    LODWORD(v16) = sub_2E750((__int16 *)&byte_4);
  }
  else
  {
    if ( state == 4 )
    {
      if ( clock_minstep > v12 )
        return v2;
      sub_2F1EC();
      v13 = drift_comp;
    }
    if ( !LODWORD(freq_cnt) )
    {
      v39 = (unsigned __int8)sys_poll;
      LODWORD(v34) = (unsigned __int8)allan_xpt;
      if ( (unsigned __int8)sys_poll >= (unsigned int)(unsigned __int8)allan_xpt )
      {
        LODWORD(v34) = (unsigned __int8)sys_poll;
        v46 = dbl_B9B20;
        v34 = ldexp(v34, (unsigned __int8)sys_poll);
        v47 = v4 - v46;
        if ( v12 < 1.0 )
        {
          LODWORD(v34) = (unsigned __int8)sys_poll;
          v34 = ldexp(v34, v39);
          v48 = 1.0 * 0.25;
        }
        else
        {
          v48 = v12 * 0.25;
        }
        LODWORD(v34) = (unsigned __int8)allan_xpt;
        v13 = v13 + v47 / v48;
      }
      v40 = ldexp(v34, v39);
      if ( v12 > 1.0 )
      {
        LODWORD(v40) = (unsigned __int8)allan_xpt;
        v40 = ldexp(v40, v41);
        v12 = 1.0;
      }
      LODWORD(v40) = (unsigned __int8)sys_poll;
      ldexp(v40, v41);
      v13 = v13 + v4 * v12 / (1.0 * 64.0 * (1.0 * 64.0));
    }
    LODWORD(v16) = sub_2E750((__int16 *)&byte_5);
    v2 = 1;
    if ( fabs(v4) < 0.0005 )
      freq_cnt = 0.0;
  }
LABEL_36:
  if ( pll_control )
  {
    if ( kern_enable )
    {
      *((float *)&v16 + 1) = freq_cnt;
      if ( !LODWORD(freq_cnt) )
      {
        memset(&dword_B9CBC, 0, 0x80u);
        if ( ext_enable )
        {
          dword_B9CBC = 16;
        }
        else
        {
          v45 = -0.5;
          if ( dbl_B9B20 >= 0.0 )
            v45 = 0.5;
          dword_B9CBC = 8253;
          dword_B9CD4 = (unsigned __int8)sys_poll;
          LODWORD(flt_B9CC0) = (int)(v45 + dbl_B9B20 * 1000000000.0);
          dword_B9CCC = (unsigned int)(clock_jitter * 1000000.0);
          dword_B9CD0 = 1;
          dword_B9CC8 = (unsigned int)((sys_rootdisp + sys_rootdelay * 0.5) * 1000000.0);
          if ( hardpps_enable )
          {
            dword_B9CD0 = 7;
            if ( (pll_status & 4) == 0 )
              sub_2E800("PPS enabled", pll_status, 7);
          }
          else if ( (pll_status & 4) != 0 )
          {
            sub_2E800("PPS disabled", pll_status, 1);
          }
          if ( sys_leap == 1 )
          {
            dword_B9CD0 |= 0x10u;
          }
          else if ( sys_leap == 2 )
          {
            dword_B9CD0 |= 0x20u;
          }
        }
        LODWORD(v16) = adjtimex((struct timex *)&dword_B9CBC);
        if ( SLODWORD(v16) < 0 || kernel_status != LODWORD(v16) )
        {
          kernel_status = LODWORD(v16);
          v50 = LODWORD(v16);
          v17 = _errno_location();
          LODWORD(v16) = sub_2EA24("local_clock", v50, *v17, hardpps_enable, 0, 822);
        }
        v18 = (double)SLODWORD(flt_B9CC0);
        pll_status = dword_B9CD0;
        HIDWORD(v16) = dword_B9E68;
        v13 = (double)SLODWORD(flt_B9CC4) / 6.5536e10;
        if ( (dword_B9CD0 & 4) != 0 )
          v18 = (double)SLODWORD(flt_B9CF0) / 1000000000.0;
        dbl_B9B20 = (double)SLODWORD(flt_B9CC0) / 1000000000.0;
        if ( (dword_B9CD0 & 4) != 0 )
          clock_jitter = v18;
        if ( dword_B9E68 != sys_tai )
        {
          dword_B9CBC = 128;
          dword_B9E68 = sys_tai;
          dword_B9CD4 = sys_tai;
          LODWORD(v16) = adjtimex((struct timex *)&dword_B9CBC);
          HIDWORD(v16) = LODWORD(v16);
          if ( LODWORD(v16) )
          {
            v49 = LODWORD(v16);
            v19 = _errno_location();
            LODWORD(v16) = sub_2EA24("local_clock", v49, *v19, 0, 1, 852);
          }
        }
      }
    }
  }
  if ( fabs(v13) > 0.0005 )
    v16 = COERCE_DOUBLE(sub_64E00(5, "frequency error %.0f PPM exceeds tolerance %.0f PPM", v13 * 1000000.0, 500.0));
  v20 = v13 - drift_comp;
  if ( v13 > 0.0005 )
    drift_comp = 0.0005;
  v21 = v20 * v20;
  if ( v13 <= 0.0005 )
  {
    if ( v13 < -0.0005 )
      v13 = -0.0005;
    drift_comp = v13;
  }
  v22 = clock_stability * clock_stability + (v21 - clock_stability * clock_stability) * 0.125;
  v23 = sqrt(v22);
  if ( v22 < 0.0 )
    sqrt(v16);
  clock_stability = v23;
  v24 = (unsigned __int8)sys_poll;
  if ( SLODWORD(freq_cnt) <= 0 )
  {
    if ( fabs(dbl_B9B20) < clock_jitter * 4.0 )
    {
      v42 = tc_counter + (unsigned __int8)sys_poll;
      if ( v42 > 30 )
      {
        v44 = *(unsigned __int8 *)(a1 + 66);
        tc_counter = 30;
        if ( v44 <= (unsigned __int8)sys_poll )
          goto LABEL_63;
        LOBYTE(v24) = sys_poll + 1;
        goto LABEL_100;
      }
    }
    else
    {
      v42 = tc_counter - 2 * (unsigned __int8)sys_poll;
      if ( v42 < -30 )
      {
        v43 = *(unsigned __int8 *)(a1 + 65);
        tc_counter = -30;
        if ( v43 >= (unsigned __int8)sys_poll )
          goto LABEL_63;
        LOBYTE(v24) = sys_poll - 1;
LABEL_100:
        v24 = (unsigned __int8)v24;
        tc_counter = 0;
        sys_poll = v24;
        goto LABEL_63;
      }
    }
    tc_counter = v42;
    goto LABEL_63;
  }
  tc_counter = 0;
LABEL_63:
  if ( v11 != v24 )
  {
    sub_34264(a1, v24);
    v24 = (unsigned __int8)sys_poll;
  }
  sub_41E10(v24);
  return v2;
}

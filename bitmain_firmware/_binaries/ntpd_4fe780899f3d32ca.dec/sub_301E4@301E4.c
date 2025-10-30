int sub_301E4()
{
  int result; // r0
  double v1; // d8
  int v2; // r3
  double v3; // d7
  double v4; // d6
  double v5; // d5
  double v6; // r0

  result = _stack_chk_guard;
  sys_rootdisp = sys_rootdisp + clock_phi;
  if ( ntp_enable && !mode_ntpdate )
  {
    v1 = dbl_B9B20;
    v2 = pll_control;
    if ( state == 5 )
    {
      HIDWORD(v6) = &freq_cnt;
      if ( SLODWORD(freq_cnt) <= 0 )
      {
        if ( pll_control && kern_enable )
        {
          v3 = 0.0;
LABEL_11:
          dbl_B9B20 = v1 - v3;
          enable_panic_check = 0;
          result = sub_5FCA8();
          enable_panic_check = 1;
          return result;
        }
        LODWORD(v6) = (unsigned __int8)sys_poll;
        ldexp(v6, SLODWORD(freq_cnt));
        v2 = pll_control;
        v3 = v1 / (1.0 * 16.0);
      }
      else
      {
        --LODWORD(freq_cnt);
        v3 = dbl_B9B20 * 0.03125;
      }
    }
    else
    {
      v3 = 0.0;
    }
    if ( v2 && kern_enable )
      v4 = 0.0;
    else
      v4 = drift_comp;
    v5 = 0.0005;
    if ( v3 + v4 > 0.0005 || (v5 = -0.0005, v3 + v4 < -0.0005) )
      v3 = v5 - v4;
    goto LABEL_11;
  }
  return result;
}

int sub_306F8()
{
  double v0; // r0
  double v1; // d16
  double v2; // d8
  double v3; // d17
  double v4; // d18

  v0 = COERCE_DOUBLE(__PAIR64__(&sys_rootdisp, _stack_chk_guard));
  sys_rootdisp = sys_rootdisp + clock_phi;
  if ( !ntp_enable || mode_ntpdate )
    return LODWORD(v0);
  if ( state == 5 )
  {
    LODWORD(v0) = &freq_cnt;
    if ( SLODWORD(freq_cnt) <= 0 )
    {
      if ( pll_control && kern_enable )
      {
        v1 = 0.0;
        v3 = 0.0;
        v2 = dbl_BAB20;
        goto LABEL_7;
      }
      v2 = dbl_BAB20;
      LODWORD(v0) = (unsigned __int8)sys_poll;
      v0 = ldexp(v0, (int)&sys_poll);
      v1 = v2 / (1.0 * 16.0);
    }
    else
    {
      --LODWORD(freq_cnt);
      v2 = dbl_BAB20;
      v1 = dbl_BAB20 * 0.03125;
    }
  }
  else
  {
    v1 = 0.0;
    v2 = dbl_BAB20;
  }
  if ( pll_control && kern_enable )
    v3 = 0.0;
  else
    v3 = drift_comp;
LABEL_7:
  v4 = 0.0005;
  if ( v1 + v3 > 0.0005 || (v4 = -0.0005, v1 + v3 < -0.0005) )
    v1 = v4 - v3;
  dbl_BAB20 = v2 - v1;
  enable_panic_check = 0;
  LODWORD(v0) = sub_60B0C(LODWORD(v0), 0);
  enable_panic_check = 1;
  return LODWORD(v0);
}

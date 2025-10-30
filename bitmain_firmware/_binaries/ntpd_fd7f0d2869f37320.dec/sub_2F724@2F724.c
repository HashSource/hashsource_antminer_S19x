int sub_2F724()
{
  double v0; // d0
  double v1; // d8
  const char *v2; // r4
  int v4; // r7
  int *v5; // r0

  v1 = v0;
  drift_comp = v0;
  if ( pll_control )
  {
    memset(&dword_BBCC0, 0, 0x80u);
    dword_BBCC0 = 2;
    if ( kern_enable )
    {
      v2 = "kernel";
      dword_BBCC8 = (int)(v0 * 6.5536e10);
    }
    else
    {
      v2 = "ntpd";
    }
    v4 = adjtimex((struct timex *)&dword_BBCC0);
    if ( v4 )
    {
      v5 = _errno_location();
      sub_2EF04("set_freq", v4, *v5, 0, 0, 1086);
    }
    v1 = drift_comp;
  }
  else
  {
    v2 = "ntpd";
  }
  return sub_266AC(2, 0, (int)"%s %.3f PPM", v2, v1 * 1000000.0);
}

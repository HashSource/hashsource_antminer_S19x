int sub_2F1EC()
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
    memset(&flt_B9CC0, 0, 0x7Cu);
    dword_B9CBC = 2;
    if ( kern_enable )
    {
      v2 = "kernel";
      LODWORD(flt_B9CC4) = (int)(v0 * 6.5536e10);
    }
    else
    {
      v2 = "ntpd";
    }
    v4 = adjtimex((struct timex *)&dword_B9CBC);
    if ( v4 )
    {
      v5 = _errno_location();
      sub_2EA24("set_freq", v4, *v5, 0, 0, 1086);
    }
    v1 = drift_comp;
  }
  else
  {
    v2 = "ntpd";
  }
  return sub_262E8((_WORD *)&dword_0 + 1, 0, (int)"%s %.3f PPM", v2, v1 * 1000000.0);
}

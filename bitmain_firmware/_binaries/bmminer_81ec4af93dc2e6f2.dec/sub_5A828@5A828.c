int sub_5A828()
{
  int v0; // r0
  int v1; // r0
  struct sysinfo info; // [sp+4h] [bp-48h] BYREF
  int v4; // [sp+44h] [bp-8h]

  v4 = sub_52F18();
  dword_5314F8 = v4;
  dword_5314FC = v4 + 0x200000;
  dword_531500 = v4 + 2162688;
  sysinfo(&info);
  if ( info.totalram <= 0x3B9ACA00 )
  {
    if ( info.totalram <= 0x1DCD6500 )
    {
      if ( info.totalram <= 0xBEBC200 )
        dword_5314F4 = 117440512;
      else
        dword_5314F4 = 251658240;
    }
    else
    {
      dword_5314F4 = 520093696;
    }
  }
  else
  {
    dword_5314F4 = 1056964608;
  }
  dword_531504 = dword_5314FC;
  sub_5B974(dword_5314F4);
  v0 = sub_5B910(dword_5314F4 + 0x200000);
  v1 = sub_5CC48(v0);
  sub_5CCE8(v1);
  return 0;
}

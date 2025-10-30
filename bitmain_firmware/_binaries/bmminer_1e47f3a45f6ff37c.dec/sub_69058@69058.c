int sub_69058()
{
  int v0; // r0
  int v1; // r0
  struct sysinfo info; // [sp+4h] [bp-48h] BYREF
  int v4; // [sp+44h] [bp-8h]

  v4 = sub_54884();
  dword_5364F4 = v4;
  dword_5364F8 = v4 + 0x200000;
  dword_5364FC = v4 + 2162688;
  sysinfo(&info);
  if ( info.totalram <= 0x3B9ACA00 )
  {
    if ( info.totalram <= 0x1DCD6500 )
    {
      if ( info.totalram <= 0xBEBC200 )
        dword_5364F0 = 117440512;
      else
        dword_5364F0 = 251658240;
    }
    else
    {
      dword_5364F0 = 520093696;
    }
  }
  else
  {
    dword_5364F0 = 1056964608;
  }
  dword_536500 = dword_5364F8;
  sub_6A1B0(dword_5364F0);
  v0 = sub_6A150(dword_5364F0 + 0x200000);
  v1 = sub_6B304(v0);
  sub_6B3A4(v1);
  return 0;
}

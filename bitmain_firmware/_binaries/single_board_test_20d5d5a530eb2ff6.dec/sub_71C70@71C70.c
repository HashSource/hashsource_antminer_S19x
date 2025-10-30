int sub_71C70()
{
  int v0; // r0
  int v1; // r5
  int v2; // r0
  int v3; // r3
  int v5; // [sp+4h] [bp-48h] BYREF
  struct sysinfo info; // [sp+8h] [bp-44h] BYREF

  v0 = sub_6E114();
  v1 = v0 + 0x200000;
  dword_65E3E8 = v0;
  dword_65E3EC = v0 + 0x200000;
  dword_65E3F4 = v0 + 2162688;
  v2 = sysinfo(&info);
  if ( info.totalram <= 0x3B9ACA00 )
  {
    if ( info.totalram <= 0x1DCD6500 )
    {
      v3 = 200000000;
      if ( info.totalram > 0xBEBC200 )
        v2 = 251658240;
      else
        v3 = 117440512;
      if ( info.totalram > 0xBEBC200 )
        dword_65E3F8 = v2;
      else
        v2 = v3;
      if ( info.totalram <= 0xBEBC200 )
        dword_65E3F8 = v3;
    }
    else
    {
      v2 = 520093696;
      dword_65E3F8 = 520093696;
    }
  }
  else
  {
    v2 = 1056964608;
    dword_65E3F8 = 1056964608;
  }
  dword_65E3F0 = v1;
  sub_71190(v2);
  sub_6E0BC(41, dword_65E3F8 + 0x200000);
  sub_6E060(41, &v5);
  sub_71C04();
  sub_71C48();
  return 0;
}

int sub_70B9C()
{
  int v0; // r0
  int v1; // r5
  int v2; // r0
  int v3; // r3
  int v5; // [sp+4h] [bp-48h] BYREF
  struct sysinfo info; // [sp+8h] [bp-44h] BYREF

  v0 = sub_66980();
  v1 = v0 + 0x200000;
  dword_1B1438 = v0;
  dword_1B143C = v0 + 0x200000;
  dword_1B1444 = v0 + 2162688;
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
        dword_1B1448 = v2;
      else
        v2 = v3;
      if ( info.totalram <= 0xBEBC200 )
        dword_1B1448 = v3;
    }
    else
    {
      v2 = 520093696;
      dword_1B1448 = 520093696;
    }
  }
  else
  {
    v2 = 1056964608;
    dword_1B1448 = 1056964608;
  }
  dword_1B1440 = v1;
  sub_6FC54(v2);
  sub_66908(41, dword_1B1448 + 0x200000);
  sub_6688C(41, &v5);
  sub_70AF4();
  sub_70B5C();
  return 0;
}

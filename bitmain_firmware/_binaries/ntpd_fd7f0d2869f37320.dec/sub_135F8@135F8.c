int __fastcall sub_135F8(int a1, int a2)
{
  size_t v4; // r0
  int v5; // r0
  int v6; // r0
  const char *v8; // r0
  __int64 v9; // r0
  char v10[256]; // [sp+4h] [bp-108h] BYREF

  config_file = (int)"/etc/ntp.conf";
  sub_6D00C(v10, 256, "daemon_version=\"%s\"", Version);
  v4 = strlen(v10);
  sub_248E4(v10, v4 + 1);
  set_tod_using = sub_CCEC;
  sub_1E238(a1, a2);
  memset(&cfgt, 0, 0xB8u);
  dword_1084F8 = 5;
  v5 = sub_64CFC(config_file);
  if ( sub_1C38C(v5, "r") )
  {
    dword_108460 = sub_64C8C(config_file);
    v6 = sub_19988(dword_108460);
    sub_1C40C(v6);
    dword_108454 = 0;
    dword_108468 = time(0);
    return sub_FE68(1);
  }
  else
  {
    v8 = (const char *)sub_64CFC(config_file);
    v9 = sub_65D40(6, "getconfig: Couldn't open <%s>: %m", v8);
    return sub_18720(v9, HIDWORD(v9));
  }
}

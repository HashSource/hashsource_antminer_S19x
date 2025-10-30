int __fastcall sub_13380(int a1, int a2)
{
  size_t v4; // r0
  int v5; // r0
  int v6; // r0
  const char *v8; // r0
  __int64 v9; // r0
  char v10[256]; // [sp+4h] [bp-108h] BYREF

  config_file = (int)"/etc/ntp.conf";
  sub_6C054(v10, 256, "daemon_version=\"%s\"", Version);
  v4 = strlen(v10);
  sub_245C4(v10, v4 + 1);
  set_tod_using = sub_CBFC;
  sub_1E008(a1, a2);
  memset(&cfgt, 0, 0xB8u);
  dword_1074D8 = 5;
  v5 = sub_63D78(config_file);
  if ( sub_1C148(v5, "r") )
  {
    dword_107440 = sub_63D08(config_file);
    v6 = sub_1973C(dword_107440);
    sub_1C1CC(v6);
    dword_107434 = 0;
    dword_107448 = time(0);
    return sub_FD04(1);
  }
  else
  {
    v8 = (const char *)sub_63D78(config_file);
    v9 = sub_64E00(6, "getconfig: Couldn't open <%s>: %m", v8);
    return sub_18484(v9, HIDWORD(v9));
  }
}

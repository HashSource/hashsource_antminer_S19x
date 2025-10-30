int sub_418A8()
{
  int v1; // [sp+4h] [bp-8h]

  sub_2C7BC((int)statsdir, "peerstats", (int)&dword_BCBEC);
  sub_2C7BC((int)statsdir, "loopstats", (int)&dword_BCC04);
  sub_2C7BC((int)statsdir, "clockstats", (int)&dword_BCC1C);
  sub_2C7BC((int)statsdir, "rawstats", (int)&dword_BCC34);
  sub_2C7BC((int)statsdir, "sysstats", (int)&dword_BCC4C);
  sub_2C7BC((int)statsdir, "protostats", (int)&dword_BCC64);
  sub_2C7BC((int)statsdir, "cryptostats", (int)&dword_BCC7C);
  sub_2C7BC((int)statsdir, "timingstats", (int)&unk_BCC94);
  step_callback = ntpd_time_stepped;
  return v1;
}

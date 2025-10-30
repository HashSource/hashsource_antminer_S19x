int sub_42660()
{
  int v1; // [sp+4h] [bp-8h]

  sub_2CB18((int)statsdir, "peerstats", (int)&dword_BDBFC);
  sub_2CB18((int)statsdir, "loopstats", (int)&dword_BDC14);
  sub_2CB18((int)statsdir, "clockstats", (int)&dword_BDC2C);
  sub_2CB18((int)statsdir, "rawstats", (int)&dword_BDC44);
  sub_2CB18((int)statsdir, "sysstats", (int)&dword_BDC5C);
  sub_2CB18((int)statsdir, "protostats", (int)&dword_BDC74);
  sub_2CB18((int)statsdir, "cryptostats", (int)&dword_BDC8C);
  sub_2CB18((int)statsdir, "timingstats", (int)&unk_BDCA4);
  step_callback = ntpd_time_stepped;
  return v1;
}

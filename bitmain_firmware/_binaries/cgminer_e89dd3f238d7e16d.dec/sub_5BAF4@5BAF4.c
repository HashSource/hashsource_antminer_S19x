int __fastcall sub_5BAF4(int a1)
{
  __time_t timer[2]; // [sp+20h] [bp-9Ch] BYREF
  _BYTE v4[32]; // [sp+28h] [bp-94h] BYREF
  char v5[60]; // [sp+48h] [bp-74h] BYREF
  char s[40]; // [sp+84h] [bp-38h] BYREF
  struct tm *v7; // [sp+ACh] [bp-10h]

  memset(s, 0, sizeof(s));
  memset(v5, 0, 0x3Bu);
  memset(v4, 0, sizeof(v4));
  sub_21AC0(timer);
  v7 = localtime(timer);
  snprintf(
    s,
    0x28u,
    "[%d-%02d-%02d %02d:%02d:%02d]",
    v7->tm_year + 1900,
    v7->tm_mon + 1,
    v7->tm_mday,
    v7->tm_hour,
    v7->tm_min,
    v7->tm_sec);
  snprintf(v5, 0x3Bu, "%s%s", "BITMAIN_OPENSOURCE", s);
  sub_1EB84((int)v5, 59, (int)v4);
  return sub_1EB84((int)v4, 32, a1);
}

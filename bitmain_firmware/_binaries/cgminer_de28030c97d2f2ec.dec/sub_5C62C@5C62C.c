int __fastcall sub_5C62C(int a1)
{
  __time_t timer[2]; // [sp+20h] [bp-9Ch] BYREF
  _BYTE v4[32]; // [sp+28h] [bp-94h] BYREF
  char s[60]; // [sp+48h] [bp-74h] BYREF
  _DWORD v6[10]; // [sp+84h] [bp-38h] BYREF
  struct tm *v7; // [sp+ACh] [bp-10h]

  memset(v6, 0, sizeof(v6));
  memset(s, 0, 0x3Bu);
  memset(v4, 0, sizeof(v4));
  sub_22308(timer);
  v7 = localtime(timer);
  snprintf(
    (char *)v6,
    0x28u,
    "[%d-%02d-%02d %02d:%02d:%02d]",
    v7->tm_year + 1900,
    v7->tm_mon + 1,
    v7->tm_mday,
    v7->tm_hour,
    v7->tm_min,
    v7->tm_sec);
  snprintf(s, 0x3Bu, "%s%s", "BITMAIN_OPENSOURCE", (const char *)v6);
  sub_1F4D0((int)s, 59, (int)v4);
  return sub_1F4D0((int)v4, 32, a1);
}

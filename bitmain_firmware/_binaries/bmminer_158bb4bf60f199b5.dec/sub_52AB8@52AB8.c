int __fastcall sub_52AB8(char *a1, size_t a2, time_t *a3)
{
  time_t v3; // r3
  int v6; // r4
  struct tm *v7; // r0
  time_t v9; // [sp+1Ch] [bp-8h] BYREF

  v3 = a3[1];
  v9 = *a3;
  v6 = v3 / 1000;
  v7 = localtime(&v9);
  return snprintf(
           a1,
           a2,
           "[%d-%02d-%02d %02d:%02d:%02d.%03d]",
           v7->tm_year + 1900,
           v7->tm_mon + 1,
           v7->tm_mday,
           v7->tm_hour,
           v7->tm_min,
           v7->tm_sec,
           v6);
}

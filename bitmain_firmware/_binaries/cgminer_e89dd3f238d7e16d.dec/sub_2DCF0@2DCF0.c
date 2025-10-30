int __fastcall sub_2DCF0(char *a1, size_t a2, time_t *a3)
{
  time_t timer; // [sp+2Ch] [bp-18h] BYREF
  struct tm *v7; // [sp+30h] [bp-14h]
  int v8; // [sp+34h] [bp-10h]

  timer = *a3;
  v8 = a3[1] / 1000;
  v7 = localtime(&timer);
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
           v8);
}

int __fastcall sub_2DDC0(char *a1, size_t a2, time_t *a3)
{
  time_t timer; // [sp+24h] [bp-10h] BYREF
  struct tm *v7; // [sp+28h] [bp-Ch]
  int v8; // [sp+2Ch] [bp-8h]

  timer = *a3;
  v8 = a3[1] / 1000;
  v7 = localtime(&timer);
  return snprintf(a1, a2, "[%02d:%02d:%02d.%03d]", v7->tm_hour, v7->tm_min, v7->tm_sec, v8);
}

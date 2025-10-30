size_t __fastcall sub_8CCB8(char *a1, size_t a2)
{
  struct tm tp; // [sp+8h] [bp-34h] BYREF
  time_t timer; // [sp+34h] [bp-8h] BYREF

  time(&timer);
  localtime_r(&timer, &tp);
  return strftime(a1, a2, "%m-%d %T", &tp);
}

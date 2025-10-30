time_t __fastcall sub_3C91C(int a1)
{
  struct tm tp; // [sp+4h] [bp-30h] BYREF

  strptime(a1, "%d %b %Y %H:%M:%S", &tp);
  tp.tm_isdst = 0;
  return mktime(&tp);
}

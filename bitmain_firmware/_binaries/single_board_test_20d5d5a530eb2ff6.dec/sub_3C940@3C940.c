size_t __fastcall sub_3C940(char *a1)
{
  struct tm *v2; // r4
  time_t timer; // [sp+4h] [bp-8h] BYREF

  time(&timer);
  v2 = localtime(&timer);
  printf("month:%d\n", v2->tm_mon);
  return strftime(a1, 0x18u, "%m-%d-%H-%M-%S-%Z", v2);
}

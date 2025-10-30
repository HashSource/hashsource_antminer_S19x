__int64 __fastcall sub_997A4(__int64 *a1, __int64 *a2)
{
  __int64 result; // r0
  __int64 v5; // r2
  struct rusage v6; // [sp+0h] [bp-4Ch] BYREF

  getrusage(0, &v6);
  result = (int)&loc_F4240 * (__int64)v6.ru_utime.tv_sec + v6.ru_utime.tv_usec;
  v5 = (int)&loc_F4240 * (__int64)v6.ru_stime.tv_sec + v6.ru_stime.tv_usec;
  *a1 = result;
  *a2 = v5;
  return result;
}

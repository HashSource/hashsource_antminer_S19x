int sub_3235F4()
{
  struct rusage v1; // [sp+0h] [bp-4Ch] BYREF

  getrusage(0, &v1);
  return v1.ru_utime.tv_usec
       + (_DWORD)&loc_F4240 * v1.ru_utime.tv_sec
       + (_DWORD)&loc_F4240 * v1.ru_stime.tv_sec
       + v1.ru_stime.tv_usec;
}

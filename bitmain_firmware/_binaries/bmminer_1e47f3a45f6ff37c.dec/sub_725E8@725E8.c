int __fastcall sub_725E8(int *a1)
{
  struct timeval tv; // [sp+8h] [bp-Ch] BYREF

  gettimeofday(&tv, 0);
  *a1 = tv.tv_sec ^ tv.tv_usec;
  *a1 ^= getpid();
  return 0;
}

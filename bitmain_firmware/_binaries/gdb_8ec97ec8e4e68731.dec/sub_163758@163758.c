int __fastcall sub_163758(int a1)
{
  struct timeval timeout; // [sp+8h] [bp-Ch] BYREF

  timeout.tv_sec = a1 / 1000000;
  timeout.tv_usec = a1 % 1000000;
  return j_select(0, 0, 0, 0, &timeout) >> 31;
}

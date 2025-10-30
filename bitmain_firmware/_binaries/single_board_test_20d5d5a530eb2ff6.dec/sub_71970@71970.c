int __fastcall sub_71970(char a1)
{
  int v1; // r4
  int v3; // [sp+4h] [bp-8h] BYREF

  v1 = a1 & 0x3F;
  pthread_mutex_lock(&stru_65E3FC);
  usleep(0xC350u);
  sub_6E060(27, &v3);
  sub_70D20(v3 & 0xFFFFFFC0 | v1);
  return pthread_mutex_unlock(&stru_65E3FC);
}

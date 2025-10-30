int __fastcall sub_5C6C8(char a1)
{
  unsigned int v3; // [sp+Ch] [bp-8h]

  pthread_mutex_lock(&stru_5314DC);
  usleep(0xC350u);
  v3 = sub_5C5B0() & 0xFFFFFFC0 | a1 & 0x3F;
  sub_5C5DC(v3);
  return pthread_mutex_unlock(&stru_5314DC);
}

int __fastcall sub_6AEA4(char a1)
{
  unsigned int v3; // [sp+Ch] [bp-8h]

  pthread_mutex_lock(&stru_5364D8);
  usleep(0xC350u);
  v3 = sub_6AD94() & 0xFFFFFFC0 | a1 & 0x3F;
  sub_6ADC0(v3);
  return pthread_mutex_unlock(&stru_5364D8);
}

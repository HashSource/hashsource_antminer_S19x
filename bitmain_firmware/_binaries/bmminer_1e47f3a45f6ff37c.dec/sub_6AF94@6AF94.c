int __fastcall sub_6AF94(int a1, int a2)
{
  unsigned int v4; // [sp+Ch] [bp-8h]

  pthread_mutex_lock(&stru_5364D8);
  sub_6AD08();
  v4 = (a2 << 16) | sub_6AD94() & 0xFFF0FFFF | 0x80800000;
  sub_6ADC0(v4);
  return pthread_mutex_unlock(&stru_5364D8);
}

int sub_688C0()
{
  int result; // r0
  pthread_attr_t attr; // [sp+4h] [bp-28h] BYREF

  pthread_mutex_init(&stru_1B11C0, 0);
  off_1B11DC = 0;
  dword_1B11E0 = 0;
  dword_1B11E4 = 0;
  dword_1B11E8 = 0;
  dword_1B11EC = 0;
  dword_1B11D8 = sub_69ED4(sub_68630, 0, 0);
  pthread_attr_init(&attr);
  pthread_attr_setstacksize(&attr, 0x200000u);
  result = pthread_create(&dword_1B11F0, &attr, (void *(*)(void *))sub_68684, 0);
  dword_1B11BC = 1;
  return result;
}

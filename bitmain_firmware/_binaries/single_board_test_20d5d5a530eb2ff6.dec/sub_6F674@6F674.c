int sub_6F674()
{
  int result; // r0
  pthread_attr_t attr; // [sp+4h] [bp-28h] BYREF

  pthread_mutex_init(&stru_65E2CC, 0);
  dword_65E2E8 = 0;
  dword_65E2EC = 0;
  dword_65E2F0 = 0;
  dword_65E2F4 = 0;
  dword_65E2F8 = 0;
  dword_65E2E4 = sub_700BC(sub_6F4BC, 0, 0);
  pthread_attr_init(&attr);
  pthread_attr_setstacksize(&attr, 0x200000u);
  result = pthread_create((pthread_t *)algn_65E2FC, &attr, (void *(*)(void *))sub_6F4EC, 0);
  dword_65E2C8 = 1;
  return result;
}

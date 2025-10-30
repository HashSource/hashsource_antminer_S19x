int sub_65E98()
{
  int result; // r0

  memset(&unk_718B8C, 0, 0x4400u);
  memset(&unk_71CF8C, 0, 0x1DC0u);
  memset(&unk_716DC8, 0, 0x1DC0u);
  result = pthread_mutex_init(&stru_716DB0, 0);
  dword_7169AC = 0;
  return result;
}

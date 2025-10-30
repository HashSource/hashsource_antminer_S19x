ssize_t __fastcall sub_3FEA8(int a1, void *a2, size_t a3)
{
  ssize_t v6; // r4

  pthread_mutex_lock(&stru_4B9AC8);
  ioctl(dword_5BFCE4, 0x40047509u, a1);
  v6 = read(dword_5BFCE4, a2, a3);
  pthread_mutex_unlock(&stru_4B9AC8);
  return v6;
}

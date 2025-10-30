int sub_37F9C()
{
  int v0; // r4

  pthread_mutex_lock(&mutex);
  v0 = sub_3F2D0(dword_B6E8C, dword_B6E88);
  pthread_mutex_unlock(&mutex);
  return v0;
}

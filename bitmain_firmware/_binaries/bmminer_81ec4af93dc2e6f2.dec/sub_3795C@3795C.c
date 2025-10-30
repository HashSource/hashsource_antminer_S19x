int sub_3795C()
{
  int v0; // r4

  pthread_mutex_lock(&mutex);
  v0 = sub_3EBD8(dword_B4114, dword_B4110);
  pthread_mutex_unlock(&mutex);
  return v0;
}

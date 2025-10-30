int sub_4827C()
{
  pthread_t v0; // r0

  v0 = pthread_self();
  pthread_detach(v0);
  return 0;
}

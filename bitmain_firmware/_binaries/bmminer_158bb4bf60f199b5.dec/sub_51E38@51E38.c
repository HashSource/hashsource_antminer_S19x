void __noreturn sub_51E38()
{
  pthread_t v0; // r0

  v0 = pthread_self();
  pthread_detach(v0);
  pthread_setcanceltype(1, 0);
  sleep(7u);
  exit(1);
}

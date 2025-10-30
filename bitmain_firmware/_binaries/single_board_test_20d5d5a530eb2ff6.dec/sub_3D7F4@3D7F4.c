int sub_3D7F4()
{
  pthread_t v1; // [sp+4h] [bp-8h] BYREF

  v1 = 0;
  sub_3CB0C();
  return pthread_create(&v1, 0, (void *(*)(void *))sub_3D69C, 0);
}

int sub_2E9E8()
{
  int result; // r0
  pthread_t newthread[2]; // [sp+4h] [bp-8h] BYREF

  sub_239A4(&stru_68FD8);
  result = pthread_create(newthread, 0, (void *(*)(void *))sub_3747C, 0);
  if ( result )
    sub_2E9A4();
  return result;
}

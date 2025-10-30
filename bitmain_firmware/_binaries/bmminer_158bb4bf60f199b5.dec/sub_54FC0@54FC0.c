int sub_54FC0()
{
  int result; // r0
  pthread_t newthread[2]; // [sp+4h] [bp-8h] BYREF

  sub_4A60C(&stru_1AF0BC);
  result = pthread_create(newthread, 0, (void *(*)(void *))sub_5C728, 0);
  if ( result )
    sub_54F7C();
  return result;
}

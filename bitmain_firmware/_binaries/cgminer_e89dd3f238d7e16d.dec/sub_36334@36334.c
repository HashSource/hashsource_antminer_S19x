int sub_36334()
{
  int result; // r0
  char v1[2048]; // [sp+4h] [bp-808h] BYREF
  pthread_t newthread; // [sp+804h] [bp-8h] BYREF

  sub_21AC0(dword_86EE0);
  result = pthread_create(&newthread, 0, (void *(*)(void *))sub_3616C, 0);
  if ( result )
  {
    strcpy(v1, "Failed to create restart thread");
    sub_1DB6C(3, v1, 1);
    sub_4B2A0(1);
  }
  return result;
}

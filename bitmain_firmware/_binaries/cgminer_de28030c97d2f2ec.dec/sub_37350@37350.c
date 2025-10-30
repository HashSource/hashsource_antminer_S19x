int sub_37350()
{
  int result; // r0
  char v1[2048]; // [sp+4h] [bp-808h] BYREF
  pthread_t newthread; // [sp+804h] [bp-8h] BYREF

  sub_22308(dword_88078);
  result = pthread_create(&newthread, 0, (void *(*)(void *))sub_37190, 0);
  if ( result )
  {
    strcpy(v1, "Failed to create restart thread");
    sub_1E4EC(3, v1, 1);
    sub_4BFB0(1);
  }
  return result;
}

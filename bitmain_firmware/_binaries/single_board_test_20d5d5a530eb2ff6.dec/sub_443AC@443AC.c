int sub_443AC()
{
  int result; // r0
  char v1[52]; // [sp+0h] [bp-34h] BYREF

  result = pthread_create((pthread_t *)&dword_6E3460, 0, (void *(*)(void *))sub_3F3F4, 0);
  if ( result )
  {
    sub_1E938(v1, 0x30u);
    printf("%s ", v1);
    printf("%s : create send work thread failed\n", "create_power_heart_beat_thread");
    strcpy(byte_641ED8, "create send work thread failed");
    sub_3CC5C((int)byte_641ED8, v1);
    return -1;
  }
  return result;
}

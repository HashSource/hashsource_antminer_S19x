int sub_1FD84()
{
  int result; // r0
  pthread_t v1; // [sp+0h] [bp-828h] BYREF
  pthread_attr_t attr; // [sp+4h] [bp-824h] BYREF
  char s[2048]; // [sp+28h] [bp-800h] BYREF

  if ( byte_244080 || byte_1AECC4 || dword_9E320 > 4 )
  {
    strcpy(s, "start the http log.\n");
    sub_47AB4(5, s, 0);
  }
  pthread_attr_init(&attr);
  pthread_attr_setstacksize(&attr, 0x200000u);
  result = pthread_create(&v1, &attr, (void *(*)(void *))sub_1FA04, 0);
  if ( byte_244080 || byte_1AECC4 || dword_9E320 > 4 )
  {
    snprintf(s, 0x800u, "httpListenThread start ret=%d", result);
    return sub_47AB4(5, s, 0);
  }
  return result;
}

int sub_2EB8C()
{
  int result; // r0
  int v1; // r3
  pthread_t v2; // [sp+0h] [bp-828h] BYREF
  pthread_attr_t attr; // [sp+4h] [bp-824h] BYREF
  char s[2048]; // [sp+28h] [bp-800h] BYREF

  if ( byte_5BC044 || byte_4B6CA5 || dword_AFC2C > 4 )
  {
    strcpy(s, "start the http log.\n");
    sub_3AF5C(5, s, 0, *(_DWORD *)"tp log.\n");
  }
  pthread_attr_init(&attr);
  pthread_attr_setstacksize(&attr, 0x200000u);
  result = pthread_create(&v2, &attr, (void *(*)(void *))sub_2E7A0, 0);
  if ( byte_5BC044 || byte_4B6CA5 || dword_AFC2C > 4 )
  {
    snprintf(s, 0x800u, "httpListenThread start ret=%d", result);
    return sub_3AF5C(5, s, 0, v1);
  }
  return result;
}

void sub_3C9B0()
{
  int v0; // r5
  struct tm *v1; // r6
  time_t v2; // [sp+0h] [bp-808h] BYREF
  pthread_t newthread; // [sp+4h] [bp-804h] BYREF
  char v4[2048]; // [sp+8h] [bp-800h] BYREF

  v0 = (unsigned __int8)byte_4B99E6;
  if ( !byte_4B99E6 )
  {
    time(&v2);
    v1 = localtime(&v2);
    strftime(&byte_4B99E6, 0xFu, "%Y-%m/%d", v1);
    strftime(byte_4B9A04, 0xAu, "%H-%M-%S", v1);
    dword_4B99C0 = (int)"/var/log";
    dword_4B99C4 = (int)"nvdata";
    dword_4B9A18 = (int)"cglog_init";
    dword_4B99BC = 1;
    sub_3BC54((int)&dword_4B99BC);
    if ( pthread_create(&newthread, (const pthread_attr_t *)v0, (void *(*)(void *))sub_3BE34, &dword_4B99BC) )
    {
      strcpy(v4, "Failed to create log thread");
      sub_3B6AC(v0, v4, v0, *(int *)"eate log thread");
      _assert_fail("0", "logging.c", 0x21Du, "log_init");
    }
    pthread_detach(newthread);
  }
}

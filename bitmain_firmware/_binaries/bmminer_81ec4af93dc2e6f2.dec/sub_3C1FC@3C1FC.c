void sub_3C1FC()
{
  int v0; // r5
  struct tm *v1; // r6
  time_t v2; // [sp+0h] [bp-808h] BYREF
  pthread_t newthread; // [sp+4h] [bp-804h] BYREF
  char v4[2048]; // [sp+8h] [bp-800h] BYREF

  v0 = (unsigned __int8)byte_4B6C6A;
  if ( !byte_4B6C6A )
  {
    time(&v2);
    v1 = localtime(&v2);
    strftime(&byte_4B6C6A, 0xFu, "%Y-%m/%d", v1);
    strftime(byte_4B6C88, 0xAu, "%H-%M-%S", v1);
    dword_4B6C44 = (int)"/var/log";
    dword_4B6C48 = (int)"nvdata";
    dword_4B6C9C = (int)"cglog_init";
    dword_4B6C40 = 1;
    sub_3B4A4((int)&dword_4B6C40);
    if ( pthread_create(&newthread, (const pthread_attr_t *)v0, (void *(*)(void *))sub_3B688, &dword_4B6C40) )
    {
      strcpy(v4, "Failed to create log thread");
      sub_3AF5C(v0, v4, v0, *(int *)"eate log thread");
      _assert_fail("0", "logging.c", 0x21Du, "log_init");
    }
    pthread_detach(newthread);
  }
}

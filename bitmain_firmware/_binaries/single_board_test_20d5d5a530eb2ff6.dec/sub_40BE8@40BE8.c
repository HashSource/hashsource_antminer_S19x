int __fastcall sub_40BE8(int a1, void (**a2)(void))
{
  char v4[52]; // [sp+0h] [bp-34h] BYREF

  a2[34730]();
  if ( pthread_create((pthread_t *)&dword_6E3458, 0, (void *(*)(void *))sub_3EE7C, a2) )
  {
    sub_1E938(v4, 0x30u);
    printf("%s ", v4);
    printf("%s : create send work thread failed\n", "pt_send_work");
    strcpy(byte_63BBD0, "create send work thread failed");
    sub_3CC5C((int)byte_63BBD0, v4);
    return -1;
  }
  else
  {
    pthread_join(dword_6E3458, 0);
    usleep(0x186A0u);
    return 0;
  }
}

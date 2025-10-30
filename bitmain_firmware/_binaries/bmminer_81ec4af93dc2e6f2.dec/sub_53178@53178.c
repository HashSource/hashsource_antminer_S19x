int sub_53178()
{
  char v1[2048]; // [sp+0h] [bp-82Ch] BYREF
  pthread_attr_t attr; // [sp+800h] [bp-2Ch] BYREF
  size_t stacksize; // [sp+824h] [bp-8h]

  if ( dword_531054 )
  {
    strcpy(v1, "gpio re init\n");
    sub_3AF5C(1, v1, 0, (int)v1);
  }
  else
  {
    pthread_mutex_init(&stru_531078, 0);
    dword_531090 = sub_5840C(sub_52F60, 0, 0);
    pthread_mutex_init(&stru_531060, 0);
    dword_531058 = 1;
    pthread_attr_init(&attr);
    stacksize = 0x200000;
    pthread_attr_setstacksize(&attr, 0x200000u);
    pthread_create((pthread_t *)&dword_53105C, &attr, (void *(*)(void *))sub_52F98, 0);
    dword_531054 = 1;
  }
  return 0;
}

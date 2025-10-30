int sub_56944()
{
  char v1[2048]; // [sp+0h] [bp-804h] BYREF

  if ( dword_535F54 )
  {
    strcpy(v1, "gpio re init\n");
    sub_3B6AC(1, v1, 0, (int)v1);
  }
  else
  {
    pthread_mutex_init(&stru_535F78, 0);
    dword_535F90 = sub_59400(354144, 0, 0);
    pthread_mutex_init(&stru_535F60, 0);
    dword_535F58 = 1;
    pthread_create((pthread_t *)&dword_535F5C, 0, (void *(*)(void *))sub_56798, 0);
    dword_535F54 = 1;
  }
  return 0;
}

int __fastcall sub_37FF0(const char *a1, size_t n)
{
  int v4; // r3
  int v5; // r3
  char v6[2052]; // [sp+0h] [bp-804h] BYREF

  if ( n == 1 )
  {
    pthread_mutex_lock(&stru_B3C4C);
    pthread_cond_signal(&cond);
    pthread_mutex_unlock(&stru_B3C4C);
    return 0;
  }
  if ( n == 4 )
  {
    v4 = *(_DWORD *)a1;
    dword_AFB44 = *(_DWORD *)a1;
    if ( (unsigned int)off_AFC24 > 3 )
    {
      snprintf(v6, 0x800u, "freq_level = %d\n", v4);
      sub_3AF5C(3, v6, 0, v5);
      return 0;
    }
    return 0;
  }
  if ( n != 2 )
    return 0;
  if ( !strncmp(a1, "go", 2u) )
  {
    if ( (unsigned int)off_AFC24 > 3 )
    {
      strcpy(v6, "start to init...\n");
      sub_3AF5C(3, v6, 0, *(_DWORD *)"t...\n");
    }
    sem_post(&sem);
  }
  if ( strncmp(a1, "re", 2u) )
    return 0;
  if ( (unsigned int)off_AFC24 > 3 )
  {
    strcpy(v6, "reload pool, need recalculate\n");
    sub_3AF5C(3, v6, 0, *(_DWORD *)"e\n");
  }
  sub_30A5C();
  dbl_B4128 = 0.0;
  *(_QWORD *)dword_9C89D8 = 0;
  *(_QWORD *)&dword_9C89E0 = 0;
  *(_QWORD *)&dword_9C89E8 = 0;
  *(_QWORD *)&dword_9C89F0 = 0;
  qword_9C8A48 = 0;
  sub_401A0(0);
  dword_B4130 = 1;
  dword_B4134 = 1;
  dword_B4138 = 1;
  return 0;
}

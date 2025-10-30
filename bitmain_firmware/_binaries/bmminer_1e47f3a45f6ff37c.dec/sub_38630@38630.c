int __fastcall sub_38630(const char *a1, size_t n)
{
  time_t v4; // r0
  int v5; // r3
  int v6; // r3
  char v7[2052]; // [sp+0h] [bp-804h] BYREF

  if ( n == 1 )
  {
    pthread_mutex_lock(&stru_B69BC);
    pthread_cond_signal(&stru_B69D8);
    pthread_mutex_unlock(&stru_B69BC);
    return 0;
  }
  if ( n == 4 )
  {
    v5 = *(_DWORD *)a1;
    dword_B2FAC = *(_DWORD *)a1;
    if ( (unsigned int)dword_B308C > 3 )
    {
      snprintf(v7, 0x800u, "freq_level = %d\n", v5);
      sub_3B6AC(3, v7, 0, v6);
    }
    return 0;
  }
  if ( n != 2 )
    return 0;
  if ( !strncmp(a1, "go", 2u) )
  {
    if ( (unsigned int)dword_B308C > 3 )
    {
      strcpy(v7, "start to init...\n");
      sub_3B6AC(3, v7, 0, *(_DWORD *)"t...\n");
    }
    sem_post(&sem);
  }
  if ( strncmp(a1, "re", 2u) )
    return 0;
  if ( (unsigned int)dword_B308C > 3 )
  {
    strcpy(v7, "reload pool, need recalculate\n");
    sub_3B6AC(3, v7, 0, *(_DWORD *)"e\n");
  }
  v4 = sub_30EFC();
  dbl_9CD890[0] = 0.0;
  dbl_B6EA0 = 0.0;
  dbl_9CD898 = 0.0;
  dbl_9CD8A0 = 0.0;
  dbl_9CD8A8 = 0.0;
  dbl_9CD900 = 0.0;
  sub_41D40(v4);
  dword_B6EA8 = 1;
  dword_B6EAC = 1;
  dword_B6EB0 = 1;
  return 0;
}

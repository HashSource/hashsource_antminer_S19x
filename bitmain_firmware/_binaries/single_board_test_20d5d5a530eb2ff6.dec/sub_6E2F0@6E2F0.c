int __fastcall sub_6E2F0(int a1)
{
  int v2; // r4
  char v4[2048]; // [sp+0h] [bp-800h] BYREF

  if ( pthread_mutex_lock(&stru_65DFA8) )
  {
    v2 = -1;
    strcpy(v4, "failed to api lock\n");
    nullsub_8();
    return v2;
  }
  v2 = 0;
  snprintf(v4, 0x40u, "/sys/class/gpio/gpio%d", a1);
  if ( access(v4, 0) )
  {
    pthread_mutex_unlock(&stru_65DFA8);
    return v2;
  }
  pthread_mutex_unlock(&stru_65DFA8);
  return 1;
}

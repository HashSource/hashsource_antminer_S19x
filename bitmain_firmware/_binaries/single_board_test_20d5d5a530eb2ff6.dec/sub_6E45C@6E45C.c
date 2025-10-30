int __fastcall sub_6E45C(int a1)
{
  int v2; // r4
  int v3; // r0
  int v4; // r6
  size_t v5; // r0
  char s[64]; // [sp+8h] [bp-840h] BYREF
  char v8[2048]; // [sp+48h] [bp-800h] BYREF

  if ( pthread_mutex_lock(&stru_65DFA8) )
  {
    v2 = -1;
    strcpy(v8, "failed to api lock\n");
    nullsub_8();
    return v2;
  }
  v2 = 0;
  snprintf(s, 0x40u, "/sys/class/gpio/gpio%d", a1);
  v3 = access(s, 0);
  if ( !v3 )
  {
    v4 = open("/sys/class/gpio/unexport", 1);
    if ( v4 < 0 )
    {
      strcpy(v8, "Failed to open unexport for writing!\n");
      nullsub_8();
      v2 = -2;
      pthread_mutex_unlock(&stru_65DFA8);
    }
    else
    {
      v5 = snprintf(s, 0x40u, "%d", a1);
      if ( write(v4, s, v5) < 0 )
      {
        snprintf(v8, 0x800u, "Failed to unexport gpio %d!", a1);
        v2 = -2;
        nullsub_8();
      }
      close(v4);
      pthread_mutex_unlock(&stru_65DFA8);
    }
    return v2;
  }
  snprintf(v8, 0x800u, "port %d already unexported, ret = %d\n", a1, v3);
  nullsub_8();
  perror("access error");
  pthread_mutex_unlock(&stru_65DFA8);
  return 0;
}

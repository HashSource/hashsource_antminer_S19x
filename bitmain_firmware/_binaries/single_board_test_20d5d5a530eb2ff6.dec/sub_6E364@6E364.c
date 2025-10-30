int __fastcall sub_6E364(int a1)
{
  int v2; // r4
  int v3; // r6
  size_t v4; // r0
  char v6[64]; // [sp+0h] [bp-840h] BYREF
  char s[2048]; // [sp+40h] [bp-800h] BYREF

  if ( pthread_mutex_lock(&stru_65DFA8) )
  {
    v2 = -1;
    strcpy(s, "failed to api lock\n");
    nullsub_8();
  }
  else
  {
    v2 = 0;
    snprintf(v6, 0x40u, "/sys/class/gpio/gpio%d", a1);
    if ( access(v6, 0) )
    {
      v3 = open("/sys/class/gpio/export", 1);
      if ( v3 < 0 )
      {
        strcpy(s, "Failed to open export for writing!\n");
        v2 = -2;
        nullsub_8();
        pthread_mutex_unlock(&stru_65DFA8);
        return v2;
      }
      v4 = snprintf(v6, 0x40u, "%d", a1);
      if ( write(v3, v6, v4) < 0 )
      {
        snprintf(s, 0x800u, "Failed to export gpio %d!", a1);
        v2 = -3;
        nullsub_8();
        close(v3);
        pthread_mutex_unlock(&stru_65DFA8);
        return v2;
      }
      close(v3);
    }
    pthread_mutex_unlock(&stru_65DFA8);
  }
  return v2;
}

int __fastcall sub_6E594(int a1, int a2)
{
  int v4; // r4
  int v5; // r0
  int v6; // r7
  const char *v8; // [sp+0h] [bp-84Ch]
  char s[64]; // [sp+8h] [bp-844h] BYREF
  char v10[2052]; // [sp+48h] [bp-804h] BYREF

  if ( pthread_mutex_lock(&stru_65DFA8) )
  {
    v4 = -1;
    strcpy(v10, "failed to api lock\n");
    nullsub_8();
    return v4;
  }
  v4 = 0;
  snprintf(s, 0x40u, "/sys/class/gpio/gpio%d/direction", a1);
  v5 = open(s, 1);
  v6 = v5;
  if ( v5 < 0 )
  {
    snprintf(v10, 0x800u, "Failed to open gpio %d direction for writing!\n", a1);
    v4 = -2;
    nullsub_8();
    pthread_mutex_unlock(&stru_65DFA8);
    return v4;
  }
  if ( !a2 )
  {
    if ( write(v5, "in", 2u) >= 0 )
      goto LABEL_5;
LABEL_8:
    v8 = &aIn[v4];
    v4 = -3;
    snprintf(v10, 0x800u, "Failed to set gpio %d direction %s !\n", a1, v8);
    nullsub_8();
    close(v6);
    pthread_mutex_unlock(&stru_65DFA8);
    return v4;
  }
  if ( write(v5, "out", 3u) < 0 )
  {
    v4 = 3;
    goto LABEL_8;
  }
LABEL_5:
  close(v6);
  pthread_mutex_unlock(&stru_65DFA8);
  return v4;
}

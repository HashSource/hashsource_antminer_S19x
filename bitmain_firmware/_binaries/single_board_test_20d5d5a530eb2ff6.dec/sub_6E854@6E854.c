int __fastcall sub_6E854(int a1, int a2)
{
  int v4; // r4
  int v5; // r0
  int v6; // r5
  char *v7; // r1
  char v9[64]; // [sp+0h] [bp-844h] BYREF
  char v10[2052]; // [sp+40h] [bp-804h] BYREF

  if ( pthread_mutex_lock(&stru_65DFA8) )
  {
    v4 = -1;
    strcpy(v10, "failed to api lock\n");
    nullsub_8();
  }
  else
  {
    v4 = 0;
    snprintf(v9, 0x40u, "/sys/class/gpio/gpio%d/value", a1);
    v5 = open(v9, 1);
    v6 = v5;
    if ( v5 < 0 )
    {
      strcpy(v10, "Failed to open gpio value for writing!\n");
      v4 = -2;
      nullsub_8();
      pthread_mutex_unlock(&stru_65DFA8);
    }
    else
    {
      v7 = "01";
      if ( a2 )
        v7 = "1";
      if ( write(v5, v7, 1u) < 0 )
      {
        strcpy(v10, "Failed to write value!\n");
        v4 = -3;
        nullsub_8();
      }
      close(v6);
      pthread_mutex_unlock(&stru_65DFA8);
    }
  }
  return v4;
}

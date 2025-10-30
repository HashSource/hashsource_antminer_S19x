int __fastcall sub_6739C(int a1, int a2)
{
  int v4; // r0
  int v5; // r5
  char *v6; // r1
  char v8[64]; // [sp+0h] [bp-840h] BYREF
  char v9[2048]; // [sp+40h] [bp-800h] BYREF

  if ( pthread_mutex_lock(&stru_1B0E98) )
  {
    strcpy(v9, "failed to api lock\n");
    sub_47AB4(0, v9, 0);
    return -1;
  }
  else
  {
    snprintf(v8, 0x40u, "/sys/class/gpio/gpio%d/value", a1);
    v4 = open64(v8, 1);
    v5 = v4;
    if ( v4 < 0 )
    {
      strcpy(v9, "Failed to open gpio value for writing!\n");
      sub_47AB4(0, v9, 0);
      pthread_mutex_unlock(&stru_1B0E98);
      return -2;
    }
    else
    {
      v6 = "01";
      if ( a2 )
        v6 = "1";
      if ( write(v4, v6, 1u) < 0 )
      {
        strcpy(v9, "Failed to write value!\n");
        sub_47AB4(0, v9, 0);
        close(v5);
        pthread_mutex_unlock(&stru_1B0E98);
        return -3;
      }
      else
      {
        close(v5);
        pthread_mutex_unlock(&stru_1B0E98);
        return 0;
      }
    }
  }
}

int __fastcall sub_66C5C(int a1)
{
  int v2; // r6
  size_t v3; // r0
  char v5[64]; // [sp+0h] [bp-840h] BYREF
  char s[2048]; // [sp+40h] [bp-800h] BYREF

  if ( pthread_mutex_lock(&stru_1B0E98) )
  {
    strcpy(s, "failed to api lock\n");
    sub_47AB4(0, s, 0);
    return -1;
  }
  else
  {
    snprintf(v5, 0x40u, "/sys/class/gpio/gpio%d", a1);
    if ( access(v5, 0) )
    {
      v2 = open64("/sys/class/gpio/export", 1);
      if ( v2 < 0 )
      {
        strcpy(s, "Failed to open export for writing!\n");
        sub_47AB4(0, s, 0);
        pthread_mutex_unlock(&stru_1B0E98);
        return -2;
      }
      else
      {
        v3 = snprintf(v5, 0x40u, "%d", a1);
        if ( write(v2, v5, v3) < 0 )
        {
          snprintf(s, 0x800u, "Failed to export gpio %d!", a1);
          sub_47AB4(0, s, 0);
          close(v2);
          pthread_mutex_unlock(&stru_1B0E98);
          return -3;
        }
        else
        {
          close(v2);
          pthread_mutex_unlock(&stru_1B0E98);
          return 0;
        }
      }
    }
    else
    {
      pthread_mutex_unlock(&stru_1B0E98);
      return 0;
    }
  }
}

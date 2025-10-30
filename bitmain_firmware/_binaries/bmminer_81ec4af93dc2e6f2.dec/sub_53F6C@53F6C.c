int __fastcall sub_53F6C(int a1, char a2)
{
  char v6[2048]; // [sp+Ch] [bp-848h] BYREF
  char s[64]; // [sp+80Ch] [bp-48h] BYREF
  int fd; // [sp+84Ch] [bp-8h]

  if ( pthread_mutex_lock(&stru_531060) )
  {
    strcpy(v6, "failed to api lock\n");
    sub_3AF5C(0, v6, 0, (int)v6);
    return -1;
  }
  else
  {
    snprintf(s, 0x40u, "/sys/class/gpio/gpio%d/value", a1);
    fd = open(s, 1);
    if ( fd >= 0 )
    {
      if ( write(fd, &a01[a2 != 0], 1u) >= 0 )
      {
        close(fd);
        pthread_mutex_unlock(&stru_531060);
        return 0;
      }
      else
      {
        strcpy(v6, "Failed to write value!\n");
        sub_3AF5C(0, v6, 0, (int)v6);
        close(fd);
        pthread_mutex_unlock(&stru_531060);
        return -3;
      }
    }
    else
    {
      strcpy(v6, "Failed to open gpio value for writing!\n");
      sub_3AF5C(0, v6, 0, (int)v6);
      pthread_mutex_unlock(&stru_531060);
      return -2;
    }
  }
}

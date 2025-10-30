int __fastcall sub_53730(int a1)
{
  char v4[2048]; // [sp+8h] [bp-84Ch] BYREF
  char s[64]; // [sp+808h] [bp-4Ch] BYREF
  size_t n; // [sp+848h] [bp-Ch]
  int fd; // [sp+84Ch] [bp-8h]

  if ( pthread_mutex_lock(&stru_531060) )
  {
    strcpy(v4, "failed to api lock\n");
    sub_3AF5C(0, v4, 0, (int)v4);
    return -1;
  }
  else
  {
    snprintf(s, 0x40u, "/sys/class/gpio/gpio%d", a1);
    if ( access(s, 0) )
    {
      fd = open("/sys/class/gpio/export", 1);
      if ( fd >= 0 )
      {
        n = snprintf(s, 0x40u, "%d", a1);
        if ( write(fd, s, n) >= 0 )
        {
          close(fd);
          pthread_mutex_unlock(&stru_531060);
          return 0;
        }
        else
        {
          snprintf(v4, 0x800u, "Failed to export gpio %d!", a1);
          sub_3AF5C(0, v4, 0, (int)v4);
          close(fd);
          pthread_mutex_unlock(&stru_531060);
          return -3;
        }
      }
      else
      {
        strcpy(v4, "Failed to open export for writing!\n");
        sub_3AF5C(0, v4, 0, (int)v4);
        pthread_mutex_unlock(&stru_531060);
        return -2;
      }
    }
    else
    {
      pthread_mutex_unlock(&stru_531060);
      return 0;
    }
  }
}

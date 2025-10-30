int __fastcall sub_5392C(int a1)
{
  char v4[2048]; // [sp+10h] [bp-84Ch] BYREF
  char s[64]; // [sp+810h] [bp-4Ch] BYREF
  size_t n; // [sp+850h] [bp-Ch]
  int fd; // [sp+854h] [bp-8h]

  if ( pthread_mutex_lock(&stru_531060) )
  {
    strcpy(v4, "failed to api lock\n");
    sub_3AF5C(0, v4, 0, (int)v4);
    return -1;
  }
  else
  {
    snprintf(s, 0x40u, "/sys/class/gpio/gpio%d", a1);
    fd = access(s, 0);
    if ( fd )
    {
      snprintf(v4, 0x800u, "port %d already unexported, ret = %d\n", a1, fd);
      sub_3AF5C(1, v4, 0, (int)v4);
      perror("access error");
      pthread_mutex_unlock(&stru_531060);
      return 0;
    }
    else
    {
      fd = open("/sys/class/gpio/unexport", 1);
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
          snprintf(v4, 0x800u, "Failed to unexport gpio %d!", a1);
          sub_3AF5C(0, v4, 0, (int)v4);
          close(fd);
          pthread_mutex_unlock(&stru_531060);
          return -2;
        }
      }
      else
      {
        strcpy(v4, "Failed to open unexport for writing!\n");
        sub_3AF5C(0, v4, 0, (int)v4);
        pthread_mutex_unlock(&stru_531060);
        return -2;
      }
    }
  }
}

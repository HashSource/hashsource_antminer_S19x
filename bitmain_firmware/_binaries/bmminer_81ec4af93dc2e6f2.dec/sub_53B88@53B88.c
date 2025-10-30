int __fastcall sub_53B88(int a1, int a2)
{
  int v3; // r2
  size_t v4; // r3
  int v5; // r2
  char v9[2048]; // [sp+14h] [bp-848h] BYREF
  char s[64]; // [sp+814h] [bp-48h] BYREF
  int fd; // [sp+854h] [bp-8h]

  if ( pthread_mutex_lock(&stru_531060) )
  {
    strcpy(v9, "failed to api lock\n");
    sub_3AF5C(0, v9, 0, (int)v9);
    return -1;
  }
  else
  {
    snprintf(s, 0x40u, "/sys/class/gpio/gpio%d/direction", a1);
    fd = open(s, 1);
    if ( fd >= 0 )
    {
      if ( a2 )
        v3 = 3;
      else
        v3 = 0;
      if ( a2 )
        v4 = 3;
      else
        v4 = 2;
      if ( write(fd, &aIn[v3], v4) >= 0 )
      {
        close(fd);
        pthread_mutex_unlock(&stru_531060);
        return 0;
      }
      else
      {
        if ( a2 )
          v5 = 3;
        else
          v5 = 0;
        snprintf(v9, 0x800u, "Failed to set gpio %d direction %s !\n", a1, &aIn[v5]);
        sub_3AF5C(0, v9, 0, (int)v9);
        close(fd);
        pthread_mutex_unlock(&stru_531060);
        return -3;
      }
    }
    else
    {
      snprintf(v9, 0x800u, "Failed to open gpio %d direction for writing!\n", a1);
      sub_3AF5C(0, v9, 0, (int)v9);
      pthread_mutex_unlock(&stru_531060);
      return -2;
    }
  }
}

int __fastcall sub_53D88(int a1, _BYTE *a2)
{
  char v6[2048]; // [sp+8h] [bp-84Ch] BYREF
  int buf; // [sp+808h] [bp-4Ch] BYREF
  char s[64]; // [sp+80Ch] [bp-48h] BYREF
  int fd; // [sp+84Ch] [bp-8h]

  buf = 0;
  if ( pthread_mutex_lock(&stru_531060) )
  {
    strcpy(v6, "failed to api lock\n");
    sub_3AF5C(0, v6, 0, (int)v6);
    return -1;
  }
  else
  {
    snprintf(s, 0x40u, "/sys/class/gpio/gpio%d/value", a1);
    fd = open(s, 0);
    if ( fd >= 0 )
    {
      if ( read(fd, &buf, 4u) >= 0 )
      {
        close(fd);
        pthread_mutex_unlock(&stru_531060);
        *a2 = atoi((const char *)&buf);
        return 0;
      }
      else
      {
        strcpy(v6, "Failed to read value!\n");
        sub_3AF5C(0, v6, 0, (int)v6);
        close(fd);
        pthread_mutex_unlock(&stru_531060);
        return -3;
      }
    }
    else
    {
      snprintf(v6, 0x800u, "Failed to open gpio %d value for reading!\n", a1);
      sub_3AF5C(0, v6, 0, (int)v6);
      pthread_mutex_unlock(&stru_531060);
      return -2;
    }
  }
}

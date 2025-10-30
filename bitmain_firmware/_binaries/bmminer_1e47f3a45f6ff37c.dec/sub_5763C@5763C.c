int __fastcall sub_5763C(int a1, char a2)
{
  char v6[2048]; // [sp+Ch] [bp-848h] BYREF
  char s[64]; // [sp+80Ch] [bp-48h] BYREF
  int fd; // [sp+84Ch] [bp-8h]

  if ( pthread_mutex_lock(&stru_535F60) )
  {
    strcpy(v6, "failed to api lock\n");
    sub_3B6AC(0, v6, 0, (int)v6);
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
        pthread_mutex_unlock(&stru_535F60);
        return 0;
      }
      else
      {
        snprintf(v6, 0x800u, "Failed to write gpio[%d] value!\n", a1);
        sub_3B6AC(0, v6, 0, (int)v6);
        close(fd);
        pthread_mutex_unlock(&stru_535F60);
        return -3;
      }
    }
    else
    {
      snprintf(v6, 0x800u, "Failed to open gpio[%d] value for writing!\n", a1);
      sub_3B6AC(0, v6, 0, (int)v6);
      pthread_mutex_unlock(&stru_535F60);
      return -2;
    }
  }
}

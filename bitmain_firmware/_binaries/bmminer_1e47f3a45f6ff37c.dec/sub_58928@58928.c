int __fastcall sub_58928(int a1)
{
  char v4[8]; // [sp+14h] [bp-808h] BYREF
  int fd; // [sp+814h] [bp-8h]

  pthread_mutex_lock(&stru_535F94[a1]);
  fd = sub_57C34(a1);
  if ( fd >= 0 )
  {
    tcflush(fd, 2);
    pthread_mutex_unlock(&stru_535F94[a1]);
    return 0;
  }
  else
  {
    snprintf(v4, 0x800u, "failed to get fd of chain %d, ret = %d\n", a1, fd);
    sub_3B6AC(0, v4, 0, (int)v4);
    pthread_mutex_unlock(&stru_535F94[a1]);
    return -1;
  }
}

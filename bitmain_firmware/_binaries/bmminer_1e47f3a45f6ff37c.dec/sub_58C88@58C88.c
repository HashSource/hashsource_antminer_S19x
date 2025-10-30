int __fastcall sub_58C88(int a1)
{
  char v4[2048]; // [sp+10h] [bp-80Ch] BYREF
  int v5; // [sp+810h] [bp-Ch] BYREF
  int fd; // [sp+814h] [bp-8h]

  v5 = 0;
  pthread_mutex_lock(&stru_536114[a1]);
  fd = sub_57C34(a1);
  if ( fd >= 0 )
  {
    if ( ioctl(fd, 0x541Bu, &v5) )
    {
      strcpy(v4, "ioctl to FIONREAD failed\n");
      sub_3B6AC(1, v4, 0, (int)v4);
      v5 = 0;
    }
    pthread_mutex_unlock(&stru_536114[a1]);
    return v5;
  }
  else
  {
    snprintf(v4, 0x800u, "failed to get fd of chain %d, ret = %d\n", a1, fd);
    sub_3B6AC(0, v4, 0, (int)v4);
    pthread_mutex_unlock(&stru_536114[a1]);
    return -1;
  }
}

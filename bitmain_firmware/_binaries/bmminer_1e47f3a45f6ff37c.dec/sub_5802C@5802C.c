int __fastcall sub_5802C(int a1, void *a2, size_t a3)
{
  char v8[12]; // [sp+18h] [bp-80Ch] BYREF
  int fd; // [sp+818h] [bp-Ch]
  ssize_t v10; // [sp+81Ch] [bp-8h]

  v10 = 0;
  pthread_mutex_lock(&stru_536114[a1]);
  fd = sub_57C34(a1);
  if ( fd >= 0 )
  {
    v10 = read(fd, a2, a3);
    pthread_mutex_unlock(&stru_536114[a1]);
    return v10;
  }
  else
  {
    snprintf(v8, 0x800u, "failed to get fd of chain %d, ret = %d\n", a1, fd);
    sub_3B6AC(0, v8, 0, (int)v8);
    pthread_mutex_unlock(&stru_536114[a1]);
    return -1;
  }
}

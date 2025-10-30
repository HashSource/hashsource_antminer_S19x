void **__fastcall sub_2AC774(int a1, int a2, int fd)
{
  int v6; // r0
  int v7; // r0
  const char *v8; // r2
  int *v10; // r5
  int v11; // r0
  int v12; // r4

  v6 = fcntl(fd, 3, 0);
  if ( v6 == -1 )
  {
    v10 = _errno_location();
    v11 = fd;
    v12 = *v10;
    close(v11);
    *v10 = v12;
    ((void (__fastcall *)(int))loc_2A6C48)(1);
    return 0;
  }
  else
  {
    v7 = v6 & 3;
    if ( v7 )
    {
      if ( v7 > 2 )
        sub_2A6BF0((int)"opncls.c", 357, (int)"bfd_fdopenr");
      v8 = "r+";
    }
    else
    {
      v8 = "r";
    }
    return sub_2AC610(a1, a2, v8, fd);
  }
}

int __fastcall sub_72540(int *a1)
{
  _BYTE buf[4]; // [sp+Ch] [bp-10h] BYREF
  _BOOL4 v5; // [sp+10h] [bp-Ch]
  int fd; // [sp+14h] [bp-8h]

  fd = open("/dev/urandom", 0);
  if ( fd == -1 )
    return 1;
  v5 = read(fd, buf, 4u) == 4;
  close(fd);
  if ( !v5 )
    return 1;
  *a1 = sub_724D0((int)buf);
  return 0;
}

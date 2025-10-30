int __fastcall sub_6F004(int *a1)
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
  *a1 = sub_6EF94((int)buf);
  return 0;
}

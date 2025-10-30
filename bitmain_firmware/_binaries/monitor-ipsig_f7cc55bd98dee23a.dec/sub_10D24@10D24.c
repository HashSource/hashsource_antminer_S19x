char *__fastcall sub_10D24(char *a1, const char *a2)
{
  char dest[32]; // [sp+18h] [bp-2Ch] BYREF
  int fd; // [sp+38h] [bp-Ch]
  char *s; // [sp+3Ch] [bp-8h]

  s = (char *)calloc(0x28u, 1u);
  fd = socket(2, 1, 0);
  if ( fd < 0 )
  {
    perror("socket");
    exit(0);
  }
  strcpy(dest, a2);
  if ( ioctl(fd, 0x8927u, dest) < 0 )
  {
    perror("ioctl");
    exit(0);
  }
  close(fd);
  sprintf(
    s,
    "%02X:%02X:%02X:%02X:%02X:%02X",
    (unsigned __int8)dest[18],
    (unsigned __int8)dest[19],
    (unsigned __int8)dest[20],
    (unsigned __int8)dest[21],
    (unsigned __int8)dest[22],
    (unsigned __int8)dest[23]);
  strcpy(a1, s);
  free(s);
  return a1;
}

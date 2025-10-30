char *__fastcall sub_10CC0(char *a1, const char *a2)
{
  char *v4; // r4
  int v5; // r5
  char dest[36]; // [sp+10h] [bp-24h] BYREF

  v4 = (char *)calloc(0x28u, 1u);
  v5 = socket(2, 1, 0);
  if ( v5 < 0 )
  {
    perror("socket");
    exit(0);
  }
  strcpy(dest, a2);
  if ( ioctl(v5, 0x8927u, dest) < 0 )
  {
    perror("ioctl");
    exit(0);
  }
  close(v5);
  sprintf(
    v4,
    "%02X:%02X:%02X:%02X:%02X:%02X",
    (unsigned __int8)dest[18],
    (unsigned __int8)dest[19],
    (unsigned __int8)dest[20],
    (unsigned __int8)dest[21],
    (unsigned __int8)dest[22],
    (unsigned __int8)dest[23]);
  strcpy(a1, v4);
  free(v4);
  return a1;
}

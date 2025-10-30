int __fastcall sub_113D4(const char *a1, void *a2)
{
  int v4; // r5
  size_t v5; // r0
  char *v6; // r7
  size_t v7; // r0
  struct in_addr v9[9]; // [sp+0h] [bp-24h] BYREF

  v4 = socket(2, 2, 0);
  memset(v9, 0, 16);
  v5 = strlen(a1);
  memcpy(v9, a1, v5);
  if ( ioctl(v4, 0x8915u, v9) )
    return -1;
  v6 = inet_ntoa(v9[5]);
  v7 = strlen(v6);
  memcpy(a2, v6, v7);
  close(v4);
  return 0;
}

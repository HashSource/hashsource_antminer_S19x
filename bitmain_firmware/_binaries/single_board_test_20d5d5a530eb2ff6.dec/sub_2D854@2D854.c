int __fastcall sub_2D854(void *a1)
{
  int v2; // r5
  int v3; // r4
  char *v4; // r7
  size_t v5; // r0
  _DWORD v7[9]; // [sp+0h] [bp-24h] BYREF

  v2 = socket(2, 2, 0);
  v7[0] = 812151909;
  memset(&v7[1], 0, 12);
  if ( ioctl(v2, 0x8915u, v7, 0) )
    return -1;
  v3 = 0;
  v4 = inet_ntoa((struct in_addr)v7[5]);
  v5 = strlen(v4);
  memcpy(a1, v4, v5);
  close(v2);
  return v3;
}

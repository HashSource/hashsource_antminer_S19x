int __fastcall sub_52824(const char *a1, void *a2)
{
  int v4; // r5
  size_t v5; // r0
  int v6; // r4
  char *v7; // r7
  size_t v8; // r0
  struct in_addr v10[9]; // [sp+0h] [bp-24h] BYREF

  memset(v10, 0, 16);
  v4 = socket(2, 2, 0);
  v5 = strlen(a1);
  memcpy(v10, a1, v5);
  v6 = ioctl(v4, 0x8915u, v10);
  if ( v6 )
    return -1;
  v7 = inet_ntoa(v10[5]);
  v8 = strlen(v7);
  memcpy(a2, v7, v8);
  close(v4);
  return v6;
}

int __fastcall sub_10B18(const char *a1, char *a2)
{
  int v4; // r4
  char *v5; // r0
  char dest[20]; // [sp+10h] [bp-20h] BYREF
  struct in_addr v8; // [sp+24h] [bp-Ch]

  v4 = socket(2, 2, 0);
  if ( v4 == -1 )
  {
    perror("socket");
    return -1;
  }
  else
  {
    strncpy(dest, a1, 0x14u);
    dest[15] = 48;
    if ( ioctl(v4, 0x8915u, dest) < 0 )
    {
      printf(":No Such Device %s/n", a1);
      return -1;
    }
    else
    {
      v5 = inet_ntoa(v8);
      strcpy(a2, v5);
      close(v4);
      return 1;
    }
  }
}

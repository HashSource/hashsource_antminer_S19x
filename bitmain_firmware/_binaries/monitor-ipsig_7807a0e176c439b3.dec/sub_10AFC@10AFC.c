int __fastcall sub_10AFC(const char *a1, char *a2)
{
  int v4; // r4
  char *v5; // r0
  int v6; // r0
  char dest[20]; // [sp+10h] [bp-20h] BYREF
  struct in_addr v9; // [sp+24h] [bp-Ch]

  v4 = socket(2, 2, 0);
  if ( v4 == -1 )
  {
    perror("socket");
  }
  else
  {
    strncpy(dest, a1, 0x14u);
    dest[15] = 48;
    if ( ioctl(v4, 0x8915u, dest) < 0 )
    {
      v4 = -1;
      printf(":No Such Device %s/n", a1);
    }
    else
    {
      v5 = inet_ntoa(v9);
      strcpy(a2, v5);
      v6 = v4;
      v4 = 1;
      close(v6);
    }
  }
  return v4;
}

int __fastcall sub_10AF0(const char *a1, char *a2)
{
  char *v3; // r0
  char dest[16]; // [sp+Ch] [bp-38h] BYREF
  int v8; // [sp+1Ch] [bp-28h]
  struct in_addr v9; // [sp+20h] [bp-24h]
  int v10; // [sp+24h] [bp-20h]
  int v11; // [sp+28h] [bp-1Ch]
  int v12; // [sp+2Ch] [bp-18h]
  struct in_addr in; // [sp+30h] [bp-14h]
  int v14; // [sp+34h] [bp-10h]
  int v15; // [sp+38h] [bp-Ch]
  int fd; // [sp+3Ch] [bp-8h]

  fd = socket(2, 2, 0);
  if ( fd == -1 )
  {
    perror("socket");
    return -1;
  }
  else
  {
    strncpy(dest, a1, 0x14u);
    dest[15] = 48;
    if ( ioctl(fd, 0x8915u, dest) >= 0 )
    {
      v12 = v8;
      in.s_addr = v9.s_addr;
      v14 = v10;
      v15 = v11;
      v3 = inet_ntoa(v9);
      strcpy(a2, v3);
      close(fd);
      return 1;
    }
    else
    {
      printf(":No Such Device %s/n", a1);
      return -1;
    }
  }
}

int __fastcall sub_127F0(const char *a1, char *a2, socklen_t a3)
{
  char dest[16]; // [sp+10h] [bp-34h] BYREF
  __int16 v9; // [sp+20h] [bp-24h] BYREF
  __int16 *v10; // [sp+30h] [bp-14h]
  __int16 *v11; // [sp+34h] [bp-10h]
  __int16 *v12; // [sp+38h] [bp-Ch]
  int fd; // [sp+3Ch] [bp-8h]

  fd = -1;
  if ( strlen(a1) <= 0xF )
  {
    fd = socket(2, 2, 0);
    if ( fd != -1 )
    {
      strncpy(dest, a1, 0xFu);
      dest[15] = 0;
      if ( ioctl(fd, 0x8915u, dest) == -1 )
      {
        close(fd);
        fd = socket(10, 2, 0);
        if ( fd == -1 )
        {
          perror("Failed to create socket for IPv6");
          return -1;
        }
        if ( ioctl(fd, 0x8915u, dest) == -1 )
        {
          perror("IOCTL failed to get IP address");
          close(fd);
          return -1;
        }
      }
      v12 = &v9;
      if ( v9 == 2 )
      {
        v10 = v12;
        inet_ntop(2, v12 + 2, a2, a3);
      }
      else
      {
        if ( *v12 != 10 )
        {
          fwrite("Unknown address family.\n", 1u, 0x18u, (FILE *)stderr);
          close(fd);
          return -1;
        }
        v11 = v12;
        inet_ntop(10, v12 + 4, a2, a3);
      }
      close(fd);
      return 0;
    }
    perror("Failed to create socket for IPv4");
    return -1;
  }
  else
  {
    fprintf((FILE *)stderr, "Error: Interface name '%s' is too long. Max length is %d.\n", a1, 15);
    return -1;
  }
}

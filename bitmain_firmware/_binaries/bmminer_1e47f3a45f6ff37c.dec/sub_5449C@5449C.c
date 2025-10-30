int __fastcall sub_5449C(const char *a1, int a2)
{
  char v6[12]; // [sp+8h] [bp-82Ch] BYREF
  char dest[32]; // [sp+808h] [bp-2Ch] BYREF
  int fd; // [sp+828h] [bp-Ch]
  int i; // [sp+82Ch] [bp-8h]

  fd = socket(2, 1, 0);
  if ( fd >= 0 )
  {
    strcpy(dest, a1);
    if ( ioctl(fd, 0x8927u, dest) >= 0 )
    {
      for ( i = 0; i <= 5; ++i )
        *(_BYTE *)(a2 + i) = dest[i + 18];
      close(fd);
      return 0;
    }
    else
    {
      strcpy(v6, "error ioctl");
      sub_3B6AC(0, v6, 0, (int)v6);
      close(fd);
      return -2;
    }
  }
  else
  {
    strcpy(v6, "error sock");
    sub_3B6AC(0, v6, 0, (int)v6);
    return -1;
  }
}

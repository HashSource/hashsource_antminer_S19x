int __fastcall sub_2FAC8(const char *a1)
{
  char v3[2048]; // [sp+8h] [bp-80Ch] BYREF
  char *endptr; // [sp+808h] [bp-Ch] BYREF
  int fd; // [sp+80Ch] [bp-8h]

  endptr = byte_6E658;
  fd = strtol(a1, &endptr, 10);
  if ( *endptr || fd < 0 )
  {
    if ( !strcmp(a1, "-") )
    {
      dword_871CC = stdout;
      if ( !stdout && (byte_90DC0 || byte_865D1 || dword_857E4 > 2) )
      {
        strcpy(v3, "Standard output missing for share log");
        sub_1DB6C(3, v3, 0);
      }
    }
    else
    {
      dword_871CC = fopen64(a1, "a");
      if ( !dword_871CC && (byte_90DC0 || byte_865D1 || dword_857E4 > 2) )
      {
        snprintf(v3, 0x800u, "Failed to open %s for share log", a1);
        sub_1DB6C(3, v3, 0);
      }
    }
  }
  else
  {
    dword_871CC = (int)fdopen(fd, "a");
    if ( !dword_871CC && (byte_90DC0 || byte_865D1 || dword_857E4 > 2) )
    {
      snprintf(v3, 0x800u, "Failed to open fd %u for share log", fd);
      sub_1DB6C(3, v3, 0);
    }
  }
  return 0;
}

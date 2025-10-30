int __fastcall sub_30C14(const char *a1)
{
  char v3[2048]; // [sp+8h] [bp-80Ch] BYREF
  char *endptr; // [sp+808h] [bp-Ch] BYREF
  int fd; // [sp+80Ch] [bp-8h]

  endptr = byte_6F818;
  fd = strtol(a1, &endptr, 10);
  if ( *endptr || fd < 0 )
  {
    if ( !strcmp(a1, "-") )
    {
      dword_88364 = stdout;
      if ( !stdout && (byte_91F58 || byte_87769 || dword_8697C > 2) )
      {
        strcpy(v3, "Standard output missing for share log");
        sub_1E4EC(3, v3, 0);
      }
    }
    else
    {
      dword_88364 = fopen64(a1, "a");
      if ( !dword_88364 && (byte_91F58 || byte_87769 || dword_8697C > 2) )
      {
        snprintf(v3, 0x800u, "Failed to open %s for share log", a1);
        sub_1E4EC(3, v3, 0);
      }
    }
  }
  else
  {
    dword_88364 = (int)fdopen(fd, "a");
    if ( !dword_88364 && (byte_91F58 || byte_87769 || dword_8697C > 2) )
    {
      snprintf(v3, 0x800u, "Failed to open fd %u for share log", fd);
      sub_1E4EC(3, v3, 0);
    }
  }
  return 0;
}

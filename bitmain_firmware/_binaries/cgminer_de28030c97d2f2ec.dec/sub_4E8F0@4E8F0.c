void sub_4E8F0()
{
  char v0[16]; // [sp+Ch] [bp-910h] BYREF
  char s[256]; // [sp+80Ch] [bp-110h] BYREF
  char *v2; // [sp+90Ch] [bp-10h]
  signed int v3; // [sp+910h] [bp-Ch]
  FILE *stream; // [sp+914h] [bp-8h]

  stream = (FILE *)fopen64(dword_87AAC, "rb");
  memset(s, 0, sizeof(s));
  v3 = 0;
  v2 = 0;
  if ( stream )
  {
    v3 = fread(s, 1u, 0x100u, stream);
    if ( v3 > 0 )
    {
      v2 = strchr(s, 10);
      if ( v2 )
      {
        sub_2BEFC(byte_87C48, s, v2 - s, "cgminer.c", "read_version_file", 11642);
        strcpy(s, v2 + 1);
        v2 = strchr(s, 10);
        if ( v2 )
          sub_2BEFC(byte_87D48, s, v2 - s, "cgminer.c", "read_version_file", 11651);
        else
          strcpy(byte_87D48, s);
      }
      else
      {
        strcpy(byte_87C48, s);
      }
      if ( byte_87C48[strlen(byte_87C48) - 1] == 10 )
        byte_87C48[strlen(byte_87C48) - 1] = 0;
      if ( byte_87C48[strlen(byte_87C48) - 1] == 13 )
        byte_87C48[strlen(byte_87C48) - 1] = 0;
      if ( byte_87D48[strlen(byte_87D48) - 1] == 10 )
        byte_87D48[strlen(byte_87D48) - 1] = 0;
      if ( byte_87D48[strlen(byte_87D48) - 1] == 13 )
        byte_87D48[strlen(byte_87D48) - 1] = 0;
    }
    else if ( byte_91F58 || byte_87769 || dword_8697C > 2 )
    {
      snprintf(v0, 0x800u, "Read miner version file %s error %d", (const char *)dword_87AAC, v3);
      sub_1E4EC(3, v0, 0);
    }
  }
  else if ( byte_91F58 || byte_87769 || dword_8697C > 2 )
  {
    snprintf(v0, 0x800u, "Open miner version file %s error", (const char *)dword_87AAC);
    sub_1E4EC(3, v0, 0);
  }
  if ( byte_91F58 || byte_87769 || dword_8697C > 2 )
  {
    snprintf(v0, 0x800u, "Miner compile time: %s type: %s", byte_87C48, byte_87D48);
    sub_1E4EC(3, v0, 0);
  }
}

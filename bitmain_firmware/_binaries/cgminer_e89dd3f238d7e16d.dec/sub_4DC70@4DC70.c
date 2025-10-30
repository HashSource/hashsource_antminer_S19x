void sub_4DC70()
{
  char v0[16]; // [sp+Ch] [bp-910h] BYREF
  char s[256]; // [sp+80Ch] [bp-110h] BYREF
  char *v2; // [sp+90Ch] [bp-10h]
  signed int v3; // [sp+910h] [bp-Ch]
  FILE *stream; // [sp+914h] [bp-8h]

  stream = (FILE *)fopen64(dword_86914, "rb");
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
        sub_2AF08(byte_86AB0, s, v2 - s, "cgminer.c", "read_version_file", 11642);
        strcpy(s, v2 + 1);
        v2 = strchr(s, 10);
        if ( v2 )
          sub_2AF08(byte_86BB0, s, v2 - s, "cgminer.c", "read_version_file", 11651);
        else
          strcpy(byte_86BB0, s);
      }
      else
      {
        strcpy(byte_86AB0, s);
      }
      if ( byte_86AB0[strlen(byte_86AB0) - 1] == 10 )
        byte_86AB0[strlen(byte_86AB0) - 1] = 0;
      if ( byte_86AB0[strlen(byte_86AB0) - 1] == 13 )
        byte_86AB0[strlen(byte_86AB0) - 1] = 0;
      if ( byte_86BB0[strlen(byte_86BB0) - 1] == 10 )
        byte_86BB0[strlen(byte_86BB0) - 1] = 0;
      if ( byte_86BB0[strlen(byte_86BB0) - 1] == 13 )
        byte_86BB0[strlen(byte_86BB0) - 1] = 0;
    }
    else if ( byte_90DC0 || byte_865D1 || dword_857E4 > 2 )
    {
      snprintf(v0, 0x800u, "Read miner version file %s error %d", (const char *)dword_86914, v3);
      sub_1DB6C(3, v0, 0);
    }
  }
  else if ( byte_90DC0 || byte_865D1 || dword_857E4 > 2 )
  {
    snprintf(v0, 0x800u, "Open miner version file %s error", (const char *)dword_86914);
    sub_1DB6C(3, v0, 0);
  }
  if ( byte_90DC0 || byte_865D1 || dword_857E4 > 2 )
  {
    snprintf(v0, 0x800u, "Miner compile time: %s type: %s", byte_86AB0, byte_86BB0);
    sub_1DB6C(3, v0, 0);
  }
}

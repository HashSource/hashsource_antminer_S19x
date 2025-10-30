void sub_63E84()
{
  FILE *v0; // r6
  signed int v1; // r0
  char *v2; // r7
  unsigned __int8 *v3; // r4
  int v4; // r7
  char *v5; // r0
  size_t v6; // r0
  int v7; // r3
  size_t v8; // r0
  int v9; // r3
  bool v10; // zf
  int v11; // r5
  char v12[256]; // [sp+8h] [bp-900h] BYREF
  char s[2048]; // [sp+108h] [bp-800h] BYREF

  v0 = (FILE *)fopen64(dword_1AECD8, "rb");
  memset(v12, 0, sizeof(v12));
  if ( v0 )
  {
    v1 = fread(v12, 1u, 0x100u, v0);
    if ( v1 <= 0 )
    {
      v11 = (int)&byte_244080;
      if ( !byte_244080 && !byte_1AECC4 && dword_9E320 <= 2 )
        goto LABEL_24;
      snprintf(s, 0x800u, "Read miner version file %s error %d", (const char *)dword_1AECD8, v1);
      sub_47AB4(3, s, 0);
    }
    else
    {
      v2 = strchr(v12, 10);
      if ( v2 )
      {
        v3 = byte_1B0CC0;
        sub_4C150(byte_1B07E4, v12, v2 - v12, (int)"cgminer.c", (int)"read_version_file", 11540);
        v4 = stpcpy(v12, v2 + 1);
        v5 = strchr(v12, 10);
        if ( v5 )
          sub_4C150(byte_1B08E4, v12, v5 - v12, (int)"cgminer.c", (int)"read_version_file", 11549);
        else
          memcpy(byte_1B08E4, v12, v4 - (_DWORD)v12 + 1);
      }
      else
      {
        v3 = byte_1B0CC0;
        strcpy(byte_1B07E4, v12);
      }
      v6 = strlen(byte_1B07E4) - 1;
      v7 = byte_1B0CC0[v6 - 1244];
      if ( v7 == 10 )
      {
        byte_1B0CC0[v6 - 1244] = 0;
        v6 = strlen(byte_1B07E4) - 1;
        v7 = byte_1B0CC0[v6 - 1244];
      }
      if ( v7 == 13 )
        byte_1B0CC0[v6 - 1244] = 0;
      v8 = strlen(byte_1B08E4) - 1;
      v9 = byte_1B0CC0[v8 - 988];
      if ( v9 == 10 )
      {
        byte_1B0CC0[v8 - 988] = 0;
        v8 = strlen(byte_1B08E4) - 1;
        v9 = byte_1B0CC0[v8 - 988];
      }
      v10 = v9 == 13;
      v11 = 16512;
      if ( v9 == 13 )
      {
        v3 = &byte_1B0CC0[v8];
        LOBYTE(v9) = 0;
      }
      else
      {
        HIWORD(v11) = 36;
      }
      if ( v10 )
      {
        HIWORD(v11) = 36;
        *(v3 - 988) = v9;
      }
    }
  }
  else
  {
    v11 = (int)&byte_244080;
    if ( !byte_244080 && !byte_1AECC4 && dword_9E320 <= 2 )
      goto LABEL_24;
    snprintf(s, 0x800u, "Open miner version file %s error", (const char *)dword_1AECD8);
    sub_47AB4(3, s, 0);
  }
  if ( *(_BYTE *)v11 || byte_1AECC4 )
    goto LABEL_23;
LABEL_24:
  if ( dword_9E320 > 2 )
  {
LABEL_23:
    snprintf(s, 0x800u, "Miner compile time: %s type: %s", byte_1B07E4, byte_1B08E4);
    sub_47AB4(3, s, 0);
  }
}

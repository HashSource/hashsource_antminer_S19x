void sub_3FB54()
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

  v0 = (FILE *)fopen64(dword_68DE8, "rb");
  memset(v12, 0, sizeof(v12));
  if ( v0 )
  {
    v1 = fread(v12, 1u, 0x100u, v0);
    if ( v1 <= 0 )
    {
      v11 = (int)&byte_74500;
      if ( !byte_74500 && !byte_68BD4 && dword_67DB4 <= 2 )
        goto LABEL_24;
      snprintf(s, 0x800u, "Read miner version file %s error %d", (const char *)dword_68DE8, v1);
      sub_20F58(3, s, 0);
    }
    else
    {
      v2 = strchr(v12, 10);
      if ( v2 )
      {
        v3 = byte_6ABD0;
        sub_254E8(byte_6A74C, v12, v2 - v12, (int)"cgminer.c", (int)"read_version_file", 11549);
        v4 = stpcpy(v12, v2 + 1);
        v5 = strchr(v12, 10);
        if ( v5 )
          sub_254E8(byte_6A84C, v12, v5 - v12, (int)"cgminer.c", (int)"read_version_file", 11558);
        else
          memcpy(byte_6A84C, v12, v4 - (_DWORD)v12 + 1);
      }
      else
      {
        v3 = byte_6ABD0;
        strcpy(byte_6A74C, v12);
      }
      v6 = strlen(byte_6A74C) - 1;
      v7 = byte_6ABD0[v6 - 1156];
      if ( v7 == 10 )
      {
        byte_6ABD0[v6 - 1156] = 0;
        v6 = strlen(byte_6A74C) - 1;
        v7 = byte_6ABD0[v6 - 1156];
      }
      if ( v7 == 13 )
        byte_6ABD0[v6 - 1156] = 0;
      v8 = strlen(byte_6A84C) - 1;
      v9 = byte_6ABD0[v8 - 900];
      if ( v9 == 10 )
      {
        byte_6ABD0[v8 - 900] = 0;
        v8 = strlen(byte_6A84C) - 1;
        v9 = byte_6ABD0[v8 - 900];
      }
      v10 = v9 == 13;
      v11 = 17664;
      if ( v9 == 13 )
      {
        v3 = &byte_6ABD0[v8];
        LOBYTE(v9) = 0;
      }
      else
      {
        HIWORD(v11) = 7;
      }
      if ( v10 )
      {
        HIWORD(v11) = 7;
        *(v3 - 900) = v9;
      }
    }
  }
  else
  {
    v11 = (int)&byte_74500;
    if ( !byte_74500 && !byte_68BD4 && dword_67DB4 <= 2 )
      goto LABEL_24;
    snprintf(s, 0x800u, "Open miner version file %s error", (const char *)dword_68DE8);
    sub_20F58(3, s, 0);
  }
  if ( *(_BYTE *)v11 || byte_68BD4 )
    goto LABEL_23;
LABEL_24:
  if ( dword_67DB4 > 2 )
  {
LABEL_23:
    snprintf(s, 0x800u, "Miner compile time: %s type: %s", byte_6A74C, byte_6A84C);
    sub_20F58(3, s, 0);
  }
}

int sub_36C68()
{
  FILE *v0; // r6
  signed int v1; // r0
  char *v2; // r0
  char *v3; // r6
  int v4; // r6
  char *v5; // r0
  size_t v6; // r0
  int v7; // r3
  size_t v8; // r0
  int v9; // r3
  bool v10; // zf
  int v11; // r6
  int v12; // r3
  FILE *v13; // r7
  signed int v14; // r0
  char *v15; // r0
  int v16; // r7
  int result; // r0
  int v18; // r3
  int v19; // r3
  int v20; // r3
  int v21; // r3
  int v22; // r3
  _DWORD v23[64]; // [sp+8h] [bp-904h] BYREF
  char s[2052]; // [sp+108h] [bp-804h] BYREF

  v0 = fopen((const char *)dword_B3B48, "rb");
  memset(v23, 0, sizeof(v23));
  if ( v0 )
  {
    v1 = fread(v23, 1u, 0x100u, v0);
    if ( v1 <= 0 )
    {
      v11 = (int)&byte_5BC044;
      if ( byte_5BC044 || byte_4B6CA5 || dword_AFC2C > 2 )
      {
        snprintf(s, 0x800u, "Read miner version file %s error %d", (const char *)dword_B3B48, v1);
        sub_3AF5C(3, s, 0, v21);
      }
    }
    else
    {
      v2 = strchr((const char *)v23, 10);
      v3 = v2;
      if ( v2 )
      {
        sub_3E3A8(byte_B3D78, v23, v2 - (char *)v23, "bmminer.c", "read_version_file", 1536, v23[0]);
        v4 = stpcpy(v23, v3 + 1);
        v5 = strchr((const char *)v23, 10);
        if ( v5 )
          sub_3E3A8(dest, v23, v5 - (char *)v23, "bmminer.c", "read_version_file", 1545, v23[0]);
        else
          memcpy(dest, v23, v4 - (_DWORD)v23 + 1);
      }
      else
      {
        strcpy(byte_B3D78, (const char *)v23);
      }
      v6 = strlen(byte_B3D78) - 1;
      v7 = *((unsigned __int8 *)&dword_B3930[274] + v6);
      if ( v7 == 10 )
      {
        *((_BYTE *)&dword_B3930[274] + v6) = 0;
        v6 = strlen(byte_B3D78) - 1;
        v7 = *((unsigned __int8 *)&dword_B3930[274] + v6);
      }
      if ( v7 == 13 )
        *((_BYTE *)&dword_B3930[274] + v6) = 0;
      v8 = strlen(dest) - 1;
      v9 = *((unsigned __int8 *)&dword_B3930[338] + v8);
      if ( v9 == 10 )
      {
        *((_BYTE *)&dword_B3930[338] + v8) = 0;
        v8 = strlen(dest) - 1;
        v9 = *((unsigned __int8 *)&dword_B3930[338] + v8);
      }
      v10 = v9 == 13;
      v11 = 49220;
      if ( v9 == 13 )
      {
        v8 += (size_t)dword_B3930;
        LOBYTE(v9) = 0;
      }
      else
      {
        HIWORD(v11) = 91;
      }
      if ( v10 )
      {
        HIWORD(v11) = 91;
        *(_BYTE *)(v8 + 1352) = v9;
      }
    }
  }
  else
  {
    v11 = (int)&byte_5BC044;
    if ( byte_5BC044 || byte_4B6CA5 || dword_AFC2C > 2 )
    {
      snprintf(s, 0x800u, "Open miner version file %s error", (const char *)dword_B3B48);
      sub_3AF5C(3, s, 0, v12);
    }
  }
  v13 = fopen("/config/sn", "rb");
  if ( v13 )
  {
    memset(v23, 0, sizeof(v23));
    v14 = fread(v23, 1u, 0xFAu, v13);
    if ( v14 <= 0 )
    {
      if ( *(_BYTE *)v11 || byte_4B6CA5 || dword_AFC2C > 2 )
      {
        snprintf(s, 0x800u, "Read miner sn file %s error %d", "/config/sn", v14);
        sub_3AF5C(3, s, 0, v22);
      }
    }
    else
    {
      v15 = strstr((const char *)v23, "\r\n");
      if ( v15 )
        sub_3E3A8(&byte_B3F78, v23, v15 - (char *)v23, "bmminer.c", "read_version_file", 1594, v23[0]);
      else
        strcpy(&byte_B3F78, (const char *)v23);
    }
    fclose(v13);
    v16 = *(unsigned __int8 *)v11;
  }
  else if ( *(_BYTE *)v11 || (v16 = (unsigned __int8)byte_4B6CA5, byte_4B6CA5) || dword_AFC2C > 2 )
  {
    snprintf(s, 0x800u, "Open miner sn file %s error", "/config/sn");
    sub_3AF5C(3, s, 0, v20);
    v16 = *(unsigned __int8 *)v11;
  }
  result = strlen(&byte_B3F78) - 1;
  v18 = *((unsigned __int8 *)&dword_B3930[402] + result);
  if ( v18 == 10 )
  {
    *((_BYTE *)&dword_B3930[402] + result) = 0;
    result = strlen(&byte_B3F78) - 1;
    v18 = *((unsigned __int8 *)&dword_B3930[402] + result);
  }
  if ( v18 == 13 )
    *((_BYTE *)&dword_B3930[402] + result) = 0;
  if ( v16 || byte_4B6CA5 || dword_AFC2C > 2 )
  {
    snprintf(s, 0x800u, "Miner compile time: %s type: %s sn :%s", byte_B3D78, dest, &byte_B3F78);
    return sub_3AF5C(3, s, 0, v19);
  }
  return result;
}

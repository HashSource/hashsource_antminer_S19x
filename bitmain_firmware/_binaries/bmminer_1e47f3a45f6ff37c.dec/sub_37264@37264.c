int sub_37264()
{
  FILE *v0; // r6
  signed int v1; // r0
  char *v2; // r0
  char *v3; // r6
  int v4; // r6
  char *v5; // r0
  size_t v6; // r0
  int v7; // r3
  int v8; // r6
  size_t v9; // r0
  int v10; // r3
  FILE *v11; // r7
  signed int v12; // r0
  char *v13; // r0
  int v14; // r7
  int result; // r0
  int v16; // r3
  int v17; // r3
  int v18; // r3
  int v19; // r3
  int v20; // r3
  int v21; // r3
  _DWORD s[64]; // [sp+8h] [bp-904h] BYREF
  char v23[2052]; // [sp+108h] [bp-804h] BYREF

  v0 = fopen((const char *)dword_B68B8, "rb");
  memset(s, 0, sizeof(s));
  if ( v0 )
  {
    v1 = fread(s, 1u, 0x100u, v0);
    if ( v1 <= 0 )
    {
      v8 = (int)&byte_5C0EFC;
      if ( byte_5C0EFC || byte_4B9A21 || dword_B3094 > 2 )
      {
        snprintf(v23, 0x800u, "Read miner version file %s error %d", (const char *)dword_B68B8, v1);
        sub_3B6AC(3, v23, 0, v21);
      }
    }
    else
    {
      v2 = strchr((const char *)s, 10);
      v3 = v2;
      if ( v2 )
      {
        sub_3EA8C(dest, s, v2 - (char *)s, "bmminer.c", "read_version_file", 1536, s[0]);
        v4 = stpcpy(s, v3 + 1);
        v5 = strchr((const char *)s, 10);
        if ( v5 )
          sub_3EA8C(byte_B6BEC, s, v5 - (char *)s, "bmminer.c", "read_version_file", 1545, s[0]);
        else
          memcpy(byte_B6BEC, s, v4 + 1 - (_DWORD)s);
      }
      else
      {
        strcpy(dest, (const char *)s);
      }
      v6 = strlen(dest) - 1;
      v7 = *((unsigned __int8 *)&dword_B66A0[275] + v6);
      if ( v7 == 10 )
      {
        *((_BYTE *)&dword_B66A0[275] + v6) = 0;
        v6 = strlen(dest) - 1;
        v7 = *((unsigned __int8 *)&dword_B66A0[275] + v6);
      }
      LOWORD(v8) = (unsigned __int16)dword_B66A0;
      if ( v7 == 13 )
        *((_BYTE *)&dword_B66A0[275] + v6) = 0;
      v9 = strlen(byte_B6BEC) - 1;
      v10 = *((unsigned __int8 *)&dword_B66A0[339] + v9);
      if ( v10 == 10 )
      {
        *((_BYTE *)&dword_B66A0[339] + v9) = 0;
        v9 = strlen(byte_B6BEC) - 1;
        HIWORD(v8) = (unsigned int)dword_B66A0 >> 16;
        v8 += v9;
        v10 = *(unsigned __int8 *)(v8 + 1356);
      }
      if ( v10 == 13 )
        v9 += (size_t)dword_B66A0;
      else
        LOWORD(v8) = (unsigned __int16)&byte_5C0EFC;
      if ( v10 == 13 )
        v8 = 3836;
      else
        HIWORD(v8) = (unsigned int)&byte_5C0EFC >> 16;
      if ( v10 == 13 )
      {
        HIWORD(v8) = 92;
        *(_BYTE *)(v9 + 1356) = 0;
      }
    }
  }
  else
  {
    v8 = (int)&byte_5C0EFC;
    if ( byte_5C0EFC || byte_4B9A21 || dword_B3094 > 2 )
    {
      snprintf(v23, 0x800u, "Open miner version file %s error", (const char *)dword_B68B8);
      sub_3B6AC(3, v23, 0, v19);
    }
  }
  v11 = fopen("/config/sn", "rb");
  if ( v11 )
  {
    memset(s, 0, sizeof(s));
    v12 = fread(s, 1u, 0xFAu, v11);
    if ( v12 <= 0 )
    {
      if ( *(_BYTE *)v8 || byte_4B9A21 || dword_B3094 > 2 )
      {
        snprintf(v23, 0x800u, "Read miner sn file %s error %d", "/config/sn", v12);
        sub_3B6AC(3, v23, 0, v20);
      }
    }
    else
    {
      v13 = strstr((const char *)s, "\r\n");
      if ( v13 )
        sub_3EA8C(&byte_B6CEC, s, v13 - (char *)s, "bmminer.c", "read_version_file", 1594, s[0]);
      else
        strcpy(&byte_B6CEC, (const char *)s);
    }
    fclose(v11);
    v14 = *(unsigned __int8 *)v8;
  }
  else if ( *(_BYTE *)v8 || (v14 = (unsigned __int8)byte_4B9A21, byte_4B9A21) || dword_B3094 > 2 )
  {
    snprintf(v23, 0x800u, "Open miner sn file %s error", "/config/sn");
    sub_3B6AC(3, v23, 0, v18);
    v14 = *(unsigned __int8 *)v8;
  }
  result = strlen(&byte_B6CEC) - 1;
  v16 = *((unsigned __int8 *)&dword_B66A0[403] + result);
  if ( v16 == 10 )
  {
    *((_BYTE *)&dword_B66A0[403] + result) = 0;
    result = strlen(&byte_B6CEC) - 1;
    v16 = *((unsigned __int8 *)&dword_B66A0[403] + result);
  }
  if ( v16 == 13 )
    *((_BYTE *)&dword_B66A0[403] + result) = 0;
  if ( v14 || byte_4B9A21 || dword_B3094 > 2 )
  {
    snprintf(v23, 0x800u, "Miner compile time: %s type: %s sn :%s", dest, byte_B6BEC, &byte_B6CEC);
    return sub_3B6AC(3, v23, 0, v17);
  }
  return result;
}

int __fastcall sub_37BA0(int a1, const char *a2, _BYTE *a3, _BYTE *a4, int a5)
{
  const char *v7; // r4
  char *v8; // r5
  size_t v9; // r0
  size_t v10; // r0
  int v11; // r0
  int v12; // r2
  char *v13; // r4
  char *v14; // r11
  char *v15; // r0
  bool v16; // zf
  int v18; // r3
  size_t v19; // r4
  int v20; // r0
  int v24; // [sp+10h] [bp-3Ch]
  char s[4]; // [sp+18h] [bp-34h] BYREF
  int v26; // [sp+1Ch] [bp-30h]
  __int16 v27; // [sp+20h] [bp-2Ch]

  v24 = sub_37510();
  if ( v24 )
  {
    v24 = -1;
    sub_1E938(s, 0x30u);
    printf("%s ", s);
    printf("%s : %s can't detect scanner!!!.\n", "scan_hashboard_info", "scan_hashboard_info");
    snprintf(byte_62A768, 0x100u, "%s can't detect scanner!!!.", "scan_hashboard_info");
    sub_3CC5C(byte_62A768, s);
    return v24;
  }
  do
  {
    while ( 1 )
    {
      *(_DWORD *)s = 0;
      v26 = 0;
      v27 = 0;
      v11 = sub_6F438(3);
      v12 = v11;
      if ( v11 <= 0 )
        break;
      if ( v11 >= 9 )
        v12 = 9;
      if ( sub_6F114(3, s, v12, 0) <= 0 )
        break;
      v13 = strstr(s, "\r\n");
      v14 = strchr(s, 10);
      v15 = strchr(s, 13);
      v16 = v14 == 0;
      if ( !v14 )
        v16 = v13 == 0;
      if ( !v16 )
      {
        if ( v13 )
        {
          *v13 = 0;
          v7 = v13 + 2;
        }
        else if ( v15 )
        {
LABEL_4:
          *v15 = 0;
          v7 = v15 + 1;
        }
        else
        {
          *v14 = 0;
          v7 = v14 + 1;
        }
        LOWORD(v8) = (unsigned __int16)&unk_62A85C;
        v9 = strlen(s);
        if ( v9 <= dword_21C0B0 )
        {
          HIWORD(v8) = (unsigned int)&unk_62A85C >> 16;
          memcpy(&byte_629764[*(_DWORD *)&v8[-248]], s, v9 + 1);
          sub_37564(a1, a3, a2, a4);
          if ( *a3 && *a4 )
            return v24;
        }
        else
        {
          HIWORD(v8) = (unsigned int)&unk_62A85C >> 16;
        }
        memset(byte_629764, 0, sizeof(byte_629764));
        strcpy(byte_629764, v7);
        goto LABEL_8;
      }
      if ( v15 )
        goto LABEL_4;
      v19 = strlen(s);
      if ( v19 > dword_21C0B0 )
      {
        memset(byte_629764, 0, sizeof(byte_629764));
        v8 = (char *)&unk_62A85C;
        v20 = 0;
      }
      else
      {
        v8 = (char *)&unk_62A85C;
        v20 = dword_62A764;
      }
      memcpy(&byte_629764[v20], s, v19 + 1);
LABEL_8:
      a5 -= 5;
      v10 = strlen(byte_629764);
      *(_DWORD *)&v8[-248] = v10;
      dword_21C0B0 = 255 - v10;
      usleep(0x1388u);
      if ( a5 <= 0 )
        goto LABEL_22;
    }
    usleep(0x2710u);
    a5 -= 15;
    usleep(0x1388u);
  }
  while ( a5 > 0 );
LABEL_22:
  if ( !*a3 )
    return -1;
  v18 = 0;
  if ( !*a4 )
    return -1;
  return v18;
}

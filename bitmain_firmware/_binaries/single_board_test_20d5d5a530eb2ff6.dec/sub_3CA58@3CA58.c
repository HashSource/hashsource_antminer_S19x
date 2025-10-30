int __fastcall sub_3CA58(int a1, const char *a2)
{
  DIR *v4; // r6
  int v5; // r5
  struct dirent *v6; // r0
  const char *d_name; // r11
  _BOOL4 v8; // r3
  size_t v9; // r0
  char *v10; // r0

  v4 = opendir(off_21C0F4);
  if ( v4 )
  {
    v5 = 0;
    while ( 1 )
    {
      v6 = readdir(v4);
      d_name = v6->d_name;
      v8 = v5 <= 399;
      if ( !v6 )
        v8 = 0;
      if ( !v8 )
        break;
      v9 = strlen(a2);
      if ( !strncmp(d_name, a2, v9) && !strstr(d_name, ".lz4") && !strstr(d_name, ".64") )
      {
        v10 = (char *)(a1 + (v5++ << 7));
        strncpy(v10, d_name, 0x7Fu);
      }
    }
    closedir(v4);
    sub_3CA2C(a1, 0, v5 - 1);
    return v5;
  }
  else
  {
    sub_3CA2C(a1, 0, -1);
    return 0;
  }
}

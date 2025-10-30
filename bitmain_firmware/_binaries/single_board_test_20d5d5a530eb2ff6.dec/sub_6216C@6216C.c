int sub_6216C()
{
  int v0; // r6
  int v1; // r4
  int v2; // r5
  int v4; // r4
  const char *v5; // r0
  int v6; // r4
  const char *v7; // r0
  char v8[48]; // [sp+0h] [bp-30h] BYREF

  v0 = dword_223680;
  if ( !strcmp((const char *)(dword_223680 + 32), "BHB56907") )
  {
    v1 = 0;
    if ( !strncmp("BS", s2, 2u) )
    {
      sub_1E938(v8, 0x30u);
      printf("%s ", v8);
      printf("%s : BHB56907 1366BS HEM add %d\n", "hem_comp", 40);
      snprintf(byte_65103C, 0x100u, "BHB56907 1366BS HEM add %d", 40);
      sub_3CC5C((int)byte_65103C, v8);
      return 40;
    }
    if ( !strncmp("BP", s2, 2u) )
    {
      sub_1E938(v8, 0x30u);
      printf("%s ", v8);
      printf("%s : BHB56907 1366BP HEM add %d\n", "hem_comp", 40);
      snprintf(byte_65113C, 0x100u, "BHB56907 1366BP HEM add %d", 40);
      sub_3CC5C((int)byte_65113C, v8);
      return 40;
    }
    return v1;
  }
  v1 = *(unsigned __int8 *)(v0 + 260);
  if ( !*(_BYTE *)(v0 + 260) )
    return v1;
  if ( strncmp("F1V19", haystack, 5u) && strncmp("F1V23", haystack, 5u) && strncmp("F1V31", haystack, 5u) )
  {
    if ( !strncmp("F1V18", haystack, 5u) || !strncmp("F1V22", haystack, 5u) || !strncmp("F1V30", haystack, 5u) )
    {
      sub_1E938(v8, 0x30u);
      printf("%s ", v8);
      printf("%s : HEM add 20 for F1V18 F1V22 F1V30, add 30 for BHB56903\n", "hem_comp");
      strcpy(byte_650E3C, "HEM add 20 for F1V18 F1V22 F1V30, add 30 for BHB56903");
      sub_3CC5C((int)byte_650E3C, v8);
      v6 = dword_223680 + 32;
      if ( !strcmp((const char *)(dword_223680 + 32), "BHB56903") )
        return sub_5CFF0() + 30;
      v7 = (const char *)v6;
      v1 = 20;
      if ( !strcmp(v7, "BHB56907") )
        return sub_5CFF0() + 30;
    }
    else
    {
      v2 = sub_5D024();
      v1 = v2;
      if ( v2 )
      {
        sub_1E938(v8, 0x30u);
        v1 = v2;
        printf("%s ", v8);
        printf("%s : HEM new ft add %d\n", "hem_comp", v2);
        snprintf(byte_650F3C, 0x100u, "HEM new ft add %d", v2);
        sub_3CC5C((int)byte_650F3C, v8);
      }
    }
    return v1;
  }
  sub_1E938(v8, 0x30u);
  printf("%s ", v8);
  printf("%s : HEM add 30 for F1V19 F1V23 F1V31\n", "hem_comp");
  strcpy(byte_650D3C, "HEM add 30 for F1V19 F1V23 F1V31");
  sub_3CC5C((int)byte_650D3C, v8);
  v4 = dword_223680 + 32;
  if ( strcmp((const char *)(dword_223680 + 32), "BHB56903") )
  {
    v5 = (const char *)v4;
    v1 = 30;
    if ( strcmp(v5, "BHB56907") )
      return v1;
  }
  return sub_5CFF0() + 40;
}

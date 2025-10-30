int __fastcall sub_5E098(int a1, int a2, int a3, int a4)
{
  const char *v7; // r4
  int v8; // r4
  void *v9; // r5
  int v11; // r0
  char dest[4]; // [sp+Ch] [bp-114h] BYREF
  int v13; // [sp+10h] [bp-110h]
  int v14; // [sp+14h] [bp-10Ch]
  int v15; // [sp+18h] [bp-108h]
  char s[100]; // [sp+3Ch] [bp-E4h] BYREF
  char v17[128]; // [sp+A0h] [bp-80h] BYREF

  memset(s, 0, sizeof(s));
  v7 = (const char *)(dword_223680 + 48);
  if ( !strcmp((const char *)(dword_223680 + 48), "BM1398")
    || !strcmp(v7, "BM1360")
    || (v11 = strcmp(v7, "BM1399")) == 0 )
  {
    qmemcpy(s, "/mnt/card/BM1366-pattern/pattern_midautogen.bin", 47);
    sub_1E938(v17, 0x30u);
    printf("%s ", v17);
    printf("%s : pattern file path: %s\n", "get_works_ex", s);
    snprintf(byte_649F38, 0x100u, "pattern file path: %s", s);
    sub_3CC5C((int)byte_649F38, v17);
    sub_1E938(v17, 0x30u);
    printf("%s ", v17);
    printf("%s : asic_num = %d, core_num = %d, pattern_num = %d\n", "get_works_ex", a2, a3, a4);
    snprintf(byte_64A038, 0x100u, "asic_num = %d, core_num = %d, pattern_num = %d", a2, a3, a4);
    sub_3CC5C((int)byte_64A038, v17);
    if ( a2 )
    {
      v8 = 0;
      while ( 1 )
      {
        memset(v17, 0, sizeof(v17));
        sprintf(v17, s, v8);
        v9 = calloc(a3 * 60 * a4, 1u);
        dword_7169B0[v8] = (int)v9;
        if ( !v9 )
        {
          sub_1E938(dest, 0x30u);
          printf("%s ", dest);
          printf("%s : malloc pattern buffer fail for asic %d\n", "get_works_ex", v8);
          snprintf(byte_64A238, 0x100u, "malloc pattern buffer fail for asic %d", v8);
          sub_3CC5C((int)byte_64A238, dest);
          return 0;
        }
        if ( sub_5DE3C(v17, a3, a4, (int)v9) )
          break;
        if ( a2 == ++v8 )
          return 1;
      }
      sub_1E938(dest, 0x30u);
      printf("%s ", dest);
      printf("%s : get test pattern fail for asic %d\n", "get_works_ex", v8);
      snprintf(byte_64A338, 0x100u, "get test pattern fail for asic %d", v8);
      sub_3CC5C((int)byte_64A338, dest);
      return 0;
    }
    else
    {
      return 1;
    }
  }
  else
  {
    *(_DWORD *)dest = 0;
    v13 = 0;
    v14 = 0;
    v15 = 0;
    sub_6FBF4(v11);
    sub_1F650(0, (const char *)(dword_223680 + 32));
    sub_1F650(1, "Don't support");
    strcpy(dest, (const char *)(dword_223680 + 48));
    sub_1F650(2, dest);
    sub_1E938(v17, 0x30u);
    printf("%s ", v17);
    printf("%s : Don't support %s asic\n", "get_works_ex", (const char *)(dword_223680 + 48));
    snprintf(byte_64A138, 0x100u, "Don't support %s asic", (const char *)(dword_223680 + 48));
    sub_3CC5C((int)byte_64A138, v17);
    return 0;
  }
}

int __fastcall sub_24B68(const char *a1)
{
  const char *v2; // r4
  char v4[52]; // [sp+0h] [bp-34h] BYREF

  v2 = (const char *)(dword_223680 + 48);
  if ( !strcmp((const char *)(dword_223680 + 48), "BM1398") )
    return 5016;
  if ( !strcmp(v2, "BM1360") )
    return 4960;
  if ( !strcmp(v2, "BM1362") )
    return 4962;
  if ( !strcmp(v2, "BM1399") )
    return 5017;
  if ( !strcmp(v2, "BM1366") )
    return 4966;
  sub_1E938(v4, 0x30u);
  printf("%s ", v4);
  printf("%s : Can't find Asic_Type: %s\n", "get_asic_name", a1);
  snprintf(byte_6082C4, 0x100u, "Can't find Asic_Type: %s", a1);
  sub_3CC5C(byte_6082C4, v4);
  return 0;
}

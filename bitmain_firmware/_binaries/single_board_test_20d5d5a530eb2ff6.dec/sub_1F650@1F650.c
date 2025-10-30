int __fastcall sub_1F650(int a1, const char *a2)
{
  size_t v4; // r0
  _DWORD v6[13]; // [sp+8h] [bp-34h] BYREF

  sub_1E938((char *)v6, 0x30u);
  printf("%s ", (const char *)v6);
  printf("%s : lcd line %d: %s\n", "lcd_show", a1, a2);
  snprintf(byte_5FE8B0, 0x100u, "lcd line %d: %s", a1, a2);
  sub_3CC5C(byte_5FE8B0, v6);
  memset(v6, 32, 16);
  v4 = strlen(a2);
  if ( v4 > 0x10 )
    return -1;
  memcpy((char *)v6 + ((16 - v4) >> 1), a2, v4);
  return sub_6FB58(a1, v6, 16);
}

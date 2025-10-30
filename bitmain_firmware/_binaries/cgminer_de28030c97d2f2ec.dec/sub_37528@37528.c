void __fastcall sub_37528(const char *a1, const void *a2)
{
  char v4[8]; // [sp+14h] [bp-808h] BYREF
  int i; // [sp+814h] [bp-8h]

  sub_2E980((int)&unk_952D8, "cgminer.c", "set_curblock", 5583);
  sub_22308(dword_91F7C);
  strcpy(byte_953AC, a1);
  sub_2BEFC(&unk_880B8, a2, 0x20u, "cgminer.c", "set_curblock", 5586);
  sub_2EDD0(byte_88100, 0x20u, dword_91F7C);
  sub_2EA74((int)&unk_952D8, "cgminer.c", "set_curblock", 5588);
  for ( i = 0; i <= 56 && byte_953AC[i] == 48; ++i )
    ;
  strncpy(byte_880AC, &byte_953AC[i], 8u);
  byte_880B4 = 0;
  if ( byte_91F58 || byte_87769 || dword_8697C > 5 )
  {
    snprintf(v4, 0x800u, "New block: %s... diff %s", byte_953AC, byte_88120);
    sub_1E4EC(6, v4, 0);
  }
}

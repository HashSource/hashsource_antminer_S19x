void __fastcall sub_36514(const char *a1, const void *a2)
{
  char v4[8]; // [sp+14h] [bp-808h] BYREF
  int i; // [sp+814h] [bp-8h]

  sub_2D95C((int)&unk_94140, "cgminer.c", "set_curblock", 5583);
  sub_21AC0(dword_90DE4);
  strcpy(byte_94214, a1);
  sub_2AF08(&unk_86F20, a2, 0x20u, "cgminer.c", "set_curblock", 5586);
  sub_2DDC0(byte_86F68, 0x20u, dword_90DE4);
  sub_2DA5C((int)&unk_94140, "cgminer.c", "set_curblock", 5588);
  for ( i = 0; i <= 56 && byte_94214[i] == 48; ++i )
    ;
  strncpy(byte_86F14, &byte_94214[i], 8u);
  byte_86F1C = 0;
  if ( byte_90DC0 || byte_865D1 || dword_857E4 > 5 )
  {
    snprintf(v4, 0x800u, "New block: %s... diff %s", byte_94214, byte_86F88);
    sub_1DB6C(6, v4, 0);
  }
}

int sub_279BC()
{
  int v0; // r3
  int i; // r4
  unsigned __int8 v3; // r0
  char v4[2052]; // [sp+0h] [bp-804h] BYREF

  if ( byte_4B6CA6 && (byte_5BC044 || byte_4B6CA5 || dword_AFC2C > 6) )
  {
    snprintf(v4, 0x800u, "--- %s\n", "dhash_chip_set_addr_all");
    sub_3AF5C(7, v4, 0, v0);
  }
  for ( i = 0; i != 4; ++i )
  {
    if ( sub_266F0(i) )
    {
      sub_75980((unsigned __int8)i);
      sub_3D9D4(30);
      v3 = sub_265B0();
      sub_75984((unsigned __int8)i, v3);
    }
  }
  return sub_3D9D4(10);
}

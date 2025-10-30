int sub_27F10()
{
  int v0; // r3
  int i; // r4
  unsigned __int8 v3; // r0
  char v4[2052]; // [sp+0h] [bp-804h] BYREF

  if ( byte_4B9A22 && (byte_5C0EFC || byte_4B9A21 || dword_B3094 > 6) )
  {
    snprintf(v4, 0x800u, "--- %s\n", "dhash_chip_set_addr_all");
    sub_3B6AC(7, v4, 0, v0);
  }
  for ( i = 0; i != 4; ++i )
  {
    if ( sub_26C0C(i) )
    {
      sub_78DF8((unsigned __int8)i);
      sub_3E0F0(30);
      v3 = sub_26AB4();
      sub_78DFC((unsigned __int8)i, v3);
    }
  }
  return sub_3E0F0(10);
}

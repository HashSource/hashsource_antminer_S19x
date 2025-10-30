int sub_1A488()
{
  int v0; // r0
  char v2[2048]; // [sp+0h] [bp-800h] BYREF

  v0 = dword_A0624;
  if ( (unsigned int)dword_9E31C > 3 )
  {
    snprintf(v2, 0x800u, "Set to voltage raw %d, step by step.\n", dword_A0624);
    sub_47AB4(3, v2, 0);
    v0 = dword_A0624;
  }
  return sub_19D18(v0, (int)&byte_A0614);
}

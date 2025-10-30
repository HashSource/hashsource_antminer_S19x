int sub_1A1E0()
{
  int v0; // r0
  char v2[2048]; // [sp+0h] [bp-800h] BYREF

  v0 = dword_A0620;
  if ( (unsigned int)dword_9E31C > 3 )
  {
    snprintf(v2, 0x800u, "Set to voltage raw %d, one step.\n", dword_A0620);
    sub_47AB4(3, v2, 0);
    v0 = dword_A0620;
  }
  return sub_19CA0(v0);
}

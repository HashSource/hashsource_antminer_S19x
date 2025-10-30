int __fastcall sub_1A4F0(int a1)
{
  char v3[2048]; // [sp+0h] [bp-800h] BYREF

  if ( (unsigned int)dword_9E31C > 3 )
  {
    snprintf(v3, 0x800u, "Set to voltage raw %d, step by step.\n", a1);
    sub_47AB4(3, v3, 0);
  }
  return sub_19D18(a1, (int)&byte_A0614);
}

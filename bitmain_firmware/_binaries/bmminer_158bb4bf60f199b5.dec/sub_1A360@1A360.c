int __fastcall sub_1A360(int a1)
{
  char v3[2048]; // [sp+0h] [bp-800h] BYREF

  if ( (unsigned int)dword_9E31C > 3 )
  {
    snprintf(v3, 0x800u, "Set to voltage raw %d, one step\n", a1);
    sub_47AB4(3, v3, 0);
  }
  return sub_19CA0(a1);
}

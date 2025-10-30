int __fastcall sub_687C8(int a1)
{
  char v3[2048]; // [sp+0h] [bp-800h] BYREF

  if ( sub_69B8C() == a1 )
    return 256;
  if ( sub_69BA8() == a1 )
    return 257;
  snprintf(v3, 0x800u, "unmaped port = %d\n", a1);
  sub_47AB4(0, v3, 0);
  return 258;
}

int __fastcall sub_6F5BC(int a1)
{
  char v3[2048]; // [sp+0h] [bp-800h] BYREF

  if ( sub_6FEE0() == a1 )
    return 256;
  if ( a1 == sub_6FEE8() )
    return 257;
  snprintf(v3, 0x800u, "unmaped port = %d\n", a1);
  nullsub_8();
  return 259;
}

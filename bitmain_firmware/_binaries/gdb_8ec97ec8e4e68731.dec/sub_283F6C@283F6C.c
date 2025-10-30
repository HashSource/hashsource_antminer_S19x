int __fastcall sub_283F6C(int a1)
{
  int result; // r0
  _BYTE v3[8]; // [sp+0h] [bp-8h] BYREF

  result = ioctl(a1, 0x5413u, v3);
  if ( !result )
    return ioctl(a1, 0x5414u, v3);
  return result;
}

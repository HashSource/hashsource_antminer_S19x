int __fastcall sub_152D58(int a1, unsigned int a2, unsigned int a3)
{
  __int64 v4; // r6
  struct pollfd v6; // [sp+0h] [bp-Ch] BYREF

  v4 = __PAIR64__(a3, a2);
  if ( !byte_46D454 )
    return sub_1524F0(a1, 10, v4);
  v6.fd = a1;
  v6.events = 1;
  if ( poll(&v6, 1u, 0) == 1 && (v6.revents & 0x20) != 0 )
  {
    byte_46D454 = 0;
    return sub_1524F0(a1, 10, v4);
  }
  if ( !byte_46D454 )
    return sub_1524F0(a1, 10, v4);
  return sub_1524F0(a1, 1, v4);
}

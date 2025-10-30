char *__fastcall sub_134EC(unsigned int a1)
{
  unsigned int v1; // r4
  char v3[12]; // [sp+0h] [bp-14h] BYREF

  v1 = a1;
  byte_B8614[0] = 0;
  if ( (a1 & 1) != 0 )
  {
    v1 = a1 & 0xFFFFFFFE;
    sub_D504(byte_B8614, "up");
  }
  if ( (v1 & 2) != 0 )
  {
    v1 &= ~2u;
    sub_D504(byte_B8614, "ppp");
  }
  if ( (v1 & 4) != 0 )
  {
    v1 &= ~4u;
    sub_D504(byte_B8614, "loopback");
  }
  if ( (v1 & 8) != 0 )
  {
    v1 &= ~8u;
    sub_D504(byte_B8614, "broadcast");
  }
  if ( (v1 & 0x10) != 0 )
  {
    v1 &= ~0x10u;
    sub_D504(byte_B8614, "multicast");
  }
  if ( (v1 & 0x20) != 0 )
  {
    v1 &= ~0x20u;
    sub_D504(byte_B8614, "bcastopen");
  }
  if ( (v1 & 0x40) != 0 )
  {
    v1 &= ~0x40u;
    sub_D504(byte_B8614, "mcastopen");
  }
  if ( (v1 & 0x80) != 0 )
  {
    v1 &= ~0x80u;
    sub_D504(byte_B8614, "wildcard");
  }
  if ( (v1 & 0x100) != 0 )
  {
    v1 &= ~0x100u;
    sub_D504(byte_B8614, "MCASTif");
  }
  if ( (v1 & 0x200) != 0 )
  {
    v1 &= ~0x200u;
    sub_D504(byte_B8614, "IPv6privacy");
  }
  if ( (v1 & 0x400) != 0 )
  {
    v1 &= ~0x400u;
    sub_D504(byte_B8614, "bcastxmit");
  }
  if ( v1 )
  {
    sub_6C054(v3, 10, "%0x", v1);
    sub_D504(byte_B8614, v3);
  }
  return byte_B8614;
}

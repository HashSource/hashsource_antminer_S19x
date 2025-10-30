char *__fastcall sub_13A10(int a1)
{
  int v1; // r4
  char v3[12]; // [sp+0h] [bp-14h] BYREF

  v1 = a1;
  byte_B9A14[0] = 0;
  if ( (a1 & 0x2000) != 0 )
  {
    v1 = a1 & 0xDFFF;
    sub_D608(byte_B9A14, "ntponly");
  }
  if ( (v1 & 0x4000) != 0 )
  {
    v1 &= 0xBFFFu;
    sub_D608(byte_B9A14, "source");
  }
  if ( v1 )
  {
    sub_6D00C(v3, 10, "%0x", v1);
    sub_D608(byte_B9A14, v3);
  }
  return byte_B9A14;
}

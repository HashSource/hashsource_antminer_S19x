char *__fastcall sub_1379C(int a1)
{
  int v1; // r4
  char v3[12]; // [sp+0h] [bp-14h] BYREF

  v1 = a1;
  byte_B8A14[0] = 0;
  if ( (a1 & 0x2000) != 0 )
  {
    v1 = a1 & 0xDFFF;
    sub_D504(byte_B8A14, "ntponly");
  }
  if ( (v1 & 0x4000) != 0 )
  {
    v1 &= 0xBFFFu;
    sub_D504(byte_B8A14, "source");
  }
  if ( v1 )
  {
    sub_6C054(v3, 10, "%0x", v1);
    sub_D504(byte_B8A14, v3);
  }
  return byte_B8A14;
}

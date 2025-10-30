int sub_400C8()
{
  int v0; // r0
  int v1; // r5
  int v2; // r4
  int v3; // r3
  int v5; // r3
  char s[2052]; // [sp+8h] [bp-804h] BYREF

  sub_5B848(byte_9C8A20, 32);
  if ( (unsigned int)off_AFC24 > 3 )
  {
    snprintf(s, 0x800u, "miner ID : %s\n", byte_9C8A20);
    sub_3AF5C(3, s, 0, v5);
  }
  v0 = sub_5CDD8();
  v1 = BYTE2(v0);
  v2 = (unsigned __int8)v0;
  if ( (unsigned int)off_AFC24 > 3 )
  {
    snprintf(s, 0x800u, "FPGA Version = 0x%04X\n", (unsigned __int16)v0);
    sub_3AF5C(3, s, 0, v3);
  }
  return sprintf(byte_B41BC, "%d.%d.%d.%d", v2, v1, 1, 3);
}

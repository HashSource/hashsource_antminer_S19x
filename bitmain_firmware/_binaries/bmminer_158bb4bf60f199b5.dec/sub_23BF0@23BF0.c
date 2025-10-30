int sub_23BF0()
{
  int v0; // r0
  int v1; // r5
  int v2; // r4
  char s[2052]; // [sp+8h] [bp-804h] BYREF

  sub_6FB84(byte_241D24, 32);
  if ( (unsigned int)dword_9E31C > 3 )
  {
    snprintf(s, 0x800u, "miner ID : %s\n", byte_241D24);
    sub_47AB4(3, s, 0);
  }
  v0 = sub_70CC0();
  v1 = BYTE2(v0);
  v2 = (unsigned __int8)v0;
  if ( (unsigned int)dword_9E31C > 3 )
  {
    snprintf(s, 0x800u, "FPGA Version = 0x%04X\n", (unsigned __int16)v0);
    sub_47AB4(3, s, 0);
  }
  return sprintf(byte_1B0A18, "%d.%d.%d.%d", v2, v1, 1, 3);
}

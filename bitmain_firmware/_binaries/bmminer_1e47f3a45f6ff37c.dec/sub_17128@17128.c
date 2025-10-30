int sub_17128()
{
  float v0; // s0
  int v1; // r3
  int result; // r0
  char v3[2056]; // [sp-808h] [bp-808h] BYREF

  flt_B3BF0 = v0;
  if ( (unsigned int)dword_B308C > 3 )
  {
    snprintf(v3, 0x800u, "re init fan pid target=%d", (int)v0);
    return sub_3B6AC(3, v3, 0, v1);
  }
  return result;
}

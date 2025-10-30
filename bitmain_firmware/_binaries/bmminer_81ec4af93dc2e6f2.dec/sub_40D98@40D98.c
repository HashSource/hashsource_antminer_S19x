int sub_40D98()
{
  int v0; // r3
  char s; // [sp+8h] [bp-804h] BYREF

  BYTE2(off_AFE7C) = dword_B418C;
  BYTE1(off_AFE7C) = dword_B4188;
  if ( (unsigned int)off_AFC24 > 3 )
  {
    snprintf(
      &s,
      0x800u,
      "pulse_mode = %d, ccdly_sel = %d, pwth_sel = %d\n",
      (unsigned __int8)off_AFE7C,
      (unsigned __int8)dword_B418C,
      (unsigned __int8)dword_B4188);
    sub_3AF5C(3, &s, 0, v0);
  }
  return (unsigned __int8)off_AFE7C | (unsigned __int16)(BYTE1(off_AFE7C) << 8) | (BYTE2(off_AFE7C) << 16);
}

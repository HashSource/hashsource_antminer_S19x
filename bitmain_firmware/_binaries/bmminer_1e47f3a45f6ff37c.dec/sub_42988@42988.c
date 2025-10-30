int sub_42988()
{
  char *v0; // r4
  int v1; // r3
  char v2; // r3^2
  unsigned __int8 v3; // r12
  unsigned __int8 v4; // r2
  char s[2052]; // [sp+8h] [bp-804h] BYREF

  if ( (unsigned int)dword_B308C <= 3 )
    v0 = s;
  BYTE2(off_B32E4) = dword_B6F04;
  BYTE1(off_B32E4) = dword_B6F00;
  if ( (unsigned int)dword_B308C > 3 )
  {
    v0 = s;
    snprintf(
      s,
      0x800u,
      "pulse_mode = %d, ccdly_sel = %d, pwth_sel = %d\n",
      (unsigned __int8)off_B32E4,
      (unsigned __int8)dword_B6F04,
      (unsigned __int8)dword_B6F00);
    sub_3B6AC(3, s, 0, v1);
  }
  v2 = BYTE2(off_B32E4);
  *(_WORD *)v0 = (_WORD)off_B32E4;
  v3 = s[0];
  v4 = s[1];
  v0[2] = v2;
  return v3 | (unsigned __int16)(v4 << 8) | ((unsigned __int8)s[2] << 16);
}

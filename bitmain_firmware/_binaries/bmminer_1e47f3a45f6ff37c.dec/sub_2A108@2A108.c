int __fastcall sub_2A108(int a1)
{
  int v2; // r4
  int v3; // r3
  int v4; // r0
  char v6[2052]; // [sp+0h] [bp-804h] BYREF

  v2 = dword_B401C;
  if ( (unsigned int)dword_B308C > 4 )
  {
    snprintf(v6, 0x800u, "error_code = %d\n", dword_B401C);
    sub_3B6AC(4, v6, 0, v3);
  }
  v4 = sub_77C3C(v2, v2 >> 31);
  return sub_7611C(a1, "error_code", v4);
}

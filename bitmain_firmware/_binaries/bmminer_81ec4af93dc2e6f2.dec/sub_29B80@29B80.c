int __fastcall sub_29B80(int a1)
{
  int v2; // r4
  int v3; // r3
  int v4; // r0
  char v6[2052]; // [sp+0h] [bp-804h] BYREF

  v2 = dword_B12AC;
  if ( (unsigned int)off_AFC24 > 4 )
  {
    snprintf(v6, 0x800u, "error_code = %d\n", dword_B12AC);
    sub_3AF5C(4, v6, 0, v3);
  }
  v4 = sub_74774(v2, v2 >> 31);
  return sub_72C40(a1, "error_code", v4);
}

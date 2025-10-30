int sub_17048()
{
  int v0; // r3
  int v1; // r2
  int result; // r0
  int v3; // r3
  char v4[2048]; // [sp+0h] [bp-800h] BYREF

  v0 = dword_B6EB4;
  dword_B3C00 = -1059481190;
  LOWORD(v1) = -13107;
  if ( dword_B6EB4 == 2 )
    v0 = 0;
  HIWORD(v1) = -16820;
  if ( dword_B6EB4 == 2 )
    HIWORD(v0) = -16056;
  dword_B3C04 = -1061997773;
  if ( dword_B6EB4 == 2 )
    dword_B3C00 = v0;
  dword_B3C08 = v1;
  dword_B3C0C = 0;
  result = sub_273D8();
  dword_B3BEC = 1101004800;
  dword_B3BE8[0] = 1120403456;
  flt_B3BF0 = (float)result;
  if ( (unsigned int)dword_B308C > 3 )
  {
    snprintf(v4, 0x800u, "init fan pid target=%d", (int)(float)result);
    return sub_3B6AC(3, v4, 0, v3);
  }
  return result;
}

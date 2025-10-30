int sub_16D38()
{
  int v0; // r3
  int result; // r0
  int v2; // r3
  char v3[2048]; // [sp+0h] [bp-800h] BYREF

  v0 = dword_B413C;
  flt_B0E90 = -6.8;
  if ( dword_B413C == 2 )
    v0 = -1052246016;
  flt_B0E94 = -5.6;
  if ( dword_B413C == 2 )
    LODWORD(flt_B0E90) = v0;
  flt_B0E98 = -0.2;
  flt_B0E9C = 0.0;
  result = sub_26E84();
  flt_B0E78[0] = 100.0;
  flt_B0E7C = 20.0;
  flt_B0E80 = (float)result;
  if ( (unsigned int)off_AFC24 > 3 )
  {
    snprintf(v3, 0x800u, "init fan pid target=%d", (int)(float)result);
    return sub_3AF5C(3, v3, 0, v2);
  }
  return result;
}

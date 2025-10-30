int sub_20A38()
{
  time_t v0; // r0
  __int64 v1; // r6
  int v2; // r3
  int v3; // r5
  double v4; // r0
  char s[2052]; // [sp+10h] [bp-804h] BYREF

  v0 = sub_20A08();
  v1 = qword_241D50;
  v2 = dword_A06BC;
  dword_A06BC = v0;
  v3 = v0 - v2;
  v4 = sub_778A4((int)qword_241D50 - (int)qword_A06C0, (unsigned __int64)(qword_241D50 - qword_A06C0) >> 32);
  qword_A06C0 = v1;
  dbl_241D48 = v4 * 4294967300.0 / 1000000000.0 / (double)v3;
  if ( (unsigned int)dword_9E31C > 3 )
  {
    snprintf(s, 0x800u, "avg rate is %0.2f in %ld mins\n", v4 * 4294967300.0 / 1000000000.0 / (double)v3, v3 / 60);
    LODWORD(v4) = sub_47AB4(3, s, 0);
  }
  return LODWORD(v4);
}

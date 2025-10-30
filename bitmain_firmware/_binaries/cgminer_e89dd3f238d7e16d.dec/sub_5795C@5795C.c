int __fastcall sub_5795C(int a1, int a2)
{
  char v5[8]; // [sp+14h] [bp-808h] BYREF
  _BYTE v6[4]; // [sp+814h] [bp-8h] BYREF

  if ( byte_865D0 && (byte_90DC0 || byte_865D1 || dword_857E4 > 6) )
  {
    snprintf(v5, 0x800u, "about to send job, size is %d", a2);
    sub_1DB6C(7, v5, 0);
  }
  return sub_5E630(aBitmainUpdateJ, a1, a2, v6, 0, 0);
}

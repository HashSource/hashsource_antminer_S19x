int __fastcall sub_584D0(int a1, int a2)
{
  char v5[8]; // [sp+14h] [bp-808h] BYREF
  _BYTE v6[4]; // [sp+814h] [bp-8h] BYREF

  if ( byte_87768 && (byte_91F58 || byte_87769 || dword_8697C > 6) )
  {
    snprintf(v5, 0x800u, "about to send job, size is %d", a2);
    sub_1E4EC(7, v5, 0);
  }
  return sub_5F30C(aBitmainUpdateJ, a1, a2, v6, 0, 0);
}

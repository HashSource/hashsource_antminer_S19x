int __fastcall sub_583F0(int a1, int a2)
{
  char v5[2048]; // [sp+14h] [bp-808h] BYREF
  _BYTE v6[4]; // [sp+814h] [bp-8h] BYREF

  if ( byte_91F58 || byte_87769 || dword_8697C > 4 )
  {
    strcpy(v5, "about to send detect");
    sub_1E4EC(5, v5, 0);
  }
  return sub_5F30C(aBitmainApiDete, a1, a2, v6, 0, 0);
}

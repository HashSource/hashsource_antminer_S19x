int __fastcall sub_5787C(int a1, int a2)
{
  char v5[2048]; // [sp+14h] [bp-808h] BYREF
  _BYTE v6[4]; // [sp+814h] [bp-8h] BYREF

  if ( byte_90DC0 || byte_865D1 || dword_857E4 > 4 )
  {
    strcpy(v5, "about to send detect");
    sub_1DB6C(5, v5, 0);
  }
  return sub_5E630(aBitmainApiDete, a1, a2, v6, 0, 0);
}

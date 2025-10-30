int __fastcall sub_57A3C(int a1, int a2)
{
  char v5[2048]; // [sp+14h] [bp-808h] BYREF
  _BYTE v6[4]; // [sp+814h] [bp-8h] BYREF

  if ( byte_865D0 && (byte_90DC0 || byte_865D1 || dword_857E4 > 6) )
  {
    strcpy(v5, "about to send a flush api semaphore");
    sub_1DB6C(7, v5, 0);
  }
  return sub_5E630(aBitmainFlushAp, a1, a2, v6, 0, 0);
}

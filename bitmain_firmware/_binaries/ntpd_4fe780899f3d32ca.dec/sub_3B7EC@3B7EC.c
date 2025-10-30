int __fastcall sub_3B7EC(int a1, int a2, int a3)
{
  char v3; // r7
  char v4; // r6

  v3 = *(_BYTE *)(a3 + 2);
  dword_BCB28 = a1;
  dword_BC91C = 16;
  v4 = *(_BYTE *)(a3 + 3);
  dword_BCB24 = a2;
  byte_BC926 = v3;
  byte_BC927 = v4;
  dword_BCB20 = 0;
  dword_BC910 = 0;
  dword_BC914 = 0;
  dword_BC918 = 0;
  word_BC92A = 4096;
  dword_BC92C = bswap32(current_time - timer_timereset);
  dword_BC930 = dword_BC92C;
  dword_BC934 = bswap32(alarm_overflow);
  dword_BC938 = bswap32(timer_xmtcalls);
  sub_3A918();
  return sub_3B02C();
}

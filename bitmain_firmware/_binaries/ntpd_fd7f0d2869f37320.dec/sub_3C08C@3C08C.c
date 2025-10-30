int __fastcall sub_3C08C(int a1, int a2, int a3)
{
  char v3; // r1
  char v4; // r2

  dword_BDB3C = a1;
  dword_BDB38 = a2;
  v3 = *(_BYTE *)(a3 + 2);
  v4 = *(_BYTE *)(a3 + 3);
  byte_BD93A = v3;
  byte_BD93B = v4;
  dword_BD92C = 16;
  dword_BDB34 = 0;
  dword_BD930 = 0;
  dword_BD928 = 0;
  dword_BD924 = 0;
  word_BD93E = 4096;
  dword_BD940 = bswap32(current_time - timer_timereset);
  dword_BD944 = dword_BD940;
  dword_BD948 = bswap32(alarm_overflow);
  dword_BD94C = bswap32(timer_xmtcalls);
  sub_3B168();
  return sub_3B8C4();
}

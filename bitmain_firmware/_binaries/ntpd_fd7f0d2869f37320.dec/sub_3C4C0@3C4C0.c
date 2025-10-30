int __fastcall sub_3C4C0(int a1, int a2, int a3)
{
  char v3; // r3
  char v4; // r0
  __int16 v5; // r0
  __int16 v6; // r0
  __int16 v7; // r0
  __int16 v8; // r0

  v3 = *(_BYTE *)(a3 + 3);
  dword_BDB38 = a2;
  dword_BDB3C = a1;
  v4 = *(_BYTE *)(a3 + 2);
  dword_BD92C = 40;
  word_BD93E = 10240;
  byte_BD93B = v3;
  byte_BD93A = v4;
  dword_BDB34 = 0;
  dword_BD930 = 0;
  dword_BD928 = 0;
  dword_BD924 = 0;
  dword_BD940 = bswap32(current_time - io_timereset);
  v5 = sub_6AD80();
  LOWORD(dword_BD944) = HIBYTE(v5) | (unsigned __int16)(v5 << 8);
  v6 = sub_6ACD8();
  HIWORD(dword_BD944) = HIBYTE(v6) | (unsigned __int16)(v6 << 8);
  v7 = sub_6AD2C();
  LOWORD(dword_BD948) = HIBYTE(v7) | (unsigned __int16)(v7 << 8);
  v8 = sub_6ADD4();
  HIWORD(dword_BD948) = HIBYTE(v8) | (unsigned __int16)(v8 << 8);
  dword_BD94C = bswap32(packets_dropped);
  dword_BD950 = bswap32(packets_ignored);
  dword_BD954 = bswap32(packets_received);
  dword_BD958 = bswap32(packets_sent);
  dword_BD95C = bswap32(packets_notsent);
  dword_BD960 = bswap32(handler_calls);
  dword_BD964 = bswap32(handler_pkts);
  sub_3B168();
  return sub_3B8C4();
}

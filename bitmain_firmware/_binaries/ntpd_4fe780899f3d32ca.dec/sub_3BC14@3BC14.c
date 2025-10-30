int __fastcall sub_3BC14(int a1, int a2, int a3)
{
  char v3; // r0

  dword_BCB24 = a2;
  dword_BCB28 = a1;
  dword_BC91C = 40;
  v3 = *(_BYTE *)(a3 + 3);
  byte_BC926 = *(_BYTE *)(a3 + 2);
  word_BC92A = 10240;
  dword_BCB20 = 0;
  dword_BC910 = 0;
  dword_BC914 = 0;
  dword_BC918 = 0;
  byte_BC927 = v3;
  dword_BC92C = bswap32(current_time - io_timereset);
  LOWORD(dword_BC930) = __rev16(sub_69E00());
  HIWORD(dword_BC930) = __rev16(sub_69D58());
  LOWORD(dword_BC934) = __rev16(sub_69DAC());
  HIWORD(dword_BC934) = __rev16(sub_69E54());
  dword_BC938 = bswap32(packets_dropped);
  dword_BC93C = bswap32(packets_ignored);
  dword_BC940 = bswap32(packets_received);
  dword_BC944 = bswap32(packets_sent);
  dword_BC948 = bswap32(packets_notsent);
  dword_BC94C = bswap32(handler_calls);
  dword_BC950 = bswap32(handler_pkts);
  sub_3A918();
  return sub_3B02C();
}

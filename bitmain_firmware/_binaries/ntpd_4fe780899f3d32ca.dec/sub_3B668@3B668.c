int __fastcall sub_3B668(int a1, int a2, int a3)
{
  char v3; // lr
  char v4; // r6

  v3 = *(_BYTE *)(a3 + 3);
  dword_BC91C = 36;
  v4 = *(_BYTE *)(a3 + 2);
  dword_BCB28 = a1;
  dword_BCB24 = a2;
  byte_BC926 = v4;
  byte_BC927 = v3;
  dword_BCB20 = 0;
  dword_BC910 = 0;
  dword_BC914 = 0;
  dword_BC918 = 0;
  word_BC92A = 9216;
  dword_BC930 = bswap32(authnumkeys);
  dword_BC934 = bswap32(authnumfreekeys);
  dword_BC938 = bswap32(authkeylookups);
  dword_BC93C = bswap32(authkeynotfound);
  dword_BC940 = bswap32(authencryptions);
  dword_BC944 = bswap32(authdecryptions);
  dword_BC94C = bswap32(authkeyuncached);
  dword_BC948 = bswap32(authkeyexpired);
  dword_BC92C = bswap32(current_time - auth_timereset);
  sub_3A918();
  return sub_3B02C();
}

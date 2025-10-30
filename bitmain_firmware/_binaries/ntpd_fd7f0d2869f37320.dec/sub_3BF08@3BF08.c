int __fastcall sub_3BF08(int a1, int a2, int a3)
{
  char v3; // r0
  char v4; // r2

  dword_BDB38 = a2;
  dword_BDB3C = a1;
  v3 = *(_BYTE *)(a3 + 2);
  v4 = *(_BYTE *)(a3 + 3);
  byte_BD93A = v3;
  byte_BD93B = v4;
  dword_BD92C = 36;
  dword_BDB34 = 0;
  dword_BD930 = 0;
  dword_BD928 = 0;
  dword_BD924 = 0;
  word_BD93E = 9216;
  dword_BD944 = bswap32(authnumkeys);
  dword_BD948 = bswap32(authnumfreekeys);
  dword_BD94C = bswap32(authkeylookups);
  dword_BD950 = bswap32(authkeynotfound);
  dword_BD954 = bswap32(authencryptions);
  dword_BD958 = bswap32(authdecryptions);
  dword_BD960 = bswap32(authkeyuncached);
  dword_BD95C = bswap32(authkeyexpired);
  dword_BD940 = bswap32(current_time - auth_timereset);
  sub_3B168();
  return sub_3B8C4();
}

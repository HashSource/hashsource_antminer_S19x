int __fastcall sub_3BCF4(int a1, int a2, int a3)
{
  char v3; // r1
  char v4; // r2

  dword_BDB3C = a1;
  dword_BDB38 = a2;
  v3 = *(_BYTE *)(a3 + 2);
  v4 = *(_BYTE *)(a3 + 3);
  byte_BD93A = v3;
  byte_BD93B = v4;
  dword_BD92C = 60;
  dword_BDB34 = 0;
  dword_BD930 = 0;
  dword_BD928 = 0;
  dword_BD924 = 0;
  word_BD93E = 15360;
  dword_BD940 = bswap32(current_time - ctltimereset);
  dword_BD944 = bswap32(numctlreq);
  dword_BD948 = bswap32(numctlbadpkts);
  dword_BD94C = bswap32(numctlresponses);
  dword_BD950 = bswap32(numctlfrags);
  dword_BD954 = bswap32(numctlerrors);
  dword_BD958 = bswap32(numctltooshort);
  dword_BD95C = bswap32(numctlinputresp);
  dword_BD960 = bswap32(numctlinputfrag);
  dword_BD964 = bswap32(numctlinputerr);
  dword_BD968 = bswap32(numctlbadoffset);
  dword_BD96C = bswap32(numctlbadversion);
  dword_BD970 = bswap32(numctldatatooshort);
  dword_BD974 = bswap32(numctlbadop);
  dword_BD978 = bswap32(numasyncmsgs);
  sub_3B168();
  return sub_3B8C4();
}

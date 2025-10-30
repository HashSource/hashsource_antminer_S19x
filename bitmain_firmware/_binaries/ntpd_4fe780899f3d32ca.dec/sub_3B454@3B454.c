int __fastcall sub_3B454(int a1, int a2, int a3)
{
  char v3; // r7
  char v4; // r6

  v3 = *(_BYTE *)(a3 + 2);
  dword_BCB28 = a1;
  dword_BC91C = 60;
  v4 = *(_BYTE *)(a3 + 3);
  dword_BCB24 = a2;
  byte_BC927 = v4;
  byte_BC926 = v3;
  word_BC92A = 15360;
  dword_BCB20 = 0;
  dword_BC910 = 0;
  dword_BC914 = 0;
  dword_BC918 = 0;
  dword_BC92C = bswap32(current_time - ctltimereset);
  dword_BC930 = bswap32(numctlreq);
  dword_BC934 = bswap32(numctlbadpkts);
  dword_BC938 = bswap32(numctlresponses);
  dword_BC93C = bswap32(numctlfrags);
  dword_BC940 = bswap32(numctlerrors);
  dword_BC944 = bswap32(numctltooshort);
  dword_BC948 = bswap32(numctlinputresp);
  dword_BC94C = bswap32(numctlinputfrag);
  dword_BC950 = bswap32(numctlinputerr);
  dword_BC954 = bswap32(numctlbadoffset);
  dword_BC958 = bswap32(numctlbadversion);
  dword_BC95C = bswap32(numctldatatooshort);
  dword_BC960 = bswap32(numctlbadop);
  dword_BC964 = bswap32(numasyncmsgs);
  sub_3A918();
  return sub_3B02C();
}

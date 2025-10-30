int __fastcall sub_3BDB0(int a1, int a2, int a3)
{
  char v3; // lr
  char v4; // r6

  v3 = *(_BYTE *)(a3 + 3);
  dword_BC91C = 52;
  v4 = *(_BYTE *)(a3 + 2);
  dword_BCB28 = a1;
  dword_BCB24 = a2;
  byte_BC926 = v4;
  byte_BC927 = v3;
  dword_BCB20 = 0;
  dword_BC910 = 0;
  dword_BC914 = 0;
  dword_BC918 = 0;
  word_BC92A = 13312;
  dword_BC92C = bswap32(current_time);
  dword_BC930 = bswap32(current_time - sys_stattime);
  dword_BC934 = bswap32(sys_restricted);
  dword_BC938 = bswap32(sys_oldversion);
  dword_BC93C = bswap32(sys_newversion);
  dword_BC940 = bswap32(sys_declined);
  dword_BC944 = bswap32(sys_badlength);
  dword_BC948 = bswap32(sys_processed);
  dword_BC94C = bswap32(sys_badauth);
  dword_BC954 = bswap32(sys_limitrejected);
  dword_BC950 = bswap32(sys_received);
  dword_BC958 = bswap32(sys_lamport);
  dword_BC95C = bswap32(sys_tsrounding);
  sub_3A918();
  return sub_3B02C();
}

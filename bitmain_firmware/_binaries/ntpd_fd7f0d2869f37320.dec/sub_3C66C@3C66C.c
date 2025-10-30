int __fastcall sub_3C66C(int a1, int a2, int a3)
{
  char v3; // r0
  char v4; // r2

  dword_BDB38 = a2;
  dword_BDB3C = a1;
  v3 = *(_BYTE *)(a3 + 2);
  v4 = *(_BYTE *)(a3 + 3);
  byte_BD93A = v3;
  byte_BD93B = v4;
  dword_BD92C = 52;
  word_BD93E = 13312;
  dword_BDB34 = 0;
  dword_BD930 = 0;
  dword_BD928 = 0;
  dword_BD924 = 0;
  dword_BD940 = bswap32(current_time);
  dword_BD944 = bswap32(current_time - sys_stattime);
  dword_BD948 = bswap32(sys_restricted);
  dword_BD94C = bswap32(sys_oldversion);
  dword_BD950 = bswap32(sys_newversion);
  dword_BD954 = bswap32(sys_declined);
  dword_BD958 = bswap32(sys_badlength);
  dword_BD95C = bswap32(sys_processed);
  dword_BD960 = bswap32(sys_badauth);
  dword_BD968 = bswap32(sys_limitrejected);
  dword_BD964 = bswap32(sys_received);
  dword_BD96C = bswap32(sys_lamport);
  dword_BD970 = bswap32(sys_tsrounding);
  sub_3B168();
  return sub_3B8C4();
}

int __fastcall sub_3C348(int a1, int a2, int a3)
{
  char v3; // r1
  char v4; // r2
  char *v5; // r2
  int *v6; // r1
  char v7; // r3
  unsigned int v8; // t1

  dword_BDB3C = a1;
  dword_BDB38 = a2;
  v3 = *(_BYTE *)(a3 + 2);
  v4 = *(_BYTE *)(a3 + 3);
  byte_BD93A = v3;
  byte_BD93B = v4;
  v5 = (char *)&dword_BD950 + 3;
  word_BD93E = -27648;
  dword_BDB34 = 0;
  dword_BD930 = 0;
  dword_BD928 = 0;
  dword_BD924 = 0;
  dword_BD92C = 148;
  dword_BD940 = bswap32(current_time - peer_timereset);
  LOWORD(dword_BD944) = BYTE1(total_peer_structs) | (unsigned __int16)((_WORD)total_peer_structs << 8);
  HIWORD(dword_BD944) = BYTE1(peer_free_count) | (unsigned __int16)((_WORD)peer_free_count << 8);
  dword_BD948 = bswap32(findpeer_calls);
  dword_BD94C = bswap32(peer_allocations);
  dword_BD950 = bswap32(peer_demobilizations);
  v6 = &peer_demobilizations;
  do
  {
    v8 = v6[1];
    ++v6;
    v7 = v8;
    if ( v8 <= 0xFF )
      v7 = -1;
    *++v5 = v7;
  }
  while ( v5 != (char *)&unk_BD9D3 );
  sub_3B168();
  return sub_3B8C4();
}

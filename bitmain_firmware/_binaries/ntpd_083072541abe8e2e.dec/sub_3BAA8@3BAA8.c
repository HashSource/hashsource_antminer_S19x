int __fastcall sub_3BAA8(int a1, int a2, int a3)
{
  char v3; // r1
  char v4; // r7
  char *v5; // r1
  int *v6; // r2
  char v7; // r3
  unsigned int v8; // t1

  dword_BCB24 = a2;
  dword_BC91C = 148;
  v3 = *(_BYTE *)(a3 + 3);
  v4 = *(_BYTE *)(a3 + 2);
  dword_BCB28 = a1;
  byte_BC927 = v3;
  v5 = (char *)&dword_BC93C + 3;
  byte_BC926 = v4;
  word_BC92A = -27648;
  dword_BCB20 = 0;
  dword_BC910 = 0;
  dword_BC914 = 0;
  dword_BC918 = 0;
  dword_BC92C = bswap32(current_time - peer_timereset);
  LOWORD(dword_BC930) = __rev16(total_peer_structs);
  HIWORD(dword_BC930) = __rev16(peer_free_count);
  dword_BC934 = bswap32(findpeer_calls);
  dword_BC938 = bswap32(peer_allocations);
  dword_BC93C = bswap32(peer_demobilizations);
  v6 = &peer_demobilizations;
  do
  {
    v8 = v6[1];
    ++v6;
    v7 = v8;
    if ( v8 < 0xFF )
      v7 = -1;
    *++v5 = v7;
  }
  while ( v6 != &peer_hash_count[127] );
  sub_3A918();
  return sub_3B02C();
}

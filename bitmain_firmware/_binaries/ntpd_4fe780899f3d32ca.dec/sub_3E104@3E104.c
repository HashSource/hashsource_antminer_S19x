int __fastcall sub_3E104(struct sockaddr *a1, int a2, int a3)
{
  struct timex *v6; // r0
  char v7; // r0
  char v8; // r2
  unsigned int s[32]; // [sp+Ch] [bp-88h] BYREF

  if ( !pll_control )
    return sub_3AD58(a1, a2, *(_BYTE *)(a3 + 2), *(_BYTE *)(a3 + 3), 4);
  v6 = (struct timex *)memset(s, 0, sizeof(s));
  if ( adjtimex(v6) < 0 )
    sub_64E00(3, "get_kernel_info: ntp_adjtime() failed: %m");
  v7 = *(_BYTE *)(a3 + 3);
  dword_BCB28 = (int)a1;
  v8 = *(_BYTE *)(a3 + 2);
  dword_BC91C = 60;
  byte_BC927 = v7;
  byte_BC926 = v8;
  dword_BC930 = bswap32(s[2]);
  dword_BC938 = bswap32(s[4]);
  dword_BC934 = bswap32(s[3]);
  dword_BC940 = bswap32(s[6]);
  dword_BC948 = bswap32(s[8]);
  dword_BC950 = bswap32(s[13]);
  dword_BC94C = bswap32(s[12]);
  word_BC92A = 15360;
  LOWORD(dword_BC93C) = __rev16(s[5]);
  dword_BCB24 = a2;
  dword_BC92C = bswap32(s[1]);
  dword_BC944 = bswap32(s[7]);
  dword_BCB20 = 0;
  dword_BC910 = 0;
  dword_BC914 = 0;
  dword_BC918 = 0;
  HIWORD(dword_BC93C) = __rev16(s[14]);
  dword_BC954 = bswap32(s[15]);
  dword_BC958 = bswap32(s[16]);
  dword_BC95C = bswap32(s[17]);
  dword_BC960 = bswap32(s[18]);
  dword_BC964 = bswap32(s[19]);
  sub_3A918();
  return sub_3B02C();
}

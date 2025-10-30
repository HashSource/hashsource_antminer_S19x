int __fastcall sub_3F39C(struct sockaddr *a1, int a2, int a3)
{
  char v6; // r8
  char v7; // lr
  struct timex s; // [sp+Ch] [bp-84h] BYREF

  if ( !pll_control )
    return sub_3B5D8(a1, a2, *(_BYTE *)(a3 + 2), *(_BYTE *)(a3 + 3), 4);
  memset(&s, 0, sizeof(s));
  if ( adjtimex(&s) < 0 )
    sub_65D40(3, "get_kernel_info: ntp_adjtime() failed: %m");
  v6 = *(_BYTE *)(a3 + 2);
  v7 = *(_BYTE *)(a3 + 3);
  dword_BD92C = 60;
  LOWORD(dword_BD950) = BYTE1(s.status) | (unsigned __int16)(LOWORD(s.status) << 8);
  byte_BD93B = v7;
  dword_BD940 = bswap32(s.offset);
  word_BD93E = 15360;
  dword_BD944 = bswap32(s.freq);
  dword_BD948 = bswap32(s.maxerror);
  dword_BD94C = bswap32(s.esterror);
  dword_BD954 = bswap32(s.constant);
  dword_BD958 = bswap32(s.precision);
  dword_BD95C = bswap32(s.tolerance);
  dword_BD960 = bswap32(s.ppsfreq);
  dword_BDB34 = 0;
  dword_BD930 = 0;
  dword_BD928 = 0;
  dword_BD924 = 0;
  dword_BDB3C = (int)a1;
  dword_BDB38 = a2;
  byte_BD93A = v6;
  dword_BD964 = bswap32(s.jitter);
  HIWORD(dword_BD950) = BYTE1(s.shift) | (unsigned __int16)(LOWORD(s.shift) << 8);
  dword_BD968 = bswap32(s.stabil);
  dword_BD96C = bswap32(s.jitcnt);
  dword_BD970 = bswap32(s.calcnt);
  dword_BD974 = bswap32(s.errcnt);
  dword_BD978 = bswap32(s.stbcnt);
  sub_3B168();
  return sub_3B8C4();
}

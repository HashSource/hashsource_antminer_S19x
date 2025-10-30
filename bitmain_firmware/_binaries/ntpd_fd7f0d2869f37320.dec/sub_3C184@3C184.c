int __fastcall sub_3C184(int a1, int a2, int a3)
{
  __int64 v3; // r6
  char v4; // r0
  char v5; // r2
  double v6; // d0
  __int64 v7; // r0
  __int64 v8; // r2
  double v9; // r0
  double v10; // d0
  __int64 v11; // r0

  HIDWORD(v3) = 0;
  dword_BDB38 = a2;
  dword_BDB3C = a1;
  v4 = *(_BYTE *)(a3 + 2);
  v5 = *(_BYTE *)(a3 + 3);
  dword_BD92C = 24;
  word_BD93E = 6144;
  byte_BD93A = v4;
  byte_BD93B = v5;
  dword_BDB34 = 0;
  dword_BD930 = 0;
  dword_BD928 = 0;
  dword_BD924 = 0;
  v6 = last_offset;
  if ( last_offset >= 0.0 )
  {
    LODWORD(v3) = 0;
  }
  else
  {
    v6 = -last_offset;
    LODWORD(v3) = 1;
  }
  ldexp(COERCE_DOUBLE(0x60C00000020LL), 0);
  v7 = sub_8D558(LODWORD(v6), HIDWORD(v6));
  v8 = -v3;
  *(_QWORD *)&v9 = (v7 ^ -v3) + v3;
  dword_BD944 = bswap32(LODWORD(v9));
  dword_BD940 = bswap32(HIDWORD(v9));
  LODWORD(v9) = 32;
  HIDWORD(v3) = 0;
  v10 = drift_comp * 1000000.0;
  if ( drift_comp * 1000000.0 >= 0.0 )
  {
    LODWORD(v3) = 0;
  }
  else
  {
    v10 = -v10;
    LODWORD(v3) = 1;
  }
  ldexp(v9, v8);
  v11 = (sub_8D558(LODWORD(v10), HIDWORD(v10)) ^ -v3) + v3;
  dword_BD94C = bswap32(v11);
  dword_BD948 = bswap32(HIDWORD(v11));
  dword_BD950 = bswap32(tc_counter);
  dword_BD954 = bswap32(current_time - sys_epoch);
  sub_3B168();
  return sub_3B8C4();
}

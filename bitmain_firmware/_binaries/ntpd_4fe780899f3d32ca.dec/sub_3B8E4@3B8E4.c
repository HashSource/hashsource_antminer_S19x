int __fastcall sub_3B8E4(int a1, int a2, int a3)
{
  char v3; // r12
  char v4; // r6
  double v5; // d0
  __int64 v6; // r6
  double v7; // d0
  double v8; // r0
  __int64 v9; // r0
  double v11; // d0

  v3 = *(_BYTE *)(a3 + 3);
  dword_BC91C = 24;
  v4 = *(_BYTE *)(a3 + 2);
  dword_BCB28 = a1;
  dword_BCB24 = a2;
  byte_BC926 = v4;
  byte_BC927 = v3;
  word_BC92A = 6144;
  dword_BCB20 = 0;
  dword_BC910 = 0;
  dword_BC914 = 0;
  dword_BC918 = 0;
  v5 = last_offset;
  if ( last_offset < 0.0 )
  {
    v11 = -last_offset;
    ldexp(COERCE_DOUBLE(32), 1548);
    v6 = -sub_8C010(LODWORD(v11), HIDWORD(v11));
  }
  else
  {
    ldexp(COERCE_DOUBLE(32), 1548);
    v6 = sub_8C010(LODWORD(v5), HIDWORD(v5));
  }
  HIDWORD(v8) = bswap32(HIDWORD(v6));
  dword_BC92C = HIDWORD(v8);
  dword_BC930 = bswap32(v6);
  v7 = drift_comp * 1000000.0;
  LODWORD(v8) = 32;
  if ( drift_comp * 1000000.0 < 0.0 )
  {
    ldexp(v8, (int)&unk_BC71C);
    v9 = -sub_8C010(COERCE_UNSIGNED_INT64(-v7), HIDWORD(COERCE_UNSIGNED_INT64(-v7)));
  }
  else
  {
    ldexp(v8, (int)&unk_BC71C);
    v9 = sub_8C010(LODWORD(v7), HIDWORD(v7));
  }
  dword_BC934 = bswap32(HIDWORD(v9));
  dword_BC938 = bswap32(v9);
  dword_BC93C = bswap32(tc_counter);
  dword_BC940 = bswap32(current_time - sys_epoch);
  sub_3A918();
  return sub_3B02C();
}

int sub_21140()
{
  int v0; // r3
  int v1; // r2
  int v2; // r10
  time_t v4; // r0
  char *v5; // r3
  int v6; // r2
  __int64 v7; // r4
  int v8; // r6
  int v9; // t1
  double v10; // d5
  time_t v11; // r0
  double v12; // d11
  int v13; // r5
  int v14; // s24
  int v15; // r8
  int v16; // r9
  int v17; // r12
  int v18; // r4
  int v19; // r8
  unsigned int v20; // r1
  unsigned int v21; // r0
  int v22; // r3
  bool v23; // cf
  unsigned int v24; // lr
  __int64 v25; // r2
  unsigned int v26; // r1
  double v27; // d6

  ++dword_A06D4;
  sub_23298();
  v0 = dword_A06D4;
  v1 = dword_A06D4 >> 31;
  v2 = dword_A06D4 % 5;
  if ( dword_A06D4 == 5 * (dword_A06D4 / 5) )
  {
    v11 = sub_20A08();
    v12 = 0.0;
    v13 = v2;
    v14 = v11 - dword_A06C8;
    dword_A06C8 = v11;
    do
    {
      if ( *(_DWORD *)(dword_A0D68 + 4 * v2 + 4) == 1 )
      {
        v15 = dword_A06D8[v2];
        v16 = *(_DWORD *)((char *)qword_241A80 + v13 + 4);
        v17 = 10 * v2 + v15;
        v18 = (v15 + 1) % 10;
        v19 = dword_A06D8[v2 + 16];
        dword_A06D8[v2] = v18;
        if ( v19 <= 9 )
          dword_A06D8[v2 + 16] = ++v19;
        v20 = *(_DWORD *)((char *)&unk_A0758 + v13);
        v21 = *(_DWORD *)((char *)qword_241A80 + v13);
        v22 = *(_DWORD *)((char *)&unk_A0758 + v13 + 4);
        *(_DWORD *)((char *)&unk_A0758 + v13) = v21;
        v23 = v21 >= v20;
        v24 = v21 - v20;
        LODWORD(v25) = *(_DWORD *)((char *)&unk_A0CD8 + v13);
        v26 = *(_DWORD *)((char *)&unk_A0CD8 + v13 + 4);
        HIDWORD(v25) = v16 - (v22 + !v23);
        LODWORD(qword_A07D8[v17]) = v24;
        *(_DWORD *)((char *)&unk_A0CD8 + v13) = v24 + v25;
        HIDWORD(qword_A07D8[v17]) = HIDWORD(v25);
        *(_DWORD *)((char *)&unk_A0758 + v13 + 4) = v16;
        *(_DWORD *)((char *)&unk_A0CD8 + v13 + 4) = (__PAIR64__(v26, v24) + v25) >> 32;
        v27 = sub_778A4(v24 + (unsigned int)v25, (__PAIR64__(v26, v24) + v25) >> 32)
            * 4294967300.0
            / (double)v19
            / (double)v14;
        sprintf(&byte_241B00[32 * v2], "%.2f", v27 / 1000000000.0);
        v12 = v12 + v27 / 1000000000.0;
        *(_QWORD *)((char *)&unk_A0CD8 + v13) -= qword_A07D8[10 * v2 + v18];
      }
      ++v2;
      v13 += 8;
    }
    while ( v2 != 16 );
    sprintf((char *)&dword_1B09FC, "%.2f", v12);
    v0 = dword_A06D4;
    v1 = dword_A06D4 >> 31;
  }
  if ( v0 != 1800 * (((int)((unsigned __int64)(2443359173LL * v0) >> 32) >> 10) - v1) )
    return 0;
  v4 = sub_20A08();
  v5 = (char *)qword_241A80;
  v6 = dword_A0D68;
  v7 = 0;
  v8 = v4 - dword_A06D0;
  dword_A06D0 = v4;
  do
  {
    v9 = *(_DWORD *)(v6 + 4);
    v6 += 4;
    if ( v9 == 1 )
      v7 += *(_QWORD *)v5;
    v5 += 8;
  }
  while ( byte_241B00 != v5 );
  v10 = sub_778A4((int)v7 - (int)qword_A0D58, (unsigned __int64)(v7 - qword_A0D58) >> 32);
  qword_A0D58 = v7;
  dbl_1B0A10 = v10 * 4294967300.0 / 1000000000.0 / (double)v8;
  return 0;
}

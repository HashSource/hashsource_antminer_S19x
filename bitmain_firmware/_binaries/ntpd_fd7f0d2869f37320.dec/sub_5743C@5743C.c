int __fastcall sub_5743C(double a1, double *a2)
{
  double v2; // d17
  int v3; // r6
  int *v4; // r9
  int v5; // r8
  int v6; // r4
  double v7; // d0
  int v8; // r7
  double *v9; // r2
  double *v10; // r12
  int v11; // lr
  double v12; // d19
  double *v13; // r3
  double v14; // d16
  double v15; // d17
  double v16; // d18
  double v17; // d17
  double v18; // d0
  int v19; // r12
  double v20; // d17
  int v21; // r3
  int v22; // r3
  bool v23; // cc
  int v24; // r2
  bool v25; // zf
  int v26; // r3
  char v28[128]; // [sp+3Ch] [bp-88h] BYREF

  v2 = *a2;
  v3 = LODWORD(a1);
  v4 = *(int **)(LODWORD(a1) + 84);
  v5 = HIDWORD(a1);
  LODWORD(a1) = 0;
  v6 = *v4;
  if ( *a2 == 0.0 )
  {
    *(_QWORD *)(HIDWORD(a1) + 24) = 0;
    v8 = 0;
    *(_QWORD *)(HIDWORD(a1) + 16) = 0xC0B7700000000000LL;
    goto LABEL_14;
  }
  v7 = -6000.0;
  v8 = 0;
  v9 = a2 + 4;
  v10 = (double *)(HIDWORD(a1) + 32);
  v11 = 0;
  HIDWORD(a1) = dbl_C0680;
  v12 = -6000.0;
  do
  {
    v13 = v9 - 3;
    LODWORD(a1) = &dbl_C0680[1];
    v14 = dbl_C0680[0] * v2 + 0.0;
    do
    {
      v15 = *v13++;
      v16 = *(double *)LODWORD(a1);
      LODWORD(a1) += 8;
      v14 = v14 + v16 * v15;
    }
    while ( v13 != v9 );
    v17 = *v10 + (v14 - *v10) * 0.0625;
    *v10++ = v17;
    if ( v17 > v12 )
    {
      v7 = v12;
      v8 = v11;
      v12 = v17;
    }
    else if ( v17 > v7 )
    {
      v7 = v17;
    }
    ++v11;
    v2 = *v9;
    v9 += 4;
  }
  while ( v2 != 0.0 );
  *(double *)(v5 + 16) = v12;
  if ( v12 <= 0.0 )
  {
    *(_QWORD *)(v5 + 24) = 0;
    goto LABEL_14;
  }
  if ( v7 > 0.0 )
  {
    a1 = log10(a1);
    v18 = v12 / v7 * 20.0;
    if ( v18 <= 40.0 )
    {
      v20 = *(double *)(v5 + 16);
      *(double *)(v5 + 24) = v18;
      if ( v20 < 1000.0 || v18 < 3.0 )
        goto LABEL_14;
      goto LABEL_22;
    }
    v12 = *(double *)(v5 + 16);
  }
  *(_QWORD *)(v5 + 24) = 0x4044000000000000LL;
  if ( v12 < 1000.0 )
  {
LABEL_14:
    *(_DWORD *)(v6 + 4328) |= 0x40u;
    goto LABEL_15;
  }
LABEL_22:
  v21 = *(_DWORD *)(v5 + 4);
  if ( v21 == v8 )
  {
    v24 = *(_DWORD *)(v5 + 8);
    if ( v24 <= 2 )
      *(_DWORD *)(v5 + 8) = ++v24;
    v25 = v24 == 3;
    if ( v24 == 3 )
      v24 = v6 + 4096;
    v8 = v21;
    if ( v25 )
    {
      v26 = *(_DWORD *)(v24 + 212) + 1;
      *(_DWORD *)(v24 + 232) |= 4u;
      *(_DWORD *)(v24 + 212) = v26;
    }
  }
  else
  {
    v22 = *(_DWORD *)(v5 + 8);
    v23 = v22 <= 0;
    if ( v22 > 0 )
      --v22;
    *(_DWORD *)(v6 + 4332) |= 1u;
    if ( !v23 )
      *(_DWORD *)(v5 + 8) = v22;
    if ( !v22 )
      *(_DWORD *)(v5 + 4) = v8;
  }
LABEL_15:
  if ( (v4[192] & 8) != 0 )
  {
    v19 = *(_DWORD *)(v6 + 4328);
    if ( (v19 & 8) == 0 )
    {
      sub_6D00C(
        v28,
        128,
        "wwv4 %2d %04x %3d %4d %5.0f %2d %d %d %d %5.0f %5.1f",
        *(_DWORD *)(v6 + 4304) - 1,
        v19,
        *(_DWORD *)(v6 + 2116),
        *(_DWORD *)(v6 + 2132),
        *(double *)(v6 + 2144),
        *(_DWORD *)v5,
        *(_DWORD *)(v5 + 4),
        v8,
        *(_DWORD *)(v5 + 8),
        *(double *)(v5 + 16),
        *(double *)(v5 + 24));
      LODWORD(a1) = sub_42D0C(v3 + 16, v28);
    }
  }
  return LODWORD(a1);
}

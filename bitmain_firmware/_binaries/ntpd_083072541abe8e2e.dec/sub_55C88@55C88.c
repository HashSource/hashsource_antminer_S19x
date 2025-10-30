int __fastcall sub_55C88(double a1, double *a2)
{
  double v2; // d6
  double v3; // r6
  int *v4; // r9
  int v5; // r4
  double v6; // d0
  int v7; // r8
  double *v8; // r2
  double *v9; // lr
  double v10; // d4
  double *v11; // r3
  double v12; // d7
  double v13; // d6
  double v14; // d5
  double v15; // d6
  int v16; // r12
  double v17; // d0
  double v18; // d6
  int v19; // r3
  bool v20; // cc
  int v21; // r3
  int v22; // r2
  char v24[128]; // [sp+3Ch] [bp-88h] BYREF

  v2 = *a2;
  v3 = a1;
  v4 = *(int **)(LODWORD(a1) + 84);
  v5 = *v4;
  if ( *a2 == 0.0 )
  {
    v7 = 0;
    *(_QWORD *)(HIDWORD(a1) + 16) = 0xC0B7700000000000LL;
LABEL_31:
    *(_QWORD *)(HIDWORD(v3) + 24) = 0;
    goto LABEL_12;
  }
  v6 = -6000.0;
  v7 = 0;
  v8 = a2 + 1;
  HIDWORD(a1) = 0;
  v9 = (double *)(HIDWORD(v3) + 32);
  v10 = -6000.0;
  do
  {
    v11 = v8;
    LODWORD(a1) = &unk_BF670;
    v12 = unk_BF668 * v2 + 0.0;
    do
    {
      v13 = *v11++;
      v14 = *(double *)LODWORD(a1);
      LODWORD(a1) += 8;
      v12 = v12 + v14 * v13;
    }
    while ( v8 + 3 != v11 );
    v15 = *v9 + (v12 - *v9) * 0.0625;
    *v9++ = v15;
    if ( v15 > v10 )
    {
      v6 = v10;
      v7 = HIDWORD(a1);
      v10 = v15;
    }
    else if ( v15 > v6 )
    {
      v6 = v15;
    }
    v8 += 4;
    v2 = *(v8 - 1);
    ++HIDWORD(a1);
  }
  while ( v2 != 0.0 );
  *(double *)(HIDWORD(v3) + 16) = v10;
  if ( v10 <= 0.0 )
    goto LABEL_31;
  if ( v6 > 0.0 )
  {
    a1 = log10(a1);
    v17 = v10 / v6 * 20.0;
    if ( v17 <= 40.0 )
    {
      v18 = *(double *)(HIDWORD(v3) + 16);
      *(double *)(HIDWORD(v3) + 24) = v17;
      if ( v18 < 1000.0 || v17 < 3.0 )
        goto LABEL_12;
      goto LABEL_22;
    }
    v10 = *(double *)(HIDWORD(v3) + 16);
  }
  *(_QWORD *)(HIDWORD(v3) + 24) = 0x4044000000000000LL;
  if ( v10 < 1000.0 )
  {
LABEL_12:
    *(_DWORD *)(v5 + 4328) |= 0x40u;
    goto LABEL_13;
  }
LABEL_22:
  if ( *(_DWORD *)(HIDWORD(v3) + 4) == v7 )
  {
    v21 = *(_DWORD *)(HIDWORD(v3) + 8);
    if ( v21 <= 2 )
      *(_DWORD *)(HIDWORD(v3) + 8) = ++v21;
    if ( v21 == 3 )
    {
      v22 = *(_DWORD *)(v5 + 4308) + 1;
      *(_DWORD *)(v5 + 4328) |= 4u;
      *(_DWORD *)(v5 + 4308) = v22;
    }
  }
  else
  {
    v19 = *(_DWORD *)(HIDWORD(v3) + 8);
    v20 = v19 <= 0;
    if ( v19 > 0 )
      --v19;
    *(_DWORD *)(v5 + 4332) |= 1u;
    if ( !v20 )
      *(_DWORD *)(HIDWORD(v3) + 8) = v19;
    if ( !v19 )
      *(_DWORD *)(HIDWORD(v3) + 4) = v7;
  }
LABEL_13:
  if ( (v4[192] & 8) != 0 )
  {
    v16 = *(_DWORD *)(v5 + 4328);
    if ( (v16 & 8) == 0 )
    {
      sub_6C054(
        v24,
        128,
        "wwv4 %2d %04x %3d %4d %5.0f %2d %d %d %d %5.0f %5.1f",
        *(_DWORD *)(v5 + 4304) - 1,
        v16,
        *(_DWORD *)(v5 + 2116),
        *(_DWORD *)(v5 + 2132),
        *(double *)(v5 + 2144),
        *(_DWORD *)HIDWORD(v3),
        *(_DWORD *)(HIDWORD(v3) + 4),
        v7,
        *(_DWORD *)(HIDWORD(v3) + 8),
        *(double *)(HIDWORD(v3) + 16),
        *(double *)(HIDWORD(v3) + 24));
      LODWORD(a1) = sub_41F44(LODWORD(v3) + 16, v24);
    }
  }
  return LODWORD(a1);
}

size_t __fastcall sub_39A28(int a1)
{
  double v1; // d19
  int v3; // r3
  int v4; // r10
  size_t v5; // r4
  double *v6; // r7
  _QWORD *v7; // r12
  size_t v8; // r10
  unsigned int v9; // r2
  double v10; // r0
  double v11; // d17
  size_t v12; // r12
  double v13; // d16
  double v14; // d18
  unsigned int v15; // r3
  double v16; // d17
  double *v17; // r6
  double v18; // d16
  double v19; // d8
  double v20; // d9
  double v21; // r0
  int v22; // r2
  double v23; // d0
  _QWORD _0[67]; // [sp+0h] [bp-1E8h] BYREF

  v3 = *(_DWORD *)(a1 + 220);
  v4 = *(_DWORD *)(a1 + 216);
  if ( v3 == v4 )
    return 0;
  v5 = 0;
  v6 = (double *)_0;
  v7 = _0;
  do
  {
    ++v5;
    v3 = (v3 + 1) % 60;
    *v7++ = *(_QWORD *)(a1 + 8 * v3 + 264);
  }
  while ( v3 != v4 );
  *(_DWORD *)(a1 + 220) = v3;
  v8 = v5;
  if ( v5 != 1 )
    qsort(_0, v5, 8u, (__compar_fn_t)sub_399C0);
  v9 = 0;
  HIDWORD(v10) = v5 - 4 * v5 / 0xA;
  while ( 1 )
  {
    LODWORD(v10) = &_0[v5];
    if ( HIDWORD(v10) >= v5 - v9 )
      break;
    while ( 1 )
    {
      v11 = *(double *)(LODWORD(v10) - 8);
      LODWORD(v10) -= 8;
      v12 = v5 - 1;
      v13 = *(double *)&_0[(v5 + v9) >> 1];
      if ( v11 - v13 < v13 - *v6 )
        break;
      --v5;
      if ( HIDWORD(v10) >= v12 - v9 )
        goto LABEL_11;
    }
    ++v9;
    ++v6;
  }
LABEL_11:
  v14 = 0.0;
  v15 = v9;
  v16 = 0.0;
  *(_QWORD *)(a1 + 240) = 0;
  *(_QWORD *)(a1 + 256) = 0;
  if ( v9 < v5 )
  {
    v17 = (double *)&_0[v9 + 1];
    v14 = *(double *)&_0[v9] + 0.0;
    *(double *)(a1 + 240) = v14;
    while ( ++v15 != v5 )
    {
      v18 = *v17++;
      if ( v9 < v15 )
        v1 = *(v17 - 2);
      v14 = v14 + v18;
      if ( v9 < v15 )
        v18 = v18 - v1;
      *(double *)(a1 + 240) = v14;
      if ( v9 < v15 )
      {
        v16 = v16 + v18 * v18;
        *(double *)(a1 + 256) = v16;
      }
    }
  }
  v19 = (double)HIDWORD(v10);
  v20 = sqrt(v16 / (double)HIDWORD(v10));
  *(double *)(a1 + 240) = v14 / (double)HIDWORD(v10);
  LODWORD(v10) = sys_precision;
  v21 = ldexp(v10, v9);
  if ( v20 > 1.0 )
  {
    v23 = sqrt(*(double *)(a1 + 256) / v19);
  }
  else
  {
    LODWORD(v21) = sys_precision;
    v23 = 1.0;
    ldexp(v21, v22);
  }
  *(double *)(a1 + 256) = v23;
  return v8;
}

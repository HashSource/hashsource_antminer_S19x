size_t __fastcall sub_39248(int a1)
{
  double v1; // d4
  int v2; // r3
  int v3; // r12
  double *v6; // r7
  _QWORD *v7; // r2
  size_t v8; // r5
  int v9; // r2
  unsigned int v10; // r11
  double v11; // r0
  unsigned int v12; // r12
  double v13; // d6
  double v14; // d7
  double v15; // d5
  double v16; // d6
  double *v17; // r6
  unsigned int v18; // r3
  double v19; // d7
  double v20; // d8
  double v21; // d0
  double v22; // d9
  double v23; // r0
  int v24; // r2
  double v25; // d8
  double v26; // d0
  _QWORD v27[60]; // [sp+0h] [bp-1ECh] BYREF
  _BYTE v28[4]; // [sp+1E8h] [bp-4h] BYREF

  v2 = *(_DWORD *)(a1 + 220);
  v3 = *(_DWORD *)(a1 + 216);
  if ( v3 == v2 )
    return 0;
  v6 = (double *)v27;
  v7 = v27;
  v8 = 0;
  do
  {
    ++v8;
    v2 = (v2 + 1) % 60;
    *v7++ = *(_QWORD *)(a1 + 8 * v2 + 264);
  }
  while ( v2 != v3 );
  *(_DWORD *)(a1 + 220) = v2;
  if ( v8 != 1 )
    qsort(v27, v8, 8u, (__compar_fn_t)sub_391E0);
  v9 = 858993460 * v8;
  v10 = v8;
  LODWORD(v11) = 0;
  v12 = v8 - 4 * v8 / 0xA;
LABEL_8:
  HIDWORD(v11) = &v27[v10];
  while ( v10 - LODWORD(v11) > v12 )
  {
    v9 = (int)v28;
    v13 = *(double *)(HIDWORD(v11) - 8);
    HIDWORD(v11) -= 8;
    v14 = *(double *)&v27[(2 * LODWORD(v11) + v10 - LODWORD(v11)) >> 1];
    if ( v13 - v14 < v14 - *v6 )
    {
      ++LODWORD(v11);
      ++v6;
      goto LABEL_8;
    }
    --v10;
  }
  *(_QWORD *)(a1 + 240) = 0;
  v15 = 0.0;
  *(_QWORD *)(a1 + 256) = 0;
  if ( v10 > LODWORD(v11) )
  {
    v9 = (int)v28;
    HIDWORD(v11) = &v28[8 * LODWORD(v11)];
    v17 = (double *)&v27[LODWORD(v11) + 1];
    v18 = LODWORD(v11);
    v16 = *(double *)(HIDWORD(v11) - 488) + 0.0;
    *(double *)(a1 + 240) = v16;
    while ( v10 != ++v18 )
    {
      v19 = *v17++;
      if ( LODWORD(v11) < v18 )
        v1 = *(v17 - 2);
      v16 = v16 + v19;
      if ( LODWORD(v11) < v18 )
        v19 = v19 - v1;
      *(double *)(a1 + 240) = v16;
      if ( LODWORD(v11) < v18 )
      {
        v15 = v15 + v19 * v19;
        *(double *)(a1 + 256) = v15;
      }
    }
  }
  else
  {
    v16 = 0.0;
  }
  v20 = (double)v12;
  v21 = v15 / (double)v12;
  *(double *)(a1 + 240) = v16 / (double)v12;
  v22 = sqrt(v21);
  if ( v21 < 0.0 )
    v11 = sqrt(v11);
  LODWORD(v11) = sys_precision;
  v23 = ldexp(v11, v9);
  if ( v22 > 1.0 )
  {
    v26 = *(double *)(a1 + 256) / v20;
    v25 = sqrt(v26);
    if ( v26 < 0.0 )
      sqrt(v23);
  }
  else
  {
    LODWORD(v23) = sys_precision;
    ldexp(v23, v24);
    v25 = 1.0;
  }
  *(double *)(a1 + 256) = v25;
  return v8;
}

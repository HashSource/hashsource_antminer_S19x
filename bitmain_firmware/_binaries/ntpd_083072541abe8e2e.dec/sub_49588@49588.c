int __fastcall sub_49588(double a1, int a2)
{
  _DWORD *v2; // r6
  int v3; // r8
  double v4; // d0
  double *v5; // r9
  int v6; // r4
  unsigned int v7; // lr
  int v8; // r3
  int v9; // r1
  bool v10; // cc
  __int64 v11; // r0
  char *v12; // r5
  double v13; // d7
  int v14; // r2
  int v15; // r3
  double v16; // d14
  bool v17; // cf
  int v18; // r3
  int v19; // lr
  int v20; // r2
  double v21; // d7
  double v22; // d6
  __int64 v23; // r0
  int v24; // r2
  int *v25; // r3
  int v26; // r3
  int v27; // r0
  double v28; // d7
  int v29; // r0
  char v30; // t1
  double v31; // d14
  double v32; // d4
  int v33; // r2
  int v34; // r3
  __int64 v36; // [sp+0h] [bp-1Ch]

  v2 = (_DWORD *)LODWORD(a1);
  v3 = *(_DWORD *)(LODWORD(a1) + 4);
  v4 = (double)*(int *)(LODWORD(a1) + 84) / 8000.0;
  v5 = *(double **)(v3 + 84);
  v6 = *(_DWORD *)v5;
  LODWORD(a1) = 32;
  ldexp(a1, a2);
  if ( v4 < 0.0 )
    v36 = -sub_8C010(COERCE_UNSIGNED_INT64(-v4), HIDWORD(COERCE_UNSIGNED_INT64(-v4)));
  else
    v36 = sub_8C010(LODWORD(v4), HIDWORD(v4));
  v7 = v2[19];
  v8 = v2[18] - HIDWORD(v36);
  v9 = v2[21];
  if ( v7 < (unsigned int)v36 )
    --v8;
  v2[19] = v7 - v36;
  v10 = v9 <= 0;
  v2[18] = v8;
  v11 = *((_QWORD *)v2 + 9);
  *(_QWORD *)(v6 + 24) = v11;
  if ( !v10 )
  {
    v12 = (char *)(v2 + 22);
    do
    {
      v30 = *v12++;
      v31 = *(double *)(v6 + 8 * (unsigned __int8)~v30 + 776);
      v32 = (*(double *)(v6 + 712) + clock_codec) / 8000.0 + *(double *)(v6 + 704) + v5[94] / 1000000.0;
      *(double *)(v6 + 704) = v32;
      if ( v32 >= 0.5 )
      {
        *(double *)(v6 + 704) = v32 - 1.0;
      }
      else
      {
        if ( v32 < -0.5 )
        {
          *(double *)(v6 + 704) = v32 + 1.0;
          sub_492D0(v3);
        }
        sub_492D0(v3);
      }
      v13 = *(double *)(v6 + 2824);
      v14 = *(_DWORD *)(v6 + 28);
      v15 = *(_DWORD *)(v6 + 36);
      v16 = fabs(v31);
      v17 = __CFADD__(v15, v14);
      v18 = v15 + v14;
      v19 = *(_DWORD *)(v6 + 24);
      if ( v13 < v16 )
        v13 = v16;
      v20 = *(_DWORD *)(v6 + 2844);
      *(_DWORD *)(v6 + 28) = v18;
      ++v20;
      LODWORD(v11) = 274877907 * v20;
      *(_DWORD *)(v6 + 24) = v19 + *(_DWORD *)(v6 + 32) + v17;
      *(double *)(v6 + 2824) = (v16 - v13) / 1000.0 + v13;
      *(_DWORD *)(v6 + 2844) = v20 % 8000;
      if ( v20 != 8000 * (v20 / 8000) )
        continue;
      v21 = *(double *)(v6 + 760);
      v22 = *(double *)(v6 + 752);
      if ( v22 <= v21 )
        LOWORD(v23) = 10381;
      else
        LOWORD(v23) = -28396;
      if ( v22 <= v21 )
        WORD2(v23) = 12478;
      else
        WORD2(v23) = 25711;
      if ( v22 <= v21 )
      {
        WORD1(v23) = 3565;
        v24 = 10;
      }
      else
      {
        WORD1(v23) = 5473;
        v24 = 1;
      }
      if ( v22 <= v21 )
        HIWORD(v23) = 16249;
      else
        HIWORD(v23) = 16238;
      *(_DWORD *)(v6 + 3160) = v24;
      *(_QWORD *)(v6 + 3152) = v23;
      v25 = *(int **)(v3 + 84);
      *(_QWORD *)(v6 + 760) = 0;
      *(_QWORD *)(v6 + 752) = 0;
      v26 = *v25;
      v27 = *(_DWORD *)(v26 + 2836);
      v28 = *(double *)(v26 + 3000);
      if ( v28 >= 2000.0 )
      {
        if ( v28 <= 3000.0 )
          goto LABEL_27;
        v29 = v27 - 4;
        if ( v29 < 0 )
        {
          *(_DWORD *)(v26 + 2836) = 0;
          goto LABEL_27;
        }
      }
      else
      {
        v29 = v27 + 4;
        if ( v29 > 255 )
          v29 = 255;
      }
      *(_DWORD *)(v26 + 2836) = v29;
LABEL_27:
      LODWORD(v11) = sub_612E0();
    }
    while ( v2[21] > v12 - (char *)(v2 + 22) );
  }
  if ( ((_BYTE)v5[96] & 2) != 0 )
    v33 = 2;
  else
    v33 = 1;
  v34 = (_BYTE)v5[96] & 4;
  *(_DWORD *)(v6 + 2832) = v33;
  if ( v34 )
    v34 = 127;
  *(_DWORD *)(v6 + 2840) = v34;
  return v11;
}

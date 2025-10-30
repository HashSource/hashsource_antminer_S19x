_BYTE *__fastcall sub_58E24(double a1, int a2)
{
  _DWORD *v2; // r9
  int v3; // r6
  double v4; // d0
  double **v5; // r8
  double *v6; // r4
  __int64 v7; // r0
  unsigned int v8; // lr
  char *v9; // r10
  int v10; // r2
  int v11; // r3
  _BYTE *result; // r0
  int v13; // r1
  char *v14; // r5
  double v15; // d7
  int v16; // r3
  int v17; // r1
  int v18; // lr
  bool v19; // cf
  int v20; // r1
  int v21; // r3
  char v22; // t1
  double v23; // d11
  int v24; // r2
  int v25; // r3

  v2 = (_DWORD *)LODWORD(a1);
  v3 = *(_DWORD *)(LODWORD(a1) + 4);
  v4 = (double)*(int *)(LODWORD(a1) + 84) / 8000.0;
  v5 = *(double ***)(v3 + 84);
  v6 = *v5;
  LODWORD(a1) = 32;
  ldexp(a1, a2);
  if ( v4 < 0.0 )
    v7 = -sub_8C010(COERCE_UNSIGNED_INT64(-v4), HIDWORD(COERCE_UNSIGNED_INT64(-v4)));
  else
    v7 = sub_8C010(LODWORD(v4), HIDWORD(v4));
  v8 = v2[19];
  v9 = (char *)(v2 + 22);
  v10 = v2[21];
  v11 = v2[18] - HIDWORD(v7);
  if ( v8 < (unsigned int)v7 )
    --v11;
  v2[19] = v8 - v7;
  v2[18] = v11;
  result = (_BYTE *)v2[18];
  v13 = v2[19];
  *(_DWORD *)v6 = result;
  *((_DWORD *)v6 + 1) = v13;
  if ( v10 > 0 )
  {
    v14 = (char *)(v2 + 22);
    do
    {
      v22 = *v14++;
      v23 = v6[(unsigned __int8)~v22 + 8];
      if ( v23 > 6000.0 )
      {
        ++*((_DWORD *)v6 + 531);
      }
      else if ( v23 < -6000.0 )
      {
        ++*((_DWORD *)v6 + 531);
      }
      v15 = (v6[3] + clock_codec) / 8000.0 + v6[2];
      v6[2] = v15;
      if ( v15 < 0.5 )
      {
        if ( v15 < -0.5 )
        {
          v6[2] = v15 + 1.0;
          sub_57878(v3);
        }
        sub_57878(v3);
        v10 = v2[21];
      }
      else
      {
        v6[2] = v15 - 1.0;
      }
      v16 = *((_DWORD *)v6 + 1);
      result = (_BYTE *)(v14 - v9);
      v17 = *((_DWORD *)v6 + 3);
      v18 = *((_DWORD *)v6 + 2);
      v19 = __CFADD__(v17, v16);
      v20 = v17 + v16;
      v21 = *(_DWORD *)v6;
      *((_DWORD *)v6 + 1) = v20;
      *(_DWORD *)v6 = v21 + v18 + v19;
    }
    while ( v10 > v14 - v9 );
  }
  if ( ((_BYTE)v5[192] & 2) != 0 )
    v24 = 2;
  else
    v24 = 1;
  v25 = (_BYTE)v5[192] & 4;
  *((_DWORD *)v6 + 528) = v24;
  if ( v25 )
    v25 = 127;
  *((_DWORD *)v6 + 530) = v25;
  return result;
}

int __fastcall sub_59B0C(double a1, int a2)
{
  _DWORD *v2; // r9
  double v3; // d16
  int v4; // r5
  double v5; // d0
  double **v6; // r10
  double *v7; // r8
  unsigned int v8; // r6
  __int64 v9; // r0
  unsigned int v10; // lr
  int v11; // r4
  __int64 v12; // r6
  unsigned int v13; // r2
  int v14; // lr
  int result; // r0
  int v16; // r1
  char *v17; // r6
  double v18; // d16
  unsigned int v19; // r12
  int v20; // r3
  int v21; // r2
  unsigned int v22; // r1
  int v23; // r2
  int v24; // r3
  char v25; // t1
  double v26; // d8
  int v27; // r3
  unsigned __int64 v28; // [sp+0h] [bp-1Ch]

  v2 = (_DWORD *)LODWORD(a1);
  v3 = (double)*(int *)(LODWORD(a1) + 84);
  v4 = *(_DWORD *)(LODWORD(a1) + 4);
  LODWORD(a1) = 32;
  v5 = v3 / 8000.0;
  v6 = *(double ***)(v4 + 84);
  v7 = *v6;
  if ( v3 / 8000.0 >= 0.0 )
  {
    v8 = 0;
  }
  else
  {
    v5 = -v5;
    v8 = 1;
  }
  ldexp(a1, a2);
  v28 = vshrd_n_u64(vdup_n_s32(v8).n64_u64[0], 0x20u);
  v9 = sub_8D558(LODWORD(v5), HIDWORD(v5));
  v10 = v2[19];
  v11 = v2[21];
  v12 = v9 ^ -(__int64)v28;
  v13 = v10 - (v28 + v12);
  v2[19] = v13;
  if ( v10 < v13 )
    v14 = v2[18] - ((v28 + v12) >> 32) - 1;
  else
    v14 = v2[18] - ((v28 + v12) >> 32);
  v2[18] = v14;
  result = v2[18];
  v16 = v2[19];
  *(_DWORD *)v7 = result;
  *((_DWORD *)v7 + 1) = v16;
  if ( v11 > 0 )
  {
    v17 = (char *)(v2 + 22);
    do
    {
      v25 = *v17++;
      v26 = v7[(unsigned __int8)~v25 + 8];
      if ( v26 > 6000.0 )
      {
        ++*((_DWORD *)v7 + 531);
      }
      else if ( v26 < -6000.0 )
      {
        ++*((_DWORD *)v7 + 531);
      }
      v18 = (v7[3] + clock_codec) / 8000.0 + v7[2];
      v7[2] = v18;
      if ( v18 < 0.5 )
      {
        if ( v18 < -0.5 )
        {
          v7[2] = v18 + 1.0;
          sub_585B8(v4);
        }
        sub_585B8(v4);
      }
      else
      {
        v7[2] = v18 - 1.0;
      }
      v19 = *((_DWORD *)v7 + 1);
      result = v17 - (char *)(v2 + 22);
      v20 = *(_DWORD *)v7;
      v21 = *((_DWORD *)v7 + 2);
      v22 = v19 + *((_DWORD *)v7 + 3);
      *((_DWORD *)v7 + 1) = v22;
      v23 = v21 + v20;
      if ( v19 > v22 )
        v24 = v23 + 1;
      else
        v24 = v23;
      *(_DWORD *)v7 = v24;
    }
    while ( v2[21] > result );
  }
  if ( ((_BYTE)v6[192] & 2) != 0 )
    *((_DWORD *)v7 + 528) = 2;
  else
    *((_DWORD *)v7 + 528) = 1;
  v27 = (_BYTE)v6[192] & 4;
  if ( ((_BYTE)v6[192] & 4) != 0 )
    v27 = 127;
  *((_DWORD *)v7 + 530) = v27;
  return result;
}

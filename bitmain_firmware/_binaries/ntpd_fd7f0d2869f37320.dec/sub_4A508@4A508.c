int __fastcall sub_4A508(double a1, int a2)
{
  _DWORD *v2; // r5
  double v3; // d16
  int v4; // r9
  double v5; // d0
  double *v6; // r8
  int v7; // r4
  unsigned int v8; // r6
  __int64 v9; // r0
  unsigned int v10; // lr
  int v11; // r10
  __int64 v12; // r6
  unsigned int v13; // r3
  int v14; // r2
  int v15; // r2
  int v16; // r3
  int result; // r0
  int v18; // r1
  char *v19; // r6
  unsigned int v20; // lr
  int v21; // r2
  double v22; // d16
  double v23; // d8
  unsigned int v24; // r12
  int v25; // r2
  int v26; // r1
  int v27; // r1
  __int64 v28; // r0
  int v29; // r1
  double v30; // d17
  int v31; // r0
  char v32; // t1
  double v33; // d8
  double v34; // d16
  int v35; // r3
  unsigned __int64 v36; // [sp+0h] [bp-24h]

  v2 = (_DWORD *)LODWORD(a1);
  v3 = (double)*(int *)(LODWORD(a1) + 84);
  v4 = *(_DWORD *)(LODWORD(a1) + 4);
  LODWORD(a1) = 32;
  v5 = v3 / 8000.0;
  v6 = *(double **)(v4 + 84);
  v7 = *(_DWORD *)v6;
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
  v36 = vshrd_n_u64(vdup_n_s32(v8).n64_u64[0], 0x20u);
  v9 = sub_8D558(LODWORD(v5), HIDWORD(v5));
  v10 = v2[19];
  v11 = v2[21];
  v12 = v9 ^ -(__int64)v36;
  v13 = v10 - (v36 + v12);
  v14 = v2[18];
  v2[19] = v13;
  v15 = v14 - ((v36 + v12) >> 32);
  if ( v10 < v13 )
    v16 = v15 - 1;
  else
    v16 = v15;
  v2[18] = v16;
  result = v2[18];
  v18 = v2[19];
  *(_DWORD *)(v7 + 24) = result;
  *(_DWORD *)(v7 + 28) = v18;
  if ( v11 > 0 )
  {
    v19 = (char *)(v2 + 22);
    while ( 1 )
    {
      v32 = *v19++;
      v33 = *(double *)(v7 + 8 * (unsigned __int8)~v32 + 776);
      v34 = (*(double *)(v7 + 712) + clock_codec) / 8000.0 + *(double *)(v7 + 704) + v6[94] / 1000000.0;
      *(double *)(v7 + 704) = v34;
      if ( v34 >= 0.5 )
      {
        *(double *)(v7 + 704) = v34 - 1.0;
      }
      else
      {
        if ( v34 < -0.5 )
        {
          *(double *)(v7 + 704) = v34 + 1.0;
          sub_4A258(v4);
        }
        sub_4A258(v4);
      }
      v20 = *(_DWORD *)(v7 + 28);
      result = 8000;
      v21 = *(_DWORD *)(v7 + 24);
      v22 = *(double *)(v7 + 2824);
      v23 = fabs(v33);
      v24 = v20 + *(_DWORD *)(v7 + 36);
      if ( v20 > v24 )
        v25 = *(_DWORD *)(v7 + 32) + v21 + 1;
      else
        v25 = *(_DWORD *)(v7 + 32) + v21;
      v26 = *(_DWORD *)(v7 + 2844);
      *(_DWORD *)(v7 + 24) = v25;
      v27 = v26 + 1;
      *(_DWORD *)(v7 + 28) = v24;
      if ( v23 > v22 )
        v22 = v23;
      *(double *)(v7 + 2824) = (v23 - v22) / 1000.0 + v22;
      *(_DWORD *)(v7 + 2844) = v27 % 8000;
      if ( v27 != 8000 * (v27 / 8000) )
        goto LABEL_23;
      if ( *(double *)(v7 + 752) <= *(double *)(v7 + 760) )
      {
        v28 = 0x3F7930BE0DED288DLL;
        *(_DWORD *)(v7 + 3160) = 10;
      }
      else
      {
        v28 = 0x3F6E646F15619114LL;
        *(_DWORD *)(v7 + 3160) = 1;
      }
      *(_QWORD *)(v7 + 3152) = v28;
      v29 = **(_DWORD **)(v4 + 84);
      v30 = *(double *)(v29 + 3000);
      *(_QWORD *)(v7 + 760) = 0;
      *(_QWORD *)(v7 + 752) = 0;
      if ( v30 >= 2000.0 )
        break;
      v31 = *(_DWORD *)(v29 + 2836) + 4;
      if ( v31 <= 255 )
        goto LABEL_21;
      v31 = 255;
      *(_DWORD *)(v29 + 2836) = 255;
LABEL_22:
      result = sub_621DC(v31, *(_DWORD *)(v29 + 2840));
LABEL_23:
      if ( v2[21] <= v19 - (char *)(v2 + 22) )
        goto LABEL_34;
    }
    v31 = *(_DWORD *)(v29 + 2836);
    if ( v30 <= 3000.0 )
      goto LABEL_22;
    v31 -= 4;
    if ( v31 < 0 )
      v31 = 0;
LABEL_21:
    *(_DWORD *)(v29 + 2836) = v31;
    goto LABEL_22;
  }
LABEL_34:
  if ( ((_BYTE)v6[96] & 2) != 0 )
    *(_DWORD *)(v7 + 2832) = 2;
  else
    *(_DWORD *)(v7 + 2832) = 1;
  v35 = (_BYTE)v6[96] & 4;
  if ( ((_BYTE)v6[96] & 4) != 0 )
    v35 = 127;
  *(_DWORD *)(v7 + 2840) = v35;
  return result;
}

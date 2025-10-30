int __fastcall sub_5ED84(_DWORD *a1)
{
  __int64 v1; // d0
  _DWORD *v3; // r8
  _DWORD *v4; // r4
  int v5; // r0
  int v7; // r3
  double v8; // d17
  int v9; // r12
  int v10; // r2
  double *v11; // r3
  double *v12; // r2
  double *v13; // r1
  double *v14; // r7
  int v15; // r12
  double v16; // d16
  double v17; // d18
  int v18; // r1
  int v19; // r2
  double v20; // d16
  int v21; // r2
  int v22; // r2
  _BOOL4 v23; // r3
  int v24; // r3
  _DWORD *v25; // r2
  int v26; // r12
  int v27; // r1
  int v28; // r10
  int v29; // r3

  v3 = (_DWORD *)a1[21];
  v4 = (_DWORD *)*v3;
  v5 = *(_DWORD *)(*v3 + 932);
  if ( v5 <= 0 )
    return 0;
  v7 = v4[234];
  v8 = 0.0;
  v9 = 5 * v7;
  v10 = 10 * v7;
  v11 = (double *)(v4 + 242);
  v12 = (double *)&v4[v10];
  v13 = (double *)&v4[2 * v9 + 236 + 2 * *((_DWORD *)v12 + 244)];
  v14 = (double *)&v4[2 * v9 + 2 * *((_DWORD *)v12 + 244)];
  v15 = *((_DWORD *)v12 + 244) + 1;
  v12[121] = v12[121] - *v13;
  *(_QWORD *)v13 = v1;
  v16 = v12[121];
  v17 = v14[118];
  *((_DWORD *)v12 + 245) = 0;
  v18 = 0;
  *((_DWORD *)v12 + 244) = v15 % 3;
  v12[121] = v16 + v17;
  do
  {
    v19 = *((_DWORD *)v11 + 3);
    v11 += 5;
    v20 = *(v11 - 5);
    v21 = v19 + 1;
    *((_DWORD *)v11 - 7) = v21;
    if ( v20 > v8 )
    {
      v21 = v4[230];
      v4[234] = v18;
    }
    ++v18;
    if ( v20 > v8 )
    {
      v8 = v20;
      v4[230] = v21 | 0x800;
    }
  }
  while ( v18 != 3 );
  v22 = v4[235] + 1;
  v4[235] = v22 % 5;
  if ( v22 % 5 )
    v23 = v8 == 0.0;
  else
    v23 = 1;
  if ( v23 )
  {
    v24 = 0;
    v25 = v4;
    v26 = 0;
    do
    {
      v27 = v25[245];
      v25 += 10;
      if ( v27 > v26 )
        v4[234] = v24;
      ++v24;
      if ( v27 > v26 )
        v26 = v27;
    }
    while ( v24 != 3 );
  }
  v28 = sub_64D40(v5, a1[19] & 0x7F);
  sub_6D00C(v4 + 231, 5, "CHU%d", v4[234]);
  v3[191] = v4[231];
  a1[28] = v4[231];
  if ( v8 != 0.0 )
    return v28;
  v29 = v4[230];
  if ( (v29 & 0x800) == 0 )
    return v28;
  v4[230] = v29 & 0xFFFFF7FF;
  sub_39C88((int)a1, 4);
  return v28;
}

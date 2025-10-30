int __fastcall sub_5DFB4(int a1)
{
  __int64 v1; // d0
  _DWORD *v3; // r7
  _DWORD *v4; // r4
  int v5; // r0
  int v6; // r8
  double v7; // d8
  int v8; // r3
  int v9; // r1
  int v10; // r2
  double *v11; // r12
  double *v12; // lr
  int v13; // lr
  double v14; // d6
  double v15; // d7
  double v16; // d7
  int v17; // r2
  int v18; // r2
  _BOOL4 v19; // r2
  int v20; // r3
  int v21; // r1
  bool v22; // cc
  int v23; // r1
  int v24; // r3

  v3 = *(_DWORD **)(a1 + 84);
  v4 = (_DWORD *)*v3;
  v5 = *(_DWORD *)(*v3 + 932);
  if ( v5 <= 0 )
    return 0;
  v7 = 0.0;
  v8 = *v3;
  v9 = 0;
  v10 = 5 * v4[234];
  v11 = (double *)&v4[10 * v4[234]];
  v12 = (double *)&v4[2 * v10 + 236 + 2 * *((_DWORD *)v11 + 244)];
  v11[121] = v11[121] - *v12;
  *(_QWORD *)v12 = v1;
  v13 = *((_DWORD *)v11 + 244);
  v14 = v11[121];
  v15 = *(double *)&v4[2 * v10 + 236 + 2 * v13];
  *((_DWORD *)v11 + 245) = 0;
  v11[121] = v15 + v14;
  *((_DWORD *)v11 + 244) = (v13 + 1) % 3;
  do
  {
    v16 = *(double *)(v8 + 968);
    v8 += 40;
    v17 = *(_DWORD *)(v8 + 940) + 1;
    *(_DWORD *)(v8 + 940) = v17;
    if ( v16 > v7 )
    {
      v17 = v4[230];
      v4[234] = v9;
    }
    ++v9;
    if ( v16 > v7 )
    {
      v7 = v16;
      v4[230] = v17 | 0x800;
    }
  }
  while ( v9 != 3 );
  v18 = v4[235] + 1;
  v4[235] = v18 % 5;
  if ( v18 % 5 )
    v19 = v7 == 0.0;
  else
    v19 = 1;
  if ( v19 )
  {
    v20 = v4[245];
    v21 = *(_DWORD *)(a1 + 76);
    v22 = v20 <= 0;
    if ( v20 <= 0 )
      v20 = 0;
    else
      v19 = 0;
    if ( !v22 )
      v4[234] = v19;
    v23 = v21 & 0x7F;
    if ( v20 < v4[255] )
    {
      v20 = v4[255];
      v4[234] = 1;
    }
    if ( v4[265] > v20 )
      v4[234] = 2;
    v6 = sub_63DC0(v5, v23);
    sub_6C054(v4 + 231, 5, "CHU%d", v4[234]);
    v3[191] = v4[231];
    *(_DWORD *)(a1 + 112) = v4[231];
    if ( v7 == 0.0 )
    {
      v24 = v4[230];
      if ( (v24 & 0x800) != 0 )
      {
        v4[230] = v24 & 0xFFFFF7FF;
        sub_394A0((__int16 *)a1, 4);
      }
    }
  }
  else
  {
    v6 = sub_63DC0(v5, *(_DWORD *)(a1 + 76) & 0x7F);
    sub_6C054(v4 + 231, 5, "CHU%d", v4[234]);
    v3[191] = v4[231];
    *(_DWORD *)(a1 + 112) = v4[231];
  }
  return v6;
}

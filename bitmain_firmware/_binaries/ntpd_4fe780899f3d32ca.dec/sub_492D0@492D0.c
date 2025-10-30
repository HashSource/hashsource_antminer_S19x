int __fastcall sub_492D0(int a1)
{
  double v1; // d0
  int v3; // r4
  double v4; // d6
  double v5; // d5
  double v6; // d4
  double v7; // d3
  double v8; // d2
  double v9; // d1
  double v10; // d8
  double v11; // d9
  double v12; // d14
  double v13; // d7
  double v14; // d15
  double v15; // d7
  double v16; // d8
  double v17; // d6
  double v18; // d5
  double v19; // d4
  int v20; // r0
  int v21; // r7
  double v22; // d1
  double v23; // d15
  double v24; // d4
  double v25; // d0
  double v26; // d9
  int result; // r0
  int v28; // r1

  v3 = **(_DWORD **)(a1 + 84);
  v4 = *(double *)(v3 + 2904);
  *(double *)(v3 + 2912) = v4;
  v5 = *(double *)(v3 + 2896);
  *(double *)(v3 + 2904) = v5;
  v6 = *(double *)(v3 + 2888);
  *(double *)(v3 + 2896) = v6;
  v7 = *(double *)(v3 + 2880);
  *(double *)(v3 + 2888) = v7;
  v8 = *(double *)(v3 + 2872);
  *(double *)(v3 + 2880) = v8;
  v9 = *(double *)(v3 + 2864);
  *(double *)(v3 + 2872) = v9;
  v10 = *(double *)(v3 + 2856);
  *(double *)(v3 + 2864) = v10;
  v11 = *(double *)(v3 + 2848);
  *(double *)(v3 + 2856) = v11;
  v12 = *(double *)(v3 + 752);
  v13 = v1
      - (v5 * -3.87518
       + v4 * 0.6505491
       + v6 * 11.5118
       + v7 * -21.41264
       + v8 * 27.12837
       + v9 * -23.84486
       + v10 * 14.27663
       + v11 * -5.352734);
  v14 = v11 * -0.02055878 + v13 * 0.004952157;
  *(double *)(v3 + 2848) = v13;
  v15 = *(double *)(v3 + 2944);
  v16 = v14
      + v10 * 0.04401413
      + v9 * -0.06558851
      + v8 * 0.07462108
      + v7 * -0.06558851
      + v6 * 0.04401413
      + v5 * -0.02055878
      + v4 * 0.004952157;
  *(double *)(v3 + 752) = v12 + v16 * v16;
  *(double *)(v3 + 2952) = v15;
  v17 = *(double *)(v3 + 2936);
  *(double *)(v3 + 2944) = v17;
  v18 = *(double *)(v3 + 2928);
  *(double *)(v3 + 2936) = v18;
  v19 = *(double *)(v3 + 2920);
  v20 = *(_DWORD *)(v3 + 3188);
  v21 = *(_DWORD *)(v3 + 3160);
  *(double *)(v3 + 2928) = v19;
  v22 = v19 * -0.01174951;
  v23 = v17 * -3.589893 + v15 * 0.8694604 + v18 * 5.570154 + v19 * -3.849667;
  v24 = *(double *)(v3 + 760);
  v25 = v1 - v23;
  *(double *)(v3 + 2920) = v25;
  v26 = v22 + v25 * 0.003215696 + v18 * 0.01712074 + v17 * -0.01174951 + v15 * 0.003215696;
  *(double *)(v3 + 760) = v24 + v26 * v26;
  result = sub_8BB9C(v20 + 1, v21);
  *(_DWORD *)(v3 + 3188) = v28;
  if ( !v28 )
    return sub_48CB8(a1);
  return result;
}

int __fastcall sub_4A258(int a1)
{
  double v1; // d0
  int v3; // r4
  double v4; // d20
  double v5; // d21
  double v6; // d22
  double v7; // d23
  double v8; // d19
  double v9; // d24
  double v10; // d26
  double v11; // d27
  double v12; // d17
  double v13; // d18
  double v14; // d16
  double v15; // d8
  double v16; // d19
  double v17; // d20
  double v18; // d17
  int v19; // r0
  int v20; // r1
  double v21; // d0
  double v22; // d16
  double v23; // d9
  int result; // r0
  int v25; // r1

  v3 = **(_DWORD **)(a1 + 84);
  v4 = *(double *)(v3 + 2904);
  *(double *)(v3 + 2912) = v4;
  v5 = *(double *)(v3 + 2896);
  *(double *)(v3 + 2904) = v5;
  v6 = *(double *)(v3 + 2888);
  *(double *)(v3 + 2896) = v6;
  v7 = *(double *)(v3 + 2880);
  *(double *)(v3 + 2888) = v7;
  v8 = *(double *)(v3 + 752);
  v9 = *(double *)(v3 + 2872);
  *(double *)(v3 + 2880) = v9;
  v10 = *(double *)(v3 + 2864);
  *(double *)(v3 + 2872) = v10;
  v11 = *(double *)(v3 + 2856);
  *(double *)(v3 + 2864) = v11;
  v12 = *(double *)(v3 + 2848);
  *(double *)(v3 + 2856) = v12;
  v13 = *(double *)(v3 + 2944);
  v14 = v1
      - (v5 * -3.87518
       + v4 * 0.6505491
       + v6 * 11.5118
       + v7 * -21.41264
       + v9 * 27.12837
       + v10 * -23.84486
       + v11 * 14.27663
       + v12 * -5.352734);
  *(double *)(v3 + 2848) = v14;
  v15 = v12 * -0.02055878
      + v14 * 0.004952157
      + v11 * 0.04401413
      + v10 * -0.06558851
      + v9 * 0.07462108
      + v7 * -0.06558851
      + v6 * 0.04401413
      + v5 * -0.02055878
      + v4 * 0.004952157;
  *(double *)(v3 + 752) = v8 + v15 * v15;
  *(double *)(v3 + 2952) = v13;
  v16 = *(double *)(v3 + 2936);
  *(double *)(v3 + 2944) = v16;
  v17 = *(double *)(v3 + 2928);
  *(double *)(v3 + 2936) = v17;
  v18 = *(double *)(v3 + 2920);
  v19 = *(_DWORD *)(v3 + 3188);
  v20 = *(_DWORD *)(v3 + 3160);
  *(double *)(v3 + 2928) = v18;
  v21 = v1 - (v16 * -3.589893 + v13 * 0.8694604 + v17 * 5.570154 + v18 * -3.849667);
  v22 = *(double *)(v3 + 760);
  *(double *)(v3 + 2920) = v21;
  v23 = v18 * -0.01174951 + v21 * 0.003215696 + v17 * 0.01712074 + v16 * -0.01174951 + v13 * 0.003215696;
  *(double *)(v3 + 760) = v22 + v23 * v23;
  result = sub_8D0EC(v19 + 1, v20);
  *(_DWORD *)(v3 + 3188) = v25;
  if ( !v25 )
    return sub_49C14(a1);
  return result;
}

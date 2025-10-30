int __fastcall sub_48CB8(int a1)
{
  double v1; // d0
  int *v3; // r1
  int v4; // r4
  int v5; // r12
  double *v6; // lr
  int v7; // r3
  int result; // r0
  int v9; // r1
  int v10; // r2
  double v11; // d7
  int32x2_t v12; // d6
  double v13; // d7
  double v14; // d6
  int v15; // r3
  double v16; // d5
  double v17; // d3
  double v18; // d1
  double v19; // d4
  double v20; // d5
  double v21; // d6
  double v22; // d7
  double v23; // d4
  double v24; // d7
  int v25; // r8
  double v26; // d7
  int v27; // r1
  double v28; // d6
  double v29; // d6
  double v30; // d4
  int v31; // r2
  double v32; // d6
  double *v33; // r8
  double v34; // d7
  int v35; // r1
  double v36; // d8
  bool v37; // zf
  double v38; // d8
  double v39; // d7
  double v40; // d5
  int v41; // r1
  int v42; // r2
  double v43; // d7
  int v44; // r1
  int v45; // r12
  int v46; // r2
  double v47; // d0
  double v48; // r0
  double v49; // d0
  __int64 v50; // r10
  int v51; // r12
  int v52; // r1
  unsigned int v53; // r0
  int v54; // r3
  double *v55; // r4

  v3 = *(int **)(a1 + 84);
  v4 = *v3;
  v5 = *(_DWORD *)(*v3 + 3180);
  v6 = (double *)(*v3 + 3152);
  v7 = (*(_DWORD *)(*v3 + 3164) + 1) % 80;
  result = *v3 + 8 * v7;
  *(_DWORD *)(*v3 + 3164) = v7;
  v9 = v7 & 7;
  if ( v7 <= 0 )
    v9 = -(-v7 & 7);
  v10 = v4 + 8 * v9;
  v11 = (v1 - *(double *)(result + 64)) / (double)(5 * v5) + *(double *)(result + 64);
  *(double *)(result + 64) = v11;
  *(double *)(v10 + 3016) = v1;
  *(double *)(v10 + 3080) = v11;
  v12.n64_u64[0] = *(_QWORD *)(v6 - 1);
  if ( v12.n64_f64[0] > 0.0 && v11 <= 0.0 )
  {
    v12.n64_u32[0] = v9 - 4;
    *(double *)(v4 + 720) = *(double *)(v4 + 720) + vcvt_n_f64_s32(v12, 3u);
  }
  *(v6 - 1) = v11;
  if ( !v7 )
  {
    v13 = *(double *)(v4 + 2992);
    v14 = *(double *)(v4 + 2984);
    *(double *)(v4 + 3000) = v13;
    *(double *)(v4 + 3008) = v14;
    v15 = *(_DWORD *)(v4 + 768);
    if ( v13 < 100.0 )
      v15 |= 1u;
    *(_QWORD *)(v4 + 2992) = 0xC12E848000000000LL;
    *(_QWORD *)(v4 + 2984) = 0x412E848000000000LL;
    if ( v13 < 100.0 )
      *(_DWORD *)(v4 + 768) = v15;
    if ( v13 <= 0.0 )
    {
      *(_DWORD *)(v4 + 744) = 0;
      *(_DWORD *)(v4 + 748) = 0;
    }
    else
    {
      v16 = (v13 - v14) / v13;
      *(double *)(v4 + 744) = v16;
      if ( v16 >= 0.5 )
      {
LABEL_13:
        if ( (v15 & 0xF) != 0 )
        {
          v18 = 16.0;
          v17 = 2.0;
          *(_DWORD *)(v4 + 3180) = 2;
          *(_DWORD *)(v4 + 3184) = 0;
        }
        else
        {
          v17 = (double)*(int *)(v4 + 3180);
          v18 = v17 * 4.0 * v17;
        }
        result = 0;
        v19 = *(double *)(v4 + 720);
        v20 = *(double *)(v4 + 712);
        v21 = *(double *)(v4 + 704);
        v22 = (double)*(int *)(v4 + 3160);
        *(_DWORD *)(v4 + 720) = 0;
        *(_DWORD *)(v4 + 724) = 0;
        v23 = v22 * v19 / 80.0;
        *(double *)(v4 + 728) = v23;
        v24 = v23 / v18 + v20;
        *(double *)(v4 + 704) = v21 + v23 / v17;
        if ( v24 <= 2.0 )
        {
          if ( v24 < -2.0 )
          {
            *(double *)(v4 + 712) = -2.0;
            *(_DWORD *)(v4 + 768) = v15 | 2;
          }
          else
          {
            *(double *)(v4 + 712) = v24;
          }
        }
        else
        {
          *(double *)(v4 + 712) = 2.0;
          *(_DWORD *)(v4 + 768) = v15 | 2;
        }
        return result;
      }
    }
    v15 |= 4u;
    *(_DWORD *)(v4 + 768) = v15;
    goto LABEL_13;
  }
  if ( v9 != 7 )
    return result;
  v25 = *(_DWORD *)(v4 + 3192) + 1;
  v26 = (*(double *)(v4 + 3096) - *(double *)(v4 + 3128)) * 0.5;
  v27 = 2 * *(_DWORD *)(v4 + 3196);
  v28 = *(double *)(v4 + 2984);
  if ( *(double *)(v4 + 2992) < v26 )
    *(double *)(v4 + 2992) = v26;
  if ( v28 > v26 )
    *(double *)(v4 + 2984) = v26;
  v29 = *(double *)(v4 + 3000);
  v30 = *(double *)(v4 + 3008);
  *(_DWORD *)(v4 + 3196) = v27;
  v31 = v25 % 10;
  v32 = (v29 + v30) * 0.5;
  *(_DWORD *)(v4 + 3192) = v25 % 10;
  if ( v32 <= v26 )
    v27 |= 1u;
  result = v27 & 0x303C0F03;
  if ( v32 <= v26 )
    *(_DWORD *)(v4 + 3196) = v27;
  if ( result != 806093568 )
  {
    result = v4 + 3040;
    v33 = (double *)(v4 + 2976);
    v34 = *(double *)(v4 + 2976);
    v35 = 2 * *(_DWORD *)(v4 + 3200);
    v36 = (*(double *)(v4 + 3032) - *(double *)(v4 + 3064)) * 0.5;
    *(_DWORD *)(v4 + 3200) = v35;
    if ( v34 > v36 )
      goto LABEL_30;
    goto LABEL_29;
  }
  v37 = v25 == 10 * (v25 / 10);
  if ( v31 )
    v31 = *(_DWORD *)(v4 + 768);
  v33 = (double *)(v4 + 2976);
  v38 = *(double *)(v4 + 3032);
  if ( !v37 )
    v31 |= 8u;
  v39 = *v33;
  if ( !v37 )
    *(_DWORD *)(v4 + 768) = v31;
  v40 = *(double *)(v4 + 3064);
  v31 = 0;
  v41 = *(_DWORD *)(v4 + 3200);
  *(_DWORD *)(v4 + 3192) = 0;
  v35 = 2 * v41;
  *(_DWORD *)(v4 + 3200) = v35;
  v36 = (v38 - v40) * 0.5;
  if ( v39 > v36 )
  {
LABEL_47:
    v42 = *(_DWORD *)(v4 + 3176) - v7;
    v43 = -*(double *)(v4 + 728);
    *(double *)(v4 + 736) = v43;
    if ( (unsigned int)(v42 + 1) <= 2 )
    {
      v44 = *(_DWORD *)(v4 + 3184) + 1;
      *(_DWORD *)(v4 + 3184) = v44;
      if ( v44 <= 20 * v5 )
      {
        v43 = v43 - (double)v42;
        *(double *)(v4 + 736) = v43;
LABEL_55:
        v46 = *(_DWORD *)(v4 + 3160);
        v47 = *v6;
        HIDWORD(v48) = *(_DWORD *)(v4 + 52);
        *(_DWORD *)(v4 + 56) = *(_DWORD *)(v4 + 48);
        *(_DWORD *)(v4 + 60) = HIDWORD(v48);
        v49 = v47 + (double)v46 * (v43 / 8000.0);
        LODWORD(v48) = 32;
        ldexp(v48, v46);
        if ( v49 < 0.0 )
          v50 = -sub_8C010(COERCE_UNSIGNED_INT64(-v49), HIDWORD(COERCE_UNSIGNED_INT64(-v49)));
        else
          v50 = sub_8C010(LODWORD(v49), HIDWORD(v49));
        v51 = *(unsigned __int8 *)(v4 + 3200);
        v52 = *(_DWORD *)(v4 + 28);
        *(_DWORD *)(v4 + 48) = *(_DWORD *)(v4 + 24);
        *(_DWORD *)(v4 + 52) = v52;
        v53 = *(_DWORD *)(v4 + 52);
        v54 = *(_DWORD *)(v4 + 48) - HIDWORD(v50);
        if ( v53 < (unsigned int)v50 )
          --v54;
        *(_DWORD *)(v4 + 48) = v54;
        *(_DWORD *)(v4 + 52) = v53 - v50;
        if ( v51 == 224 )
          goto LABEL_76;
        if ( v51 <= 224 )
        {
          if ( v51 == 128 )
            goto LABEL_77;
          if ( v51 != 192 )
          {
            if ( v51 )
            {
LABEL_64:
              sub_48698(a1, 0);
              *(_DWORD *)(v4 + 768) |= 0x10u;
LABEL_65:
              v55 = (double *)(v4 + 2960);
              result = 0;
              if ( *v55 <= v36 )
                v36 = *v55;
              *v33 = (v36 + *(v33 - 1)) * 0.5;
              *v55 = 1000000.0;
              *(v33 - 1) = -1000000.0;
              return result;
            }
LABEL_77:
            sub_48698(a1, 0);
            goto LABEL_65;
          }
LABEL_76:
          sub_48698(a1, 1);
          goto LABEL_65;
        }
        if ( v51 != 248 )
        {
          if ( v51 <= 248 )
          {
            if ( v51 != 240 )
              goto LABEL_64;
            goto LABEL_76;
          }
          if ( v51 != 252 && v51 != 254 )
            goto LABEL_64;
        }
        sub_48698(a1, 2);
        goto LABEL_65;
      }
      v45 = v5 + 1;
      if ( v45 <= 10 )
        *(_DWORD *)(v4 + 3180) = v45;
      else
        v42 = 10;
      if ( v45 > 10 )
        *(_DWORD *)(v4 + 3180) = v42;
    }
    *(_DWORD *)(v4 + 3176) = v7;
    *(_DWORD *)(v4 + 3184) = 0;
    goto LABEL_55;
  }
LABEL_29:
  *(_DWORD *)(v4 + 3200) = v35 | 1;
LABEL_30:
  switch ( v31 )
  {
    case 0:
      goto LABEL_47;
    case 1:
      goto LABEL_38;
    case 2:
      if ( *(v33 - 1) < v36 )
LABEL_38:
        *(v33 - 1) = v36;
      break;
    case 9:
      *(double *)(v4 + 2960) = v36;
      break;
    default:
      return result;
  }
  return result;
}

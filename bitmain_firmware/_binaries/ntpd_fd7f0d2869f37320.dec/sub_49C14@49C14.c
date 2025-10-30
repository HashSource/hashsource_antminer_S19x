int __fastcall sub_49C14(int a1)
{
  double v1; // d0
  int v3; // r4
  int v4; // s15
  int v5; // r3
  int result; // r0
  int v7; // r2
  int v8; // r1
  double v9; // d16
  int32x2_t v10; // d17
  double v11; // d17
  double v12; // d16
  int v13; // r1
  double v14; // d16
  double v15; // d19
  double v16; // d18
  double v17; // d16
  double v18; // d21
  double v19; // d20
  double v20; // d16
  double v21; // d17
  int v22; // r0
  int v23; // r1
  double v24; // d17
  double v25; // d16
  double v26; // d17
  double v27; // d18
  int v28; // r2
  double *v29; // r7
  double v30; // d16
  double v31; // d8
  int v32; // r1
  double v33; // d8
  bool v34; // zf
  double v35; // d8
  int v36; // r1
  double v37; // d17
  double v38; // d16
  int v39; // r2
  double v40; // d16
  int v41; // r2
  double v42; // d0
  double v43; // r0
  double v44; // d0
  unsigned int v45; // r8
  __int64 v46; // r0
  int v47; // r12
  __int64 v48; // r8
  unsigned __int64 v49; // r8
  int v50; // r2
  int v51; // r2
  int v52; // r3
  double *v53; // r4
  double v54; // d16
  int v55; // r0
  int v56; // r1
  int v57; // r0
  unsigned __int64 v58; // [sp+0h] [bp-14h]

  v3 = **(_DWORD **)(a1 + 84);
  v4 = 5 * *(_DWORD *)(v3 + 3180);
  v5 = (*(_DWORD *)(v3 + 3164) + 1) % 80;
  *(_DWORD *)(v3 + 3164) = v5;
  result = v3 + 8 * v5;
  v7 = v5 % 8;
  v8 = v3 + 8 * (v5 % 8);
  v9 = *(double *)(result + 64) + (v1 - *(double *)(result + 64)) / (double)v4;
  *(double *)(result + 64) = v9;
  *(double *)(v8 + 3016) = v1;
  *(double *)(v8 + 3080) = v9;
  if ( *(double *)(v3 + 3144) > 0.0 && v9 <= 0.0 )
  {
    v10.n64_u32[0] = v7 - 4;
    v10.n64_u32[1] = v7 - 4;
    *(double *)(v3 + 720) = *(double *)(v3 + 720) + vcvt_n_f64_s32(v10, 3u);
  }
  *(double *)(v3 + 3144) = v9;
  if ( !v5 )
  {
    v11 = *(double *)(v3 + 2992);
    v12 = *(double *)(v3 + 2984);
    *(double *)(v3 + 3000) = v11;
    *(double *)(v3 + 3008) = v12;
    *(_QWORD *)(v3 + 2992) = 0xC12E848000000000LL;
    *(_QWORD *)(v3 + 2984) = 0x412E848000000000LL;
    v13 = *(_DWORD *)(v3 + 768);
    if ( v11 < 100.0 )
    {
      v13 |= 1u;
      *(_DWORD *)(v3 + 768) = v13;
    }
    if ( v11 <= 0.0 )
    {
      *(_DWORD *)(v3 + 744) = 0;
      *(_DWORD *)(v3 + 748) = 0;
    }
    else
    {
      v14 = (v11 - v12) / v11;
      *(double *)(v3 + 744) = v14;
      if ( v14 >= 0.5 )
        goto LABEL_9;
    }
    v13 |= 4u;
    *(_DWORD *)(v3 + 768) = v13;
LABEL_9:
    if ( (v13 & 0xF) != 0 )
    {
      v16 = 16.0;
      *(_DWORD *)(v3 + 3180) = 2;
      *(_DWORD *)(v3 + 3184) = 0;
      v15 = 2.0;
    }
    else
    {
      v15 = (double)*(int *)(v3 + 3180);
      v16 = v15 * (v15 * 4.0);
    }
    result = *(_DWORD *)(v3 + 3160);
    v17 = *(double *)(v3 + 720);
    *(_DWORD *)(v3 + 720) = 0;
    *(_DWORD *)(v3 + 724) = 0;
    v18 = *(double *)(v3 + 712);
    v19 = *(double *)(v3 + 704);
    v20 = (double)result * v17 / 80.0;
    *(double *)(v3 + 728) = v20;
    v21 = v20 / v16 + v18;
    *(double *)(v3 + 704) = v19 + v20 / v15;
    if ( v21 <= 2.0 )
    {
      if ( v21 >= -2.0 )
        *(double *)(v3 + 712) = v21;
      else
        v13 |= 2u;
      if ( v21 < -2.0 )
      {
        *(_DWORD *)(v3 + 768) = v13;
        *(double *)(v3 + 712) = -2.0;
      }
    }
    else
    {
      *(double *)(v3 + 712) = 2.0;
      *(_DWORD *)(v3 + 768) = v13 | 2;
    }
  }
  if ( v7 != 7 )
    return result;
  v22 = *(_DWORD *)(v3 + 3192) + 1;
  v23 = 2 * *(_DWORD *)(v3 + 3196);
  v24 = *(double *)(v3 + 2984);
  v25 = (*(double *)(v3 + 3096) - *(double *)(v3 + 3128)) * 0.5;
  if ( v25 > *(double *)(v3 + 2992) )
    *(double *)(v3 + 2992) = v25;
  if ( v25 < v24 )
    *(double *)(v3 + 2984) = v25;
  v26 = *(double *)(v3 + 3008);
  v27 = *(double *)(v3 + 3000);
  *(_DWORD *)(v3 + 3196) = v23;
  v28 = v22 % 10;
  *(_DWORD *)(v3 + 3192) = v22 % 10;
  if ( v25 >= (v27 + v26) * 0.5 )
  {
    v23 |= 1u;
    *(_DWORD *)(v3 + 3196) = v23;
  }
  if ( (v23 & 0x303C0F03) != 0x300C0300 )
  {
    result = v3 + 3072;
    v29 = (double *)(v3 + 2976);
    v30 = *(double *)(v3 + 3032);
    v31 = *(double *)(v3 + 3064);
    v32 = 2 * *(_DWORD *)(v3 + 3200);
    *(_DWORD *)(v3 + 3200) = v32;
    v33 = (v30 - v31) * 0.5;
    if ( v33 < *(double *)(v3 + 2976) )
      goto LABEL_24;
    goto LABEL_23;
  }
  v34 = v22 == 10 * (v22 / 10);
  result = v3 + 3072;
  v29 = (double *)(v3 + 2976);
  if ( v28 )
    v28 = *(_DWORD *)(v3 + 768);
  v35 = *(double *)(v3 + 3064);
  if ( !v34 )
    v28 |= 8u;
  v36 = *(_DWORD *)(v3 + 3200);
  if ( !v34 )
    *(_DWORD *)(v3 + 768) = v28;
  v37 = *v29;
  v32 = 2 * v36;
  v38 = *(double *)(v3 + 3032);
  v28 = 0;
  *(_DWORD *)(v3 + 3200) = v32;
  *(_DWORD *)(v3 + 3192) = 0;
  v33 = (v38 - v35) * 0.5;
  if ( v33 < v37 )
  {
LABEL_43:
    v39 = *(_DWORD *)(v3 + 3176) - v5;
    v40 = -*(double *)(v3 + 728);
    *(double *)(v3 + 736) = v40;
    if ( (unsigned int)(v39 + 1) <= 2 )
    {
      v55 = *(_DWORD *)(v3 + 3180);
      v56 = *(_DWORD *)(v3 + 3184) + 1;
      *(_DWORD *)(v3 + 3184) = v56;
      if ( v56 <= 20 * v55 )
      {
        v40 = v40 - (double)v39;
        *(double *)(v3 + 736) = v40;
LABEL_45:
        v41 = *(_DWORD *)(v3 + 3160);
        HIDWORD(v43) = *(_DWORD *)(v3 + 52);
        v42 = *(double *)(v3 + 3152);
        *(_DWORD *)(v3 + 56) = *(_DWORD *)(v3 + 48);
        *(_DWORD *)(v3 + 60) = HIDWORD(v43);
        LODWORD(v43) = 32;
        v44 = v42 + (double)v41 * (v40 / 8000.0);
        if ( v44 >= 0.0 )
        {
          v45 = 0;
        }
        else
        {
          v44 = -v44;
          v45 = 1;
        }
        ldexp(v43, v41);
        v58 = vshrd_n_u64(vdup_n_s32(v45).n64_u64[0], 0x20u);
        v46 = sub_8D558(LODWORD(v44), HIDWORD(v44));
        v47 = *(unsigned __int8 *)(v3 + 3200);
        v48 = v46 ^ -(__int64)v58;
        HIDWORD(v46) = *(_DWORD *)(v3 + 28);
        *(_DWORD *)(v3 + 48) = *(_DWORD *)(v3 + 24);
        *(_DWORD *)(v3 + 52) = HIDWORD(v46);
        v49 = v58 + v48;
        HIDWORD(v46) = *(_DWORD *)(v3 + 52);
        v50 = *(_DWORD *)(v3 + 48);
        *(_DWORD *)(v3 + 52) = HIDWORD(v46) - v49;
        v51 = v50 - HIDWORD(v49);
        if ( HIDWORD(v46) < (unsigned int)v49 )
          v52 = v51 - 1;
        else
          v52 = v51;
        *(_DWORD *)(v3 + 48) = v52;
        if ( v47 == 224 )
          goto LABEL_72;
        if ( v47 <= 224 )
        {
          if ( v47 == 128 )
            goto LABEL_73;
          if ( v47 != 192 )
          {
            if ( v47 )
            {
LABEL_56:
              sub_49618(a1, 0);
              *(_DWORD *)(v3 + 768) |= 0x10u;
LABEL_57:
              v53 = (double *)(v3 + 2960);
              result = 0;
              v54 = *v53;
              if ( v33 < *v53 )
                v54 = v33;
              *v29 = (v54 + *(v29 - 1)) * 0.5;
              *v53 = 1000000.0;
              *(v29 - 1) = -1000000.0;
              return result;
            }
LABEL_73:
            sub_49618(a1, 0);
            goto LABEL_57;
          }
LABEL_72:
          sub_49618(a1, 1);
          goto LABEL_57;
        }
        if ( v47 != 248 )
        {
          if ( v47 <= 248 )
          {
            if ( v47 != 240 )
              goto LABEL_56;
            goto LABEL_72;
          }
          if ( v47 != 252 && v47 != 254 )
            goto LABEL_56;
        }
        sub_49618(a1, 2);
        goto LABEL_57;
      }
      v57 = v55 + 1;
      if ( v57 > 10 )
        *(_DWORD *)(v3 + 3180) = 10;
      else
        *(_DWORD *)(v3 + 3180) = v57;
    }
    *(_DWORD *)(v3 + 3176) = v5;
    *(_DWORD *)(v3 + 3184) = 0;
    goto LABEL_45;
  }
LABEL_23:
  *(_DWORD *)(v3 + 3200) = v32 | 1;
LABEL_24:
  switch ( v28 )
  {
    case 0:
      goto LABEL_43;
    case 1:
      goto LABEL_35;
    case 2:
      if ( v33 > *(v29 - 1) )
LABEL_35:
        *(v29 - 1) = v33;
      break;
    case 9:
      *(double *)(v3 + 2960) = v33;
      break;
    default:
      return result;
  }
  return result;
}

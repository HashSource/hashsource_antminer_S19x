int __fastcall sub_35AF4(int a1)
{
  __int64 v1; // d0
  __int64 v2; // d1
  __int64 v3; // d2
  double v4; // d17
  int v5; // r2
  _QWORD *v7; // r12
  int v8; // r4
  int v9; // r3
  int v10; // r2
  double *v11; // r7
  double *v12; // r11
  _BYTE *v13; // r9
  _BYTE *v14; // r6
  int v15; // r10
  int v16; // r0
  int v17; // r3
  double v18; // d9
  int v19; // r3
  double v20; // d16
  double v21; // r0
  double v22; // r0
  int v23; // r3
  double *v24; // r1
  _DWORD *v25; // r0
  double *v26; // r3
  int *v27; // r2
  double v28; // d16
  int v29; // r12
  int v30; // lr
  int *v31; // r2
  int v32; // r3
  double v33; // r0
  double v34; // d18
  int v35; // t1
  double v36; // d16
  int v37; // r7
  double v38; // d16
  int v39; // r2
  double *v40; // r0
  int v41; // t1
  int v42; // r3
  bool v44; // zf
  int v45; // r9
  double v46; // d8
  double v47; // d0
  double v48; // d9
  __int64 v49; // r2
  double v50; // d10
  double v51; // r0
  int v52; // r2
  double v53; // d0
  double v54; // d16
  double v55; // d17
  int v56; // r7
  unsigned int v57; // r3
  int v58; // r0
  double v59; // d8
  int v60; // r2
  double v61; // d9
  unsigned int v63; // [sp+8h] [bp-28h]
  _DWORD v64[8]; // [sp+10h] [bp-20h] BYREF
  _BYTE v65[8]; // [sp+30h] [bp+0h] BYREF
  char v66; // [sp+38h] [bp+8h] BYREF
  char v67; // [sp+68h] [bp+38h] BYREF
  char v68; // [sp+70h] [bp+40h] BYREF
  char v69[80]; // [sp+74h] [bp+44h] BYREF
  int v70; // [sp+C4h] [bp+94h]

  v5 = *(_DWORD *)(a1 + 320);
  v7 = (_QWORD *)(a1 + 8 * v5);
  v7[49] = v1;
  v8 = (v5 + 1) % 8;
  v9 = _stack_chk_guard;
  v10 = v5 + 130;
  v7[41] = v2;
  v11 = (double *)v65;
  v12 = (double *)&v67;
  v70 = v9;
  v13 = v65;
  v7[57] = v3;
  v14 = v65;
  v15 = 7;
  v16 = current_time;
  v17 = current_time - *(_DWORD *)(a1 + 704);
  *(_DWORD *)(a1 + 4 * v10) = current_time;
  *(_DWORD *)(a1 + 320) = v8;
  *(_DWORD *)(a1 + 704) = v16;
  v18 = (double)(unsigned int)v17 * clock_phi;
  do
  {
    v19 = a1 + 8 * v8;
    v20 = *(double *)(v19 + 456);
    if ( v15 )
    {
      v20 = v18 + v20;
      *(double *)(v19 + 456) = v20;
    }
    if ( v20 < 16.0 )
    {
      HIDWORD(v21) = &allan_xpt;
      v63 = *(_DWORD *)(a1 + 704) - *(_DWORD *)(a1 + 4 * (v8 + 130));
      LODWORD(v21) = (unsigned __int8)allan_xpt;
      v22 = ldexp(v21, v10);
      v10 = (unsigned int)1.0;
      v23 = a1 + 8 * v8;
      if ( v63 <= (unsigned int)1.0 )
        v22 = *(double *)(v23 + 328);
      else
        v20 = *(double *)(v23 + 328);
      if ( v63 <= (unsigned int)1.0 )
        *v12 = v22;
      else
        v4 = *(double *)(v23 + 456);
      if ( v63 > (unsigned int)1.0 )
        *v12 = v20 + v4;
    }
    else
    {
      *v12 = 16.0;
      *(double *)(a1 + 8 * v8 + 456) = 16.0;
    }
    *((_DWORD *)v14 - 1) = v8;
    v14 -= 4;
    --v15;
    --v12;
    v8 = (v8 + 1) % 8;
  }
  while ( v15 != -1 );
  if ( !LODWORD(freq_cnt) )
  {
    v24 = (double *)&v66;
    v25 = v64;
    do
    {
      v26 = (double *)v65;
      v27 = v64;
      do
      {
        v28 = *v26++;
        if ( v28 > *v24 )
        {
          *(v26 - 1) = *v24;
          v29 = *v27;
          v30 = v25[1];
          *v24 = v28;
          *v27 = v30;
          v25[1] = v29;
        }
        ++v27;
      }
      while ( v24 != v26 );
      ++v24;
      ++v25;
    }
    while ( v24 != (double *)&v68 );
  }
  v31 = v64;
  v32 = a1 + 551;
  HIDWORD(v33) = 0;
  v34 = sys_maxdist;
  do
  {
    v35 = *v31++;
    v36 = *v11++;
    *(_BYTE *)++v32 = v35;
    if ( v36 < 16.0 && (SHIDWORD(v33) <= 1 || v36 < v34) )
      ++HIDWORD(v33);
  }
  while ( v32 != a1 + 559 );
  v37 = v64[0];
  v38 = 0.0;
  v39 = 7;
  v40 = (double *)(a1 + 8 * (v64[0] + 49));
  *(_QWORD *)(a1 + 624) = 0;
  *(_QWORD *)(a1 + 632) = 0;
  do
  {
    v41 = *((_DWORD *)v13 - 1);
    v13 -= 4;
    v42 = a1 + 8 * v41;
    v38 = (v38 + *(double *)(v42 + 456)) * 0.5;
    if ( v39 < SHIDWORD(v33) )
      *(double *)(a1 + 624) = *(double *)(a1 + 624) + (*(double *)(v42 + 392) - *v40) * (*(double *)(v42 + 392) - *v40);
  }
  while ( v39-- != 0 );
  *(double *)(a1 + 632) = v38;
  if ( !HIDWORD(v33) )
    goto LABEL_52;
  v44 = HIDWORD(v33) == 1;
  v45 = a1 + 8 * v37;
  if ( HIDWORD(v33) != 1 )
    --HIDWORD(v33);
  v46 = *(double *)(a1 + 608);
  v47 = *(double *)(a1 + 624);
  if ( !v44 )
    v38 = (double)SHIDWORD(v33);
  v48 = *(double *)(v45 + 392);
  if ( !v44 )
    v47 = v47 / v38;
  *(double *)(a1 + 608) = v48;
  v49 = *(_QWORD *)(v45 + 328);
  *(_QWORD *)(a1 + 616) = v49;
  v50 = sqrt(v47);
  if ( !v44 )
    *(double *)(a1 + 624) = v47;
  LODWORD(v33) = sys_precision;
  v51 = ldexp(v33, v49);
  if ( v50 > 1.0 )
  {
    v53 = sqrt(*(double *)(a1 + 624));
  }
  else
  {
    LODWORD(v51) = sys_precision;
    v53 = 1.0;
    v51 = ldexp(v51, v52);
  }
  v54 = sys_maxdist;
  v55 = *(double *)(a1 + 632);
  *(double *)(a1 + 624) = v53;
  if ( v55 < v54 && v54 > *(double *)(v45 + 456) )
  {
    v56 = v37 + 130;
    v59 = fabs(v46 - v48);
    if ( v59 > v53 * 3.0 )
    {
      v60 = *(_DWORD *)(a1 + 304);
      LODWORD(v51) = *(unsigned __int8 *)(a1 + 64);
      v61 = (double)(unsigned int)(*(_DWORD *)(a1 + 4 * v56) - v60);
      v51 = ldexp(v51, v60);
      if ( v61 < 1.0 + 1.0 )
      {
        sub_6D00C(v69, 80, "%.6f s", v59);
        LODWORD(v51) = sub_26294(141, a1, v69);
        return LODWORD(v51);
      }
    }
  }
  else
  {
    v56 = v37 + 130;
  }
  v57 = *(_DWORD *)(a1 + 4 * v56);
  if ( v57 > *(_DWORD *)(a1 + 304) )
  {
    *(_DWORD *)(a1 + 304) = v57;
    v58 = sub_237F8(a1);
    LODWORD(v51) = sub_42A9C(a1 + 16, v58);
    if ( !*(_DWORD *)(a1 + 308) || sys_leap == 3 )
LABEL_52:
      LODWORD(v51) = sub_34A5C();
  }
  return LODWORD(v51);
}

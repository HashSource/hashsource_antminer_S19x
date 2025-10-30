int __fastcall sub_5F960(int a1)
{
  int v2; // r9
  double v3; // r0
  _DWORD *v4; // r5
  int v5; // s15
  double v6; // d0
  unsigned int v7; // r10
  __int64 v8; // r0
  unsigned int v9; // r4
  int v10; // r6
  __int64 v11; // r10
  unsigned int v12; // r3
  int v13; // r8
  int v14; // r4
  int result; // r0
  int v16; // r1
  char *v17; // r6
  double v18; // d30
  int v19; // r4
  double v20; // d18
  double v21; // d19
  double v22; // d20
  double v23; // d21
  double v24; // d22
  double v25; // d28
  double v26; // d29
  double v27; // d0
  double v28; // d16
  double v29; // d17
  double v30; // d16
  int v31; // r1
  int v32; // r0
  double *v33; // r1
  double v34; // d17
  double v35; // d16
  double v36; // d0
  double v37; // d29
  double v38; // d27
  double v39; // d16
  double v40; // d17
  double v41; // d3
  double v42; // d24
  double v43; // d23
  double v44; // d22
  double v45; // d21
  double v46; // d20
  double v47; // d19
  double v48; // d18
  double v49; // d2
  double v50; // d0
  double v51; // d8
  double v52; // d9
  double v53; // d10
  double v54; // d11
  double v55; // d26
  double v56; // d25
  double v57; // d12
  double v58; // d13
  double v59; // d14
  double v60; // d15
  double v61; // d6
  double v62; // d7
  double v63; // d31
  double v64; // d30
  double v65; // d1
  unsigned int v66; // lr
  int v67; // r8
  unsigned int v68; // r12
  int v69; // r3
  int v70; // r2
  char v71; // t1
  int v72; // r0
  int v73; // r1
  int v74; // r2
  int v75; // r12
  int v76; // lr
  int v77; // r2
  double *v78; // r3
  double *v79; // r1
  double v80; // d16
  double v81; // d17
  double v82; // d16
  double v83; // d3
  double v84; // d16
  int v85; // r0
  int v86; // r3
  int v87; // r2
  double v88; // d18
  double v89; // d19
  int v90; // r3
  double v91; // d16
  int v92; // r3
  int v93; // r3
  int v94; // r12
  double *v95; // r2
  double v96; // d18
  int i; // r1
  double v98; // d16
  int v99; // r12
  unsigned __int8 v100; // r1
  int v101; // r2
  int v102; // r3
  _DWORD *v103; // r4
  int v104; // r2
  int v105; // r0
  int v106; // r3
  unsigned __int64 v107; // [sp+8h] [bp-1Ch]
  int v108; // [sp+10h] [bp-14h]

  v2 = *(_DWORD *)(a1 + 4);
  HIDWORD(v3) = *(_DWORD *)(v2 + 84);
  v108 = HIDWORD(v3);
  v4 = (_DWORD *)*(_DWORD *)HIDWORD(v3);
  if ( *(int *)(*(_DWORD *)HIDWORD(v3) + 1164) <= 0 )
    return sub_5F054(v2, *(_BYTE *)(a1 + 88), *(_DWORD *)(a1 + 72), *(_DWORD *)(a1 + 76));
  v5 = *(_DWORD *)(a1 + 84);
  LODWORD(v3) = 32;
  v6 = (double)v5 / 8000.0;
  if ( v6 >= 0.0 )
  {
    v7 = 0;
  }
  else
  {
    v6 = -v6;
    v7 = 1;
  }
  ldexp(v3, _stack_chk_guard);
  v107 = vshrd_n_u64(vdup_n_s32(v7).n64_u64[0], 0x20u);
  v8 = sub_8D558(LODWORD(v6), HIDWORD(v6));
  v9 = *(_DWORD *)(a1 + 76);
  v10 = *(_DWORD *)(a1 + 84);
  v11 = v8 ^ -(__int64)v107;
  v12 = v9 - (v107 + v11);
  v13 = *(_DWORD *)(a1 + 72) - ((v107 + v11) >> 32);
  *(_DWORD *)(a1 + 76) = v12;
  if ( v9 < v12 )
    v14 = v13 - 1;
  else
    v14 = v13;
  *(_DWORD *)(a1 + 72) = v14;
  result = *(_DWORD *)(a1 + 72);
  v16 = *(_DWORD *)(a1 + 76);
  v4[222] = result;
  v4[223] = v16;
  if ( v10 > 0 )
  {
    v17 = (char *)(a1 + 88);
    do
    {
      v71 = *v17++;
      v18 = *(double *)&v4[2 * (unsigned __int8)~v71 + 292];
      if ( v18 > 6000.0 )
      {
        v18 = 6000.0;
        ++v4[806];
      }
      else if ( v18 < -6000.0 )
      {
        v18 = -6000.0;
        ++v4[806];
      }
      v19 = **(_DWORD **)(v2 + 84);
      v20 = *(double *)(v19 + 3296);
      *(double *)(v19 + 3304) = v20;
      v21 = *(double *)(v19 + 3288);
      *(double *)(v19 + 3296) = v21;
      v22 = *(double *)(v19 + 3280);
      *(double *)(v19 + 3288) = v22;
      v23 = *(double *)(v19 + 3272);
      *(double *)(v19 + 3280) = v23;
      v24 = *(double *)(v19 + 3264);
      *(double *)(v19 + 3272) = v24;
      v25 = *(double *)(v19 + 3256);
      *(double *)(v19 + 3264) = v25;
      v26 = *(double *)(v19 + 3248);
      v27 = 1000.0;
      *(double *)(v19 + 3256) = v26;
      v28 = *(double *)(v19 + 3240);
      *(double *)(v19 + 3248) = v28;
      v29 = v18
          - (v21 * 0.488486
           + v20 * 0.5844676
           + v22 * 2.704384
           + v23 * 1.645032
           + v24 * 4.644557
           + v25 * 1.879165
           + v26 * 3.522634
           + v28 * 0.7315738);
      *(double *)(v19 + 3240) = v29;
      v30 = v28 * 0.003156599
          + v29 * 0.006176213
          + v26 * 0.007567487
          + v25 * 0.00434458
          + v24 * 0.01190128
          + v23 * 0.00434458
          + v22 * 0.007567487
          + v21 * 0.003156599
          + v20 * 0.006176213;
      *(double *)(v19 + 3608) = v30 * 0.25;
      if ( v30 > 1000.0 )
      {
        v30 = 1000.0;
        v27 = -1000.0;
      }
      else if ( v30 >= -1000.0 )
      {
        v27 = -v30;
      }
      else
      {
        v30 = -1000.0;
      }
      v31 = *(_DWORD *)(v19 + 3616);
      v32 = v31 + 1;
      v33 = (double *)(v19 + 8 * v31 + 3312);
      v34 = *v33;
      *v33 = v30;
      v35 = v27 * v34;
      *(_DWORD *)(v19 + 3616) = v32 % 10;
      if ( v27 * v34 < 0.0 )
        v36 = -sqrt(-v35);
      else
        v36 = sqrt(v35);
      v37 = *(double *)(v19 + 3592);
      *(double *)(v19 + 3600) = v37;
      v38 = v36 * 0.02538771;
      v39 = *(double *)(v19 + 3584);
      *(double *)(v19 + 3592) = v39;
      v40 = *(double *)(v19 + 3576);
      *(double *)(v19 + 3584) = v40;
      v41 = *(double *)(v19 + 3568);
      *(double *)(v19 + 3576) = v41;
      v42 = *(double *)(v19 + 3560);
      *(double *)(v19 + 3568) = v42;
      v43 = *(double *)(v19 + 3552);
      *(double *)(v19 + 3560) = v43;
      v44 = *(double *)(v19 + 3544);
      *(double *)(v19 + 3552) = v44;
      v45 = *(double *)(v19 + 3536);
      *(double *)(v19 + 3544) = v45;
      v46 = *(double *)(v19 + 3528);
      *(double *)(v19 + 3536) = v46;
      v47 = *(double *)(v19 + 3520);
      *(double *)(v19 + 3528) = v47;
      v48 = *(double *)(v19 + 3512);
      *(double *)(v19 + 3520) = v48;
      v49 = *(double *)(v19 + 3504);
      *(double *)(v19 + 3512) = v49;
      v50 = *(double *)(v19 + 3496);
      *(double *)(v19 + 3504) = v50;
      v51 = *(double *)(v19 + 3488);
      *(double *)(v19 + 3496) = v51;
      v52 = *(double *)(v19 + 3480);
      *(double *)(v19 + 3488) = v52;
      v53 = *(double *)(v19 + 3472);
      *(double *)(v19 + 3480) = v53;
      v54 = *(double *)(v19 + 3464);
      v55 = *(double *)(v19 + 3624);
      *(double *)(v19 + 3472) = v54;
      v56 = v55 + 0.000125;
      v57 = *(double *)(v19 + 3456);
      *(double *)(v19 + 3464) = v57;
      v58 = *(double *)(v19 + 3448);
      *(double *)(v19 + 3456) = v58;
      v59 = *(double *)(v19 + 3440);
      *(double *)(v19 + 3448) = v59;
      v60 = *(double *)(v19 + 3432);
      *(double *)(v19 + 3440) = v60;
      v61 = *(double *)(v19 + 3424);
      *(double *)(v19 + 3432) = v61;
      v62 = *(double *)(v19 + 3416);
      *(double *)(v19 + 3424) = v62;
      v63 = *(double *)(v19 + 3408);
      *(double *)(v19 + 3416) = v63;
      v64 = *(double *)(v19 + 3400);
      *(double *)(v19 + 3408) = v64;
      v65 = *(double *)(v19 + 3392);
      *(double *)(v19 + 3400) = v65;
      *(double *)(v19 + 3392) = v38;
      if ( v55 + 0.000125 <= 0.000416666667 )
      {
        *(double *)(v19 + 3624) = v56;
        goto LABEL_20;
      }
      v72 = *(_DWORD *)(v19 + 888);
      v73 = *(_DWORD *)(v19 + 892);
      v74 = *(_DWORD *)(v19 + 4656) + 1;
      *(double *)(v19 + 3624) = v56 - 0.000416666667;
      v75 = v74 % 8;
      *(_DWORD *)(v19 + 4656) = v74 % 8;
      v76 = (v74 % 8) << 7;
      v77 = v19 + v76 + 3632;
      v78 = (double *)(v19 + v76 + 3736);
      *(_DWORD *)v77 = v72;
      *(_DWORD *)(v77 + 4) = v73;
      v79 = (double *)(v19 + v76 + 3648);
      v80 = v39 * 0.1084671 + v37 * 0.02538771 + v40 * 0.2003159;
      v81 = 1000000.0;
      v82 = v80 + v41 * 0.2985303;
      v83 = -1000000.0;
      *(double *)(v77 + 8) = -((v82
                              + v42 * 0.4003697
                              + v43 * 0.5028552
                              + v44 * 0.6028795
                              + v45 * 0.6973249
                              + v46 * 0.7831828
                              + v47 * 0.8576717
                              + v48 * 0.9183463
                              + v49 * 0.9631951
                              + v50 * 0.9907208
                              + v51
                              + v52 * 0.9907208
                              + v53 * 0.9631951
                              + v54 * 0.9183463
                              + v57 * 0.8576717
                              + v58 * 0.7831828
                              + v59 * 0.6973249
                              + v60 * 0.6028795
                              + v61 * 0.5028552
                              + v62 * 0.4003697
                              + v63 * 0.2985303
                              + v64 * 0.2003159
                              + v65 * 0.1084671
                              + v38)
                             * 6.0);
      do
      {
        v84 = *(v78 - 2);
        *--v78 = v84;
        if ( v84 > v83 )
          v83 = v84;
        if ( v84 < v81 )
          v81 = v84;
      }
      while ( v78 != v79 );
      v85 = v19 + v76;
      v86 = 0;
      v87 = 1;
      v88 = 0.0;
      *(double *)(v19 + v76 + 3736) = v83 - v81;
      v89 = v81 + (v83 - v81) * 0.45;
      while ( 1 )
      {
        v90 = 2 * v86;
        *(_DWORD *)(v85 + 3752) = v90;
        v91 = *v79++;
        if ( v89 < v91 )
          *(_DWORD *)(v85 + 3752) = v90 | 1;
        if ( (unsigned int)(v87 - 1) <= 1 )
          goto LABEL_43;
        if ( v87 == 11 )
          break;
        if ( v89 >= v91 )
        {
          ++v87;
          v88 = v88 + v83 - v91;
          if ( v87 == 12 )
            goto LABEL_44;
          goto LABEL_37;
        }
LABEL_43:
        ++v87;
        v88 = v88 + v91 - v81;
        if ( v87 == 12 )
          goto LABEL_44;
LABEL_37:
        v86 = *(_DWORD *)(v85 + 3752);
      }
      v88 = v88 + v83 - v91;
LABEL_44:
      *(double *)(v19 + v76 + 3744) = v88 / ((v83 - v81) * 11.0);
      v92 = *(_DWORD *)(v19 + 4664);
      if ( v92 <= 0 )
      {
        if ( v75 == *(_DWORD *)(v19 + 4660) )
          goto LABEL_48;
      }
      else
      {
        v93 = v92 - 1;
        *(_DWORD *)(v19 + 4664) = v93;
        if ( !v93 )
        {
          *(_DWORD *)(v19 + 4660) = v75;
LABEL_48:
          v94 = -1;
          v95 = (double *)(v19 + 3752);
          v96 = 0.0;
          for ( i = 0; i != 8; ++i )
          {
            while ( (*(_DWORD *)v95 & 0x601) != 0x600 || *(v95 - 2) < 800.0 )
            {
              ++i;
              v95 += 16;
              if ( i == 8 )
                goto LABEL_57;
            }
            v98 = *(v95 - 1);
            v95 += 16;
            if ( v98 > v96 )
              v94 = i;
            if ( v98 > v96 )
              v96 = v98;
          }
LABEL_57:
          if ( v94 != -1 )
          {
            v99 = v19 + (v94 << 7);
            v100 = *(_DWORD *)(v99 + 3752) >> 1;
            v101 = *(_DWORD *)(v99 + 3632);
            v102 = *(_DWORD *)(v99 + 3636);
            *(_QWORD *)(v19 + 1136) = *(_QWORD *)(v99 + 3736);
            sub_5F054(v2, v100, v101, v102);
            *(_DWORD *)(v19 + 4664) = 88;
          }
        }
      }
LABEL_20:
      result = v4[807] + 1;
      v66 = v4[223];
      v67 = v4[808];
      v68 = v66 + v4[809];
      v4[223] = v68;
      v69 = result % 8000;
      if ( v66 > v68 )
        v70 = v67 + v4[222] + 1;
      else
        v70 = v67 + v4[222];
      v4[222] = v70;
      v4[807] = v69;
      if ( !v69 )
      {
        v103 = **(_DWORD ***)(v2 + 84);
        v104 = v103[806];
        v105 = v103[286];
        if ( v104 )
        {
          if ( v104 > 100 )
          {
            v105 -= 4;
            if ( v105 >= 0 )
              goto LABEL_62;
            v105 = 0;
            v103[286] = 0;
          }
        }
        else
        {
          v105 += 4;
          if ( v105 > 255 )
            v105 = 255;
LABEL_62:
          v103[286] = v105;
        }
        result = sub_621DC(v105, v103[805]);
        v103[806] = 0;
      }
    }
    while ( *(_DWORD *)(a1 + 84) > (int)&v17[-a1 - 88] );
  }
  if ( (*(_BYTE *)(v108 + 768) & 2) != 0 )
    v4[804] = 2;
  else
    v4[804] = 1;
  v106 = *(_BYTE *)(v108 + 768) & 4;
  if ( (*(_BYTE *)(v108 + 768) & 4) != 0 )
    v106 = 127;
  v4[805] = v106;
  return result;
}

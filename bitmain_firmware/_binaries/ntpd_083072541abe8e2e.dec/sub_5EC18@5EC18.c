int __fastcall sub_5EC18(double a1)
{
  _DWORD *v1; // r7
  int v2; // r8
  _DWORD *v3; // r5
  double v4; // d0
  __int64 v5; // r10
  unsigned int v6; // lr
  int v7; // r1
  int v8; // r3
  bool v9; // cc
  char *v10; // r10
  int result; // r0
  int v12; // r1
  char *v13; // r6
  double v14; // d0
  double v15; // d7
  int v16; // r3
  int v17; // r2
  int v18; // kr00_4
  double v19; // r0
  double *v20; // r3
  double v21; // d6
  double v22; // d0
  double v23; // d11
  double v24; // d2
  double v25; // d7
  double v26; // d4
  double v27; // d11
  double v28; // d1
  double v29; // d0
  double v30; // d8
  double v31; // d5
  double v32; // d12
  double v33; // d6
  double v34; // d6
  double v35; // d6
  double v36; // d6
  double v37; // d6
  double v38; // d6
  double v39; // d6
  double v40; // d6
  double v41; // d6
  double v42; // d6
  double v43; // d6
  double v44; // d6
  double v45; // d6
  double v46; // d15
  double v47; // d14
  double v48; // d13
  double v49; // d6
  double v50; // d10
  int v51; // r3
  int v52; // r2
  int v53; // r9
  int v54; // r1
  char v55; // t1
  __int64 v56; // d7
  double v57; // d10
  int v58; // r4
  double v59; // d12
  double v60; // d11
  double v61; // d5
  double v62; // d4
  double v63; // d3
  double v64; // d2
  double v65; // d0
  double v66; // d8
  double v67; // d6
  double v68; // d7
  int v69; // r12
  int v70; // r0
  int v71; // r1
  double v72; // d7
  bool v73; // nf
  int v74; // r3
  int v75; // r12
  int v76; // lr
  int v77; // r11
  int v78; // r3
  double v79; // d6
  double v80; // d7
  double v81; // d5
  double v82; // d7
  int v83; // r1
  unsigned int v84; // r2
  double v85; // d4
  double *v86; // r0
  int v87; // r3
  double v88; // d3
  int v89; // r3
  double v90; // d7
  int v91; // r3
  int v92; // r3
  double v93; // d7
  int v94; // r3
  int v95; // r0
  int i; // r1
  int v97; // r3
  unsigned int v98; // r1
  __int64 v99; // d7
  int v100; // r2
  int v101; // r3
  double v102; // d11
  int v103; // r4
  int v104; // r2
  int v105; // r0
  int v106; // r0
  int v107; // r2
  int v108; // r2
  int v109; // r3
  double v110; // [sp+0h] [bp-84h]
  double v111; // [sp+8h] [bp-7Ch]
  double v112; // [sp+10h] [bp-74h]
  double v113; // [sp+18h] [bp-6Ch]
  double v114; // [sp+20h] [bp-64h]
  double v115; // [sp+28h] [bp-5Ch]
  double v116; // [sp+30h] [bp-54h]
  double v117; // [sp+38h] [bp-4Ch]
  double v118; // [sp+40h] [bp-44h]
  double v119; // [sp+48h] [bp-3Ch]
  double v120; // [sp+50h] [bp-34h]
  double v121; // [sp+58h] [bp-2Ch]
  double v122; // [sp+60h] [bp-24h]
  double v123; // [sp+68h] [bp-1Ch]
  int v124; // [sp+74h] [bp-10h]

  v1 = (_DWORD *)LODWORD(a1);
  v2 = *(_DWORD *)(LODWORD(a1) + 4);
  HIDWORD(a1) = *(_DWORD *)(v2 + 84);
  v124 = HIDWORD(a1);
  v3 = (_DWORD *)*(_DWORD *)HIDWORD(a1);
  if ( *(int *)(*(_DWORD *)HIDWORD(a1) + 1164) <= 0 )
    return sub_5E2F0(
             v2,
             *(unsigned __int8 *)(LODWORD(a1) + 88),
             *(_DWORD *)(LODWORD(a1) + 72),
             *(_DWORD *)(LODWORD(a1) + 76));
  v4 = (double)*(int *)(LODWORD(a1) + 84) / 8000.0;
  LODWORD(a1) = 32;
  ldexp(a1, _stack_chk_guard);
  if ( v4 < 0.0 )
    v5 = -sub_8C010(COERCE_UNSIGNED_INT64(-v4), HIDWORD(COERCE_UNSIGNED_INT64(-v4)));
  else
    v5 = sub_8C010(LODWORD(v4), HIDWORD(v4));
  v6 = v1[19];
  v7 = v1[21];
  v8 = v1[18] - HIDWORD(v5);
  if ( v6 < (unsigned int)v5 )
    --v8;
  v1[19] = v6 - v5;
  v9 = v7 <= 0;
  v1[18] = v8;
  v10 = (char *)(v1 + 22);
  result = v1[18];
  v12 = v1[19];
  v3[222] = result;
  v3[223] = v12;
  if ( v9 )
    goto LABEL_61;
  v13 = (char *)(v1 + 22);
  while ( 2 )
  {
    while ( 2 )
    {
      v55 = *v13++;
      *(double *)&v56 = 6000.0;
      v57 = *(double *)&v3[2 * (unsigned __int8)~v55 + 292];
      if ( v57 > 6000.0 || (*(double *)&v56 = -6000.0, v57 < -6000.0) )
      {
        v57 = *(double *)&v56;
        ++v3[806];
      }
      v58 = **(_DWORD **)(v2 + 84);
      v59 = *(double *)(v58 + 3296);
      *(double *)(v58 + 3304) = v59;
      v60 = *(double *)(v58 + 3288);
      *(double *)(v58 + 3296) = v60;
      v61 = *(double *)(v58 + 3280);
      *(double *)(v58 + 3288) = v61;
      v62 = *(double *)(v58 + 3272);
      *(double *)(v58 + 3280) = v62;
      v63 = *(double *)(v58 + 3264);
      *(double *)(v58 + 3272) = v63;
      v64 = *(double *)(v58 + 3256);
      *(double *)(v58 + 3264) = v64;
      v65 = *(double *)(v58 + 3248);
      *(double *)(v58 + 3256) = v65;
      v66 = *(double *)(v58 + 3240);
      *(double *)(v58 + 3248) = v66;
      v67 = v57
          - (v60 * 0.488486
           + v59 * 0.5844676
           + v61 * 2.704384
           + v62 * 1.645032
           + v63 * 4.644557
           + v64 * 1.879165
           + v65 * 3.522634
           + v66 * 0.7315738);
      *(double *)(v58 + 3240) = v67;
      v68 = v66 * 0.003156599 + v67 * 0.006176213 + v65 * 0.007567487;
      v14 = 1000.0;
      v15 = v68
          + v64 * 0.00434458
          + v63 * 0.01190128
          + v62 * 0.00434458
          + v61 * 0.007567487
          + v60 * 0.003156599
          + v59 * 0.006176213;
      *(double *)(v58 + 3608) = v15 * 0.25;
      if ( v15 <= 1000.0 )
      {
        if ( v15 < -1000.0 )
          v15 = -1000.0;
        else
          v14 = -v15;
      }
      else
      {
        v15 = 1000.0;
        v14 = -1000.0;
      }
      v16 = *(_DWORD *)(v58 + 3616);
      v17 = v16 + 1;
      v18 = v16 + 1;
      *(_QWORD *)&v19 = 1717986919LL * (v16 + 1);
      v20 = (double *)(v58 + 8 * v16 + 3312);
      v21 = *v20;
      *v20 = v15;
      v22 = v14 * v21;
      *(_DWORD *)(v58 + 3616) = v18 % 10;
      if ( v22 < 0.0 )
      {
        v102 = sqrt(-v22);
        if ( v22 > -0.0 )
        {
          LODWORD(v19) = v17 >> 31;
          sqrt(v19);
        }
        v23 = -v102;
      }
      else
      {
        v23 = sqrt(v22);
      }
      v24 = *(double *)(v58 + 3592);
      *(double *)(v58 + 3600) = v24;
      v25 = *(double *)(v58 + 3584);
      *(double *)(v58 + 3592) = v25;
      v26 = *(double *)(v58 + 3576);
      v27 = v23 * 0.02538771;
      *(double *)(v58 + 3584) = v26;
      v28 = *(double *)(v58 + 3568);
      *(double *)(v58 + 3576) = v28;
      v29 = *(double *)(v58 + 3560);
      *(double *)(v58 + 3568) = v29;
      v30 = *(double *)(v58 + 3552);
      *(double *)(v58 + 3560) = v30;
      v31 = *(double *)(v58 + 3544);
      *(double *)(v58 + 3552) = v31;
      v32 = *(double *)(v58 + 3536);
      *(double *)(v58 + 3544) = v32;
      v33 = *(double *)(v58 + 3528);
      *(double *)(v58 + 3536) = v33;
      v110 = v33;
      v34 = *(double *)(v58 + 3520);
      *(double *)(v58 + 3528) = v34;
      v111 = v34;
      v35 = *(double *)(v58 + 3512);
      *(double *)(v58 + 3520) = v35;
      v112 = v35;
      v36 = *(double *)(v58 + 3504);
      *(double *)(v58 + 3512) = v36;
      v113 = v36;
      v37 = *(double *)(v58 + 3496);
      *(double *)(v58 + 3504) = v37;
      v114 = v37;
      v115 = *(double *)(v58 + 3488);
      *(double *)(v58 + 3496) = v115;
      v38 = *(double *)(v58 + 3480);
      *(double *)(v58 + 3488) = v38;
      v116 = v38;
      v39 = *(double *)(v58 + 3472);
      *(double *)(v58 + 3480) = v39;
      v117 = v39;
      v40 = *(double *)(v58 + 3464);
      *(double *)(v58 + 3472) = v40;
      v118 = v40;
      v41 = *(double *)(v58 + 3456);
      *(double *)(v58 + 3464) = v41;
      v119 = v41;
      v42 = *(double *)(v58 + 3448);
      *(double *)(v58 + 3456) = v42;
      v120 = v42;
      v43 = *(double *)(v58 + 3440);
      *(double *)(v58 + 3448) = v43;
      v121 = v43;
      v44 = *(double *)(v58 + 3432);
      *(double *)(v58 + 3440) = v44;
      v122 = v44;
      v45 = *(double *)(v58 + 3424);
      *(double *)(v58 + 3432) = v45;
      v46 = *(double *)(v58 + 3416);
      v123 = v45;
      *(double *)(v58 + 3424) = v46;
      v47 = *(double *)(v58 + 3408);
      *(double *)(v58 + 3416) = v47;
      v48 = *(double *)(v58 + 3400);
      v49 = *(double *)(v58 + 3624) + 0.000125;
      *(double *)(v58 + 3408) = v48;
      v50 = *(double *)(v58 + 3392);
      *(double *)(v58 + 3400) = v50;
      *(double *)(v58 + 3392) = v27;
      if ( v49 <= 0.000416666667 )
      {
        *(double *)(v58 + 3624) = v49;
        goto LABEL_16;
      }
      v69 = *(_DWORD *)(v58 + 4656);
      v70 = *(_DWORD *)(v58 + 888);
      v71 = *(_DWORD *)(v58 + 892);
      *(double *)(v58 + 3624) = v49 - 0.000416666667;
      v72 = v25 * 0.1084671;
      v73 = -++v69 < 0;
      v74 = -v69 & 7;
      v75 = v69 & 7;
      if ( !v73 )
        v75 = -v74;
      v76 = v75 << 7;
      *(_DWORD *)(v58 + 4656) = v75;
      v77 = v58 + (v75 << 7);
      *(_DWORD *)(v77 + 3632) = v70;
      *(_DWORD *)(v77 + 3636) = v71;
      v78 = v58 + (v75 << 7) + 3728;
      v79 = 1000000.0;
      v80 = v72
          + v24 * 0.02538771
          + v26 * 0.2003159
          + v28 * 0.2985303
          + v29 * 0.4003697
          + v30 * 0.5028552
          + v31 * 0.6028795;
      v81 = -1000000.0;
      *(double *)(v77 + 3640) = -((v80
                                 + v32 * 0.6973249
                                 + v110 * 0.7831828
                                 + v111 * 0.8576717
                                 + v112 * 0.9183463
                                 + v113 * 0.9631951
                                 + v114 * 0.9907208
                                 + v115
                                 + v116 * 0.9907208
                                 + v117 * 0.9631951
                                 + v118 * 0.9183463
                                 + v119 * 0.8576717
                                 + v120 * 0.7831828
                                 + v121 * 0.6973249
                                 + v122 * 0.6028795
                                 + v123 * 0.5028552
                                 + v46 * 0.4003697
                                 + v47 * 0.2985303
                                 + v48 * 0.2003159
                                 + v50 * 0.1084671
                                 + v27)
                                * 6.0);
      do
      {
        v82 = *(double *)(v78 - 8);
        v78 -= 8;
        *(double *)(v78 + 8) = v82;
        if ( v82 > v81 )
          v81 = v82;
        if ( v82 < v79 )
          v79 = v82;
      }
      while ( v58 + 3640 + (v75 << 7) != v78 );
      v83 = v58 + v76;
      v84 = 0;
      v85 = 0.0;
      v86 = (double *)(v58 + v76 + 3648);
      v87 = 0;
      v88 = v79 + (v81 - v79) * 0.45;
      *(double *)(v58 + v76 + 3736) = v81 - v79;
      while ( 1 )
      {
        v89 = 2 * v87;
        *(_DWORD *)(v83 + 3752) = v89;
        v90 = *v86++;
        if ( v88 < v90 )
          *(_DWORD *)(v83 + 3752) = v89 | 1;
        if ( v84 <= 1 )
          goto LABEL_40;
        if ( v84 == 10 )
          break;
        if ( v88 >= v90 )
        {
          ++v84;
          v85 = v85 + v81 - v90;
          if ( v84 == 11 )
            goto LABEL_41;
          goto LABEL_34;
        }
LABEL_40:
        ++v84;
        v85 = v85 + v90 - v79;
        if ( v84 == 11 )
          goto LABEL_41;
LABEL_34:
        v87 = *(_DWORD *)(v83 + 3752);
      }
      v85 = v85 + v81 - v90;
LABEL_41:
      *(double *)(v58 + v76 + 3744) = v85 / ((v81 - v79) * 11.0);
      v91 = *(_DWORD *)(v58 + 4664);
      if ( v91 <= 0 )
      {
        if ( v75 == *(_DWORD *)(v58 + 4660) )
          goto LABEL_45;
      }
      else
      {
        v92 = v91 - 1;
        *(_DWORD *)(v58 + 4664) = v92;
        if ( !v92 )
        {
          *(_DWORD *)(v58 + 4660) = v75;
LABEL_45:
          v93 = 0.0;
          v94 = v58 + 3736;
          v95 = -1;
          for ( i = 0; i != 8; ++i )
          {
            if ( (*(_DWORD *)(v94 + 16) & 0x601) == 0x600 && *(double *)v94 >= 800.0 && *(double *)(v94 + 8) > v93 )
            {
              v95 = i;
              v93 = *(double *)(v94 + 8);
            }
            v94 += 128;
          }
          if ( v95 != -1 )
          {
            v97 = v58 + (v95 << 7);
            v98 = *(_DWORD *)(v97 + 3752);
            v99 = *(_QWORD *)(v97 + 3736);
            v97 += 3632;
            v100 = *(_DWORD *)v97;
            v101 = *(_DWORD *)(v97 + 4);
            *(_QWORD *)(v58 + 1136) = v99;
            sub_5E2F0(v2, (unsigned __int8)(v98 >> 1), v100, v101);
            *(_DWORD *)(v58 + 4664) = 88;
          }
        }
      }
LABEL_16:
      v51 = v3[223];
      v52 = v3[809];
      v53 = v3[222];
      v54 = v3[807] + 1;
      v3[223] = v51 + v52;
      result = __CFADD__(v51, v52);
      v3[222] = v53 + v3[808] + result;
      v3[807] = v54 % 8000;
      if ( !(v54 % 8000) )
      {
        v103 = **(_DWORD **)(v2 + 84);
        v104 = *(_DWORD *)(v103 + 3224);
        v105 = *(_DWORD *)(v103 + 1144);
        if ( !v104 )
        {
          v106 = v105 + 4;
          if ( v106 > 255 )
            v106 = 255;
          goto LABEL_59;
        }
        if ( v104 > 100 )
        {
          v106 = v105 - 4;
          if ( v106 >= 0 )
          {
LABEL_59:
            *(_DWORD *)(v103 + 1144) = v106;
            goto LABEL_60;
          }
          *(_DWORD *)(v103 + 1144) = 0;
        }
LABEL_60:
        result = sub_612E0();
        v107 = v1[21];
        *(_DWORD *)(v103 + 3224) = 0;
        if ( v107 > v13 - v10 )
          continue;
        goto LABEL_61;
      }
      break;
    }
    if ( v1[21] > v13 - v10 )
      continue;
    break;
  }
LABEL_61:
  if ( (*(_BYTE *)(v124 + 768) & 2) != 0 )
    v108 = 2;
  else
    v108 = 1;
  v109 = *(_BYTE *)(v124 + 768) & 4;
  v3[804] = v108;
  if ( v109 )
    v109 = 127;
  v3[805] = v109;
  return result;
}

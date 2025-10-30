int __fastcall sub_57748(double a1)
{
  double v1; // d0
  int v2; // r10
  double *v3; // r4
  double v4; // d8
  int v5; // r6
  double v6; // d17
  int v7; // r11
  double *v8; // r3
  double v9; // d16
  unsigned int v10; // r2
  int v11; // r9
  int v12; // r7
  int v13; // r3
  double v14; // d16
  double v15; // d0
  double v16; // d0
  int v17; // r3
  int v18; // r2
  int v19; // r2
  double v20; // d19
  int v21; // r3
  int v22; // r3
  int v23; // s15
  int v24; // r3
  double v25; // d0
  double v26; // d16
  double v27; // d18
  double v28; // d17
  double v29; // d0
  int v30; // r3
  int v31; // r0
  int v32; // r1
  int v33; // r2
  int v34; // r2
  double v35; // d19
  int v36; // r3
  int v37; // r7
  int v38; // r1
  double v39; // d16
  double v40; // d17
  int v41; // r12
  double v42; // r0
  int v43; // r3
  double **v44; // r3
  double v45; // r0
  int v46; // r3
  bool v47; // zf
  int v48; // r9
  int v49; // r3
  int v50; // r2
  int *v51; // r1
  int v52; // r0
  int v53; // r3
  int *v54; // r2
  int v55; // r8
  int v56; // r9
  int v57; // r0
  int v58; // r3
  int v59; // r2
  int v60; // r1
  double *v61; // r8
  int v62; // r3
  int v63; // r0
  unsigned int v64; // r1
  int v65; // r3
  int v66; // r7
  int v67; // r7
  _QWORD *v68; // r3
  __int64 v69; // r8
  int v70; // r3
  int v71; // r3
  int v72; // r3
  bool v73; // zf
  int v74; // r9
  int v75; // r3
  int v76; // r3
  int v77; // r12
  int v78; // r2
  int v79; // r3
  int v80; // r2
  int v81; // r1
  int v82; // r3
  int v83; // r0
  int v84; // r1
  int v86; // [sp+4h] [bp-120h]
  int v87; // [sp+70h] [bp-B4h]
  const char *v88; // [sp+70h] [bp-B4h]
  int v89; // [sp+70h] [bp-B4h]
  int v90; // [sp+74h] [bp-B0h]
  int *v91; // [sp+74h] [bp-B0h]
  int v92; // [sp+78h] [bp-ACh]
  int v93; // [sp+78h] [bp-ACh]
  int v94; // [sp+7Ch] [bp-A8h]
  int v95; // [sp+7Ch] [bp-A8h]
  int v96; // [sp+80h] [bp-A4h]
  int v97; // [sp+80h] [bp-A4h]
  int v98; // [sp+84h] [bp-A0h]
  int v99; // [sp+84h] [bp-A0h]
  int v100; // [sp+88h] [bp-9Ch]
  int v101; // [sp+8Ch] [bp-98h]
  unsigned int v102; // [sp+94h] [bp-90h] BYREF
  unsigned int v103; // [sp+98h] [bp-8Ch]
  char v104[128]; // [sp+9Ch] [bp-88h] BYREF

  v2 = LODWORD(a1);
  v3 = *(double **)(LODWORD(a1) + 84);
  v4 = v1;
  v5 = *(_DWORD *)v3;
  if ( !dword_C06A0 )
  {
    dword_C06A0 = 1;
    LODWORD(a1) = memset(&unk_C06A8, 0, 0x1E8u);
  }
  v6 = 0.0625;
  v7 = *(_DWORD *)(v5 + 4304);
  *(_DWORD *)(v5 + 4304) = v7 + 1;
  v8 = &dbl_C0680[v7];
  v9 = v8[5] + (v1 - v8[5]) * 0.0625;
  v8[5] = v9;
  v10 = (unsigned int)&progx + 8 * v7;
  v11 = *(_DWORD *)(v10 + 4);
  switch ( *(_DWORD *)v10 )
  {
    case 1:
      if ( (*(_DWORD *)(v5 + 4328) & 4) != 0 )
      {
        dbl_C0680[v11] = v1;
      }
      else
      {
        LODWORD(a1) = 0;
        dbl_C0680[v11] = 0.0;
      }
      goto LABEL_42;
    case 2:
      dbl_C0680[v11] = v1;
      goto LABEL_42;
    case 3:
      LODWORD(a1) = 0;
      dbl_C0680[v11] = 0.0;
      goto LABEL_42;
    case 4:
      v44 = (double **)&bcd9_ptr;
      goto LABEL_56;
    case 5:
      v44 = (double **)&bcd6_ptr;
      goto LABEL_56;
    case 6:
      v44 = (double **)&bcd3_ptr;
      goto LABEL_56;
    case 7:
      v44 = (double **)&bcd2_ptr;
LABEL_56:
      LODWORD(v45) = v2;
      HIDWORD(v45) = v5 + 112 * v11 + 3296;
      LODWORD(a1) = sub_5743C(v45, *v44);
      goto LABEL_42;
    case 8:
      goto LABEL_47;
    case 9:
      HIDWORD(v42) = v5 + 4192;
      LODWORD(v42) = v2;
      LODWORD(a1) = sub_5743C(v42, bcd9);
      v9 = dbl_C0680[v7 + 5];
LABEL_47:
      if ( v9 <= 1000.0 )
      {
        if ( v9 >= -1000.0 )
        {
          *(_DWORD *)(v5 + 4328) |= 0x40u;
        }
        else
        {
          v71 = *(_DWORD *)(v5 + 4336);
          *(_DWORD *)(v5 + 4336) = v71 & ~v11;
          if ( (v71 & v11) != 0 )
            *(_DWORD *)(v5 + 4332) |= 1u;
        }
      }
      else
      {
        v43 = *(_DWORD *)(v5 + 4336);
        *(_DWORD *)(v5 + 4336) = v43 | v11;
        if ( (v43 & v11) == 0 )
          *(_DWORD *)(v5 + 4332) |= 1u;
      }
      goto LABEL_42;
    case 0xA:
      if ( v9 > 1000.0 )
      {
        v72 = *(_DWORD *)(v5 + 4336);
        v73 = (v72 & v11) == 0;
        v74 = v72 | v11;
        v49 = *(_DWORD *)(v5 + 4328);
        if ( v73 )
          v10 = *(_DWORD *)(v5 + 4332);
        *(_DWORD *)(v5 + 4336) = v74;
        if ( v73 )
          *(_DWORD *)(v5 + 4332) = v10 | 1;
      }
      else if ( v9 >= -1000.0 )
      {
        v49 = *(_DWORD *)(v5 + 4328) | 0x40;
      }
      else
      {
        v46 = *(_DWORD *)(v5 + 4336);
        v47 = (v46 & v11) == 0;
        v48 = v46 & ~v11;
        v49 = *(_DWORD *)(v5 + 4328);
        if ( !v47 )
          v10 = *(_DWORD *)(v5 + 4332);
        *(_DWORD *)(v5 + 4336) = v48;
        if ( !v47 )
          *(_DWORD *)(v5 + 4332) = v10 | 1;
      }
      v50 = *(_DWORD *)(v5 + 48);
      *(_DWORD *)(v5 + 4328) = v49 & 0xFFFFFCFF;
      if ( v50 <= 0 )
      {
        *(_DWORD *)(v5 + 216 * *(_DWORD *)(v5 + 3292) + 2200) = *(_DWORD *)(v5 + 2116);
      }
      else
      {
        v51 = *(int **)(v2 + 84);
        v52 = *(_DWORD *)(v5 + 3288) + 1;
        *(_DWORD *)(v5 + 3288) = v52 % 5;
        LODWORD(a1) = sub_56DB4(*(_DWORD *)(v2 + 76), v51, v52 % 5);
      }
      goto LABEL_42;
    case 0xB:
      v53 = *(_DWORD *)(v5 + 4328);
      if ( (v53 & 0x1000) == 0 )
        goto LABEL_69;
      goto LABEL_42;
    case 0xC:
      v53 = *(_DWORD *)(v5 + 4328);
LABEL_69:
      v54 = *(int **)(v2 + 84);
      *(_DWORD *)(v5 + 4328) = v53 & 0xFFFFEFFF;
      v55 = *v54;
      v56 = *v54 + 4096;
      v57 = sub_568A0((double *)(*v54 + 3296));
      if ( (*(_DWORD *)(v56 + 232) & 4) == 0 )
        goto LABEL_81;
      if ( !v57 && !sub_568A0((double *)(v55 + 3408)) && !sub_568A0((double *)(v55 + 3520)) )
        sub_568A0((double *)(v55 + 3632));
      v58 = 10 * *(_DWORD *)(v55 + 3412)
          + *(_DWORD *)(v55 + 3300)
          + 60 * *(_DWORD *)(v55 + 3524)
          + 600 * *(_DWORD *)(v55 + 3636);
      v87 = 10 * *(_DWORD *)(v55 + 3860) + *(_DWORD *)(v55 + 3748) + 100 * *(_DWORD *)(v55 + 3972);
      v90 = *(_DWORD *)(v55 + 4084) & 3;
      if ( (*(_DWORD *)(v56 + 240) & 0x40) == 0 )
        goto LABEL_80;
      v59 = *(_DWORD *)(v56 + 232);
      if ( (v59 & 8) == 0 )
        goto LABEL_80;
      if ( v90 )
      {
        if ( v87 == 182 )
          goto LABEL_78;
        v60 = 365;
      }
      else
      {
        if ( v87 == 183 )
          goto LABEL_78;
        v60 = 366;
      }
      if ( v87 != v60 )
        goto LABEL_80;
LABEL_78:
      if ( v58 == 1439 )
      {
        *(_DWORD *)(v56 + 232) = v59 | 0x1000;
        goto LABEL_81;
      }
LABEL_80:
      if ( v58 == 1440 )
      {
        while ( sub_568A0((double *)(v55 + 3520)) )
          ;
        while ( sub_568A0((double *)(v55 + 3632)) )
          ;
        v89 = v87 + 1;
        if ( !sub_568A0((double *)(v55 + 3744)) && !sub_568A0((double *)(v55 + 3856)) )
          sub_568A0((double *)(v55 + 3968));
        v75 = 365;
        if ( !v90 )
          v75 = 366;
        if ( v89 == v75 )
        {
          while ( sub_568A0((double *)(v55 + 3744)) != 1 )
            ;
          while ( sub_568A0((double *)(v55 + 3856)) )
            ;
          while ( sub_568A0((double *)(v55 + 3968)) )
            ;
          if ( !sub_568A0((double *)(v55 + 4080)) )
            sub_568A0((double *)(v55 + 4192));
        }
      }
LABEL_81:
      v91 = *(int **)(v2 + 84);
      v61 = (double *)*v91;
      *(_DWORD *)(v5 + 4304) = 0;
      v62 = *((_DWORD *)v61 + 1082);
      if ( (v62 & 2) == 0 )
      {
        v70 = *((_DWORD *)v61 + 1077);
        v63 = *((_DWORD *)v61 + 1083) | 8;
        *((_DWORD *)v61 + 1083) = v63;
        if ( v70 > 8 )
          goto LABEL_85;
        goto LABEL_97;
      }
      v63 = *((_DWORD *)v61 + 1083);
      if ( *((int *)v61 + 1077) <= 8 )
      {
LABEL_97:
        v63 |= 4u;
        *((_DWORD *)v61 + 1083) = v63;
        goto LABEL_85;
      }
      if ( !v63 )
        *((_DWORD *)v61 + 1082) = v62 | 8;
LABEL_85:
      if ( ((_DWORD)v61[541] & 0xA) == 0xA )
      {
        v76 = (_DWORD)v61[542] & 0x40;
        if ( v76 )
          LOBYTE(v76) = 1;
        *((_BYTE *)v91 + 40) = v76;
        v77 = *((_DWORD *)v61 + 909);
        v97 = *((_DWORD *)v61 + 825);
        v95 = 10 * *((_DWORD *)v61 + 965) + *((_DWORD *)v61 + 937) + 100 * *((_DWORD *)v61 + 993);
        v78 = 10 * *((_DWORD *)v61 + 853);
        v93 = *((_DWORD *)v61 + 1076);
        v99 = *((_DWORD *)v61 + 881);
        v79 = 10 * *((_DWORD *)v61 + 1049) + *((_DWORD *)v61 + 1021) + 2000;
        v91[51] = v93;
        v80 = v78 + v97;
        v91[48] = v95;
        v91[50] = v80;
        v81 = 10 * v77 + v99;
        v91[47] = v79;
        v91[49] = v81;
        v102 = 0;
        v86 = *(_DWORD *)v61;
        v103 = 0;
        if ( sub_64318(v95, v81, v80, v93, 0, v86, v91 + 53, &v102) )
        {
          v83 = *(_DWORD *)v61;
          v84 = *((_DWORD *)v61 + 1);
          *((_DWORD *)v61 + 14) = 0;
          *((_QWORD *)v91 + 31) = 0;
          v91[56] = v83;
          v91[57] = v84;
          sub_3A258(__SPAIR64__(v102, (unsigned int)v91), v103);
          sub_3A534(v2);
          v63 = *((_DWORD *)v61 + 1083);
        }
        else
        {
          v63 = *((_DWORD *)v61 + 1083);
          *((_DWORD *)v61 + 13) = 6;
        }
      }
      v88 = (const char *)(v91 + 14);
      v64 = *((_DWORD *)v61 + 1084);
      if ( ((_DWORD)v61[541] & 8) != 0 )
        v65 = 32;
      else
        v65 = 63;
      v96 = 10 * *((_DWORD *)v61 + 965) + *((_DWORD *)v61 + 937) + 100 * *((_DWORD *)v61 + 993);
      if ( (v64 & 0x40) != 0 )
        v66 = 76;
      else
        v66 = 32;
      v101 = v66;
      v100 = (unsigned __int8)dstcod[(v64 >> 4) & 3];
      v94 = 10 * *((_DWORD *)v61 + 1049) + *((_DWORD *)v61 + 1021) + 2000;
      v92 = ((_DWORD)v61[542] & 7 ^ -(((_DWORD)v61[542] & 8) == 0)) + (((_DWORD)v61[542] & 8) == 0);
      v67 = 10 * *((_DWORD *)v61 + 853) + *((_DWORD *)v61 + 825);
      v98 = 10 * *((_DWORD *)v61 + 909) + *((_DWORD *)v61 + 881);
      sub_6D00C(v88, 128, "%c%1X", v65, v63);
      sub_6D00C(v104, 50, " %4d %03d %02d:%02d:%02d %c%c %+d", v94, v96, v98, v67, 0, v101, v100, v92);
      sub_6E558((int)v88, v104);
      sub_6D00C(
        v104,
        50,
        " %d %d %s %.0f %d %.1f %d",
        *((_DWORD *)v61 + 14),
        LODWORD(v61[27 * *((_DWORD *)v61 + 821) + 275]),
        (const char *)(*((_DWORD *)v61 + 820) + 92),
        *(double *)(*((_DWORD *)v61 + 820) + 72),
        *((_DWORD *)v61 + 1085),
        v61[3] / 8000.0 * 1000000.0,
        *((_DWORD *)v61 + 532));
      sub_6E558((int)v88, v104);
      v91[46] = strlen(v88);
      LODWORD(a1) = sub_42D0C(v2 + 16, v88);
LABEL_42:
      if ( ((_BYTE)v3[96] & 8) != 0 )
      {
        v41 = *(_DWORD *)(v5 + 4328);
        if ( (v41 & 4) == 0 )
        {
          sub_6D00C(
            v104,
            128,
            "wwv3 %2d %04x %3d %4d %5.0f %5.1f %5.0f %5.1f %5.0f",
            v7,
            v41,
            *(_DWORD *)(v5 + 2116),
            *(_DWORD *)(v5 + 2132),
            *(double *)(v5 + 2144),
            *(double *)(v5 + 2152),
            *(double *)(v5 + 4312),
            *(double *)(v5 + 4320),
            v4);
          LODWORD(a1) = sub_42D0C(v2 + 16, v104);
        }
      }
      v3[31] = v3[31] + 0.000005;
      return LODWORD(a1);
    case 0xD:
      v68 = (_QWORD *)(v5 + 216 * *(_DWORD *)(v5 + 3292));
      LODWORD(a1) = v68 + 282;
      v69 = v68[295];
      v68[283] = v68[282];
      v68[296] = v69;
      goto LABEL_42;
    case 0xE:
      v12 = *(_DWORD *)(v5 + 3292);
      v13 = v5 + 216 * v12;
      v14 = *(double *)(v13 + 2264);
      v15 = *(double *)(v13 + 2248);
      if ( v14 <= 0.0 )
      {
        v16 = 0.0;
      }
      else if ( v15 > 0.0 )
      {
        HIDWORD(a1) = v7 + 1;
        a1 = log10(a1);
        v6 = 40.0;
        v16 = v14 / v15 * 20.0;
        if ( v16 > 40.0 )
          v16 = 40.0;
      }
      else
      {
        v16 = 40.0;
      }
      v17 = v5 + 216 * v12;
      v18 = *(_DWORD *)(v17 + 2288);
      *(double *)(v17 + 2272) = v16;
      v18 *= 2;
      *(_DWORD *)(v17 + 2288) = v18;
      if ( (v18 & 0x40) != 0 )
        --*(_DWORD *)(v17 + 2292);
      v19 = v5 + 216 * v12;
      v20 = *(double *)(v19 + 2264);
      if ( v20 < 2500.0 || (v6 = *(double *)(v19 + 2272), v6 < 20.0) || (*(_DWORD *)(v5 + 4328) & 0x60) != 0 )
      {
        v22 = *(_DWORD *)(v19 + 2292);
      }
      else
      {
        v21 = *(_DWORD *)(v19 + 2292);
        *(_DWORD *)(v19 + 2288) |= 1u;
        v22 = v21 + 1;
        *(_DWORD *)(v19 + 2292) = v22;
      }
      v23 = v22;
      v24 = v5 + 216 * v12;
      HIDWORD(a1) = v24 + 2368;
      v25 = *(double *)(v24 + 2352);
      v26 = (double)v23 * 6000.0;
      if ( v20 >= 6000.0 )
        v6 = 5999.0;
      v27 = *(double *)HIDWORD(a1);
      if ( v20 >= 6000.0 )
        v28 = v26 + v6;
      else
        v28 = v26 + v20;
      *(double *)(v24 + 2280) = v28 / 42000.0 * 100.0;
      if ( v27 <= 0.0 )
      {
        v29 = 0.0;
      }
      else if ( v25 > 0.0 )
      {
        log10(a1);
        v29 = v27 / v25 * 20.0;
        if ( v29 > 40.0 )
          v29 = 40.0;
      }
      else
      {
        v29 = 40.0;
      }
      v30 = v5 + 216 * v12;
      v31 = v30 + 2368;
      v32 = v30 + 2392;
      v33 = *(_DWORD *)(v30 + 2392);
      *(double *)(v30 + 2376) = v29;
      v33 *= 2;
      *(_DWORD *)(v30 + 2392) = v33;
      v47 = (v33 & 0x40) == 0;
      v34 = v30;
      if ( !v47 )
        --*(_DWORD *)(v30 + 2396);
      v35 = *(double *)(v30 + 2368);
      if ( v35 < 2500.0 || *(double *)(v30 + 2376) < 20.0 )
      {
        v34 = *(_DWORD *)(v30 + 2396);
        v36 = *(_DWORD *)(v5 + 4328);
      }
      else
      {
        v36 = *(_DWORD *)(v5 + 4328);
        if ( (v36 & 0x60) != 0 )
        {
          v34 = *(_DWORD *)(v34 + 2396);
        }
        else
        {
          v32 = v34 + 2384;
          v31 = *(_DWORD *)(v34 + 2392);
        }
        if ( (v36 & 0x60) == 0 )
        {
          *(_DWORD *)(v34 + 2392) = v31 | 1;
          v34 = *(_DWORD *)(v34 + 2396) + 1;
          *(_DWORD *)(v32 + 12) = v34;
        }
      }
      v37 = 216 * v12;
      v39 = (double)v34 * 6000.0;
      if ( v35 < 6000.0 )
        v40 = v39 + v35;
      else
        v40 = v39 + 5999.0;
      *(double *)(v5 + v37 + 2384) = v40 / 42000.0 * 100.0;
      if ( ((_BYTE)v3[96] & 8) != 0 )
      {
        v38 = v5 + v37;
        sub_6D00C(
          v104,
          128,
          "wwv5 %04x %3d %4d %.0f/%.1f %.0f/%.1f %s %04x %.0f %.0f/%.1f %s %04x %.0f %.0f/%.1f",
          v36,
          *(_DWORD *)(v5 + 2116),
          *(_DWORD *)(v5 + 2132),
          *(double *)(v5 + 2144),
          *(double *)(v5 + 2152),
          *(double *)(v5 + 4312),
          *(double *)(v5 + 4320),
          (const char *)(v38 + 2300),
          (unsigned __int16)*(_DWORD *)(v38 + 2288),
          *(double *)(v38 + 2280),
          *(double *)(v38 + 2264),
          *(double *)(v38 + 2272),
          (const char *)(v38 + 2404),
          (unsigned __int16)*(_DWORD *)(v38 + 2392),
          v40 / 42000.0 * 100.0,
          *(double *)(v38 + 2368),
          *(double *)(v38 + 2376));
        sub_42D0C(v2 + 16, v104);
        v36 = *(_DWORD *)(v5 + 4328);
      }
      *(_DWORD *)(v5 + 4332) = 0;
      *(_DWORD *)(v5 + 4308) = 0;
      *(_DWORD *)(v5 + 4340) = 0;
      if ( (v36 & 8) != 0 )
      {
        if ( *(int *)(v5 + 56) <= 2880 )
        {
LABEL_41:
          LODWORD(a1) = sub_56E54(v2);
          goto LABEL_42;
        }
      }
      else
      {
        v47 = (v36 & 4) == 0;
        v82 = *(_DWORD *)(v5 + 56);
        if ( v47 )
        {
          if ( v82 <= 15 )
            goto LABEL_41;
        }
        else if ( v82 <= 40 )
        {
          goto LABEL_41;
        }
      }
      LODWORD(a1) = sub_57010(v2);
      return LODWORD(a1);
    default:
      goto LABEL_42;
  }
}

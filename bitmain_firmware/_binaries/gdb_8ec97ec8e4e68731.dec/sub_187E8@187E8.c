void **__fastcall sub_187E8(void **a1, int (***a2)(void))
{
  int (**v2)(void); // r2
  int (*v5)(void); // r2
  int v6; // r0
  bool v7; // zf
  int (**v8)(void); // r8
  int (**v9)(void); // r0
  unsigned int v10; // r0
  char v11; // r1
  __int64 v12; // r0
  __int16 v13; // r4
  char v14; // r0
  void *v15; // r2
  void *v16; // r1
  void *v17; // r3
  void *v18; // r0
  __int64 v19; // r4
  int v20; // r0
  int v21; // r7
  int (*v22)(void); // r3
  int v23; // r9
  int (**v24)(void); // r6
  unsigned __int16 v25; // r8
  unsigned int v26; // r4
  unsigned int v27; // r0
  int v28; // r5
  int v29; // r8
  int v30; // r2
  unsigned int v31; // r7
  char v32; // r4
  int v33; // r2
  __int16 v34; // r0
  unsigned int v35; // r0
  void *v36; // r2
  _DWORD *v37; // r2
  _DWORD *v38; // r1
  _DWORD *v39; // r3
  void *v40; // r0
  int (*v41)(void); // r3
  int v42; // t1
  void **result; // r0
  unsigned int v44; // r5
  unsigned int v45; // r0
  unsigned int v46; // r4
  unsigned int v47; // r6
  int v48; // r6
  unsigned int v49; // r5
  unsigned __int16 v50; // r0
  unsigned int v51; // r4
  unsigned __int16 v52; // r0
  char v53; // r7
  int v54; // r2
  _BOOL4 v55; // r3
  int v56; // r2
  unsigned int v57; // r2
  int v58; // r4
  int v59; // r6
  int (**v60)(void); // r7
  int (**v61)(void); // r4
  int v62; // r0
  int (**v63)(void); // r12
  int (**v64)(void); // r2
  int (*v65)(void); // r4
  int v66; // r5
  unsigned int v67; // r4
  unsigned int v68; // r8
  _BOOL4 v69; // r8
  int v70; // r8
  void *v71; // r0
  void *v72; // r12
  void *v73; // r0
  int *v74; // r1
  int *v75; // r2
  int *v76; // r1
  void *v77; // r0
  void *v78; // r12
  int v79; // r5
  int v80; // r3
  int v81; // r0
  int v82; // r1
  int v83; // r9
  int v84; // r0
  unsigned __int16 v85; // r0
  unsigned int v86; // r9
  int v87; // r0
  int v88; // r0
  int v89; // r2
  int v90; // r4
  int v91; // r0
  __int64 v92; // r6
  __int16 v93; // r0
  int v94; // r0
  int i; // r0
  __int16 v96; // r0
  char v97; // r6
  int v98; // r3
  int v99; // r5
  int v100; // r0
  int v101; // r7
  int v102; // r0
  unsigned int v103; // r5
  int v104; // r4
  int v105; // r1
  int v106; // r5
  int v107; // r0
  int v108; // r1
  int v109; // r9
  int v110; // r7
  unsigned int v111; // r1
  int v112; // r0
  int v113; // r0
  unsigned int v114; // r0
  unsigned int v115; // [sp+8h] [bp-6Ch]
  signed __int64 v116; // [sp+8h] [bp-6Ch]
  int v117; // [sp+8h] [bp-6Ch]
  int (**v118)(void); // [sp+14h] [bp-60h]
  int v119; // [sp+14h] [bp-60h]
  int v120; // [sp+18h] [bp-5Ch]
  int v121; // [sp+18h] [bp-5Ch]
  int v122; // [sp+18h] [bp-5Ch]
  int (**v123)(void); // [sp+1Ch] [bp-58h]
  unsigned int v124; // [sp+1Ch] [bp-58h]
  int v125; // [sp+2Ch] [bp-48h]
  unsigned int v126; // [sp+34h] [bp-40h]
  int v127; // [sp+38h] [bp-3Ch]
  unsigned int v128; // [sp+3Ch] [bp-38h]
  void *ptr; // [sp+40h] [bp-34h] BYREF
  void *v130; // [sp+44h] [bp-30h]
  void *v131; // [sp+48h] [bp-2Ch]
  void *v132; // [sp+4Ch] [bp-28h] BYREF
  int *v133; // [sp+50h] [bp-24h]
  int *v134; // [sp+54h] [bp-20h]
  void *v135; // [sp+58h] [bp-1Ch] BYREF
  void *v136; // [sp+5Ch] [bp-18h]
  void *v137; // [sp+60h] [bp-14h]
  int v138; // [sp+64h] [bp-10h] BYREF
  _DWORD *v139; // [sp+68h] [bp-Ch]
  _DWORD *v140; // [sp+6Ch] [bp-8h]

  v2 = *a2;
  *a1 = 0;
  v5 = v2[3];
  a1[1] = 0;
  a1[2] = 0;
  v6 = ((int (__fastcall *)(int (***)(void)))v5)(a2);
  v7 = v6 == 0;
  v8 = a2[2];
  v120 = v6;
  v9 = a2[4];
  if ( v7 )
  {
    v127 = -1;
    v128 = -1;
    v124 = sub_1DFB3C(v9);
    if ( (((int (__fastcall *)(unsigned int, int, int (**)(void)))**a2)(v124, 4, v8) & 0xFF9000F0) == 0xE1900090 )
    {
      v44 = v124 + 4;
      v117 = 0;
      while ( 1 )
      {
        v45 = ((int (__fastcall *)(unsigned int, int, int (**)(void)))**a2)(v44, 4, v8);
        v46 = v45;
        v47 = v44 + 4;
        if ( (HIBYTE(v45) & 0xF) == 0xA )
        {
          if ( v117 == 1 )
            goto LABEL_22;
          v117 = 1;
          v128 = v44 + 8 + 4 * ((-16777216 * ((v45 >> 23) & 1)) | v45 & 0xFFFFFF);
        }
        else if ( sub_1841C(v45) )
        {
          goto LABEL_22;
        }
        if ( (v46 & 0xFF9000F0) == 0xE1800090 )
          break;
        if ( v47 == v124 + 68 )
          goto LABEL_22;
        v44 += 4;
      }
      v127 = v44 + 4;
      if ( v117 )
      {
        if ( v47 == v128 )
        {
          v117 = 0;
        }
        else
        {
          v69 = v124 <= v128 && v47 > v128;
          v117 = !v69;
        }
      }
      v58 = 0;
      v138 = 0;
      v139 = 0;
      v37 = 0;
      v140 = 0;
      v38 = 0;
      while ( 1 )
      {
        if ( v38 == v37 )
        {
          sub_19BF4(&v138);
          v38 = v139;
          v37 = v140;
        }
        else
        {
          v7 = v38++ == 0;
          if ( !v7 )
            *(v38 - 1) = *(&v127 + v58);
          v139 = v38;
        }
        if ( v117 <= v58 )
          break;
        v58 = 1;
      }
      v39 = (_DWORD *)v138;
    }
    else
    {
LABEL_22:
      v37 = 0;
      v38 = 0;
      v39 = 0;
    }
    v40 = *a1;
    LODWORD(v19) = v39;
    a1[1] = v38;
    a1[2] = v37;
    *a1 = v39;
    if ( v40 )
    {
      sub_339E64(v40);
      v39 = *a1;
      v38 = a1[1];
      LODWORD(v19) = *a1;
    }
    if ( v38 != v39 )
      goto LABEL_26;
    v59 = (int)a2[4];
    v60 = a2[1];
    v61 = a2[2];
    v62 = sub_1DFB3C(v59);
    v63 = *a2;
    v64 = v61;
    v132 = 0;
    v133 = 0;
    v65 = *v63;
    v66 = v62;
    v134 = 0;
    v67 = ((int (__fastcall *)(int, int, int (**)(void)))v65)(v62, 4, v64);
    v68 = sub_92FEC(v59, 25);
    v125 = v66 + 4;
    if ( v67 >> 28 == 15 )
    {
      switch ( HIBYTE(v67) & 0xF )
      {
        case 0xA:
        case 0xB:
          v125 = (v66 + 8 + 4 * ((-16777216 * ((v67 >> 23) & 1)) | v67 & 0xFFFFFF)) | (2 * HIBYTE(v67)) & 2 | 1;
          break;
        case 0xC:
        case 0xD:
        case 0xE:
          if ( (unsigned __int16)v67 >> 12 == 15 )
            sub_946E0("Invalid update to pc in instruction");
          return result;
        default:
          break;
      }
    }
    else if ( sub_182E8(v67 >> 28, v68) )
    {
      switch ( HIBYTE(v67) & 0xF )
      {
        case 4:
        case 5:
        case 6:
        case 7:
          if ( ((v67 >> 25) & 7) == 3 && (v67 & 0x10) != 0 || (v67 & 0x100000) == 0 || (unsigned __int16)v67 >> 12 != 15 )
            goto LABEL_101;
          if ( (v67 & 0x400000) != 0 )
            sub_946E0("Invalid update to pc in instruction");
          v82 = HIWORD(v67) & 0xF;
          if ( v82 == 15 )
            v83 = v66 + 8;
          else
            v83 = sub_92FEC(v59, v82);
          if ( (v67 & 0x1000000) != 0 )
          {
            if ( (v67 & 0x2000000) != 0 )
              v114 = sub_186D0(v59, v67, (v68 >> 29) & 1, v66);
            else
              v114 = v67 & 0xFFF;
            if ( (v67 & 0x800000) != 0 )
              v83 += v114;
            else
              v83 -= v114;
          }
          v81 = ((int (__fastcall *)(int, int, int (**)(void)))**a2)(v83, 4, v60);
          goto LABEL_116;
        case 8:
        case 9:
          if ( (v67 & 0x108000) != 0x108000 )
            goto LABEL_101;
          v79 = sub_92FEC(v59, HIWORD(v67) & 0xF);
          if ( (v67 & 0x800000) != 0 )
          {
            v113 = sub_182C0(v67 & 0x7FFF);
            v122 = 4 * v113;
            if ( (v67 & 0x1000000) != 0 )
              v122 = 4 * v113 + 4;
          }
          else
          {
            v80 = v120;
            if ( (v67 & 0x1000000) != 0 )
              v80 = -4;
            v122 = v80;
          }
          v81 = ((int (__fastcall *)(int, int, int (**)(void)))**a2)(v122 + v79, 4, v60);
          goto LABEL_116;
        case 0xA:
        case 0xB:
          v125 = v66 + 8 + 4 * ((-16777216 * ((v67 >> 23) & 1)) | v67 & 0xFFFFFF);
          goto LABEL_101;
        case 0xC:
        case 0xD:
        case 0xE:
          goto LABEL_101;
        case 0xF:
          v81 = ((int (__fastcall *)(int (***)(void)))(*a2)[1])(a2);
          goto LABEL_116;
        default:
          if ( (unsigned __int16)v67 >> 12 != 15 )
            goto LABEL_101;
          if ( (v67 & 0x3C00000) == 0 && (unsigned __int8)v67 >> 4 == 9 )
            sub_946E0("Invalid update to pc in instruction");
          if ( (_UNKNOWN **)((v67 >> 4) & 0xFFFFFD) != (_UNKNOWN **)((char *)&jpt_12FFD8[4] + 1) )
          {
            v108 = HIWORD(v67) & 0xF;
            v109 = (v68 >> 29) & 1;
            if ( v108 == 15 )
              v110 = v66 + 8;
            else
              v110 = sub_92FEC(v59, v108);
            if ( (v67 & 0x2000000) != 0 )
              v111 = __ROR4__((unsigned __int8)v67, 2 * (BYTE1(v67) & 0xF));
            else
              v111 = sub_186D0(v59, v67, (v68 >> 29) & 1, v66);
            switch ( (v67 >> 21) & 0xF )
            {
              case 1u:
                v111 ^= v110;
                break;
              case 2u:
                goto LABEL_253;
              case 3u:
                v111 -= v110;
                break;
              case 4u:
                goto LABEL_222;
              case 5u:
                v110 += v109;
LABEL_222:
                v111 += v110;
                break;
              case 6u:
                v110 += v109;
LABEL_253:
                v111 = v110 - v111;
                break;
              case 7u:
                v111 += v109 - v110;
                break;
              case 8u:
              case 9u:
              case 0xAu:
              case 0xBu:
                v111 = v66 + 4;
                break;
              case 0xCu:
                v111 |= v110;
                break;
              case 0xDu:
                break;
              case 0xEu:
                v111 = v110 & ~v111;
                break;
              case 0xFu:
                v111 = ~v111;
                break;
              default:
                v111 &= v110;
                break;
            }
            v81 = ((int (__fastcall *)(int (***)(void), unsigned int))(*a2)[2])(a2, v111);
LABEL_116:
            v125 = v81;
            goto LABEL_101;
          }
          if ( (v67 & 0xF) == 0xF )
            v84 = v66 + 8;
          else
            v84 = sub_92FEC(v59, v67 & 0xF);
          v74 = v133;
          v75 = v134;
          if ( v133 == v134 )
            goto LABEL_138;
          if ( v133 )
            *v133 = v84;
          break;
      }
      goto LABEL_104;
    }
LABEL_101:
    v74 = v133;
    v75 = v134;
    if ( v133 == v134 )
    {
LABEL_138:
      sub_19BF4(&v132);
      v76 = v133;
      v75 = v134;
      goto LABEL_105;
    }
    if ( v133 )
      *v133 = v125;
LABEL_104:
    v76 = v74 + 1;
LABEL_105:
    v77 = *a1;
    v78 = v132;
    a1[1] = v76;
    a1[2] = v75;
    *a1 = v78;
    v132 = 0;
    v133 = 0;
    v134 = 0;
    if ( v77 )
    {
      sub_339E64(v77);
      v73 = v132;
      if ( v132 )
        goto LABEL_94;
    }
    goto LABEL_95;
  }
  v126 = -1;
  v115 = sub_1DFB3C(v9);
  v10 = sub_92FEC(a2[4], 25);
  v11 = BYTE1(v10);
  LODWORD(v12) = (v10 >> 25) & 3;
  HIDWORD(v12) = v11 & 0xC;
  if ( v12
    || (v13 = ((int (__fastcall *)(unsigned int, int, int (**)(void)))**a2)(v115, 2, v8), sub_1829C(v13) != 4)
    || (v14 = ((int (__fastcall *)(unsigned int, int, int (**)(void)))**a2)(v115 + 2, 2, v8), (v13 & 0xFFF0) != 0xE850)
    && ((v13 & 0xFFF0) != 0xE8D0 || (v14 & 0xC0) != 0x40) )
  {
LABEL_6:
    v15 = 0;
    v16 = 0;
    v17 = 0;
    goto LABEL_7;
  }
  v48 = 16;
  v49 = v115 + 4;
  v119 = 0;
  while ( 1 )
  {
    v50 = ((int (__fastcall *)(unsigned int, int, int (**)(void)))**a2)(v49, 2, v8);
    v51 = v50;
    if ( sub_1829C(v50) != 4 )
    {
      if ( (v51 & 0xFFFFF000) != 0xD000 || ((v51 >> 8) & 0xF) == 0xF )
      {
        if ( sub_18534(v51) )
          goto LABEL_6;
        v49 += 2;
      }
      else
      {
        if ( v119 == 1 )
          goto LABEL_6;
        v57 = v49 + 4;
        v49 += 2;
        v119 = 1;
        v126 = v57 + 2 * ((-256 * ((v51 >> 7) & 1)) | (unsigned __int8)v51);
      }
      goto LABEL_43;
    }
    v52 = ((int (__fastcall *)(unsigned int, int, int (**)(void)))**a2)(v49 + 2, 2, v8);
    v53 = v52;
    v49 += 4;
    if ( (v51 & 0xFFFFF800) == 0xF000 && (v52 & 0xD000) == 0x8000 && (v51 & 0x380) != 0x380 )
    {
      if ( v119 == 1 )
        goto LABEL_6;
      v119 = 1;
      v126 = ((v52 << 8) & 0x80000)
           + ((int)(v51 << 21) >> 31 << 20)
           + ((32 * v52) & 0x40000)
           + 2 * (v52 & 0x7FF)
           + ((v51 & 0x3F) << 12)
           + v49;
    }
    else if ( sub_1858C(v51, v52) )
    {
      goto LABEL_6;
    }
    v54 = 59456;
    if ( (v51 & 0xFFF0) == 0xE840 )
      break;
    v54 = 59584;
    if ( (v51 & 0xFFF0) == 0xE8C0 && (v53 & 0xC0) == 0x40 )
      break;
LABEL_43:
    if ( !--v48 )
      goto LABEL_6;
  }
  if ( v119 )
  {
    if ( v49 == v126 )
    {
      v119 = 0;
    }
    else
    {
      v54 = v49 > v126;
      v55 = v115 <= v126 && v49 > v126;
      v119 = !v55;
    }
  }
  v138 = v49 | 1;
  v135 = 0;
  v136 = 0;
  v137 = 0;
  sub_19CE4(&v135, &v138, v54);
  if ( v119 )
  {
    v138 = v126 | 1;
    sub_19CE4(&v135, &v138, v56);
  }
  v17 = v135;
  v16 = v136;
  v15 = v137;
LABEL_7:
  v18 = *a1;
  LODWORD(v19) = v17;
  a1[1] = v16;
  a1[2] = v15;
  *a1 = v17;
  if ( v18 )
  {
    sub_339E64(v18);
    v17 = *a1;
    v16 = a1[1];
    LODWORD(v19) = *a1;
  }
  if ( v17 != v16 )
  {
LABEL_26:
    v41 = (*a2)[4];
    if ( !v41 )
      return a1;
    HIDWORD(v19) = a1[1];
LABEL_30:
    while ( 1 )
    {
      v42 = *(_DWORD *)v19;
      LODWORD(v19) = v19 + 4;
      *(_DWORD *)(v19 - 4) = ((int (__fastcall *)(int (***)(void), int))v41)(a2, v42);
      if ( HIDWORD(v19) == (_DWORD)v19 )
        break;
      v41 = (*a2)[4];
    }
    return a1;
  }
  v123 = a2[1];
  v118 = a2[2];
  v20 = sub_1DFB3C(a2[4]);
  v21 = v20 + 2;
  v22 = **a2;
  ptr = 0;
  v23 = v20;
  v130 = 0;
  v131 = 0;
  v24 = a2[4];
  v25 = v22();
  v26 = v25;
  v27 = sub_92FEC(v24, 25);
  v28 = v27;
  v116 = BYTE1(v27) & 0xFC | (unsigned __int64)((v27 >> 25) & 3);
  if ( !a2[3] )
  {
    if ( !(BYTE1(v27) & 0xC | (v27 >> 25) & 3) )
    {
      v121 = v25 & 0xFF00;
      goto LABEL_88;
    }
    if ( !sub_182E8((unsigned int)v116 >> 4, v27) )
    {
      v138 = (sub_1829C(v25) + v23) | 1;
      sub_19CE4(&ptr, &v138, v89);
    }
    goto LABEL_20;
  }
  v121 = v25 & 0xFF00;
  if ( v121 == 48896 )
  {
    if ( (v25 & 0xF) != 0 )
    {
      v92 = (unsigned __int8)v25;
      v29 = sub_1829C(v25) + v23;
      if ( v92 )
      {
        do
        {
          if ( sub_182E8(v92 >> 4, v28) )
            break;
          v93 = ((int (__fastcall *)(int, int, int (**)(void)))**a2)(v29, 2, v118);
          v29 += sub_1829C(v93);
          v94 = sub_18400(v92);
          v92 = v94;
        }
        while ( v94 );
      }
    }
    else
    {
      if ( !v116 )
      {
        v70 = v23 + 4;
        if ( (v26 & 0xF000) == 0xD000 )
          goto LABEL_153;
LABEL_90:
        if ( (v26 & 0xF800) == 0xE000 )
          goto LABEL_160;
        if ( sub_1829C(v26) != 4 )
        {
          if ( v121 == 18176 )
          {
            v105 = (v26 >> 3) & 0xF;
            if ( v105 == 15 )
              goto LABEL_160;
          }
          else
          {
            if ( (v26 & 0xFF87) != 0x4687 )
            {
              if ( (v26 & 0xF500) == 0xB100 )
                sub_92FEC(v24, v26 & 7);
              goto LABEL_160;
            }
            v105 = (v26 >> 3) & 0xF;
            if ( v105 == 15 )
              goto LABEL_160;
          }
          sub_92FEC(v24, v105);
          goto LABEL_160;
        }
        v85 = ((int (__fastcall *)(int, int, int (**)(void)))**a2)(v21, 2, v118);
        v86 = v85;
        if ( (v26 & 0xF800) == 0xF000 && (v85 & 0x8000) != 0 )
        {
          if ( (v85 & 0x1000) == 0 && (v85 & 0xD001) != 0xC000 )
          {
            if ( v26 == 62430 )
            {
              if ( (v85 & 0xFF00) == 0x3F00 )
                sub_92FEC(v24, 14);
            }
            else if ( (v85 & 0xD000) == 0x8000 && (v26 & 0x380) != 0x380 )
            {
              sub_182E8((v26 >> 6) & 0xF, v28);
            }
          }
          goto LABEL_160;
        }
        if ( (v26 & 0xFFFFFE50) == 0xE810 )
        {
          v98 = v26 & 0x180;
          switch ( v98 )
          {
            case 128:
              v106 = (__int16)v85;
              v107 = sub_182C0(v85);
              if ( v106 >= 0 )
                goto LABEL_160;
              v99 = 4 * (v107 - 1);
              break;
            case 256:
              if ( (v85 & 0x8000) == 0 )
                goto LABEL_160;
              v99 = -4;
              break;
            case 384:
              v99 = 0;
              break;
            default:
              if ( (v26 & 0x180) != 0 )
                goto LABEL_160;
              v99 = -8;
              break;
          }
          v100 = sub_92FEC(v24, v26 & 0xF);
          ((void (__fastcall *)(int, int, int (**)(void)))**a2)(v99 + v100, 4, v123);
          goto LABEL_160;
        }
        if ( (v26 & 0xFFEF) == 0xEA4F && (v85 & 0xFFF0) == 0xF00 )
        {
          sub_92FEC(v24, v85 & 0xF);
          goto LABEL_160;
        }
        if ( (v26 & 0xFF70) != 0xF850 || (v85 & 0xF000) != 0xF000 )
        {
          if ( (v26 & 0xFFF0) == 0xE8D0 )
          {
            if ( (v85 & 0xFFF0) == 0xF000 )
            {
              if ( (v26 & 0xF) != 0xF )
                v70 = sub_92FEC(v24, v26 & 0xF);
              v112 = sub_92FEC(v24, v86 & 0xF);
              ((void (__fastcall *)(int, int, int (**)(void)))**a2)(v70 + v112, 1, v123);
            }
            else if ( (v85 & 0xFFF0) == 0xF010 )
            {
              if ( (v26 & 0xF) != 0xF )
                v70 = sub_92FEC(v24, v26 & 0xF);
              v87 = sub_92FEC(v24, v86 & 0xF);
              ((void (__fastcall *)(int, int, int (**)(void)))**a2)(v70 + 2 * v87, 2, v123);
            }
          }
          goto LABEL_160;
        }
        v101 = v26 & 0xF;
        v102 = sub_92FEC(v24, v101);
        v103 = v102;
        v104 = v26 & 0x80;
        if ( v101 == 15 )
        {
          v103 = (v102 + 4) & 0xFFFFFFFC;
          v86 &= 0xFFFu;
          if ( v104 )
            goto LABEL_196;
        }
        else
        {
          if ( v104 )
          {
            v86 &= 0xFFFu;
            goto LABEL_196;
          }
          if ( (v86 & 0x800) == 0 )
          {
            if ( (v86 & 0xFC0) != 0 )
              goto LABEL_160;
            v103 = v102 + (sub_92FEC(v24, v86 & 0xF) << ((v86 >> 4) & 3));
LABEL_197:
            ((void (__fastcall *)(unsigned int, int, int (**)(void)))**a2)(v103, 4, v123);
            goto LABEL_160;
          }
          if ( (v86 & 0x400) == 0 )
            goto LABEL_197;
          v7 = (v86 & 0x200) == 0;
          v86 = (unsigned __int8)v86;
          if ( !v7 )
          {
LABEL_196:
            v103 += v86;
            goto LABEL_197;
          }
        }
        v103 -= v86;
        goto LABEL_197;
      }
LABEL_13:
      if ( sub_182E8(v116 >> 4, v27) )
      {
        if ( (v116 & 0xF) == 8 )
          goto LABEL_88;
        v29 = sub_1829C(v25) + v23;
        v31 = sub_18400(v116);
        v32 = v31;
        if ( (v31 & 0xF) == 0 )
        {
          sub_94700(
            "arch/arm-get-next-pcs.c",
            365,
            "%s: Assertion `%s' failed.",
            "std::vector<long unsigned int> thumb_get_next_pcs_raw(arm_get_next_pcs*)",
            "(itstate & 0x0f) != 0");
          goto LABEL_160;
        }
        v138 = v29 | 1;
        sub_19CE4(&ptr, &v138, v30);
        do
        {
          v34 = ((int (__fastcall *)(int, int, int (**)(void)))**a2)(v29, 2, v118);
          v29 += sub_1829C(v34);
          v35 = sub_18400(v32);
          v32 = v35;
          if ( !v35 )
            break;
          v33 = (v35 >> 4) & 1;
        }
        while ( v33 == ((v31 >> 4) & 1) );
      }
      else
      {
        v29 = sub_1829C(v25) + v23;
        for ( i = sub_18400(v116); ; i = sub_18400(v97) )
        {
          v97 = i;
          if ( !i || sub_182E8(i >> 4, v28) )
            break;
          v96 = ((int (__fastcall *)(int, int, int (**)(void)))**a2)(v29, 2, v118);
          v29 += sub_1829C(v96);
        }
      }
    }
    v138 = v29 | 1;
    sub_19CE4(&ptr, &v138, v33);
    goto LABEL_20;
  }
  if ( v116 )
    goto LABEL_13;
LABEL_88:
  if ( v121 != 48384 )
  {
    v70 = v23 + 4;
    if ( (v26 & 0xF000) != 0xD000 )
      goto LABEL_90;
    v88 = (v26 >> 8) & 0xF;
    if ( v88 != 15 )
    {
      sub_182E8(v88, v28);
      goto LABEL_160;
    }
LABEL_153:
    ((void (__fastcall *)(int (***)(void)))(*a2)[1])(a2);
    goto LABEL_160;
  }
  v90 = 4 * sub_182C0((unsigned __int8)v25);
  v91 = sub_92FEC(v24, 13);
  ((void (__fastcall *)(int, int, int (**)(void)))**a2)(v90 + v91, 4, v123);
LABEL_160:
  sub_19BF4(&ptr);
LABEL_20:
  v36 = v131;
  v71 = *a1;
  v72 = ptr;
  a1[1] = v130;
  a1[2] = v36;
  *a1 = v72;
  ptr = 0;
  v130 = 0;
  v131 = 0;
  if ( v71 )
  {
    sub_339E64(v71);
    v73 = ptr;
    if ( ptr )
LABEL_94:
      sub_339E64(v73);
  }
LABEL_95:
  v41 = (*a2)[4];
  if ( !v41 )
    return a1;
  v19 = *(_QWORD *)a1;
  if ( HIDWORD(v19) != (_DWORD)v19 )
    goto LABEL_30;
  return a1;
}

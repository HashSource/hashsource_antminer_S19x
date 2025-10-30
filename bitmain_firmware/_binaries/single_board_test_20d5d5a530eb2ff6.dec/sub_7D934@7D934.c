int __fastcall sub_7D934(int a1, int a2, int a3, int a4, unsigned int a5, int a6, _DWORD *a7)
{
  unsigned int v7; // r4
  unsigned int v8; // r7
  int v11; // lr
  unsigned int v12; // r6
  _DWORD *v13; // r0
  int v14; // r3
  int v15; // r2
  int v16; // r1
  int *v17; // r3
  int v18; // t1
  _BOOL4 v19; // r7
  bool v20; // zf
  _BOOL4 v21; // r6
  int v22; // r3
  int v23; // r0
  int v24; // r3
  int v26; // r2
  _BOOL4 v27; // r3
  unsigned int v28; // r3
  _BYTE *v29; // r6
  int v30; // r11
  _BYTE *v31; // r10
  _DWORD *v32; // r7
  _BYTE *v33; // r0
  int v34; // r1
  int v35; // r2
  int v36; // r4
  int v37; // r3
  int v38; // r4
  _BYTE *v39; // r0
  int v40; // r0
  int v41; // r1
  int v42; // r2
  int v43; // r7
  int v44; // r7
  int *v45; // r2
  int v46; // r3
  int v47; // r2
  _BOOL4 v48; // r3
  _DWORD *v49; // r8
  int *v50; // r7
  int *v51; // r2
  int v52; // r4
  int v53; // r9
  int v54; // r2
  bool v55; // cc
  bool v56; // zf
  int v57; // r11
  int v58; // r3
  int v59; // r1
  int v60; // r3
  int v61; // r4
  int v62; // t1
  int v63; // r1
  int v64; // r2
  int v65; // r3
  int v66; // r1
  int *v67; // r3
  int v68; // r3
  _BOOL4 v69; // r2
  bool v70; // zf
  int v71; // r1
  int v72; // r2
  int v73; // r3
  unsigned int v74; // r0
  unsigned int v75; // r9
  unsigned int v76; // r4
  int (__fastcall *v77)(int, int, _DWORD, _DWORD); // r11
  unsigned int v78; // r0
  unsigned int v79; // r4
  int v80; // r2
  _BYTE *v81; // r0
  int v82; // r0
  int v83; // r0
  _BYTE *v84; // r8
  char *v85; // r9
  _DWORD *v86; // r7
  int v87; // r6
  int v88; // r3
  _BOOL4 v89; // r2
  int v90; // r1
  int v91; // r2
  int v92; // r3
  int v93; // r3
  unsigned int v94; // r2
  unsigned int v95; // r1
  unsigned int v96; // r3
  int v97; // r3
  int v98; // r0
  int *v99; // r3
  int v100; // r3
  int v101; // r3
  int v102; // r1
  int v103; // r0
  int v104; // r3
  int v105; // r3
  int v106; // r3
  unsigned int v109; // [sp+1Ch] [bp-938h]
  unsigned int v110; // [sp+20h] [bp-934h]
  _DWORD *v111; // [sp+28h] [bp-92Ch]
  int v112; // [sp+2Ch] [bp-928h]
  int v113; // [sp+30h] [bp-924h]
  int v114; // [sp+34h] [bp-920h]
  int v115; // [sp+3Ch] [bp-918h]
  unsigned int v116; // [sp+40h] [bp-914h] BYREF
  int v117; // [sp+44h] [bp-910h] BYREF
  unsigned int v118; // [sp+48h] [bp-90Ch] BYREF
  int v119; // [sp+4Ch] [bp-908h] BYREF
  _BYTE v120[768]; // [sp+50h] [bp-904h] BYREF
  _DWORD s[385]; // [sp+350h] [bp-604h] BYREF
  unsigned int v122; // [sp+978h] [bp+24h]

  v7 = a5;
  v8 = 0;
  v116 = 0;
  if ( a5 )
  {
    if ( a5 <= 8 )
    {
      v12 = 0;
    }
    else
    {
      v11 = 0;
      v12 = 0;
      v8 = ((a5 - 9) & 0xFFFFFFF8) + 8;
      v13 = (_DWORD *)(a4 + 116);
      do
      {
        v14 = *(v13 - 28);
        v11 += 8;
        v15 = *(v13 - 29);
        v16 = *(v13 - 27);
        __pld(v13);
        v13 += 8;
        v12 += *(v13 - 30) + *(v13 - 32) + *(v13 - 33) + *(v13 - 34) + v15 + v14 + v16 + *(v13 - 31);
      }
      while ( v11 != v8 );
    }
    v17 = (int *)(a4 + 4 * v8);
    do
    {
      v18 = *v17++;
      ++v8;
      v12 += v18;
    }
    while ( a5 > v8 );
  }
  else
  {
    v12 = 0;
  }
  v19 = sub_7D404(a1 + 1616);
  if ( !v19 )
  {
    if ( *(_DWORD *)(*(_DWORD *)(a1 + 124) + 232) )
    {
      v40 = (*(int (__fastcall **)(int))(*(_DWORD *)(a1 + 4) + 64))(a1);
      if ( v40 <= 0 )
        return v40;
    }
    if ( a5 > *(_DWORD *)(a1 + 1632) && !sub_7F058(a1, a5, 0) )
      return -1;
    v20 = v12 == 0;
    if ( !v12 )
      v20 = a6 == 0;
    v21 = v20;
    if ( v20 )
      return v19;
    if ( *(_DWORD *)(a1 + 1140) )
    {
      v22 = *(_DWORD *)(a1 + 1004);
      if ( !v22 )
      {
LABEL_25:
        v21 = v22 == 0;
        v112 = 0;
        goto LABEL_26;
      }
      if ( sub_D8D8C(*(_DWORD *)(a1 + 1024)) )
      {
        v23 = sub_D8D8C(*(_DWORD *)(a1 + 1024));
        v112 = sub_D8C78(v23);
        if ( v112 < 0 )
        {
          v24 = 724;
LABEL_53:
          sub_95494(a1, 80, 104, 68, "ssl/record/rec_layer_s3.c", v24);
          return -1;
        }
LABEL_26:
        if ( a6 | v21 )
        {
          if ( a6 )
          {
            v41 = *(_DWORD *)(a1 + 1656);
            v42 = *(_DWORD *)(a1 + 1664);
            v43 = (6 - (_BYTE)v41) & 7;
            *(_DWORD *)(a1 + 1668) = v43;
            if ( !sub_A82D4(v120, v41, v42, 0) || !sub_A82B8(v120, v43, 0) )
            {
              v24 = 782;
              goto LABEL_53;
            }
            goto LABEL_58;
          }
        }
        else
        {
          v26 = *(_DWORD *)(a1 + 124);
          if ( !*(_DWORD *)(v26 + 208) )
          {
            v27 = *(_DWORD *)(v26 + 204) != 0;
            if ( a2 != 23 )
              v27 = 0;
            if ( v27 )
            {
              s[0] = 0;
              if ( sub_7D934(a1, 23, a3, s, 1, 1, &v116) <= 0 )
                return -1;
              v28 = v116;
              if ( v116 > 0x55 )
              {
                v24 = 758;
                goto LABEL_53;
              }
              v26 = *(_DWORD *)(a1 + 124);
            }
            else
            {
              v28 = v116;
            }
            *(_DWORD *)(v26 + 208) = 1;
            goto LABEL_33;
          }
        }
        v28 = v116;
LABEL_33:
        if ( !v28 )
        {
          if ( a5 )
          {
            v29 = v120;
            v30 = 0;
            v31 = v120;
            v32 = (_DWORD *)(a1 + 1756);
            do
            {
              v34 = *(v32 - 25);
              v35 = *(v32 - 23);
              __pld(v32);
              v32 += 5;
              v36 = (3 - (_BYTE)v34) & 7;
              *(v32 - 27) = v36;
              if ( !sub_A82D4(v31, v34, v35, 0) || (v33 = v31, v31 += 24, !sub_A82B8(v33, v36, 0)) )
              {
                v37 = 812;
                goto LABEL_40;
              }
              ++v30;
            }
            while ( a5 != v30 );
            v44 = *(_DWORD *)(a1 + 1004);
            v7 = a5;
            if ( !v44 || (v45 = *(int **)(a1 + 4), v46 = *(_DWORD *)(v45[25] + 48), (v46 & 1) == 0) )
            {
              v30 = a5;
              memset(s, 0, 0x600u);
              v113 = 0;
              goto LABEL_74;
            }
          }
          else
          {
            v44 = *(_DWORD *)(a1 + 1004);
            if ( !v44 || (v45 = *(int **)(a1 + 4), v46 = *(_DWORD *)(v45[25] + 48), (v46 & 1) == 0) )
            {
              v30 = 0;
              memset(s, 0, 0x600u);
              v110 = 0;
              goto LABEL_123;
            }
          }
          v30 = v7;
          goto LABEL_61;
        }
        if ( !sub_A82D4(v120, *(_DWORD *)(a1 + 1656), *(_DWORD *)(a1 + 1664), 0)
          || !sub_A82B8(v120, *(_DWORD *)(a1 + 1668) + v116, 0) )
        {
          v24 = 794;
          goto LABEL_53;
        }
LABEL_58:
        v44 = *(_DWORD *)(a1 + 1004);
        if ( v44 )
        {
          v45 = *(int **)(a1 + 4);
          v46 = *(_DWORD *)(v45[25] + 48);
          if ( (v46 & 1) != 0 )
          {
            v30 = 1;
LABEL_61:
            if ( (v46 & 8) == 0 )
            {
              v47 = *v45;
              v48 = v47 == 0x10000;
              if ( v47 < 772 )
                v48 = 1;
              if ( !v48 )
                goto LABEL_65;
            }
            if ( (unsigned int)(*(_DWORD *)(a1 + 104) - 1) > 3 && *(_DWORD *)(a1 + 1100) != 1 )
            {
              v103 = sub_D8920(v44);
              v104 = sub_D8928(v103) & 0xF0007;
              if ( v104 == 2 )
              {
                v106 = sub_D8944(*(_DWORD *)(a1 + 1004));
                if ( v106 <= 1 )
                  v106 = 0;
                v113 = v106;
              }
              else
              {
                if ( (unsigned int)(v104 - 6) >= 2 )
                  v105 = 0;
                else
                  v105 = 8;
                v113 = v105;
              }
            }
            else
            {
LABEL_65:
              v113 = 0;
            }
            goto LABEL_66;
          }
          v113 = 0;
          v30 = 1;
        }
        else
        {
          v113 = 0;
          v30 = 1;
        }
LABEL_66:
        memset(s, 0, 0x600u);
        if ( v7 )
        {
          v29 = v120;
LABEL_74:
          v49 = &s[14];
          v50 = (int *)(a4 - 4);
          v114 = v30;
          v109 = 0;
          v110 = 0;
          v122 = v7;
          while ( 1 )
          {
            v51 = *(int **)(a1 + 4);
            v118 = 0;
            v111 = v49 - 14;
            v52 = *(_DWORD *)a1;
            if ( *(_DWORD *)a1 == 772 )
              v52 = 771;
            v53 = v52;
            if ( (*(_DWORD *)(v51[25] + 48) & 8) != 0 )
              goto LABEL_155;
            v54 = *v51;
            v55 = v54 <= 0x10000;
            if ( v54 != 0x10000 )
              v55 = v54 <= 771;
            if ( v55 )
            {
LABEL_155:
              if ( (unsigned int)(*(_DWORD *)(a1 + 104) - 1) > 3 && *(_DWORD *)(a1 + 1100) != 1 )
                goto LABEL_156;
            }
            if ( !*(_DWORD *)(a1 + 1004) )
              goto LABEL_156;
            v56 = a2 == 21;
            if ( a2 == 21 )
              v56 = *(_DWORD *)(a1 + 96) == 2;
            if ( v56 )
            {
LABEL_156:
              v58 = a2;
              v57 = a2;
            }
            else
            {
              v57 = 23;
              v58 = 23;
            }
            *(v49 - 13) = v58;
            __pld(v49 - 1);
            if ( sub_95444(a1) == 12
              && !*(_DWORD *)(a1 + 1516)
              && sub_8A8F0(a1) >> 8 == 3
              && sub_8A8F0(a1) > 769
              && !*(_DWORD *)(a1 + 1100) )
            {
              v53 = 769;
              v52 = 769;
            }
            v60 = *(_DWORD *)(a1 + 996);
            *(v49 - 14) = v52;
            __pld(v49 - 2);
            v62 = v50[1];
            ++v50;
            v61 = v62;
            if ( v60 )
              v61 += 1024;
            if ( !sub_A8450(v29, v59, v57, 0, 1)
              || !sub_A8450(v29, v63, v53, 0, 2)
              || !sub_A8398(v29, 2)
              || v113 && !sub_A82B8(v29, v113, 0)
              || v61 && !sub_A8250(v29, v61, &v118) )
            {
              v37 = 886;
              v30 = v114;
              goto LABEL_40;
            }
            v64 = *v50;
            v65 = *(_DWORD *)(a1 + 996);
            *(v49 - 9) = v118;
            *(v49 - 8) = a3 + v110;
            *(v49 - 12) = v64;
            v110 += v64;
            if ( v65 )
            {
              if ( !sub_7F348(a1, v111) || (v66 = *(v49 - 12), __pld(v49), !sub_A82B8(v29, v66, 0)) )
              {
                v30 = v114;
                sub_95494(a1, 80, 104, 141, "ssl/record/rec_layer_s3.c", 906);
                goto LABEL_41;
              }
            }
            else
            {
              if ( !sub_A851C(v29) )
              {
                v37 = 912;
                v30 = v114;
                goto LABEL_40;
              }
              v100 = *(v49 - 9);
              __pld(v49 + 3);
              *(v49 - 8) = v100;
            }
            v67 = *(int **)(a1 + 4);
            if ( (*(_DWORD *)(v67[25] + 48) & 8) == 0 )
            {
              v68 = *v67;
              v69 = v68 >= 772;
              if ( v68 == 0x10000 )
                v69 = 0;
              if ( v69 )
                goto LABEL_106;
            }
            if ( (unsigned int)(*(_DWORD *)(a1 + 104) - 1) <= 3 || *(_DWORD *)(a1 + 1100) == 1 )
            {
LABEL_106:
              if ( *(_DWORD *)(a1 + 1004) )
              {
                v70 = a2 == 21;
                if ( a2 == 21 )
                  v70 = *(_DWORD *)(a1 + 96) == 2;
                if ( !v70 )
                {
                  if ( !sub_A8450(v29, 1, a2, a2 >> 31, 1) )
                  {
                    v37 = 926;
                    v30 = v114;
                    goto LABEL_40;
                  }
                  v73 = *(v49 - 12) + 1;
                  *(v49 - 12) = v73;
                  v74 = sub_8CD40(a1, v71, v72, v73);
                  v75 = *(v49 - 12);
                  v76 = v74;
                  if ( v74 > v75 )
                  {
                    v77 = *(int (__fastcall **)(int, int, _DWORD, _DWORD))(a1 + 3932);
                    if ( v77 )
                    {
                      v78 = v77(a1, a2, *(v49 - 12), *(_DWORD *)(a1 + 3936));
                    }
                    else
                    {
                      v101 = *(_DWORD *)(a1 + 3940);
                      if ( !v101 )
                        goto LABEL_116;
                      if ( (v101 & (v101 - 1)) != 0 )
                      {
                        v115 = *(_DWORD *)(a1 + 3940);
                        sub_1892EC(*(v49 - 12), v115);
                        v101 = v115;
                      }
                      else
                      {
                        v102 = v75 & (v101 - 1);
                      }
                      if ( !v102 )
                        goto LABEL_116;
                      v78 = v101 - v102;
                    }
                    if ( v78 )
                    {
                      v79 = v76 - v75;
                      if ( v79 >= v78 )
                        v79 = v78;
                      if ( !sub_A84F4(v29, 0, v79) )
                      {
                        v37 = 960;
                        v30 = v114;
                        goto LABEL_40;
                      }
                      *(v49 - 12) += v79;
                    }
                  }
                }
              }
            }
LABEL_116:
            v80 = v112;
            if ( v112 )
              v80 = 1;
            if ( (v80 & ((**(_DWORD **)(a1 + 124) ^ 0x400u) >> 10)) != 0
              && (!sub_A82B8(v29, v112, &v119)
               || !(*(int (__fastcall **)(int, _DWORD *, int, int))(*(_DWORD *)(*(_DWORD *)(a1 + 4) + 100) + 4))(
                     a1,
                     v111,
                     v119,
                     1)) )
            {
              v37 = 980;
              v30 = v114;
              goto LABEL_40;
            }
            if ( !sub_A8250(v29, 16, 0) || !sub_A821C(v29, &v117) )
            {
              v37 = 998;
              v30 = v114;
              goto LABEL_40;
            }
            v81 = v29;
            v49 += 12;
            v29 += 24;
            ++v109;
            v82 = sub_A823C(v81);
            v83 = v82 - v117;
            *(v49 - 24) = v117;
            *(v49 - 21) = v83;
            *(v49 - 20) = v83;
            if ( v122 <= v109 )
            {
              v30 = v114;
              v7 = v122;
              goto LABEL_123;
            }
          }
        }
        v110 = 0;
LABEL_123:
        if ( *(_DWORD *)(a1 + 96) == 2 )
        {
          if ( sub_812D0(a1, s, v7, 1) > 0 )
            goto LABEL_125;
          if ( !sub_95D8C(a1) )
          {
            v37 = 1018;
            goto LABEL_40;
          }
        }
        else
        {
          if ( (**(int (__fastcall ***)(int, _DWORD *, unsigned int, int))(*(_DWORD *)(a1 + 4) + 100))(a1, s, v7, 1) > 0 )
          {
LABEL_125:
            if ( !v7 )
            {
LABEL_205:
              *(_DWORD *)(a1 + 3856) = v110;
              *(_DWORD *)(a1 + 3864) = v110;
              *(_DWORD *)(a1 + 3868) = a3;
              *(_DWORD *)(a1 + 3860) = a2;
              return sub_7D810((_DWORD *)a1, a2, a3, v110, a7);
            }
            v84 = v120;
            v85 = (char *)(a1 + 1692);
            v86 = &s[13];
            v87 = 0;
            while ( 1 )
            {
              if ( !sub_A821C(v84, &v118)
                || (v95 = *(v86 - 11), v96 = v118, __pld(v86 + 1), v95 < v96)
                || v95 > v118 && !sub_A82B8(v84, v95 - v118, 0) )
              {
                v37 = 1046;
                goto LABEL_40;
              }
              v97 = v112;
              if ( v112 )
                v97 = 1;
              if ( (v97 & (**(_DWORD **)(a1 + 124) >> 10)) != 0 )
              {
                if ( !sub_A82B8(v84, v112, &v119)
                  || !(*(int (__fastcall **)(int, _DWORD *, int, int))(*(_DWORD *)(*(_DWORD *)(a1 + 4) + 100) + 4))(
                        a1,
                        v86 - 13,
                        v119,
                        1) )
                {
                  v37 = 1055;
                  goto LABEL_40;
                }
                *(v86 - 11) += v112;
              }
              if ( !sub_A821C(v84, &v117) || !sub_A7EDC(v84) )
              {
                v37 = 1064;
                goto LABEL_40;
              }
              if ( *(_DWORD *)(a1 + 132) )
              {
                v98 = sub_A823C(v84);
                (*(void (__fastcall **)(int, _DWORD, int, int, int, int, _DWORD))(a1 + 132))(
                  1,
                  0,
                  256,
                  v98 - v117 - 5,
                  5,
                  a1,
                  *(_DWORD *)(a1 + 136));
                v99 = *(int **)(a1 + 4);
                if ( (*(_DWORD *)(v99[25] + 48) & 8) == 0 )
                {
                  v88 = *v99;
                  v89 = v88 >= 772;
                  if ( v88 == 0x10000 )
                    v89 = 0;
                  if ( v89 )
                    goto LABEL_217;
                }
                if ( (unsigned int)(*(_DWORD *)(a1 + 104) - 1) <= 3 || *(_DWORD *)(a1 + 1100) == 1 )
                {
LABEL_217:
                  if ( *(_DWORD *)(a1 + 1004) )
                  {
                    v90 = *(_DWORD *)a1;
                    LOBYTE(v119) = a2;
                    (*(void (__fastcall **)(int, int, int))(a1 + 132))(1, v90, 257);
                  }
                }
              }
              if ( !sub_A8054(v84) )
              {
                v37 = 1085;
                goto LABEL_40;
              }
              v91 = a2;
              v92 = *(v86 - 11);
              __pld(v86);
              *(v86 - 12) = v91;
              v93 = v92 + 5;
              *(v86 - 11) = v93;
              if ( a6 )
                break;
              v94 = v116;
              ++v87;
              __pld(v85);
              v84 += 24;
              v86 += 12;
              v85 += 20;
              *((_DWORD *)v85 - 10) = v93 + v94;
              if ( v7 == v87 )
                goto LABEL_205;
            }
            if ( !v87 )
            {
              v19 = 1;
              *a7 = v93;
              return v19;
            }
            v37 = 1105;
LABEL_40:
            sub_95494(a1, 80, 104, 68, "ssl/record/rec_layer_s3.c", v37);
            goto LABEL_41;
          }
          if ( !sub_95D8C(a1) )
          {
            v37 = 1026;
            goto LABEL_40;
          }
        }
LABEL_41:
        if ( v30 )
        {
          v38 = 0;
          do
          {
            v39 = &v120[v38];
            v38 += 24;
            sub_A8640(v39);
          }
          while ( v38 != 24 * v30 );
        }
        return -1;
      }
    }
    v22 = *(_DWORD *)(a1 + 1004);
    goto LABEL_25;
  }
  return sub_7D810((_DWORD *)a1, a2, a3, v12, a7);
}

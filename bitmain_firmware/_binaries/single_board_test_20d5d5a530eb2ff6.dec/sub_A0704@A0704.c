int __fastcall sub_A0704(int a1, int a2)
{
  int *v4; // r4
  int v5; // r3
  int v6; // r3
  int v7; // r2
  int (__fastcall *v8)(int, _DWORD); // r3
  int v9; // r0
  int *v10; // r3
  int v11; // r2
  int v12; // r3
  int v13; // r4
  int v14; // r0
  int v15; // r0
  int (__fastcall *v16)(int, bool); // r3
  int v17; // r4
  int *v18; // r3
  int v19; // r3
  _BOOL4 v20; // r2
  int v21; // r3
  int v22; // r3
  int (__fastcall *v23)(int, int); // r2
  int v24; // r6
  int v25; // r1
  int v26; // r0
  int *v27; // r3
  int v28; // r2
  int v29; // r3
  int v30; // r3
  int v31; // r0
  int v32; // r3
  int v33; // r2
  int (*v34)(void); // r7
  int v35; // r6
  int v36; // r0
  _DWORD *v37; // lr
  int v38; // r4
  int v39; // r0
  int v40; // r1
  int v41; // r4
  int v42; // r0
  int v43; // r1
  _DWORD *v44; // r3
  int v45; // r3
  int v46; // r2
  int v47; // r3
  int v48; // r2
  int v49; // r2
  int v50; // r3
  int *v51; // r3
  int v52; // r3
  _BOOL4 v53; // r2
  int v54; // r4
  int v55; // r1
  int v56; // r2
  int v57; // r0
  int v58; // r7
  int (__fastcall *v59)(int, int, _DWORD); // r3
  int v60; // r4
  int v61; // r3
  int *v62; // r3
  int v63; // r3
  _BOOL4 v64; // r2
  int v65; // r4
  int v66; // r0
  int v67; // r0
  int v68; // r3
  __int64 v69; // r0
  int v70; // r2
  int *v71; // r4
  int v72; // r3
  int v73; // r3
  int v74; // r3
  int v75; // r2
  int v76; // r3
  int v77; // r2
  size_t v79; // r2
  int v80; // r3
  int *v81; // r3
  int v82; // r2
  int v83; // r4
  int v84; // r7
  bool v85; // cc
  int v86; // r1
  unsigned __int8 *v87; // r0
  unsigned int v88; // r1
  int v89; // lr
  int v90; // r4
  int v91; // r4
  int v92; // r0
  int v93; // r2
  int v94; // r4
  bool v95; // r0
  int v96; // r2
  int v97; // r3
  int (__fastcall *v98)(int, int, int *, int, int *, int, int); // r7
  int v99; // r3
  int v100; // r1
  int v101; // r0
  _DWORD *v102; // r3
  int v103; // r7
  int v104; // r0
  int v105; // r2
  int v106; // r7
  int v107; // r3
  int v108; // r0
  int v109; // r1
  int v110; // r2
  __int64 v111; // r0
  int v112; // r2
  int v113; // r8
  int v114; // r1
  int v115; // r3
  int v116; // r0
  int v117; // r7
  int v118; // r8
  int v119; // r2
  int v120; // t1
  int v121; // r2
  int v122; // t1
  int v123; // [sp+Ch] [bp-1Ch] BYREF
  int v124; // [sp+10h] [bp-18h] BYREF
  int v125; // [sp+14h] [bp-14h] BYREF
  int v126[2]; // [sp+18h] [bp-10h] BYREF
  int v127; // [sp+20h] [bp-8h] BYREF
  unsigned int v128; // [sp+24h] [bp-4h]

  if ( a2 == 3 )
  {
    v33 = *(_DWORD *)(a1 + 1232);
    v123 = 0;
    v34 = *(int (**)(void))(v33 + 296);
    v124 = 0;
    v125 = 0;
    v35 = *(_DWORD *)(a1 + 1480);
    if ( v34 )
    {
      v36 = v34();
      if ( v36 == -1 )
      {
        *(_DWORD *)(a1 + 20) = 7;
        return 3;
      }
      if ( v36 != 1 )
      {
        sub_95494((_DWORD *)a1, 80, 521, 234, (int)"ssl/statem/statem_srvr.c", 1641);
        goto LABEL_62;
      }
    }
    v37 = *(_DWORD **)(a1 + 124);
    v38 = *(_DWORD *)(v35 + 12);
    v39 = *(_DWORD *)(v35 + 16);
    v40 = *(_DWORD *)(v35 + 20);
    v37[43] = *(_DWORD *)(v35 + 8);
    v37[44] = v38;
    v37[45] = v39;
    v37[46] = v40;
    v41 = *(_DWORD *)(v35 + 28);
    v42 = *(_DWORD *)(v35 + 32);
    v43 = *(_DWORD *)(v35 + 36);
    v37[47] = *(_DWORD *)(v35 + 24);
    v37[48] = v41;
    v37[49] = v42;
    v37[50] = v43;
    if ( *(_DWORD *)v35 )
    {
      v50 = *(_DWORD *)(v35 + 4);
      if ( v50 == 2 || (*(_DWORD *)(v35 + 4) & 0xFF00) != 0x300 )
      {
        sub_95494((_DWORD *)a1, 70, 521, 252, (int)"ssl/statem/statem_srvr.c", 1661);
        goto LABEL_62;
      }
      *(_DWORD *)(a1 + 1284) = v50;
    }
    v44 = *(_DWORD **)(a1 + 4);
    if ( (*(_DWORD *)(v44[25] + 48) & 8) != 0 )
    {
      if ( *v44 != 0x1FFFF )
      {
        v45 = *(_DWORD *)(v35 + 4);
        v46 = *(_DWORD *)a1;
        if ( v45 == 256 )
          v45 = 65280;
        if ( v46 == 256 )
          v46 = 65280;
        if ( v46 < v45 )
        {
          v47 = 396;
          goto LABEL_72;
        }
      }
    }
    else
    {
      v47 = sub_9CBAC((int *)a1, v35, &v125);
      if ( v47 )
      {
LABEL_72:
        v48 = *(_DWORD *)(a1 + 124);
        if ( !*(_DWORD *)(v48 + 384) || !*(_DWORD *)(v48 + 516) )
        {
          v49 = *(_DWORD *)(v35 + 4);
          *(_DWORD *)(a1 + 1284) = v49;
          *(_DWORD *)a1 = v49;
        }
        sub_95494((_DWORD *)a1, 70, 521, v47, (int)"ssl/statem/statem_srvr.c", 1686);
        goto LABEL_62;
      }
      v51 = *(int **)(a1 + 4);
      if ( (*(_DWORD *)(v51[25] + 48) & 8) == 0 )
      {
        v52 = *v51;
        v53 = v52 != 0x10000;
        if ( v52 < 772 )
          v53 = 0;
        if ( !v53 )
          goto LABEL_93;
        if ( sub_7D3D0(a1 + 1616) )
        {
          sub_95494((_DWORD *)a1, 10, 521, 182, (int)"ssl/statem/statem_srvr.c", 1694);
          goto LABEL_62;
        }
        if ( (*(_DWORD *)(*(_DWORD *)(*(_DWORD *)(a1 + 4) + 100) + 48) & 8) == 0 )
        {
LABEL_93:
          v54 = 0;
          *(_DWORD *)(a1 + 140) = 0;
          if ( !sub_8C888(a1, (_DWORD *)(v35 + 336), *(_DWORD *)v35)
            || !sub_8CA50(a1, (const void **)(v35 + 336), &v123, &v124, *(_DWORD *)v35, 1) )
          {
            goto LABEL_62;
          }
          v57 = v124;
          *(_DWORD *)(*(_DWORD *)(a1 + 124) + 824) = 0;
          if ( v57 )
          {
            while ( v54 < sub_10C010(v57, v55, v56) )
            {
              v58 = sub_10C01C(v124, v54);
              if ( sub_871B8(v58) == 50331903 )
              {
                if ( *(_DWORD *)(a1 + 1516) )
                {
                  sub_95494((_DWORD *)a1, 40, 521, 345, (int)"ssl/statem/statem_srvr.c", 1752);
                  goto LABEL_62;
                }
                *(_DWORD *)(*(_DWORD *)(a1 + 124) + 824) = 1;
              }
              else if ( sub_871B8(v58) == 50353664 && !sub_9CA0C(a1) )
              {
                sub_95494((_DWORD *)a1, 86, 521, 373, (int)"ssl/statem/statem_srvr.c", 1767);
                goto LABEL_62;
              }
              v57 = v124;
              ++v54;
            }
          }
          v62 = *(int **)(a1 + 4);
          if ( (*(_DWORD *)(v62[25] + 48) & 8) == 0 )
          {
            v63 = *v62;
            v64 = v63 >= 772;
            if ( v63 == 0x10000 )
              v64 = 0;
            if ( v64 )
            {
              v65 = v123;
              v66 = sub_89910(a1);
              v67 = sub_82638((int *)a1, v65, v66);
              if ( !v67 )
              {
                sub_95494((_DWORD *)a1, 40, 521, 193, (int)"ssl/statem/statem_srvr.c", 1781);
                goto LABEL_62;
              }
              v68 = *(_DWORD *)(a1 + 124);
              if ( *(_DWORD *)(a1 + 1100) == 1 )
              {
                v96 = *(_DWORD *)(v68 + 528);
                if ( !v96 || *(_DWORD *)(v96 + 12) != *(_DWORD *)(v67 + 12) )
                {
                  sub_95494((_DWORD *)a1, 47, 521, 186, (int)"ssl/statem/statem_srvr.c", 1793);
                  goto LABEL_62;
                }
              }
              *(_DWORD *)(v68 + 528) = v67;
            }
          }
          if ( !sub_8F5C4((_DWORD *)a1, 0xDu, 128, *(_DWORD *)(v35 + 616), 0, 0) )
          {
LABEL_62:
            sub_10BDB4(v123);
            sub_10BDB4(v124);
            CRYPTO_free(*(_DWORD *)(v35 + 616), "ssl/statem/statem_srvr.c", 2105);
            CRYPTO_free(*(_DWORD *)(a1 + 1480), "ssl/statem/statem_srvr.c", 2106);
            *(_DWORD *)(a1 + 1480) = 0;
            return 0;
          }
          if ( !*(_DWORD *)v35 && (!*(_DWORD *)(a1 + 32) || (*(_DWORD *)(a1 + 1260) & 0x10000) == 0) )
          {
            LODWORD(v69) = sub_8DF0C(a1, v35);
            if ( (_DWORD)v69 == 1 )
            {
              v71 = *(int **)(a1 + 4);
              *(_DWORD *)(a1 + 140) = 1;
              if ( (*(_DWORD *)(v71[25] + 48) & 8) != 0 )
                goto LABEL_164;
LABEL_130:
              v72 = *v71;
              if ( *v71 < 772 || v72 == 0x10000 )
              {
LABEL_134:
                if ( v72 != 0x10000 && v72 >= 772 )
                {
LABEL_136:
                  v74 = *(_DWORD *)(v35 + 344);
                  if ( !v74 )
                  {
LABEL_141:
                    sub_95494((_DWORD *)a1, 50, 521, 187, (int)"ssl/statem/statem_srvr.c", 1896);
                    goto LABEL_62;
                  }
                  if ( *(_BYTE *)(v35 + 348) )
                  {
                    v75 = v74 + 347;
                    v76 = v35 + 348;
                    v77 = v75 + v35;
                    while ( v76 != v77 )
                    {
                      if ( !*(unsigned __int8 *)++v76 )
                        goto LABEL_150;
                    }
                    goto LABEL_141;
                  }
LABEL_150:
                  if ( (*(_DWORD *)(a1 + 1260) & 0x40) != 0 )
                  {
                    v87 = *(unsigned __int8 **)(v35 + 604);
                    v88 = *(_DWORD *)(v35 + 608);
                    v127 = (int)v87;
                    v128 = v88;
                    if ( v88 > 1 )
                    {
                      v128 = v88 - 2;
                      v127 = (int)(v87 + 2);
                      if ( v88 - 2 > 1 )
                      {
                        v89 = v87[2];
                        v90 = v87[3];
                        v128 = v88 - 4;
                        v127 = (int)(v87 + 4);
                        v91 = v90 | (v89 << 8);
                        v92 = sub_9F1B4((unsigned __int8 **)&v127, v126);
                        if ( !v91 )
                        {
                          if ( v92 )
                          {
                            if ( sub_8AA9C(a1) >> 8 == 3 && sub_8AA9C(a1) > 770 )
                              v93 = 34;
                            else
                              v93 = 18;
                            v94 = *(_DWORD *)(a1 + 124);
                            v95 = v128 == v93 && sub_BC33C(v127, &unk_1A9BDC, v93) == 0;
                            *(_BYTE *)(v94 + 852) = v95;
                          }
                        }
                      }
                    }
                  }
                  if ( !sub_8F658((_DWORD *)a1, 128, *(_DWORD *)(v35 + 616), 0, 0, 1) )
                    goto LABEL_62;
                  if ( sub_82D4C(a1, 1, (_BYTE *)(*(_DWORD *)(a1 + 124) + 140), 0x20u, v125) <= 0 )
                  {
                    v97 = 1924;
                    goto LABEL_185;
                  }
                  if ( !*(_DWORD *)(a1 + 140) )
                  {
                    v81 = *(int **)(a1 + 4);
                    if ( *(int *)a1 <= 768 || (*(_DWORD *)(v81[25] + 48) & 8) != 0 || *v81 != 0x10000 && *v81 >= 772 )
                      goto LABEL_158;
                    v98 = *(int (__fastcall **)(int, int, int *, int, int *, int, int))(a1 + 1420);
                    if ( !v98 )
                      goto LABEL_158;
                    v99 = *(_DWORD *)(a1 + 1424);
                    v100 = *(_DWORD *)(a1 + 1140);
                    v127 = 256;
                    v126[0] = 0;
                    if ( v98(a1, v100 + 72, &v127, v123, v126, v99, 80) && v127 > 0 )
                    {
                      v101 = v126[0];
                      v102 = *(_DWORD **)(a1 + 1140);
                      v103 = v123;
                      v123 = 0;
                      v102[1] = v127;
                      *(_DWORD *)(a1 + 184) = v103;
                      *(_DWORD *)(a1 + 140) = 1;
                      v102[105] = 0;
                      if ( !v101 )
                      {
                        v108 = sub_89910(a1);
                        v101 = sub_82638((int *)a1, v103, v108);
                        v126[0] = v101;
                        if ( !v101 )
                        {
                          sub_95494((_DWORD *)a1, 40, 521, 193, (int)"ssl/statem/statem_srvr.c", 1961);
                          goto LABEL_62;
                        }
                        v102 = *(_DWORD **)(a1 + 1140);
                      }
                      v102[110] = v101;
                      sub_10BDB4(*(_DWORD *)(a1 + 188));
                      *(_DWORD *)(a1 + 188) = sub_10BDE0(*(_DWORD *)(a1 + 184));
                      sub_10BDB4(*(_DWORD *)(a1 + 192));
                      v104 = sub_10BDE0(*(_DWORD *)(a1 + 184));
                      v81 = *(int **)(a1 + 4);
                      *(_DWORD *)(a1 + 192) = v104;
LABEL_158:
                      v82 = *(_DWORD *)(v81[25] + 48);
                      *(_DWORD *)(*(_DWORD *)(a1 + 124) + 576) = 0;
                      if ( (v82 & 8) == 0 && *v81 != 0x10000 && *v81 >= 772 )
                      {
                        if ( *(_DWORD *)(v35 + 344) != 1 )
                        {
                          sub_95494((_DWORD *)a1, 47, 521, 341, (int)"ssl/statem/statem_srvr.c", 1988);
                          goto LABEL_62;
                        }
                        v4 = 0;
                        goto LABEL_6;
                      }
                      v105 = *(_DWORD *)(a1 + 1140);
                      v106 = *(_DWORD *)(v105 + 436);
                      if ( v106 )
                      {
                        if ( sub_9C7D8(a1) )
                        {
                          v113 = 0;
                          v4 = 0;
                          do
                          {
                            v85 = v113 < sub_10C010(*(_DWORD *)(*(_DWORD *)(a1 + 1232) + 156), HIDWORD(v111), v112);
                            v114 = v113++;
                            if ( !v85 )
                            {
                              v115 = *(_DWORD *)(a1 + 124);
                              goto LABEL_222;
                            }
                            v111 = sub_10C01C(*(_DWORD *)(*(_DWORD *)(a1 + 1232) + 156), v114);
                            v4 = (int *)v111;
                          }
                          while ( v106 != *(_DWORD *)v111 );
                          v115 = *(_DWORD *)(a1 + 124);
                          *(_DWORD *)(v115 + 576) = v111;
LABEL_222:
                          if ( *(_DWORD *)(v115 + 576) )
                          {
                            v121 = v35 + 347;
                            while ( v121 != *(_DWORD *)(v35 + 344) + 347 + v35 )
                            {
                              v122 = *(unsigned __int8 *)++v121;
                              if ( v106 == v122 )
                                goto LABEL_206;
                            }
                            sub_95494((_DWORD *)a1, 47, 521, 342, (int)"ssl/statem/statem_srvr.c", 2027);
                          }
                          else
                          {
                            sub_95494((_DWORD *)a1, 40, 521, 341, (int)"ssl/statem/statem_srvr.c", 2016);
                          }
                        }
                        else
                        {
                          sub_95494((_DWORD *)a1, 40, 521, 340, (int)"ssl/statem/statem_srvr.c", 2002);
                        }
                        goto LABEL_62;
                      }
                      if ( *(_DWORD *)(a1 + 140) )
                      {
                        v4 = *(int **)(v105 + 436);
                      }
                      else
                      {
                        if ( !sub_9C7D8(a1) )
                          goto LABEL_205;
                        v116 = *(_DWORD *)(*(_DWORD *)(a1 + 1232) + 156);
                        if ( !v116 )
                          goto LABEL_205;
                        v117 = 0;
                        v118 = sub_10C010(v116, v109, v110);
LABEL_216:
                        if ( v118 > v117 )
                        {
                          v4 = (int *)sub_10C01C(*(_DWORD *)(*(_DWORD *)(a1 + 1232) + 156), v117);
                          v119 = v35 + 347;
                          do
                          {
                            if ( v119 == *(_DWORD *)(v35 + 344) + 347 + v35 )
                            {
                              ++v117;
                              goto LABEL_216;
                            }
                            v120 = *(unsigned __int8 *)++v119;
                          }
                          while ( *v4 != v120 );
                          *(_DWORD *)(*(_DWORD *)(a1 + 124) + 576) = v4;
                        }
                        else
                        {
LABEL_205:
                          v4 = 0;
                        }
LABEL_206:
                        if ( !*(_DWORD *)(a1 + 140) )
                        {
LABEL_6:
                          sub_10BDB4(*(_DWORD *)(a1 + 184));
                          v5 = v123;
                          *(_DWORD *)(a1 + 184) = v123;
                          if ( v5 )
                          {
                            v6 = *(_DWORD *)(a1 + 140);
                            v123 = 0;
                            if ( !v6 )
                            {
                              if ( v4 )
                                v6 = *v4;
                              *(_DWORD *)(*(_DWORD *)(a1 + 1140) + 436) = v6;
                              if ( !sub_A42F0(a1) )
                                goto LABEL_62;
                            }
LABEL_11:
                            sub_10BDB4(v123);
                            sub_10BDB4(v124);
                            CRYPTO_free(*(_DWORD *)(v35 + 616), "ssl/statem/statem_srvr.c", 2098);
                            CRYPTO_free(*(_DWORD *)(a1 + 1480), "ssl/statem/statem_srvr.c", 2099);
                            *(_DWORD *)(a1 + 1480) = 0;
LABEL_12:
                            if ( *(_DWORD *)(a1 + 140) )
                            {
                              v18 = *(int **)(a1 + 4);
                              if ( (*(_DWORD *)(v18[25] + 48) & 8) != 0 )
                                goto LABEL_36;
                              v19 = *v18;
                              v20 = v19 != 0x10000;
                              if ( v19 < 772 )
                                v20 = 0;
                              if ( !v20 )
                              {
LABEL_36:
                                *(_DWORD *)(*(_DWORD *)(a1 + 124) + 528) = *(_DWORD *)(*(_DWORD *)(a1 + 1140) + 440);
                                goto LABEL_37;
                              }
                              if ( v19 != 0x10000 )
                              {
LABEL_37:
                                v21 = *(_DWORD *)(a1 + 1340);
                                *(_DWORD *)(a1 + 1352) = 0;
                                if ( v21 != -1 )
                                {
                                  v22 = *(_DWORD *)(a1 + 1232);
                                  if ( v22 )
                                  {
                                    v23 = *(int (__fastcall **)(int, int))(v22 + 336);
                                    if ( v23 )
                                    {
                                      v24 = *(_DWORD *)(*(_DWORD *)(a1 + 124) + 612);
                                      if ( v24 )
                                      {
                                        v25 = *(_DWORD *)(v22 + 340);
                                        **(_DWORD **)(a1 + 1028) = v24;
                                        v26 = v23(a1, v25);
                                        if ( v26 )
                                        {
                                          if ( v26 != 3 )
                                          {
                                            sub_95494((_DWORD *)a1, 80, 563, 226, (int)"ssl/statem/statem_srvr.c", 2153);
                                            return 0;
                                          }
                                          *(_DWORD *)(a1 + 1352) = 0;
                                        }
                                        else if ( *(_DWORD *)(a1 + 1364) )
                                        {
                                          *(_DWORD *)(a1 + 1352) = 1;
                                        }
                                      }
                                    }
                                  }
                                }
                                v27 = *(int **)(a1 + 4);
                                if ( (*(_DWORD *)(v27[25] + 48) & 8) == 0 )
                                {
                                  v28 = *v27;
                                  v29 = *v27 < 772;
                                  if ( v28 == 0x10000 )
                                    v29 |= 1u;
                                  if ( !v29 )
                                    goto LABEL_49;
                                }
                                if ( sub_A0584((_DWORD *)a1) )
                                  goto LABEL_49;
                                return 0;
                              }
                            }
                            else
                            {
                              v7 = *(_DWORD *)(a1 + 1028);
                              v8 = *(int (__fastcall **)(int, _DWORD))(v7 + 224);
                              if ( v8 )
                              {
                                v9 = v8(a1, *(_DWORD *)(v7 + 228));
                                if ( !v9 )
                                {
                                  sub_95494((_DWORD *)a1, 80, 378, 377, (int)"ssl/statem/statem_srvr.c", 2267);
                                  return 0;
                                }
                                if ( v9 < 0 )
                                {
                                  *(_DWORD *)(a1 + 20) = 4;
                                  return 4;
                                }
                                *(_DWORD *)(a1 + 20) = 1;
                              }
                              v10 = *(int **)(a1 + 4);
                              if ( (*(_DWORD *)(v10[25] + 48) & 8) == 0 )
                              {
                                v11 = *v10;
                                v12 = *v10 < 772;
                                if ( v11 == 0x10000 )
                                  v12 |= 1u;
                                if ( !v12 )
                                  goto LABEL_24;
                              }
                            }
                            v13 = *(_DWORD *)(a1 + 184);
                            v14 = sub_89910(a1);
                            v15 = sub_82638((int *)a1, v13, v14);
                            if ( !v15 )
                            {
                              sub_95494((_DWORD *)a1, 40, 378, 193, (int)"ssl/statem/statem_srvr.c", 2285);
                              return 0;
                            }
                            *(_DWORD *)(*(_DWORD *)(a1 + 124) + 528) = v15;
LABEL_24:
                            if ( !*(_DWORD *)(a1 + 140) )
                            {
                              if ( !sub_A4EE8(a1, 1) )
                                return 0;
                              v16 = *(int (__fastcall **)(int, bool))(a1 + 1612);
                              if ( v16 )
                              {
                                v17 = *(_DWORD *)(a1 + 1140);
                                *(_DWORD *)(v17 + 408) = v16(
                                                           a1,
                                                           (*(_DWORD *)(*(_DWORD *)(*(_DWORD *)(a1 + 124) + 528) + 16)
                                                          & 6) != 0);
                              }
                              if ( *(_DWORD *)(*(_DWORD *)(a1 + 1140) + 408) )
                                *(_DWORD *)(a1 + 1372) = 0;
                            }
                            goto LABEL_37;
                          }
                          v97 = 2078;
LABEL_185:
                          sub_95494((_DWORD *)a1, 80, 521, 68, (int)"ssl/statem/statem_srvr.c", v97);
                          goto LABEL_62;
                        }
                        v81 = *(int **)(a1 + 4);
                      }
                      if ( (*(_DWORD *)(v81[25] + 48) & 8) != 0 )
                        goto LABEL_11;
                      v107 = *v81;
                      if ( v107 < 772 || v107 == 0x10000 )
                        goto LABEL_11;
                      goto LABEL_6;
                    }
                  }
                  v81 = *(int **)(a1 + 4);
                  goto LABEL_158;
                }
                goto LABEL_163;
              }
              memcpy(
                (void *)(a1 + 1160),
                (const void *)(*(_DWORD *)(a1 + 1480) + 44),
                *(_DWORD *)(*(_DWORD *)(a1 + 1480) + 40));
              v73 = *(_DWORD *)(v71[25] + 48);
              v70 = *(_DWORD *)(*(_DWORD *)(a1 + 1480) + 40);
              *(_DWORD *)(a1 + 1192) = v70;
              if ( (v73 & 8) == 0 )
              {
                v72 = *v71;
                goto LABEL_134;
              }
LABEL_163:
              if ( !*(_DWORD *)(a1 + 140) )
                goto LABEL_136;
LABEL_164:
              v83 = 0;
              v84 = *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(a1 + 1140) + 440) + 12);
              while ( 1 )
              {
                v85 = v83 < sub_10C010(v123, HIDWORD(v69), v70);
                v86 = v83++;
                if ( !v85 )
                  break;
                v69 = sub_10C01C(v123, v86);
                if ( v84 == *(_DWORD *)(v69 + 12) )
                  goto LABEL_136;
              }
              sub_95494((_DWORD *)a1, 47, 521, 215, (int)"ssl/statem/statem_srvr.c", 1882);
              goto LABEL_62;
            }
            if ( (_DWORD)v69 == -1 )
              goto LABEL_62;
          }
          if ( !sub_8D964(a1, 1) )
            goto LABEL_62;
          v71 = *(int **)(a1 + 4);
          if ( (*(_DWORD *)(v71[25] + 48) & 8) != 0 )
            goto LABEL_163;
          goto LABEL_130;
        }
      }
    }
    if ( (sub_8B860(a1) & 0x2000) == 0 )
    {
LABEL_110:
      if ( **(_DWORD **)(a1 + 4) == 0x1FFFF )
      {
        v61 = sub_9CBAC((int *)a1, v35, &v125);
        if ( v61 )
        {
          *(_DWORD *)a1 = *(_DWORD *)(a1 + 1284);
          sub_95494((_DWORD *)a1, 70, 521, v61, (int)"ssl/statem/statem_srvr.c", 1726);
          goto LABEL_62;
        }
      }
      goto LABEL_93;
    }
    v59 = *(int (__fastcall **)(int, int, _DWORD))(*(_DWORD *)(a1 + 1232) + 128);
    if ( v59 )
    {
      if ( v59(a1, v35 + 80, *(_DWORD *)(v35 + 76)) )
      {
        v60 = *(_DWORD *)(a1 + 128);
LABEL_109:
        *(_DWORD *)(v60 + 260) = 1;
        goto LABEL_110;
      }
      v80 = 1706;
    }
    else
    {
      v60 = *(_DWORD *)(a1 + 128);
      v79 = *(_DWORD *)(v60 + 256);
      if ( v79 == *(_DWORD *)(v35 + 76) && !memcmp((const void *)(v35 + 80), *(const void **)(a1 + 128), v79) )
        goto LABEL_109;
      v80 = 1716;
    }
    sub_95494((_DWORD *)a1, 40, 521, 308, (int)"ssl/statem/statem_srvr.c", v80);
    goto LABEL_62;
  }
  if ( a2 == 4 )
    goto LABEL_12;
  if ( a2 != 5 )
    return 1;
LABEL_49:
  v30 = *(_DWORD *)(a1 + 124);
  v127 = 112;
  if ( (*(_DWORD *)(*(_DWORD *)(v30 + 528) + 16) & 0x20) == 0 || !*(_DWORD *)(a1 + 1552) )
    return 1;
  if ( *(_DWORD *)(a1 + 1564) )
  {
    v31 = sub_A67E4(a1, &v127);
    if ( v31 < 0 )
    {
      *(_DWORD *)(a1 + 20) = 4;
      return 5;
    }
    else
    {
      if ( v31 != 2 )
        return 1;
      if ( v127 == 115 )
        v32 = 223;
      else
        v32 = 226;
      sub_95494((_DWORD *)a1, v127, 606, v32, (int)"ssl/statem/statem_srvr.c", 1276);
      return 0;
    }
  }
  else
  {
    sub_95494((_DWORD *)a1, 115, 606, 223, (int)"ssl/statem/statem_srvr.c", 1266);
    return 0;
  }
}

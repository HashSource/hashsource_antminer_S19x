int __fastcall sub_1119BC(int a1)
{
  int *v2; // r11
  int v3; // r5
  int v4; // r6
  int v5; // r0
  unsigned int v6; // r3
  int result; // r0
  int *v8; // r0
  int v9; // r5
  int v10; // r3
  int v11; // r6
  unsigned int v12; // r6
  int *v13; // r0
  int *v14; // r10
  _DWORD *v15; // r7
  int v16; // r8
  int v17; // r0
  unsigned int v18; // r1
  int v19; // r3
  int v20; // r2
  bool v21; // cc
  int v22; // r9
  int v23; // r8
  int v24; // r0
  int v25; // r6
  int v26; // r2
  signed int v27; // r10
  _BOOL4 v28; // r3
  int v29; // r0
  signed int v30; // r7
  signed int v31; // r6
  int v32; // r0
  int *v33; // r2
  int v34; // r0
  int v35; // r0
  int v37; // r3
  int v38; // r1
  int v39; // r1
  int v40; // r2
  int v41; // r2
  int v42; // r0
  int v43; // r5
  _DWORD *v44; // r0
  int v45; // r0
  int v46; // r3
  int v47; // r0
  int v48; // r9
  int v49; // r10
  int v50; // r8
  int v51; // r6
  int v52; // r7
  signed int v53; // r5
  int v54; // r2
  _DWORD *v55; // r11
  unsigned int v56; // r0
  int v57; // r0
  int v58; // r0
  int v59; // r0
  int v60; // r2
  int v61; // r2
  int v62; // r0
  int v63; // r8
  signed int v64; // r9
  int v65; // r7
  signed int v66; // r5
  int v67; // r3
  int v68; // r6
  int v69; // r0
  int v70; // r2
  int v71; // r6
  int v72; // r0
  int v73; // r0
  int v74; // r2
  bool v75; // zf
  int v76; // r0
  int v77; // r0
  int v78; // r0
  int v79; // r2
  int v80; // r0
  int v81; // r6
  int v82; // r0
  int v83; // r3
  unsigned int v84; // r2
  int v85; // r6
  _BOOL4 v86; // r2
  _DWORD *v87; // r0
  int v88; // r0
  int v89; // r3
  bool v90; // cc
  int v91; // r3
  int *i; // r0
  int *v93; // r0
  int v94; // r1
  int v95; // r2
  int v96; // r1
  int v97; // r2
  int v98; // r7
  int v99; // r1
  int v100; // r2
  signed int v101; // r3
  int v102; // r1
  int v103; // r2
  int v105; // r1
  int v106; // r2
  int v107; // r0
  unsigned int v108; // r2
  _BOOL4 v109; // r5
  int v110; // r5
  int (__fastcall *v111)(int); // r3
  signed int v113; // r6
  int v114; // r0
  int v115; // r9
  int v116; // r3
  signed int v117; // r7
  int v118; // r0
  int v119; // r8
  int v120; // r0
  int v121; // r3
  int v122; // r5
  _DWORD *v123; // r11
  unsigned int v124; // r1
  int v126; // r3
  int v127; // r2
  int v128; // r0
  int v129; // r5
  int v130; // r8
  int v131; // r0
  int v132; // r7
  int v133; // r11
  int v134; // r0
  int v135; // r3
  int *v136; // r6
  unsigned int v137; // r8
  int v138; // r7
  unsigned int v139; // r5
  _DWORD *v140; // r0
  _DWORD *v141; // r9
  int v142; // r1
  int v143; // r2
  int v144; // r0
  int j; // r5
  int *v146; // r0
  int v147; // r1
  int v148; // r2
  unsigned int v149; // r1
  _DWORD *v150; // r0
  unsigned int v151; // r1
  _DWORD *v152; // r0
  int v153; // r0
  int v154; // r0
  int v155; // r0
  int v156; // r5
  int v157; // r7
  int v158; // r0
  int *v159; // [sp+Ch] [bp-28h]
  int v160; // [sp+Ch] [bp-28h]
  int v161; // [sp+Ch] [bp-28h]
  int v162; // [sp+Ch] [bp-28h]
  int v163; // [sp+Ch] [bp-28h]
  int v164; // [sp+10h] [bp-24h]
  int *v165; // [sp+10h] [bp-24h]
  signed int v166; // [sp+18h] [bp-1Ch]
  int v167; // [sp+1Ch] [bp-18h]
  int v168; // [sp+20h] [bp-14h]
  int v169; // [sp+24h] [bp-10h]
  int v170[2]; // [sp+2Ch] [bp-8h] BYREF

  v2 = *(int **)(a1 + 128);
  v3 = sub_10C010(*(_DWORD *)(a1 + 80));
  v4 = sub_10C01C(*(_DWORD **)(a1 + 80), v3 - 1);
  v5 = sub_120C28(v4, -1, 0);
  if ( v5 == 1 )
    v6 = *(_DWORD *)(v4 + 128);
  else
    v6 = 0;
  if ( v5 == 1 )
    v6 = (v6 >> 13) & 1;
  v164 = v6;
  if ( v3 != 1 || *(_DWORD *)(a1 + 76) != 1 )
  {
    sub_D0048(11, 106, 68, (int)"crypto/x509/x509_vfy.c", 2966);
    *(_DWORD *)(a1 + 96) = 1;
    goto LABEL_8;
  }
  v8 = *(int **)(a1 + 8);
  v9 = (int)v8;
  if ( v8 )
    v9 = 1;
  if ( v2 && (v10 = v2[5], (v10 & 3) == 0) && (v10 & 0xC) != 0 )
  {
    v168 = v2[5] & 3;
    v12 = v168;
  }
  else
  {
    if ( !v8 || (v11 = *(_DWORD *)(*(_DWORD *)(a1 + 16) + 12), (v11 & 0x8000) != 0) )
    {
      v9 |= 2u;
      v12 = 0;
    }
    else
    {
      v12 = ((v11 ^ 0x100000u) >> 20) & 1;
    }
    v168 = 1;
    if ( !v2 )
    {
LABEL_73:
      if ( v8 )
      {
        v14 = (int *)sub_10BDE0(v8);
        if ( !v14 )
        {
LABEL_81:
          v41 = 3012;
LABEL_82:
          sub_D0048(11, 106, 65, (int)"crypto/x509/x509_vfy.c", v41);
          *(_DWORD *)(a1 + 96) = 17;
          goto LABEL_8;
        }
      }
      else
      {
        v14 = 0;
      }
      goto LABEL_29;
    }
  }
  if ( sub_10C010(v2[1]) <= 0 || (v13 = (int *)v2[2]) == 0 )
  {
    v8 = *(int **)(a1 + 8);
    goto LABEL_73;
  }
  v14 = (int *)sub_10BDE0(v13);
  if ( !v14 )
  {
    v41 = 3001;
    goto LABEL_82;
  }
  v15 = *(_DWORD **)(a1 + 8);
  if ( v15 )
  {
    v16 = 0;
    do
    {
      v21 = v16 < sub_10C010((int)v15);
      v18 = v16++;
      if ( !v21 )
        goto LABEL_29;
      v17 = sub_10C01C(v15, v18);
    }
    while ( sub_10BD3C(v14, v17) );
    sub_10BDB4((void **)v14);
    goto LABEL_81;
  }
LABEL_29:
  v19 = *(_DWORD *)(a1 + 16);
  v20 = *(_DWORD *)(v19 + 24);
  v21 = v20 < 0x40000000;
  if ( v20 < 0x40000000 )
    v19 = v20 + 1;
  else
    v20 = 0x40000000;
  if ( v21 )
  {
    v166 = v19;
  }
  else
  {
    v166 = v20;
    v20 = 0x3FFFFFFF;
  }
  if ( !v21 )
    *(_DWORD *)(v19 + 24) = v20;
  if ( !v9 )
  {
    sub_10BDB4((void **)v14);
    v27 = sub_10C010(*(_DWORD *)(a1 + 80));
    if ( v27 > v166 )
      goto LABEL_87;
    if ( !v2 )
      goto LABEL_86;
    goto LABEL_85;
  }
  v22 = 3;
  v23 = 0;
  v169 = v12 ^ 1;
  while ( 1 )
  {
    while ( 1 )
    {
      while ( 1 )
      {
        while ( 1 )
        {
          v170[0] = 0;
          if ( (v9 & 2) != 0 )
            break;
LABEL_40:
          if ( (v9 & 1) != 0 )
            goto LABEL_41;
        }
        v29 = sub_10C010(*(_DWORD *)(a1 + 80));
        v30 = v29;
        if ( (v9 & 4) != 0 )
          v31 = v23;
        else
          v31 = v29;
        v32 = sub_10C01C(*(_DWORD **)(a1 + 80), v31 - 1);
        v167 = v32;
        if ( v30 > v166 )
          goto LABEL_56;
        v33 = *(int **)(a1 + 80);
        *(_DWORD *)(a1 + 80) = 0;
        v159 = v33;
        v34 = (*(int (__fastcall **)(int *, int, int))(a1 + 32))(v170, a1, v32);
        *(_DWORD *)(a1 + 80) = v159;
        if ( v34 < 0 )
        {
          v22 = 2;
          *(_DWORD *)(a1 + 96) = 70;
          goto LABEL_44;
        }
        if ( !v34 )
          goto LABEL_56;
        if ( (v9 & 4) != 0 )
        {
          v90 = v30 <= v31;
          if ( v30 > v31 )
            v90 = v31 <= 0;
          v91 = !v90;
          if ( ((v164 ^ 1) & v91) == 0 )
          {
            v22 = 2;
            sub_D0048(11, 106, 68, (int)"crypto/x509/x509_vfy.c", 3097);
            X509_free(v170[0], v102, v103);
            *(_DWORD *)(a1 + 96) = 1;
            goto LABEL_44;
          }
          v9 &= ~4u;
          if ( v30 <= v31 )
          {
            v31 = v30;
          }
          else
          {
            for ( i = v159; ; i = *(int **)(a1 + 80) )
            {
              v93 = sub_10BD80(i);
              --v30;
              X509_free(v93, v94, v95);
              if ( v31 == v30 )
                break;
            }
          }
          *(_DWORD *)(a1 + 76) = v31;
          if ( v2 )
          {
            if ( sub_10C010(v2[1]) > 0 )
            {
              v97 = v2[6];
              if ( v97 >= *(_DWORD *)(a1 + 76) )
              {
                v107 = v2[4];
                v2[6] = -1;
                X509_free(v107, v96, v97);
                v2[4] = 0;
              }
            }
            if ( sub_10C010(v2[1]) > 0 && v2[7] >= *(_DWORD *)(a1 + 76) )
              v2[7] = -1;
          }
          goto LABEL_216;
        }
        if ( v164 )
          break;
        v31 = v30;
LABEL_216:
        v98 = v170[0];
        if ( !sub_10BD3C(*(int **)(a1 + 80), v170[0]) )
        {
          v164 = 0;
          v22 = 2;
          X509_free(v170[0], v99, v100);
          sub_D0048(11, 106, 65, (int)"crypto/x509/x509_vfy.c", 3127);
          *(_DWORD *)(a1 + 96) = 17;
          goto LABEL_44;
        }
        if ( sub_120C28(v98, -1, 0) == 1 )
        {
          v108 = *(_DWORD *)(v98 + 128);
          v30 = v31;
          v101 = *(_DWORD *)(a1 + 76);
          v164 = (v108 >> 13) & 1;
        }
        else
        {
          v30 = v31;
          v101 = *(_DWORD *)(a1 + 76);
          v164 = 0;
        }
LABEL_222:
        if ( v101 > v30 )
        {
          v26 = 3167;
          goto LABEL_43;
        }
        v22 = sub_110A84(a1, v30);
        if ( (unsigned int)(v22 - 1) <= 1 )
          goto LABEL_44;
        v9 &= ~1u;
        if ( v164 )
        {
          v164 = 1;
          goto LABEL_56;
        }
LABEL_59:
        if ( !v9 )
          goto LABEL_44;
      }
      v101 = *(_DWORD *)(a1 + 76);
      if ( v30 != v101 )
      {
        v164 = 1;
        goto LABEL_222;
      }
      if ( !sub_10E66C(v167, v170[0]) )
      {
        --v30;
        X509_free(v167, v105, v106);
        *(_DWORD *)(a1 + 76) = v30;
        v164 = 1;
        sub_10C040(*(_DWORD **)(a1 + 80), v30, v170[0]);
        v101 = *(_DWORD *)(a1 + 76);
        goto LABEL_222;
      }
      v164 = 1;
      X509_free(v170[0], v105, v106);
LABEL_56:
      if ( (v9 & 1) == 0 )
      {
        if ( (v9 & 4) != 0 )
        {
          if ( --v23 <= 0 )
            goto LABEL_44;
          goto LABEL_59;
        }
        if ( v169 )
          goto LABEL_44;
        v37 = *(_DWORD *)(a1 + 76);
        if ( v37 <= 1 )
          goto LABEL_44;
        v9 |= 4u;
        v23 = v37 - 1;
        v164 = 0;
        goto LABEL_40;
      }
LABEL_41:
      v24 = sub_10C010(*(_DWORD *)(a1 + 80));
      v25 = v24;
      if ( v24 != *(_DWORD *)(a1 + 76) )
      {
        v26 = 3212;
LABEL_43:
        v22 = 2;
        sub_D0048(11, 106, 68, (int)"crypto/x509/x509_vfy.c", v26);
        *(_DWORD *)(a1 + 96) = 1;
        goto LABEL_44;
      }
      v35 = sub_10C01C(*(_DWORD **)(a1 + 80), v24 - 1);
      if ( v25 <= v166 && ((unsigned __int8)v164 ^ 1) & 1 )
      {
        v38 = sub_110F34(a1, v14, v35);
        v170[0] = v38;
        if ( v38 )
          break;
      }
      v9 &= ~1u;
      if ( !v168 )
        goto LABEL_59;
      v9 |= 2u;
    }
    sub_10BB98(v14, v38);
    if ( !sub_10FD18(v170[0]) )
    {
      v26 = 3236;
      goto LABEL_43;
    }
    if ( !sub_10BD3C(*(int **)(a1 + 80), v170[0]) )
    {
      v22 = 2;
      X509_free(v170[0], v39, v40);
      sub_D0048(11, 106, 65, (int)"crypto/x509/x509_vfy.c", 3245);
      *(_DWORD *)(a1 + 96) = 17;
      goto LABEL_44;
    }
    v81 = v170[0];
    ++*(_DWORD *)(a1 + 76);
    v82 = sub_120C28(v81, -1, 0);
    v83 = *(_DWORD *)(a1 + 128);
    if ( v82 == 1 )
      v84 = *(_DWORD *)(v81 + 128);
    else
      v84 = 0;
    if ( v82 == 1 )
      v84 = (v84 >> 13) & 1;
    v164 = v84;
    if ( v83 )
    {
      v85 = *(_DWORD *)(a1 + 76);
      v86 = (*(_DWORD *)(v83 + 20) & 5) == 0;
      if ( v85 == 1 )
        v86 = 1;
      if ( !v86 )
      {
        v127 = sub_10C01C(*(_DWORD **)(a1 + 80), v85 - 1);
        if ( v127 )
          break;
      }
    }
LABEL_192:
    v22 = 3;
  }
  v128 = sub_110700(*(_DWORD *)(a1 + 76), *(int **)(a1 + 128), v127, v85 - 1);
  if ( v128 >= 0 )
  {
    if ( v128 )
    {
      v22 = 1;
      *(_DWORD *)(a1 + 76) = v85 - 2;
      goto LABEL_44;
    }
    goto LABEL_192;
  }
  v22 = 2;
LABEL_44:
  sub_10BDB4((void **)v14);
  v27 = sub_10C010(*(_DWORD *)(a1 + 80));
  if ( v27 > v166 )
  {
LABEL_49:
    if ( v22 == 1 )
      goto LABEL_96;
    if ( v22 != 2 )
      goto LABEL_87;
    goto LABEL_8;
  }
  v28 = v22 == 3;
  if ( !v2 )
    v28 = 0;
  if ( v28 )
  {
LABEL_85:
    if ( (v2[5] & 4) == 0 )
      goto LABEL_86;
    v136 = *(int **)(a1 + 128);
    v137 = *(_DWORD *)(a1 + 76) - 1;
    v162 = sub_10C01C(*(_DWORD **)(a1 + 80), v137);
    v138 = sub_10C010(v136[1]);
    if ( v138 <= 0 )
      goto LABEL_86;
    v139 = 0;
    while ( 1 )
    {
      v140 = (_DWORD *)sub_10C01C((_DWORD *)v136[1], v139);
      v141 = v140;
      ++v139;
      if ( (*v140 & 0xFFFFFF) == 0x102 && sub_1141AC(v162, v140[3]) > 0 )
        break;
      if ( v138 == v139 )
        goto LABEL_86;
    }
    X509_free(v136[4], v142, v143);
    v144 = *(_DWORD *)(a1 + 80);
    v136[4] = 0;
    *(_DWORD *)(a1 + 132) = 1;
    v136[6] = v137;
    v136[3] = (int)v141;
    for ( j = sub_10C010(v144); j > *(_DWORD *)(a1 + 76); --j )
    {
      v146 = sub_10BD80(*(int **)(a1 + 80));
      X509_free(v146, v147, v148);
    }
LABEL_96:
    v47 = sub_10C010(*(_DWORD *)(a1 + 80));
    v48 = v47;
    if ( *(_DWORD *)(a1 + 120) )
    {
      v49 = 6;
      v160 = 0;
    }
    else
    {
      v135 = *(_DWORD *)(a1 + 16);
      v49 = *(_DWORD *)(v135 + 16);
      v160 = (*(_DWORD *)(v135 + 12) >> 6) & 1;
    }
    if ( v47 > 0 )
    {
      v50 = 0;
      v51 = -1;
      v52 = 0;
      v53 = 0;
      while ( 1 )
      {
        v55 = (_DWORD *)sub_10C01C(*(_DWORD **)(a1 + 80), v53);
        if ( (*(_DWORD *)(*(_DWORD *)(a1 + 16) + 12) & 0x10) == 0 && (v55[32] & 0x200) != 0 )
        {
          *(_DWORD *)(a1 + 92) = v53;
          *(_DWORD *)(a1 + 100) = v55;
          *(_DWORD *)(a1 + 96) = 34;
          if ( !(*(int (__fastcall **)(_DWORD, int))(a1 + 28))(0, a1) )
            goto LABEL_8;
        }
        if ( !v160 && (v55[32] & 0x400) != 0 )
        {
          *(_DWORD *)(a1 + 92) = v53;
          *(_DWORD *)(a1 + 100) = v55;
          *(_DWORD *)(a1 + 96) = 40;
          if ( !(*(int (__fastcall **)(_DWORD, int))(a1 + 28))(0, a1) )
            goto LABEL_8;
        }
        v56 = sub_120C64(v55);
        if ( v51 == -1 )
        {
          v74 = *(_DWORD *)(*(_DWORD *)(a1 + 16) + 12) & 0x20;
          if ( !v74 )
            goto LABEL_162;
          if ( v56 > 1 )
            goto LABEL_151;
        }
        else
        {
          if ( v51 )
          {
            if ( !v56 )
              goto LABEL_151;
            if ( v48 <= v53 + 1 && (*(_DWORD *)(*(_DWORD *)(a1 + 16) + 12) & 0x20) == 0 )
              goto LABEL_162;
            if ( v56 != 1 )
            {
LABEL_151:
              *(_DWORD *)(a1 + 92) = v53;
              *(_DWORD *)(a1 + 96) = 24;
              if ( v55 )
                goto LABEL_114;
              goto LABEL_152;
            }
          }
          else if ( v56 )
          {
            *(_DWORD *)(a1 + 96) = 37;
            goto LABEL_113;
          }
          v74 = *(_DWORD *)(*(_DWORD *)(a1 + 16) + 12) & 0x20;
        }
        v75 = v48 == 1;
        if ( v48 != 1 )
          v75 = v74 == 0;
        if ( !v75 )
        {
          v76 = sub_10E89C((int)v55);
          v165 = (int *)v76;
          if ( !v76 )
            goto LABEL_169;
          if ( sub_DA19C(v76) == 408 )
          {
            v77 = sub_DA1F4(v165);
            v78 = sub_C5BEC(v77);
            if ( v78 < 0 )
            {
LABEL_169:
              *(_DWORD *)(a1 + 96) = 1;
LABEL_113:
              *(_DWORD *)(a1 + 92) = v53;
              if ( v55 )
              {
LABEL_114:
                v57 = (int)v55;
                goto LABEL_115;
              }
LABEL_152:
              v57 = sub_10C01C(*(_DWORD **)(a1 + 80), v53);
              goto LABEL_115;
            }
            if ( v78 )
            {
              *(_DWORD *)(a1 + 96) = 79;
              goto LABEL_113;
            }
          }
        }
LABEL_162:
        if ( (v55[32] & 0x10) == 0 && v55[30] != -1 && (*(_DWORD *)(*(_DWORD *)(a1 + 16) + 12) & 0x20) != 0 )
        {
          *(_DWORD *)(a1 + 92) = v53;
          *(_DWORD *)(a1 + 96) = 41;
          v57 = (int)v55;
LABEL_115:
          *(_DWORD *)(a1 + 100) = v57;
          if ( !(*(int (__fastcall **)(_DWORD, int))(a1 + 28))(0, a1) )
            goto LABEL_8;
        }
        if ( v49 <= 0 )
          goto LABEL_123;
        if ( *(_DWORD *)(a1 + 76) <= v53 )
        {
          v79 = *(_DWORD *)(a1 + 16);
          if ( v49 == *(_DWORD *)(v79 + 16) )
          {
            v80 = sub_16ECAC(v55, *(_DWORD *)(v79 + 20), 4);
            if ( v80 == 1 )
              goto LABEL_123;
            if ( v80 == 2 )
            {
              *(_DWORD *)(a1 + 92) = v53;
              v59 = (int)v55;
              if ( v55 )
                goto LABEL_122;
LABEL_174:
              v59 = sub_10C01C(*(_DWORD **)(a1 + 80), v53);
              goto LABEL_122;
            }
          }
        }
        v58 = sub_120C28(v55, v49, v51 > 0);
        if ( v58 && (v58 == 1 || (*(_DWORD *)(*(_DWORD *)(a1 + 16) + 12) & 0x20) == 0) )
          goto LABEL_123;
        *(_DWORD *)(a1 + 92) = v53;
        v59 = (int)v55;
        if ( !v55 )
          goto LABEL_174;
LABEL_122:
        *(_DWORD *)(a1 + 100) = v59;
        *(_DWORD *)(a1 + 96) = 26;
        if ( !(*(int (__fastcall **)(_DWORD, int))(a1 + 28))(0, a1) )
          goto LABEL_8;
LABEL_123:
        if ( v53 > 1 )
        {
          v60 = v55[30];
          if ( v60 != -1 && v60 + v52 < v50 )
          {
            *(_DWORD *)(a1 + 92) = v53;
            *(_DWORD *)(a1 + 96) = 25;
            *(_DWORD *)(a1 + 100) = v55;
            if ( !(*(int (__fastcall **)(_DWORD, int))(a1 + 28))(0, a1) )
              goto LABEL_8;
          }
LABEL_126:
          v61 = v55[32];
          if ( (v61 & 0x20) == 0 )
            ++v50;
          goto LABEL_128;
        }
        if ( v53 )
          goto LABEL_126;
        v61 = v55[32];
LABEL_128:
        if ( (v61 & 0x400) != 0 )
        {
          v54 = v55[31];
          if ( v54 != -1 )
          {
            if ( v52 > v54 )
            {
              *(_DWORD *)(a1 + 92) = v53;
              *(_DWORD *)(a1 + 96) = 38;
              *(_DWORD *)(a1 + 100) = v55;
              if ( !(*(int (__fastcall **)(_DWORD, int))(a1 + 28))(0, a1) )
                goto LABEL_8;
              v52 = v55[31];
            }
            else
            {
              v52 = v55[31];
            }
          }
          ++v53;
          ++v52;
          v51 = 0;
          if ( v48 == v53 )
            break;
        }
        else
        {
          ++v53;
          v51 = 1;
          if ( v48 == v53 )
            break;
        }
      }
    }
    v62 = sub_10C010(*(_DWORD *)(a1 + 80));
    v63 = v62;
    if ( *(int *)(*(_DWORD *)(a1 + 16) + 28) > 0 && v62 > 0 )
    {
      v64 = v62 - 1;
      v65 = sub_10C01C(*(_DWORD **)(a1 + 80), 0);
      v66 = 0;
      while ( 1 )
      {
        if ( v66 < v64 )
        {
          v67 = *(_DWORD *)(a1 + 16);
          v170[0] = -1;
          v68 = *(_DWORD *)(v67 + 28);
          if ( v68 > 0 )
          {
            if ( !sub_10FDB0(v65, 0, 0, v170, 0) )
              goto LABEL_234;
            if ( v68 >= 5 )
              v68 = 5;
            if ( *(_DWORD *)&aP_1[4 * v68 - 4] > v170[0] )
            {
LABEL_234:
              *(_DWORD *)(a1 + 92) = v66;
              if ( !v65 )
                v65 = sub_10C01C(*(_DWORD **)(a1 + 80), v66);
              *(_DWORD *)(a1 + 100) = v65;
              *(_DWORD *)(a1 + 96) = 68;
              if ( !(*(int (__fastcall **)(_DWORD, int))(a1 + 28))(0, a1) )
                goto LABEL_8;
            }
          }
        }
        if ( v63 == ++v66 )
          break;
        v65 = sub_10C01C(*(_DWORD **)(a1 + 80), v66);
        v69 = sub_10E89C(v65);
        v70 = v69;
        v71 = *(_DWORD *)(*(_DWORD *)(a1 + 16) + 28);
        if ( v71 > 0 )
        {
          if ( !v69 )
            goto LABEL_316;
          v72 = sub_D9AE4(v69);
          if ( v71 >= 5 )
            v71 = 5;
          if ( v72 < *(_DWORD *)&aP_1[4 * v71 - 4] )
          {
LABEL_316:
            *(_DWORD *)(a1 + 92) = v66;
            v73 = v65 ? v65 : sub_10C01C(*(_DWORD **)(a1 + 80), v66);
            *(_DWORD *)(a1 + 100) = v73;
            *(_DWORD *)(a1 + 96) = 67;
            if ( !(*(int (__fastcall **)(_DWORD, int, int))(a1 + 28))(0, a1, v70) )
              goto LABEL_8;
          }
        }
      }
    }
    v109 = sub_110C34(a1);
    sub_11191C(0, *(_DWORD **)(a1 + 80));
    if ( !v109 )
      return 0;
    if ( !(*(int (__fastcall **)(int))(a1 + 40))(a1) )
      return 0;
    v110 = sub_10E930((signed int *)(a1 + 92), 0, *(_DWORD **)(a1 + 80), *(_DWORD *)(*(_DWORD *)(a1 + 16) + 12));
    if ( v110 )
    {
      v134 = sub_10C01C(*(_DWORD **)(a1 + 80), *(_DWORD *)(a1 + 92));
      *(_DWORD *)(a1 + 96) = v110;
      *(_DWORD *)(a1 + 100) = v134;
      if ( !(*(int (__fastcall **)(_DWORD, int))(a1 + 28))(0, a1) )
        return 0;
    }
    v111 = *(int (__fastcall **)(int))(a1 + 24);
    if ( !(v111 ? v111(a1) : sub_111000(a1)) )
      return 0;
    v113 = sub_10C010(*(_DWORD *)(a1 + 80)) - 1;
    if ( v113 < 0 )
    {
LABEL_266:
      if ( !sub_11AF50(a1) )
        return 0;
      result = sub_11A0E4(a1);
      if ( !result )
        return 0;
      v126 = *(_DWORD *)(*(_DWORD *)(a1 + 16) + 12);
      if ( (v126 & 0x80) != 0 )
        return (*(int (__fastcall **)(int, int))(a1 + 56))(a1, v126 << 24);
      return result;
    }
    while ( 1 )
    {
      v114 = sub_10C01C(*(_DWORD **)(a1 + 80), v113);
      v115 = v114;
      v116 = *(_DWORD *)(v114 + 128);
      if ( !v113 || (v116 & 0x20) == 0 )
        break;
LABEL_265:
      if ( v113-- == 0 )
        goto LABEL_266;
    }
    if ( (v116 & 0x400) != 0 )
    {
      v129 = sub_10E660(v114);
      v130 = sub_10E65C(v115);
      v131 = sub_113C38(v129);
      v132 = v131 - 1;
      v133 = v131;
      if ( v131 - 1 > 0 )
      {
        v161 = sub_113C38(v129);
        if ( v161 == sub_113C38(v130) + 1 )
        {
          v153 = sub_113CB0(v129, v132);
          v163 = sub_1141A8(v153);
          v154 = sub_113CB0(v129, v133 - 2);
          if ( v163 != sub_1141A8(v154) )
          {
            v155 = sub_115E5C(v129);
            v156 = v155;
            if ( !v155 )
            {
              sub_D0048(11, 149, 65, (int)"crypto/x509/x509_vfy.c", 674);
              *(_DWORD *)(a1 + 96) = 17;
              return 0;
            }
            v157 = sub_113CE0(v155, v132);
            v158 = sub_114120();
            if ( sub_EAC84(v158) == (char *)13 && !sub_10E6E0(v156, v130) )
            {
              X509_NAME_ENTRY_free(v157);
              X509_NAME_free(v156);
              goto LABEL_250;
            }
            X509_NAME_ENTRY_free(v157);
            X509_NAME_free(v156);
          }
        }
      }
      *(_DWORD *)(a1 + 92) = v113;
      *(_DWORD *)(a1 + 100) = v115;
      *(_DWORD *)(a1 + 96) = 72;
      if ( !(*(int (__fastcall **)(_DWORD, int))(a1 + 28))(0, a1) )
        return 0;
    }
LABEL_250:
    v117 = sub_10C010(*(_DWORD *)(a1 + 80)) - 1;
    if ( v117 > v113 )
    {
      while ( 1 )
      {
        v118 = sub_10C01C(*(_DWORD **)(a1 + 80), v117);
        v119 = *(_DWORD *)(v118 + 164);
        if ( v119 )
        {
          v120 = sub_11E954(v115, *(_DWORD *)(v118 + 164));
          if ( !(v120 | v113) )
          {
            v121 = *(_DWORD *)(*(_DWORD *)(a1 + 16) + 40);
            if ( (v121 & 0x20) != 0 )
              goto LABEL_264;
            v122 = *(_DWORD *)(*(_DWORD *)(a1 + 16) + 40) & 1;
            if ( (v121 & 1) == 0 )
            {
              v123 = (_DWORD *)sub_10EDA8(v115);
              if ( v123 )
              {
                do
                {
                  v21 = v122 < sub_10C010((int)v123);
                  v124 = v122++;
                  if ( !v21 )
                  {
                    GENERAL_NAMES_free(v123);
                    goto LABEL_260;
                  }
                }
                while ( *(_DWORD *)sub_10C01C(v123, v124) != 2 );
                GENERAL_NAMES_free(v123);
                goto LABEL_264;
              }
            }
LABEL_260:
            v120 = sub_11EA5C(v115, v119);
          }
          if ( v120 )
          {
            if ( v120 == 17 )
              return 0;
            *(_DWORD *)(a1 + 92) = v113;
            *(_DWORD *)(a1 + 100) = v115;
            *(_DWORD *)(a1 + 96) = v120;
            if ( !(*(int (__fastcall **)(_DWORD, int))(a1 + 28))(0, a1) )
              return 0;
          }
        }
LABEL_264:
        if ( --v117 == v113 )
          goto LABEL_265;
      }
    }
    goto LABEL_265;
  }
  if ( v22 != 3 )
    goto LABEL_49;
LABEL_86:
  if ( *(_DWORD *)(a1 + 76) == v27 )
  {
    v22 = sub_110A84(a1, v27);
    goto LABEL_49;
  }
LABEL_87:
  v42 = sub_10C010(*(_DWORD *)(a1 + 80));
  v43 = v42;
  if ( v42 > v166 )
  {
    v149 = v42 - 1;
    v150 = *(_DWORD **)(a1 + 80);
    *(_DWORD *)(a1 + 92) = v149;
    v88 = sub_10C01C(v150, v149);
    v89 = 22;
    goto LABEL_194;
  }
  if ( v2 && sub_10C010(v2[1]) > 0 && (!(v2[5] << 30) || v2[7] >= 0) )
  {
    v87 = *(_DWORD **)(a1 + 80);
    *(_DWORD *)(a1 + 92) = v43 - 1;
    v88 = sub_10C01C(v87, v43 - 1);
    v89 = 65;
    goto LABEL_194;
  }
  if ( v164 )
  {
    v75 = sub_10C010(*(_DWORD *)(a1 + 80)) == 1;
    v151 = v43 - 1;
    v152 = *(_DWORD **)(a1 + 80);
    *(_DWORD *)(a1 + 92) = v43 - 1;
    if ( v75 )
    {
      v88 = sub_10C01C(v152, v151);
      v89 = 18;
    }
    else
    {
      v88 = sub_10C01C(v152, v151);
      v89 = 19;
    }
LABEL_194:
    *(_DWORD *)(a1 + 100) = v88;
    *(_DWORD *)(a1 + 96) = v89;
    if ( (*(int (__fastcall **)(_DWORD, int))(a1 + 28))(0, a1) )
      goto LABEL_96;
    goto LABEL_8;
  }
  v44 = *(_DWORD **)(a1 + 80);
  if ( v43 > *(_DWORD *)(a1 + 76) )
  {
    *(_DWORD *)(a1 + 92) = v43 - 1;
    v45 = sub_10C01C(v44, v43 - 1);
    v46 = 2;
  }
  else
  {
    *(_DWORD *)(a1 + 92) = v43 - 1;
    v45 = sub_10C01C(v44, v43 - 1);
    v46 = 20;
  }
  *(_DWORD *)(a1 + 100) = v45;
  *(_DWORD *)(a1 + 96) = v46;
  if ( (*(int (__fastcall **)(_DWORD, int))(a1 + 28))(0, a1) )
    goto LABEL_96;
LABEL_8:
  sub_11191C(0, *(_DWORD **)(a1 + 80));
  return 0;
}

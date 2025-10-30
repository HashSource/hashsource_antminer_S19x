int __fastcall sub_117188(void ****a1, _DWORD *a2, _DWORD *a3, _DWORD *a4, __int16 a5)
{
  int v6; // r0
  int v7; // r4
  int v8; // r8
  int v9; // r7
  int result; // r0
  signed int v11; // r6
  int v12; // r9
  unsigned int v13; // r5
  int v14; // r11
  unsigned int v15; // r11
  char v16; // r5
  int v17; // r0
  int v18; // r3
  _BOOL4 v19; // r2
  bool v20; // cf
  int v21; // r3
  int *v22; // r4
  int *v23; // r8
  int v24; // r10
  signed int j; // r11
  int v26; // r7
  int v27; // r5
  int v28; // r6
  bool v29; // cc
  unsigned int v30; // r1
  int v31; // r9
  char *v32; // r4
  char **v33; // r0
  _DWORD *v34; // r0
  _DWORD *v35; // r9
  int v36; // r1
  int v37; // r2
  int v38; // r3
  _DWORD *v39; // r9
  int v40; // r4
  int v41; // r11
  char v42; // r8
  int v43; // r0
  _BOOL4 v44; // r3
  bool v45; // zf
  int v46; // r2
  int v47; // r3
  int *v48; // r9
  signed int k; // r10
  _DWORD *v50; // r0
  _DWORD **v51; // r6
  signed int v52; // r5
  _DWORD *v53; // r0
  _DWORD *v54; // r7
  int v55; // r5
  int v56; // r1
  int v57; // r2
  int v58; // r3
  int v59; // r2
  int *v60; // r6
  int v61; // r4
  _DWORD *v62; // r0
  _DWORD *v63; // r0
  int v64; // r3
  int v65; // r5
  int v66; // r0
  int v67; // r6
  void ***v68; // r11
  void ***v69; // r7
  _DWORD *v70; // r4
  int v71; // r9
  int v72; // r5
  unsigned int v73; // r1
  int v74; // r10
  void **v75; // r0
  _DWORD *v76; // r7
  int v77; // r9
  char **v78; // r9
  _DWORD *v79; // r3
  _DWORD *v80; // r0
  int *v81; // r4
  int v82; // r5
  _DWORD **v83; // r0
  int v84; // r7
  void **v85; // r4
  int v86; // r8
  _DWORD *v87; // r6
  int v88; // r0
  unsigned int v89; // r1
  int v90; // r5
  int *v91; // r0
  unsigned int v92; // r1
  char **v93; // r10
  int v94; // r11
  _DWORD *v95; // lr
  int v96; // r2
  int *v97; // r0
  int v98; // r0
  int v99; // r3
  _BOOL4 v100; // r1
  int v101; // r3
  _BOOL4 v102; // r2
  int v103; // r3
  void ***v104; // [sp+Ch] [bp-30h]
  __int16 v105; // [sp+Ch] [bp-30h]
  int i; // [sp+10h] [bp-2Ch]
  int v108; // [sp+14h] [bp-28h]
  _DWORD *v109; // [sp+14h] [bp-28h]
  _DWORD *v110; // [sp+18h] [bp-24h]
  int v111; // [sp+1Ch] [bp-20h]
  void **v114[2]; // [sp+34h] [bp-8h] BYREF

  *a1 = 0;
  *a2 = 0;
  v114[0] = 0;
  v6 = sub_10C010((int)a3);
  if ( (a5 & 0x100) != 0 )
    v7 = 0;
  else
    v7 = v6;
  if ( (a5 & 0x200) != 0 )
    v8 = 0;
  else
    v8 = v6;
  if ( (a5 & 0x400) != 0 )
    v9 = 0;
  else
    v9 = v6;
  if ( v6 == 1 )
    goto LABEL_11;
  v11 = v6 - 2;
  v12 = v6;
  if ( v6 - 2 < 0 )
  {
    v16 = 1;
LABEL_48:
    if ( v7 )
    {
      if ( (v16 & 1) == 0 )
      {
        v104 = 0;
        goto LABEL_66;
      }
    }
    else
    {
      v45 = (v16 & 1) == 0;
      v16 |= 4u;
      if ( v45 )
      {
        v104 = 0;
        v111 = 4;
        goto LABEL_37;
      }
    }
    v104 = (void ***)sub_E0740((void *)0x18);
    if ( !v104 )
    {
      sub_D0048(34, 172, 65, (int)"crypto/x509v3/pcy_tree.c", 167);
      return 0;
    }
    v32 = (char *)sub_E0740((void *)(16 * v12));
    *v104 = (void **)v32;
    if ( !v32 )
    {
      CRYPTO_free(v104);
      sub_D0048(34, 172, 65, (int)"crypto/x509v3/pcy_tree.c", 180);
      return 0;
    }
    v104[1] = (void **)v12;
    v33 = sub_EAA20(0x2EAu);
    v34 = sub_116F1C(0, v33, 0);
    v35 = v34;
    if ( !v34 )
      goto LABEL_46;
    if ( !sub_16F000(v32, v34, 0, v104) )
    {
LABEL_129:
      policy_data_free(v35, v36, v37, v38);
      goto LABEL_46;
    }
    if ( v11 >= 0 )
    {
      v39 = v32 + 76;
      v40 = v8;
      do
      {
        v41 = sub_10C01C(a3, v11);
        v42 = sub_120D7C(v41);
        v109 = (_DWORD *)sub_116C08(v41);
        sub_10FD18(v41);
        *(v39 - 15) = v41;
        if ( !*v109 )
        {
          v103 = *(v39 - 12);
          __pld(v39);
          *(v39 - 12) = v103 | 0x200;
        }
        if ( v40 )
        {
          v43 = v42 & 0x20;
          if ( (v42 & 0x20) != 0 )
            v99 = v40;
          else
            v99 = v40 - 1;
          v40 = v109[2];
          v100 = v40 < v99;
          if ( v40 < 0 )
            v100 = 0;
          if ( !v100 )
            v40 = v99;
        }
        else
        {
          v43 = v42 & 0x20;
          v44 = v43 == 0;
          if ( !v11 )
            v44 = 1;
          if ( !v44 )
          {
            if ( v9 )
              goto LABEL_186;
            goto LABEL_63;
          }
          *(v39 - 12) |= 0x200u;
        }
        if ( v9 )
        {
          if ( !v43 )
            --v9;
LABEL_186:
          v101 = v109[4];
          v102 = v101 < v9;
          if ( v101 < 0 )
            v102 = 0;
          if ( v102 )
            v9 = v109[4];
          goto LABEL_64;
        }
LABEL_63:
        v9 = 0;
        *(v39 - 12) |= 0x400u;
LABEL_64:
        --v11;
        v39 += 4;
      }
      while ( v11 != -1 );
    }
    v111 = v16 & 4;
    if ( (v16 & 4) != 0 )
      goto LABEL_37;
LABEL_66:
    v111 = v16 & 2;
    if ( (v16 & 2) == 0 )
      goto LABEL_38;
    goto LABEL_12;
  }
  v13 = v6 - 2;
  while ( 1 )
  {
    v14 = sub_10C01C(a3, v13--);
    sub_120C28(v14, -1, 0);
    result = sub_116C08(v14);
    if ( !result )
      return result;
    if ( v13 == -1 )
    {
      v15 = v11;
      v16 = 1;
      while ( v7 > 0 || (v16 & 2) == 0 )
      {
        v108 = sub_10C01C(a3, v15);
        v105 = sub_120D7C(v108);
        if ( (v105 & 0x800) != 0 )
          return -1;
        v17 = sub_116C08(v108);
        if ( (v16 & 1) != 0 && !*(_DWORD *)(v17 + 4) )
          v16 = 2;
        if ( v7 > 0 )
        {
          if ( (v105 & 0x20) != 0 )
            v18 = v7;
          else
            v18 = v7 - 1;
          v7 = *(_DWORD *)(v17 + 12);
          v19 = v7 >= 0;
          if ( v7 >= v18 )
            v19 = 0;
          if ( !v19 )
            v7 = v18;
        }
        v20 = v15-- != 0;
        if ( !v20 )
          goto LABEL_48;
      }
      if ( !v7 )
      {
        v16 = 6;
        v104 = 0;
        v111 = 4;
LABEL_37:
        *a2 = 1;
        if ( (v16 & 2) != 0 )
          return -2;
LABEL_38:
        v21 = (int)v104[1];
        v22 = (int *)*v104;
        if ( v21 > 1 )
        {
          for ( i = 1; i < v21; ++i )
          {
            v23 = v22 + 4;
            v24 = sub_116C08(v22[4]);
            v110 = (_DWORD *)v24;
            for ( j = 0; j < sub_10C010(*(_DWORD *)(v24 + 4)); ++j )
            {
              v26 = 0;
              v27 = 0;
              v28 = sub_10C01C(*(_DWORD **)(v24 + 4), j);
              while ( 1 )
              {
                v29 = v27 < sub_10C010(v22[1]);
                v30 = v27++;
                if ( !v29 )
                  break;
                v31 = sub_10C01C((_DWORD *)v22[1], v30);
                if ( sub_16F0E4(v22, v31, *(_DWORD *)(v28 + 4)) )
                {
                  v26 = 1;
                  if ( !sub_16F000(v22 + 4, v28, v31, 0) )
                    goto LABEL_46;
                }
              }
              if ( !v26 )
              {
                v46 = v22[2];
                if ( v46 )
                {
                  if ( !sub_16F000(v22 + 4, v28, v46, 0) )
                  {
LABEL_46:
                    sub_1170E8((void **)v104);
                    return 0;
                  }
                }
              }
            }
            v47 = v22[7];
            v48 = v22 + 4;
            __pld(v22 + 11);
            if ( (v47 & 0x200) == 0 )
            {
              for ( k = 0; k < sub_10C010(v22[1]); ++k )
              {
                v50 = (_DWORD *)sub_10C01C((_DWORD *)v22[1], k);
                v51 = (_DWORD **)v50;
                v52 = v22[3] & 0x400;
                if ( !v52 && (*(_DWORD *)*v50 & 1) != 0 )
                {
                  v76 = *(_DWORD **)(*v50 + 12);
                  v77 = v50[2];
                  if ( v77 != sub_10C010((int)v76) )
                  {
                    while ( v52 < sub_10C010((int)v76) )
                    {
                      v78 = (char **)sub_10C01C(v76, v52);
                      if ( !sub_16EFA8(v22 + 4, v51, v78) )
                      {
                        v79 = *v51;
                        if ( !v78 )
                          v78 = (char **)v79[1];
                        v80 = sub_116F1C(0, v78, *v79 & 0x10);
                        v35 = v80;
                        if ( !v80 )
                          goto LABEL_46;
                        v80[2] = *(_DWORD *)(*v110 + 8);
                        *v80 |= 4u;
                        if ( !sub_16F000(v22 + 4, v80, v51, v104) )
                          goto LABEL_129;
                      }
                      ++v52;
                    }
                  }
                }
                else if ( !v50[2] )
                {
                  v53 = sub_116F1C(0, *(char ***)(*v50 + 4), *(_DWORD *)*v50 & 0x10);
                  v54 = v53;
                  if ( !v53 )
                    goto LABEL_46;
                  v55 = *(_DWORD *)(*v110 + 8);
                  *v53 |= 4u;
                  v53[2] = v55;
                  if ( !sub_16F000(v22 + 4, v53, v51, v104) )
                  {
                    policy_data_free(v54, v56, v57, v58);
                    sub_1170E8((void **)v104);
                    return 0;
                  }
                }
              }
              v59 = v22[2];
              v48 = v22 + 4;
              __pld(v22 + 6);
              if ( v59 && !sub_16F000(v22 + 4, *v110, v59, 0) )
                goto LABEL_46;
              v47 = v22[7];
            }
            if ( (v47 & 0x400) != 0 )
            {
              v81 = (int *)v22[5];
              v82 = sub_10C010((int)v81) - 1;
              if ( v82 >= 0 )
              {
                do
                {
                  v83 = (_DWORD **)sub_10C01C(v81, v82);
                  if ( **v83 << 30 )
                  {
                    --v83[1][2];
                    CRYPTO_free(v83);
                    sub_10BC04(v81, v82);
                  }
                  v20 = v82-- != 0;
                }
                while ( v20 );
              }
            }
            do
            {
              v48 -= 4;
              v60 = (int *)v48[1];
              v61 = sub_10C010((int)v60) - 1;
              if ( v61 >= 0 )
              {
                do
                {
                  while ( 1 )
                  {
                    v62 = (_DWORD *)sub_10C01C(v60, v61);
                    if ( !v62[2] )
                      break;
                    v20 = v61-- != 0;
                    if ( !v20 )
                      goto LABEL_95;
                  }
                  --*(_DWORD *)(v62[1] + 8);
                  CRYPTO_free(v62);
                  sub_10BC04(v60, v61);
                  v20 = v61-- != 0;
                }
                while ( v20 );
              }
LABEL_95:
              v63 = (_DWORD *)v48[2];
              __pld(v48 - 10);
              if ( v63 && !v63[2] )
              {
                v64 = v63[1];
                if ( v64 )
                  --*(_DWORD *)(v64 + 8);
                CRYPTO_free(v63);
                v48[2] = 0;
              }
            }
            while ( v48 != (int *)*v104 );
            if ( !v48[2] )
            {
              sub_1170E8((void **)v104);
              if ( v111 )
                return -2;
              return 1;
            }
            v22 = v23;
            v21 = (int)v104[1];
          }
          v22 = v48;
        }
        v65 = v22[4 * v21 - 2];
        if ( v65 )
        {
          v66 = (int)v104[3];
          if ( !v66 )
          {
            v66 = sub_16EF78();
            v104[3] = (void **)v66;
            if ( !v66 )
              goto LABEL_46;
          }
          if ( sub_10BC4C(v66, v65) < 0 && !sub_10BD3C((int *)v104[3], v65) )
            goto LABEL_46;
          v22 = (int *)*v104;
          if ( (int)v104[1] > 1 )
          {
            v67 = v22[2];
            if ( v67 )
            {
              v68 = v104;
              v69 = v114;
LABEL_110:
              v70 = v22 + 18;
              v71 = 1;
              do
              {
                v72 = 0;
                while ( 1 )
                {
                  v29 = v72 < sub_10C010(*(v70 - 13));
                  v73 = v72++;
                  if ( !v29 )
                    break;
                  v74 = sub_10C01C((_DWORD *)*(v70 - 13), v73);
                  if ( v67 == *(_DWORD *)(v74 + 4) )
                  {
                    v75 = *v69;
                    if ( !*v69 )
                    {
                      v75 = (void **)sub_16EF78();
                      *v69 = v75;
                      if ( !v75 )
                      {
                        if ( v69 == v114 )
LABEL_119:
                          sub_10BDB4(v114[0]);
                        goto LABEL_46;
                      }
                    }
                    if ( sub_10BC4C((int)v75, v74) < 0 && !sub_10BD3C((int *)*v69, v74) )
                    {
                      if ( v69 == v114 )
                        goto LABEL_119;
                      goto LABEL_46;
                    }
                  }
                }
                if ( ++v71 >= (int)v68[1] )
                  break;
                __pld(v70);
                v70 += 4;
                v67 = *(v70 - 16);
              }
              while ( v67 );
              goto LABEL_138;
            }
          }
          goto LABEL_171;
        }
        v69 = v104 + 3;
        if ( v21 > 1 )
        {
          v67 = v22[2];
          if ( v67 )
          {
            v68 = v104;
            goto LABEL_110;
          }
        }
LABEL_138:
        if ( v69 == v114 )
        {
LABEL_171:
          v85 = v114[0];
          v84 = 2;
        }
        else
        {
          v84 = 1;
          v85 = v104[3];
          v114[0] = v85;
        }
        if ( sub_10C010((int)a4) <= 0 )
          goto LABEL_166;
        v86 = 0;
        v87 = (*v104)[4 * (_DWORD)v104[1] - 2];
        while ( 1 )
        {
          v29 = v86 < sub_10C010((int)a4);
          v89 = v86++;
          if ( !v29 )
            break;
          v88 = sub_10C01C(a4, v89);
          if ( sub_EAC84(v88) == (char *)746 )
          {
            v104[5] = (void **)((unsigned int)v104[5] | 2);
LABEL_166:
            if ( v84 == 2 )
              sub_10BDB4(v85);
            *a1 = v104;
            if ( v111 )
            {
              v98 = sub_16EF04(v104);
              if ( sub_10C010(v98) <= 0 )
                return -2;
            }
            return 1;
          }
        }
        v90 = 0;
        while ( 1 )
        {
          v29 = v90 < sub_10C010((int)a4);
          v92 = v90++;
          if ( !v29 )
            goto LABEL_166;
          v93 = (char **)sub_10C01C(a4, v92);
          v94 = sub_16EF84(v85, v93);
          if ( v94 )
          {
            v91 = (int *)v104[4];
            if ( v91 )
              goto LABEL_146;
          }
          else
          {
            if ( !v87 )
              continue;
            v95 = sub_116F1C(0, v93, *(_DWORD *)*v87 & 0x10);
            if ( !v95 )
              goto LABEL_155;
            v96 = *(_DWORD *)(*v87 + 8);
            *v95 = 12;
            v95[2] = v96;
            v94 = sub_16F000(0, v95, v87[1], v104);
            v91 = (int *)v104[4];
            if ( v91 )
            {
LABEL_146:
              if ( !sub_10BD3C(v91, v94) )
                goto LABEL_155;
              continue;
            }
          }
          v97 = (int *)sub_10BFCC();
          v104[4] = (void **)v97;
          if ( !v97 )
            goto LABEL_166;
          if ( !sub_10BD3C(v97, v94) )
          {
LABEL_155:
            if ( v84 == 2 )
              sub_10BDB4(v85);
            goto LABEL_46;
          }
        }
      }
LABEL_11:
      v104 = 0;
LABEL_12:
      sub_1170E8((void **)v104);
      return 1;
    }
  }
}

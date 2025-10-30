int __fastcall sub_1351B4(int *a1, int a2, int a3, int *a4, int *a5, _DWORD *a6)
{
  int v7; // r3
  int v8; // r2
  _BOOL4 v10; // r3
  _BOOL4 v11; // r3
  int ***v12; // r0
  int ***v13; // r10
  int **v14; // r1
  int v15; // r4
  int v17; // r2
  int v18; // r2
  int v19; // r8
  int v20; // r2
  int **v21; // r1
  _WORD *v22; // r6
  unsigned __int16 *v23; // r7
  int v24; // t1
  int v25; // r0
  int v26; // r3
  _WORD *v27; // r6
  unsigned __int16 *v28; // r7
  int v29; // t1
  int v30; // r0
  signed int v31; // r6
  int v33; // r1
  unsigned __int16 *v34; // r11
  char *ii; // r5
  int v36; // t1
  int v37; // t1
  int v38; // r1
  int v39; // r8
  unsigned __int16 *v40; // r11
  char *kk; // r5
  int v42; // t1
  int v43; // r1
  int v44; // t1
  int v45; // r8
  int v46; // r0
  int v47; // r0
  int v48; // r4
  int v49; // r6
  int v50; // r3
  int v51; // r1
  unsigned __int16 *v52; // r11
  char *n; // r5
  int v54; // t1
  int v55; // t1
  unsigned int v56; // r1
  int v57; // r8
  unsigned __int16 *v58; // r11
  char *jj; // r5
  int v60; // t1
  unsigned int v61; // r1
  int v62; // t1
  signed int v63; // r6
  int v65; // r1
  unsigned __int16 *v66; // r11
  char *j; // r5
  int v68; // t1
  int v69; // t1
  int v70; // r1
  int v71; // r8
  unsigned __int16 *v72; // r11
  char *m; // r5
  int v74; // t1
  int v75; // r1
  int v76; // t1
  int v77; // r1
  unsigned __int16 *v78; // r11
  char *i; // r5
  int v80; // t1
  int v81; // t1
  unsigned int v82; // r1
  int v83; // r8
  unsigned __int16 *v84; // r11
  char *k; // r5
  int v86; // t1
  unsigned int v87; // r1
  int v88; // t1
  _WORD *v92; // [sp+18h] [bp-3Ch]
  int v93; // [sp+1Ch] [bp-38h]
  int **v94; // [sp+20h] [bp-34h]
  int *v95; // [sp+24h] [bp-30h]
  int v96; // [sp+2Ch] [bp-28h]
  unsigned int v97; // [sp+34h] [bp-20h]
  unsigned int v98; // [sp+38h] [bp-1Ch]
  int v99; // [sp+40h] [bp-14h]
  int v100; // [sp+48h] [bp-Ch]
  _DWORD *v101; // [sp+7Ch] [bp+28h]
  _DWORD *v102; // [sp+7Ch] [bp+28h]

  if ( a2 > 3746 )
  {
    v93 = 3;
  }
  else if ( a2 > 1344 )
  {
    v93 = 4;
  }
  else
  {
    if ( a2 < 476 )
    {
      if ( a2 >= 400 )
      {
        v93 = 6;
        v7 = a2;
      }
      else if ( a2 > 346 )
      {
        v93 = 7;
        v7 = a2;
      }
      else if ( a2 >= 308 )
      {
        v93 = 8;
        v7 = a2;
      }
      else
      {
        if ( a2 >= 55 )
          v26 = 27;
        else
          v26 = 34;
        v93 = v26;
        v7 = a2;
      }
    }
    else
    {
      v93 = 5;
      v7 = a2;
    }
    if ( v7 <= 1 )
    {
      v8 = 66;
LABEL_7:
      sub_D0048(3, 141, 118, (int)"crypto/bn/bn_prime.c", v8);
      return 0;
    }
  }
  v10 = a4 == 0;
  if ( !a3 )
    v10 = 0;
  if ( v10 )
  {
    v11 = a2 <= 5;
    if ( a2 == 3 )
      v11 = 0;
    if ( v11 )
    {
      v8 = 74;
      goto LABEL_7;
    }
  }
  v92 = sub_E0740((void *)0x1000);
  if ( !v92 || (v12 = (int ***)sub_130B08(), (v13 = v12) == 0) )
  {
    v13 = 0;
    v15 = 0;
    goto LABEL_44;
  }
  sub_130BC0((int)v12);
  v95 = (int *)sub_130CCC(v13, v14);
  v15 = (int)v95;
  if ( v95 )
  {
    if ( a3 )
      v17 = 4;
    else
      v17 = 2;
    v99 = v17;
    if ( a3 )
      v18 = 3;
    else
      v18 = 1;
    v19 = 0;
    v98 = v18;
    if ( a3 )
      v20 = 5;
    else
      v20 = 3;
    v97 = v20;
    while ( 2 )
    {
      if ( !a4 )
      {
        v100 = v19;
        v102 = a6;
        do
        {
LABEL_58:
          if ( sub_136480(a1) && (!a3 || sub_B8A68(a1, 1)) )
          {
            v27 = v92;
            v28 = (unsigned __int16 *)&unk_1CB504;
            do
            {
              v29 = v28[1];
              ++v28;
              v30 = sub_BAC74((int)a1, v29);
              if ( v30 == -1 )
                goto LABEL_63;
              v27[1] = v30;
              ++v27;
            }
            while ( v28 != (unsigned __int16 *)&unk_1CC502 );
            v63 = 0;
            while ( v63 < 0 || a2 > 31 )
            {
              if ( a3 )
              {
                v77 = 3;
                v78 = v92;
                for ( i = (char *)&unk_1CB506; ; i += 2 )
                {
                  v81 = v78[1];
                  ++v78;
                  sub_1892EC(v81 + v63, v77);
                  if ( v82 <= 1 )
                    break;
                  if ( i == (char *)&unk_1CC502 )
                    goto LABEL_132;
                  v80 = *((unsigned __int16 *)i + 1);
                  v77 = v80;
                }
              }
              else
              {
                v65 = 3;
                v66 = v92;
                for ( j = (char *)&unk_1CB506; ; j += 2 )
                {
                  v69 = v66[1];
                  ++v66;
                  sub_1892EC(v69 + v63, v65);
                  if ( !v70 )
                    break;
                  if ( j == (char *)&unk_1CC502 )
                    goto LABEL_132;
                  v68 = *((unsigned __int16 *)j + 1);
                  v65 = v68;
                }
              }
LABEL_124:
              v63 += v99;
              if ( (unsigned int)v63 > 0xFFFFBA38 )
                goto LABEL_58;
            }
            if ( a3 )
            {
              v83 = 3;
              v84 = v92;
              for ( k = (char *)&unk_1CB506; v83 * v83 <= (unsigned int)(sub_B82E0(a1) + v63); k += 2 )
              {
                v86 = v84[1];
                ++v84;
                sub_1892EC(v86 + v63, v83);
                if ( v87 <= 1 )
                  goto LABEL_124;
                if ( k == (char *)&unk_1CC502 )
                  break;
                v88 = *((unsigned __int16 *)k + 1);
                v83 = v88;
              }
            }
            else
            {
              v71 = 3;
              v72 = v92;
              for ( m = (char *)&unk_1CB506; v71 * v71 <= (unsigned int)(sub_B82E0(a1) + v63); m += 2 )
              {
                v74 = v72[1];
                ++v72;
                sub_1892EC(v74 + v63, v71);
                if ( !v75 )
                  goto LABEL_124;
                if ( m == (char *)&unk_1CC502 )
                  break;
                v76 = *((unsigned __int16 *)m + 1);
                v71 = v76;
              }
            }
LABEL_132:
            if ( sub_BAD28((int)a1, v63) )
              continue;
          }
          goto LABEL_63;
        }
        while ( a2 != sub_B85BC(a1) );
        v45 = v100;
        a6 = v102;
LABEL_84:
        v46 = sub_134EE0(a6, 0, v45);
        if ( v46 )
        {
          if ( !a3 )
          {
            v47 = sub_134F20(a1, v93, v13, 0, a6);
            if ( v47 == -1 )
            {
              v15 = 0;
            }
            else
            {
              if ( !v47 )
              {
LABEL_88:
                v19 = v45 + 1;
                continue;
              }
LABEL_97:
              v15 = 1;
            }
            goto LABEL_44;
          }
          v46 = sub_BA324((int)v95, a1);
          if ( v46 )
          {
            v48 = 0;
            while ( 1 )
            {
              ++v48;
              v49 = sub_134F20(a1, 1, v13, 0, a6);
              if ( v49 == -1 )
                break;
              if ( !v49 )
                goto LABEL_88;
              v50 = sub_134F20(v95, 1, v13, 0, a6);
              if ( v50 == -1 )
                break;
              if ( !v50 )
                goto LABEL_88;
              v46 = sub_134EE0(a6, 2, v45);
              if ( !v46 )
                goto LABEL_98;
              if ( v48 == v93 )
                goto LABEL_97;
            }
LABEL_63:
            v15 = 0;
            goto LABEL_44;
          }
        }
LABEL_98:
        v15 = v46;
        goto LABEL_44;
      }
      break;
    }
    sub_130BC0((int)v13);
    v94 = sub_130CCC(v13, v21);
    if ( !v94 )
      goto LABEL_41;
    sub_B82E0(a4);
    v96 = v19;
    v101 = a6;
LABEL_31:
    if ( !sub_1362F0(a1, a2, 0, 1) || !sub_131220(0, v94, a1, a4, v13) || !BN_sub(a1, a1, (int *)v94) )
      goto LABEL_41;
    if ( a5 )
    {
      if ( BN_add(a1, a1, a5) )
        goto LABEL_36;
    }
    else if ( sub_BAD28((int)a1, v98) )
    {
LABEL_36:
      if ( a2 <= sub_B85BC(a1) && sub_B82E0(a1) >= v97 || BN_add(a1, a1, a4) )
      {
        v22 = v92;
        v23 = (unsigned __int16 *)&unk_1CB504;
        while ( 1 )
        {
          v24 = v23[1];
          ++v23;
          v25 = sub_BAC74((int)a1, v24);
          if ( v25 == -1 )
            break;
          v22[1] = v25;
          ++v22;
          if ( v23 == (unsigned __int16 *)&unk_1CC502 )
          {
            v31 = 0;
            while ( v31 < 0 || a2 > 31 )
            {
              if ( a3 )
              {
                v51 = 3;
                v52 = v92;
                for ( n = (char *)&unk_1CB506; ; n += 2 )
                {
                  v55 = v52[1];
                  ++v52;
                  sub_1892EC(v55 + v31, v51);
                  if ( v56 <= 1 )
                    break;
                  if ( &unk_1CC502 == (_UNKNOWN *)n )
                    goto LABEL_82;
                  v54 = *((unsigned __int16 *)n + 1);
                  v51 = v54;
                }
              }
              else
              {
                v33 = 3;
                v34 = v92;
                for ( ii = (char *)&unk_1CB506; ; ii += 2 )
                {
                  v37 = v34[1];
                  ++v34;
                  sub_1892EC(v37 + v31, v33);
                  if ( !v38 )
                    break;
                  if ( &unk_1CC502 == (_UNKNOWN *)ii )
                    goto LABEL_82;
                  v36 = *((unsigned __int16 *)ii + 1);
                  v33 = v36;
                }
              }
LABEL_74:
              v31 += sub_B82E0(a4);
              if ( (unsigned int)v31 > 0xFFFFBA38 )
                goto LABEL_31;
            }
            if ( a3 )
            {
              v57 = 3;
              v58 = v92;
              for ( jj = (char *)&unk_1CB506; v57 * v57 <= (unsigned int)(sub_B82E0(a1) + v31); jj += 2 )
              {
                v60 = v58[1];
                ++v58;
                sub_1892EC(v60 + v31, v57);
                if ( v61 <= 1 )
                  goto LABEL_74;
                if ( &unk_1CC502 == (_UNKNOWN *)jj )
                  break;
                v62 = *((unsigned __int16 *)jj + 1);
                v57 = v62;
              }
            }
            else
            {
              v39 = 3;
              v40 = v92;
              for ( kk = (char *)&unk_1CB506; v39 * v39 <= (unsigned int)(sub_B82E0(a1) + v31); kk += 2 )
              {
                v42 = v40[1];
                ++v40;
                sub_1892EC(v42 + v31, v39);
                if ( !v43 )
                  goto LABEL_74;
                if ( &unk_1CC502 == (_UNKNOWN *)kk )
                  break;
                v44 = *((unsigned __int16 *)kk + 1);
                v39 = v44;
              }
            }
LABEL_82:
            v45 = v96;
            a6 = v101;
            if ( sub_BAD28((int)a1, v31) )
            {
              sub_130C74(v13);
              goto LABEL_84;
            }
            break;
          }
        }
      }
    }
LABEL_41:
    v15 = 0;
    sub_130C74(v13);
  }
LABEL_44:
  CRYPTO_free(v92);
  sub_130C74(v13);
  sub_130B5C((void **)v13);
  return v15;
}

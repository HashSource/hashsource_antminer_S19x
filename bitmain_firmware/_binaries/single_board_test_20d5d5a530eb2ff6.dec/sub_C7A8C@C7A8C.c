int __fastcall sub_C7A8C(_DWORD *a1, _DWORD *a2, _DWORD *a3, unsigned int a4, _DWORD **a5, int *a6, int a7)
{
  int v9; // r3
  int v10; // r7
  unsigned int v11; // r3
  unsigned int v12; // r3
  int v13; // r6
  _DWORD *v14; // r9
  int v15; // lr
  bool v16; // zf
  int v17; // r3
  int *v18; // r5
  int v19; // r4
  unsigned int *v20; // r7
  int *v21; // r6
  unsigned int v22; // r10
  int v23; // r9
  unsigned int v24; // r11
  unsigned int v25; // r0
  int v26; // r2
  int v27; // r0
  _DWORD *v28; // r3
  int v29; // r2
  bool v30; // zf
  _DWORD *v32; // r0
  int v33; // r0
  unsigned int v34; // r2
  unsigned int v35; // t1
  int v36; // r3
  _DWORD **v37; // r3
  int v38; // r0
  int *v39; // r5
  int v40; // r4
  _DWORD *v41; // r1
  int v42; // r11
  _DWORD ***v43; // r7
  int *v44; // r8
  int v45; // r3
  _DWORD *v46; // r9
  unsigned int v47; // r10
  _DWORD *v48; // r0
  _BOOL4 v49; // r8
  _DWORD *v50; // r9
  int v51; // r0
  int v52; // r3
  int v53; // r0
  int *v54; // r4
  int v55; // t1
  int v56; // r0
  int v57; // r0
  _DWORD *v58; // r4
  int v59; // t1
  bool v60; // zf
  int v61; // r6
  int v62; // r0
  unsigned int v63; // r5
  _DWORD ***v64; // r7
  unsigned int v65; // r11
  _DWORD *v66; // r6
  _DWORD **v67; // r3
  int v68; // r0
  int v69; // r10
  int v70; // r7
  int v71; // r11
  int v72; // r4
  _DWORD *v73; // r6
  int v74; // r5
  unsigned int v75; // t1
  int v76; // r3
  unsigned int v77; // r2
  int v78; // r3
  int v79; // r10
  unsigned int v80; // r4
  _DWORD *v81; // lr
  _DWORD *v82; // r1
  int v83; // r0
  _DWORD *v84; // [sp+Ch] [bp-50h]
  int v85; // [sp+Ch] [bp-50h]
  unsigned int v86; // [sp+Ch] [bp-50h]
  int *v87; // [sp+Ch] [bp-50h]
  unsigned int v88; // [sp+10h] [bp-4Ch]
  int v89; // [sp+10h] [bp-4Ch]
  _DWORD *v90; // [sp+14h] [bp-48h]
  _DWORD ***v92; // [sp+1Ch] [bp-40h]
  _DWORD *v93; // [sp+20h] [bp-3Ch]
  unsigned int v94; // [sp+20h] [bp-3Ch]
  int v95; // [sp+24h] [bp-38h]
  int v96; // [sp+28h] [bp-34h]
  int v97; // [sp+2Ch] [bp-30h]
  unsigned int v98; // [sp+2Ch] [bp-30h]
  _DWORD *v99; // [sp+30h] [bp-2Ch]
  unsigned int v100; // [sp+34h] [bp-28h]
  int v102; // [sp+3Ch] [bp-20h]
  int v103; // [sp+48h] [bp-14h]

  if ( !sub_B85B0(a1[2]) && !sub_B85B0(a1[3]) )
  {
    v28 = (_DWORD *)a1[2];
    if ( v28 != a3 )
    {
      v29 = (int)a3;
      if ( a3 )
        v29 = 1;
      if ( a4 )
        v29 = 0;
      if ( v29 )
        return sub_C74CC((int)a1, a2, (int)a3, 0, a7);
    }
    v30 = a3 == 0;
    if ( !a3 )
      v30 = a4 == 1;
    if ( v30 )
    {
      if ( v28 != (_DWORD *)*a6 )
        return sub_C74CC((int)a1, a2, *a6, *a5, a7);
      goto LABEL_77;
    }
  }
  if ( !a3 )
  {
LABEL_77:
    v10 = 0;
    v102 = 0;
    v11 = 0;
    v93 = 0;
    v97 = 0;
    v99 = 0;
    goto LABEL_7;
  }
  v99 = (_DWORD *)sub_C6214((int)a1);
  if ( !v99 )
  {
    sub_D0048(16, 187, 113, "crypto/ec/ec_mult.c", 463);
    goto LABEL_93;
  }
  v9 = a1[25];
  v93 = (_DWORD *)v9;
  if ( !v9 )
  {
    v10 = 1;
    v11 = 1;
    v102 = 1;
    v97 = 1;
    goto LABEL_7;
  }
  if ( *(_DWORD *)(v9 + 8) )
  {
    v10 = sub_C6EFC(a1, v99, **(_DWORD ***)(v9 + 16));
    if ( !v10 )
    {
      v61 = v93[1];
      v62 = sub_B85BC(a3);
      v63 = v93[2];
      if ( v93[5] == (1 << (v93[3] - 1)) * v63 )
      {
        v102 = 0;
        v11 = sub_189090(v62, v61) + 1;
        if ( v11 >= v63 )
          v11 = v63;
        v97 = v11;
        goto LABEL_7;
      }
      sub_D0048(16, 187, 68, "crypto/ec/ec_mult.c", 491);
LABEL_93:
      sub_C6490(0);
      v49 = 0;
      CRYPTO_free(0, "crypto/ec/ec_mult.c", 781);
      v92 = 0;
      CRYPTO_free(0, "crypto/ec/ec_mult.c", 782);
      goto LABEL_66;
    }
  }
  v10 = 1;
  v93 = 0;
  v11 = 1;
  v102 = 1;
  v97 = 1;
LABEL_7:
  v12 = v11 + a4;
  v13 = 4 * v12;
  v100 = v12;
  v95 = CRYPTO_malloc(4 * v12, "crypto/ec/ec_mult.c", 505);
  v96 = CRYPTO_malloc(v13, "crypto/ec/ec_mult.c", 506);
  v14 = (_DWORD *)CRYPTO_malloc(v13 + 4, "crypto/ec/ec_mult.c", 508);
  v90 = v14;
  v15 = CRYPTO_malloc(v13, "crypto/ec/ec_mult.c", 509);
  v92 = (_DWORD ***)v15;
  if ( v14 )
  {
    v16 = v96 == 0;
    if ( v96 )
      v16 = v95 == 0;
    *v14 = 0;
    v17 = v16;
    if ( v16 )
    {
      sub_D0048(16, 187, 65, "crypto/ec/ec_mult.c", 516);
      v56 = 0;
    }
    else
    {
      if ( v15 )
      {
        v88 = a4 + v10;
        if ( a4 + v10 )
        {
          v18 = a6;
          v19 = v17;
          v20 = (unsigned int *)v96;
          v21 = v14;
          v84 = a3;
          v22 = v17;
          v23 = v95 - 4;
          v24 = v17;
          while ( 1 )
          {
            if ( a4 <= v24 )
            {
              v25 = sub_B85BC(v84);
              if ( v25 >= 0x7D0 )
              {
                v32 = v84;
                v19 += 32;
                *(_DWORD *)(v23 + 4) = 6;
                v23 += 4;
                v21[1] = 0;
                goto LABEL_39;
              }
            }
            else
            {
              v25 = sub_B85BC((_DWORD *)*v18);
              if ( v25 >= 0x7D0 )
              {
                *(_DWORD *)(v23 + 4) = 6;
                v23 += 4;
                v19 += 32;
                v21[1] = 0;
LABEL_59:
                v51 = sub_133380(*v18);
                *v21++ = v51;
                if ( !v51 )
                  goto LABEL_60;
                goto LABEL_40;
              }
            }
            if ( v25 >= 0x320 )
            {
              v26 = 16;
              v27 = 5;
            }
            else if ( v25 >= 0x12C )
            {
              v26 = 8;
              v27 = 4;
            }
            else if ( v25 > 0x45 )
            {
              v26 = 4;
              v27 = 3;
            }
            else if ( v25 <= 0x13 )
            {
              v26 = 1;
              v27 = 1;
            }
            else
            {
              v26 = 2;
              v27 = 2;
            }
            *(_DWORD *)(v23 + 4) = v27;
            v23 += 4;
            v19 += v26;
            v21[1] = 0;
            if ( a4 > v24 )
              goto LABEL_59;
            v32 = v84;
LABEL_39:
            v33 = sub_133380(v32);
            *v21++ = v33;
            if ( !v33 )
              goto LABEL_60;
LABEL_40:
            v35 = *v20++;
            v34 = v35;
            ++v24;
            ++v18;
            if ( v22 < v35 )
              v22 = v34;
            if ( v24 == v88 )
            {
              a3 = v84;
              v103 = v19;
              goto LABEL_44;
            }
          }
        }
        v103 = a4 + v10;
        v22 = a4 + v10;
LABEL_44:
        if ( v97 )
        {
          if ( v93 )
          {
            if ( v102 )
            {
              sub_D0048(16, 187, 68, "crypto/ec/ec_mult.c", 555);
            }
            else
            {
              *(_DWORD *)(v95 + 4 * a4) = v93[3];
              v36 = sub_133380(a3);
              if ( v36 )
              {
                v90[a4] = v36;
                v90[a4 + 1] = 0;
                v100 = a4 + 1;
                v37 = (_DWORD **)v93[4];
                *(_DWORD *)(v96 + 4 * a4) = 0;
                v92[a4] = v37;
                goto LABEL_49;
              }
            }
LABEL_60:
            v49 = 0;
            v39 = 0;
            v50 = 0;
            goto LABEL_61;
          }
          if ( !v102 )
          {
            v49 = 0;
            v39 = 0;
            v50 = 0;
            sub_D0048(16, 187, 68, "crypto/ec/ec_mult.c", 546);
            goto LABEL_61;
          }
        }
LABEL_49:
        v38 = CRYPTO_malloc(4 * (v103 + 1), "crypto/ec/ec_mult.c", 655);
        v39 = (int *)v38;
        if ( !v38 )
        {
          sub_D0048(16, 187, 65, "crypto/ec/ec_mult.c", 657);
          v49 = 0;
          v50 = 0;
          goto LABEL_61;
        }
        v40 = 4 * (v103 + 1) - 4;
        *(_DWORD *)(v38 + v40) = 0;
        v85 = v38 + v40;
        if ( v88 )
        {
          v41 = (_DWORD *)v38;
          v42 = 0;
          v98 = a4;
          v43 = v92 - 1;
          v44 = (int *)v95;
          v94 = v22;
          do
          {
            v45 = *v44;
            v43[1] = (_DWORD **)v41;
            ++v43;
            if ( 1 << (v45 - 1) )
            {
              v46 = v41;
              v47 = 0;
              do
              {
                ++v47;
                v48 = sub_C63F4(a1);
                *v46++ = v48;
                v41 = v46;
                if ( !v48 )
                {
                  v49 = 0;
                  v50 = 0;
                  goto LABEL_61;
                }
              }
              while ( 1 << (*v44 - 1) > v47 );
            }
            ++v42;
            ++v44;
          }
          while ( v42 != v88 );
          v22 = v94;
          a4 = v98;
        }
        else
        {
          v41 = (_DWORD *)v38;
        }
        if ( (_DWORD *)v85 != v41 )
        {
          v49 = 0;
          sub_D0048(16, 187, 68, "crypto/ec/ec_mult.c", 674);
          v50 = 0;
          goto LABEL_61;
        }
        v50 = sub_C63F4(a1);
        if ( !v50 )
        {
          v49 = 0;
          goto LABEL_61;
        }
        if ( v88 )
        {
          v64 = v92;
          v65 = 0;
          v66 = (_DWORD *)v95;
          v86 = v22;
          do
          {
            v67 = *v64;
            if ( a4 <= v65 )
            {
              v68 = sub_C6594(*v67, v99);
              if ( !v68 )
                goto LABEL_133;
            }
            else
            {
              v68 = sub_C6594(*v67, a5[v65]);
              if ( !v68 )
                goto LABEL_133;
            }
            if ( *v66 > 1u )
            {
              v68 = sub_C6BFC(a1, v50, **v64);
              if ( !v68 )
                goto LABEL_133;
              if ( (unsigned int)(1 << (*v66 - 1)) > 1 )
              {
                v79 = 0;
                v80 = 1;
                do
                {
                  v81 = (*v64)[v79++];
                  v82 = (*v64)[v80++];
                  if ( !sub_C6B60(a1, v82, v81, v50) )
                  {
                    v49 = 0;
                    goto LABEL_61;
                  }
                }
                while ( 1 << (*v66 - 1) > v80 );
              }
            }
            ++v65;
            ++v64;
            ++v66;
          }
          while ( v65 != v88 );
          v22 = v86;
        }
        v68 = sub_C7170(a1, v103, v39, a7);
        if ( !v68 )
          goto LABEL_133;
        v69 = v22 - 1;
        v70 = 1;
        v71 = 0;
        v87 = v39;
        while ( 1 )
        {
          if ( v69 < 0 )
          {
            v39 = v87;
            if ( v70 )
            {
              v49 = sub_C6A30((int)a1, a2) != 0;
            }
            else if ( v71 )
            {
              v49 = sub_C6C74(a1, a2) != 0;
            }
            else
            {
              v49 = 1;
            }
            goto LABEL_61;
          }
          if ( !v70 && !sub_C6BFC(a1, a2, a2) )
          {
LABEL_146:
            v49 = 0;
            v39 = v87;
            goto LABEL_61;
          }
          if ( v100 )
            break;
LABEL_131:
          --v69;
        }
        v72 = 0;
        v73 = v92;
        v74 = v96 - 4;
        while ( 1 )
        {
          v75 = *(_DWORD *)(v74 + 4);
          v74 += 4;
          if ( v75 > v69 )
          {
            v76 = v90[v72];
            v77 = *(char *)(v76 + v69);
            if ( *(_BYTE *)(v76 + v69) )
            {
              v78 = abs8(*(_BYTE *)(v76 + v69));
              if ( v71 != v77 >> 31 )
              {
                if ( !v70 )
                {
                  v89 = v78;
                  v83 = sub_C6C74(a1, a2);
                  v78 = v89;
                  if ( !v83 )
                    goto LABEL_146;
                }
                v71 ^= 1u;
              }
              if ( v70 )
              {
                v68 = sub_C6594(a2, *(_DWORD **)(*v73 + 4 * (v78 >> 1)));
                if ( !v68 )
                {
                  v39 = v87;
LABEL_133:
                  v49 = v68;
LABEL_61:
                  sub_C6490((int)v50);
                  CRYPTO_free(v95, "crypto/ec/ec_mult.c", 781);
                  CRYPTO_free(v96, "crypto/ec/ec_mult.c", 782);
                  v52 = *v90;
                  if ( !*v90 )
                  {
LABEL_62:
                    CRYPTO_free(v90, "crypto/ec/ec_mult.c", 789);
                    if ( v39 )
                    {
                      v53 = *v39;
                      v54 = v39;
                      if ( *v39 )
                      {
                        do
                        {
                          sub_C6508(v53);
                          v55 = v54[1];
                          ++v54;
                          v53 = v55;
                        }
                        while ( v55 );
                      }
                      CRYPTO_free(v39, "crypto/ec/ec_mult.c", 795);
                    }
                    goto LABEL_66;
                  }
LABEL_70:
                  v57 = v52;
                  v58 = v90;
                  do
                  {
                    CRYPTO_free(v57, "crypto/ec/ec_mult.c", 787);
                    v59 = v58[1];
                    ++v58;
                    v57 = v59;
                  }
                  while ( v59 );
                  goto LABEL_62;
                }
                if ( !sub_C7438((int)a1) )
                {
                  v49 = 0;
                  v39 = v87;
                  sub_D0048(16, 187, 163, "crypto/ec/ec_mult.c", 753);
                  goto LABEL_61;
                }
                v70 = 0;
              }
              else if ( !sub_C6B60(a1, a2, a2, *(_DWORD **)(*v73 + 4 * (v78 >> 1))) )
              {
                goto LABEL_146;
              }
            }
          }
          ++v72;
          ++v73;
          if ( v100 == v72 )
            goto LABEL_131;
        }
      }
      sub_D0048(16, 187, 65, "crypto/ec/ec_mult.c", 516);
      v56 = (int)v92;
    }
    sub_C6490(v56);
    CRYPTO_free(v95, "crypto/ec/ec_mult.c", 781);
    v39 = 0;
    CRYPTO_free(v96, "crypto/ec/ec_mult.c", 782);
    v49 = 0;
    v52 = *v14;
    if ( !*v14 )
    {
      v49 = 0;
      CRYPTO_free(v14, "crypto/ec/ec_mult.c", 789);
      goto LABEL_66;
    }
    goto LABEL_70;
  }
  v60 = v95 == 0;
  if ( v95 )
    v60 = v96 == 0;
  v49 = v60;
  if ( v60 )
  {
    sub_D0048(16, 187, 65, "crypto/ec/ec_mult.c", 516);
    v49 = 0;
  }
  else
  {
    sub_D0048(16, 187, 65, "crypto/ec/ec_mult.c", 516);
  }
  sub_C6490(v49);
  CRYPTO_free(v95, "crypto/ec/ec_mult.c", 781);
  CRYPTO_free(v96, "crypto/ec/ec_mult.c", 782);
LABEL_66:
  CRYPTO_free(v92, "crypto/ec/ec_mult.c", 797);
  return v49;
}

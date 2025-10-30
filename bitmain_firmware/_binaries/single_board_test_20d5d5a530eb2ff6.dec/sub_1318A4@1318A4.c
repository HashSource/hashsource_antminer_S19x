int __fastcall sub_1318A4(int *a1, int *a2, _DWORD *a3, int a4, int ***a5, int *a6)
{
  int v10; // r4
  int v11; // r11
  int **v12; // r1
  int v13; // r3
  int v14; // r8
  int **v16; // r0
  _BOOL4 v17; // r4
  int *v18; // r0
  int v19; // r2
  int v20; // r2
  signed int v21; // r2
  char *v22; // r5
  char **v23; // r3
  int v24; // r9
  _UNKNOWN **v25; // r0
  int v26; // r1
  char *v27; // r3
  char *v28; // r1
  int v29; // t1
  int v30; // r0
  int *v31; // r3
  char *v32; // r0
  char *v33; // r2
  int v34; // t1
  int v35; // r1
  int v36; // r0
  char *v37; // r3
  char *v38; // r0
  char *v39; // r2
  int v40; // t1
  int v41; // r9
  int *v42; // r4
  int *v43; // r6
  int *v44; // r10
  int v45; // r0
  char *v46; // r3
  int v47; // r2
  char *v48; // r0
  int v49; // t1
  int v50; // r1
  int v51; // r1
  int v52; // r4
  int v53; // r2
  int v54; // r3
  int v55; // r2
  int v56; // r0
  int v57; // lr
  int v58; // r1
  unsigned int v59; // r12
  int v60; // r3
  int v61; // r9
  int *v62; // r11
  int v63; // r8
  int *v64; // r4
  int v65; // r10
  int v66; // r9
  int v67; // r1
  int v68; // r3
  int v69; // r3
  int v70; // r3
  int v71; // r12
  int v72; // r0
  unsigned int v73; // r2
  int *v74; // r9
  char v75; // [sp+8h] [bp+0h] BYREF
  _DWORD *v76; // [sp+Ch] [bp+4h]
  int *v77; // [sp+10h] [bp+8h]
  int *v78; // [sp+14h] [bp+Ch]
  int v79; // [sp+18h] [bp+10h]
  char **v80; // [sp+1Ch] [bp+14h]
  void *v81; // [sp+20h] [bp+18h]
  unsigned int v82; // [sp+24h] [bp+1Ch]
  size_t n; // [sp+28h] [bp+20h]
  int *v84; // [sp+2Ch] [bp+24h]
  char *v85; // [sp+30h] [bp+28h] BYREF
  int v86; // [sp+34h] [bp+2Ch]
  int v87; // [sp+38h] [bp+30h]
  int v88; // [sp+3Ch] [bp+34h]
  int v89; // [sp+40h] [bp+38h]
  char *v90; // [sp+44h] [bp+3Ch] BYREF
  int v91; // [sp+48h] [bp+40h]
  int v92; // [sp+4Ch] [bp+44h]
  int v93; // [sp+50h] [bp+48h]
  int v94; // [sp+54h] [bp+4Ch]

  if ( sub_B870C(a4) )
  {
    v10 = a3[1] << 6;
    if ( v10 )
    {
      v11 = *(_DWORD *)(a4 + 4);
      sub_130BC0((int)a5);
      if ( a6 )
      {
        v84 = a6;
      }
      else
      {
        v18 = sub_B9478();
        v84 = v18;
        if ( !v18 || !sub_B94F0((int)v18, (int **)a4, (int)a5) )
          goto LABEL_24;
      }
      if ( a2[3] || sub_B82F8(a2, (int *)a4) >= 0 )
      {
        v16 = sub_130CCC(a5, v12);
        v81 = v16;
        if ( !v16 || !sub_1337FC(v16, a2, a4, a5) )
          goto LABEL_18;
      }
      else
      {
        v81 = a2;
      }
      if ( v10 > 937 )
      {
        v13 = 64;
        v14 = 64;
        v79 = 6;
      }
      else if ( v10 > 306 )
      {
        v13 = 32;
        v79 = 5;
        v14 = 32;
      }
      else if ( v10 > 89 )
      {
        v13 = 16;
        v79 = 4;
        v14 = 16;
      }
      else if ( v10 <= 22 )
      {
        v13 = 2;
        v79 = 1;
        v14 = 2;
      }
      else
      {
        v13 = 8;
        v79 = 3;
        v14 = 8;
      }
      v19 = v14 * v11;
      v80 = (char **)v13;
      if ( 2 * v11 < v14 )
        v20 = v19 + v14;
      else
        v20 = v19 + 2 * v11;
      v21 = 4 * v20;
      n = v21;
      if ( v21 < 3072 )
      {
        v82 = 0;
        v22 = (char *)(((unsigned int)&v75 & 0xFFFFFFC0) + 64);
        memset(v22, 0, v21);
        v23 = v80;
LABEL_31:
        v24 = 0;
        v92 = v11;
        v94 = 2;
        v89 = 2;
        v87 = v11;
        v91 = 0;
        v85 = &v22[(_DWORD)v23 * 4 * v11];
        v90 = &v85[4 * v11];
        v80 = &v85;
        v86 = 0;
        v93 = 0;
        v88 = 0;
        v25 = sub_B81FC();
        if ( !sub_B943C((int *)v80, (int)v25, v84, (int)a5) )
          goto LABEL_32;
        v78 = (int *)&v90;
        if ( !sub_B943C((int *)&v90, (int)v81, v84, (int)a5) )
          goto LABEL_32;
        v26 = v86;
        v27 = v85;
        if ( v86 >= v11 )
          v26 = v11;
        if ( v26 > 0 )
        {
          v28 = &v85[4 * v26];
          do
          {
            v29 = *(_DWORD *)v27;
            v27 += 4;
            *(_DWORD *)&v22[4 * v24] = v29;
            v24 += v14;
          }
          while ( v27 != v28 );
        }
        v30 = v91;
        v31 = (int *)v90;
        if ( v91 >= v11 )
          v30 = v11;
        if ( v30 > 0 )
        {
          v32 = &v90[4 * v30];
          v33 = v22;
          do
          {
            v34 = *v31++;
            *((_DWORD *)v33 + 1) = v34;
            v33 += 4 * v14;
          }
          while ( v31 != (int *)v32 );
        }
        if ( v79 == 1 )
        {
          v35 = 1;
        }
        else
        {
          if ( !sub_B9348((int *)v80, (int)v78, (int)v78, v84, (int)a5) )
            goto LABEL_32;
          v36 = v86;
          v37 = v85;
          if ( v86 >= v11 )
            v36 = v11;
          if ( v36 > 0 )
          {
            v38 = &v85[4 * v36];
            v39 = v22;
            do
            {
              v40 = *(_DWORD *)v37;
              v37 += 4;
              *((_DWORD *)v39 + 2) = v40;
              v39 += 4 * v14;
            }
            while ( v37 != v38 );
          }
          if ( v14 > 3 )
          {
            v81 = (void *)v10;
            v41 = 3;
            v77 = a1;
            v76 = a3;
            v42 = (int *)v80;
            v43 = v84;
            v44 = v78;
            while ( sub_B9348(v42, (int)v44, (int)v42, v43, (int)a5) )
            {
              v45 = v86;
              v46 = v85;
              if ( v86 >= v11 )
                v45 = v11;
              if ( v45 > 0 )
              {
                v47 = v41;
                v48 = &v85[4 * v45];
                do
                {
                  v49 = *(_DWORD *)v46;
                  v46 += 4;
                  *(_DWORD *)&v22[4 * v47] = v49;
                  v47 += v14;
                }
                while ( v48 != v46 );
              }
              if ( ++v41 == v14 )
              {
                v10 = (int)v81;
                a1 = v77;
                a3 = v76;
                goto LABEL_72;
              }
            }
            goto LABEL_32;
          }
LABEL_72:
          v35 = v79;
        }
        sub_18959C(v10 - 1, v35);
        v51 = v50 + 1;
        v52 = v10 - v51;
        v53 = (v52 + 63) & (v52 >> 31);
        if ( v52 >= 0 )
          v53 = v52;
        v54 = (1 << v51) - 1;
        v55 = v53 >> 6;
        if ( v55 < 0 || (v56 = a3[1], v55 >= v56) )
        {
          v60 = 0;
        }
        else
        {
          v57 = *a3;
          v58 = v52 & 0x3F;
          if ( v52 <= 0 )
            v58 = -(-v52 & 0x3F);
          v59 = *(_DWORD *)(v57 + 4 * v55);
          if ( v58 )
          {
            v59 >>= v58;
            if ( v56 > v55 + 1 )
              v59 |= *(_DWORD *)(v57 + 4 * v55 + 4) << (64 - v58);
          }
          v60 = v59 & v54;
        }
        if ( sub_1312B8(v80, v11, (int *)v22, v60, v79) )
        {
          v61 = v14 - 1;
          if ( v52 <= 0 )
          {
LABEL_103:
            v17 = sub_B9428(a1, (int)v80, v84, (int)a5) != 0;
            goto LABEL_33;
          }
          v81 = (void *)v11;
          v62 = v84;
          v63 = v52 - v79;
          v64 = (int *)v80;
          v77 = a1;
          v65 = v79;
          v79 = v61;
LABEL_86:
          v66 = 0;
          while ( 1 )
          {
            ++v66;
            if ( !sub_B9348(v64, (int)v64, (int)v64, v62, (int)a5) )
              break;
            if ( v65 == v66 )
            {
              v67 = a3[1];
              v68 = (v63 + 63) & (v63 >> 31);
              if ( v63 >= 0 )
                v68 = v63;
              v69 = v68 >> 6;
              if ( v69 < v67 )
              {
                v71 = *a3;
                v72 = v63 & 0x3F;
                if ( v63 <= 0 )
                  v72 = -(-v63 & 0x3F);
                v73 = *(_DWORD *)(v71 + 4 * v69);
                if ( v72 )
                {
                  v73 >>= v72;
                  if ( v67 > v69 + 1 )
                    v73 |= *(_DWORD *)(4 * v69 + v71 + 4) << (64 - v72);
                }
                v70 = v79 & v73;
              }
              else
              {
                v70 = 0;
              }
              v74 = v78;
              if ( !sub_1312B8(v78, (int)v81, (int *)v22, v70, v65) || !sub_B9348(v64, (int)v64, (int)v74, v62, (int)a5) )
                break;
              v63 -= v65;
              if ( v65 + v63 > 0 )
                goto LABEL_86;
              a1 = v77;
              goto LABEL_103;
            }
          }
        }
LABEL_32:
        v17 = 0;
LABEL_33:
        if ( !a6 )
          sub_B94B4(v84);
        sub_E07F8(v22, n);
        CRYPTO_free((void *)v82);
        goto LABEL_19;
      }
      v82 = (unsigned int)CRYPTO_malloc((void *)(n + 64));
      if ( v82 )
      {
        v22 = (char *)((v82 & 0xFFFFFFC0) + 64);
        memset(v22, 0, n);
        v23 = v80;
        goto LABEL_31;
      }
LABEL_18:
      v17 = 0;
      if ( a6 )
      {
LABEL_19:
        sub_130C74(a5);
        return v17;
      }
LABEL_24:
      v17 = 0;
      sub_B94B4(v84);
      goto LABEL_19;
    }
    if ( !sub_B8590(a4, 1) )
    {
      sub_B8930((int **)a1, 1);
      __asm { POP.W           {R4-R11,PC} }
    }
    sub_B8930((int **)a1, 0);
    return 1;
  }
  else
  {
    sub_D0048(3, 124, 102, (int)"crypto/bn/bn_exp.c", 615);
    return 0;
  }
}

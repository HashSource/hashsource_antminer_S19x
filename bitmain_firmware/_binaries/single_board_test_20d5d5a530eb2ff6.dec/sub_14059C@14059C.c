int __fastcall sub_14059C(
        _DWORD *a1,
        unsigned int a2,
        unsigned int a3,
        _DWORD *a4,
        void *src,
        size_t n,
        int a7,
        void *dest,
        _DWORD *a9,
        _DWORD *a10,
        _DWORD *a11)
{
  int *v14; // r9
  int v15; // r0
  int v16; // r3
  bool v17; // nf
  void *v18; // r3
  bool v19; // zf
  int ***v20; // r8
  int **v21; // r1
  int **v22; // r1
  int *v23; // r7
  int **v24; // r1
  int **v25; // r1
  int **v26; // r1
  int **v27; // r1
  int **v28; // r1
  int *v29; // r5
  int *v30; // r6
  int *v31; // r0
  int v32; // r4
  void *v34; // r11
  char *v35; // r10
  int ***v36; // r0
  int v37; // r3
  unsigned int j; // r6
  int *v39; // r0
  int **v40; // r5
  int **v41; // r1
  int **v42; // r6
  int *v43; // r0
  unsigned int v44; // r3
  int **v45; // r8
  int v46; // r11
  int v47; // r2
  _BYTE *v48; // r3
  int v49; // r3
  _BOOL4 v50; // r0
  char *v51; // r9
  int v52; // r5
  int i; // r6
  char v54; // r3
  size_t v55; // r2
  char *v56; // r1
  char v57; // r3
  int *v59; // r0
  _BOOL4 v60; // r0
  int v61; // r3
  int v63; // r0
  int v64; // r0
  int v65; // r0
  int v66; // r0
  int v67; // r3
  bool v68; // zf
  int *v70; // [sp+10h] [bp-9Ch]
  int v71; // [sp+14h] [bp-98h]
  int v73; // [sp+18h] [bp-94h]
  int v75; // [sp+1Ch] [bp-90h]
  int ***v76; // [sp+1Ch] [bp-90h]
  void **v77; // [sp+20h] [bp-8Ch]
  void *v78; // [sp+24h] [bp-88h]
  int *v79; // [sp+28h] [bp-84h]
  int **v80; // [sp+2Ch] [bp-80h]
  int **v81; // [sp+30h] [bp-7Ch]
  int v82; // [sp+30h] [bp-7Ch]
  int **v83; // [sp+34h] [bp-78h]
  int v84; // [sp+34h] [bp-78h]
  int *v85; // [sp+38h] [bp-74h]
  int v86; // [sp+3Ch] [bp-70h]
  signed int v87; // [sp+44h] [bp-68h]
  int v88; // [sp+48h] [bp-64h]
  int v89; // [sp+4Ch] [bp-60h]
  int *v90; // [sp+50h] [bp-5Ch]
  int *v91; // [sp+54h] [bp-58h]
  int v92; // [sp+58h] [bp-54h]
  _BYTE *v93; // [sp+5Ch] [bp-50h]
  _DWORD *v94; // [sp+64h] [bp-48h]
  _BYTE v95[68]; // [sp+68h] [bp-44h] BYREF

  v14 = (int *)sub_D14F4();
  if ( !v14 )
  {
    v20 = 0;
    v70 = 0;
    v34 = 0;
    v35 = 0;
    v32 = -1;
    goto LABEL_29;
  }
  if ( a3 >= a2 )
  {
    v20 = 0;
    sub_D0048(10, 126, 112, (int)"crypto/dsa/dsa_gen.c", 331);
    v32 = -1;
    v70 = 0;
    v34 = 0;
    v35 = 0;
    goto LABEL_29;
  }
  if ( !a4 )
  {
    if ( a3 == 160 )
    {
      a4 = sub_D93D8();
      v15 = sub_D8C78((int)a4);
      goto LABEL_5;
    }
    if ( a3 == 224 )
      a4 = sub_D93E4();
    else
      a4 = sub_D93F0();
  }
  v15 = sub_D8C78((int)a4);
LABEL_5:
  v71 = v15;
  if ( !a1[2] )
    goto LABEL_11;
  v16 = a1[3];
  v17 = v16 < 0;
  if ( v16 )
    v17 = a7 < 0;
  if ( !v17 )
  {
LABEL_11:
    v18 = (void *)n;
    if ( !n )
      v18 = (void *)v15;
    n = (size_t)v18;
    v35 = (char *)CRYPTO_malloc(v18);
    v34 = dest;
    if ( !dest )
      v34 = CRYPTO_malloc((void *)n);
    v19 = v34 == 0;
    if ( v34 )
      v19 = v35 == 0;
    if ( v19 )
    {
      v20 = 0;
      v32 = -1;
      v70 = 0;
      goto LABEL_29;
    }
    if ( src )
      memcpy(v35, src, n);
    v36 = (int ***)sub_130B08();
    v20 = v36;
    if ( v36 )
      goto LABEL_21;
LABEL_35:
    v70 = (int *)v36;
    v32 = -1;
    goto LABEL_29;
  }
  v34 = 0;
  v35 = 0;
  v36 = (int ***)sub_130B08();
  v20 = v36;
  if ( !v36 )
    goto LABEL_35;
LABEL_21:
  v70 = sub_B9478();
  if ( !v70 )
    goto LABEL_28;
  sub_130BC0((int)v20);
  v80 = sub_130CCC(v20, v21);
  v23 = (int *)sub_130CCC(v20, v22);
  v83 = sub_130CCC(v20, v24);
  v85 = (int *)sub_130CCC(v20, v25);
  v81 = sub_130CCC(v20, v26);
  v77 = (void **)sub_130CCC(v20, v27);
  if ( !v77 )
    goto LABEL_28;
  v29 = (int *)a1[2];
  if ( v29 )
  {
    v30 = (int *)a1[3];
    if ( v30 )
    {
      v73 = 0;
      if ( a7 >= 0 )
        memcpy(v34, v35, n);
      goto LABEL_27;
    }
  }
  v40 = sub_130CCC(v20, v28);
  v42 = sub_130CCC(v20, v41);
  if ( !v42 )
    goto LABEL_28;
  v89 = a2 - 1;
  v43 = (int *)sub_B81FC();
  if ( !sub_BA5F8(v77, v43, a2 - 1) )
    goto LABEL_28;
  v44 = a2;
  v76 = v20;
  v94 = a1;
  v45 = v83;
  v92 = 4 * v44;
  v87 = a3 >> 3;
  v78 = v34;
  v93 = &v95[v71 - (a3 >> 3)];
  v86 = 8 * v71;
  v88 = 0;
  v46 = n - 1;
  v47 = 0;
  v90 = (int *)v42;
  v91 = (int *)v40;
  v79 = v14;
  while ( 1 )
  {
    if ( !sub_134EE0(a11, 0, v47) || !src && sub_F497C((int)v35, n) <= 0 || !sub_D18F0((int)v35, n, (int)v95, 0, a4, 0) )
      goto LABEL_101;
    if ( v87 >= v71 )
    {
      if ( v87 > v71 )
        memset(&v95[v71], 0, v87 - v71);
      v48 = v95;
    }
    else
    {
      v48 = v93;
    }
    *v48 |= 0x80u;
    v48[v87 - 1] |= 1u;
    if ( !sub_B8AEC(v48, v87, v90) )
      goto LABEL_101;
    v49 = (int)src;
    if ( src )
      v49 = 1;
    v50 = sub_134F20(v90, 64, v76, v49, a11);
    if ( v50 > 0 )
      break;
    if ( v50 )
      goto LABEL_101;
    if ( src )
    {
      v34 = v78;
      v32 = 0;
      v14 = v79;
      v20 = v76;
      sub_D0048(10, 126, 113, (int)"crypto/dsa/dsa_gen.c", 436);
      goto LABEL_29;
    }
LABEL_111:
    v47 = ++v88;
  }
  if ( dest )
    memcpy(dest, v35, n);
  if ( !sub_134EE0(a11, 2, 0) || !sub_134EE0(a11, 3, 0) )
  {
LABEL_101:
    v34 = v78;
    v32 = -1;
    v14 = v79;
    v20 = v76;
    goto LABEL_29;
  }
  v51 = &v35[v46];
  v73 = 0;
  v84 = sub_189090(v89, v86);
  while ( 1 )
  {
    sub_B8930(v45, 0);
    if ( v84 >= 0 )
    {
      v52 = 0;
      for ( i = 0; i <= v84; ++i )
      {
        if ( v46 >= 0 )
        {
          v54 = *v51 + 1;
          *v51 = v54;
          if ( !v54 )
          {
            v55 = n - 1;
            v56 = &v35[n - 2];
            do
            {
              if ( v55-- == 0 )
                break;
              v57 = *v56 + 1;
              *v56-- = v57;
            }
            while ( !v57 );
          }
        }
        if ( !sub_D18F0((int)v35, n, (int)v95, 0, a4, 0)
          || !sub_B8AEC(v95, v71, v80)
          || !sub_BA5F8((void **)v80, (int *)v80, v52)
          || !BN_add((int *)v45, (int *)v45, (int *)v80) )
        {
          goto LABEL_101;
        }
        v52 += v86;
      }
    }
    if ( !sub_B8C94((int *)v45, v89) )
      goto LABEL_101;
    if ( !sub_B89E4((int)v85, (int)v45) )
      goto LABEL_101;
    if ( !BN_add(v85, v85, (int *)v77) )
      goto LABEL_101;
    if ( !sub_BA234(v80, (int **)v90) )
      goto LABEL_101;
    if ( !sub_131220(0, v81, v85, v80, v76) )
      goto LABEL_101;
    v59 = (int *)sub_B81FC();
    if ( !BN_sub((int *)v80, (int *)v81, v59) || !BN_sub(v91, v85, (int *)v80) )
      goto LABEL_101;
    if ( sub_B8354(v91, (int *)v77) >= 0 )
      break;
LABEL_99:
    v61 = v73 + 1;
    if ( v92 <= ++v73 )
    {
      if ( !src )
        goto LABEL_111;
      v34 = v78;
      v14 = v79;
      v32 = 0;
      v20 = v76;
      sub_D0048(10, 126, 112, (int)"crypto/dsa/dsa_gen.c", 525);
      goto LABEL_29;
    }
    if ( !sub_134EE0(a11, 0, v61) )
      goto LABEL_101;
  }
  v60 = sub_134F20(v91, 64, v76, 1, a11);
  if ( v60 <= 0 )
  {
    if ( v60 )
      goto LABEL_101;
    goto LABEL_99;
  }
  v34 = v78;
  v30 = v90;
  v29 = v91;
  v14 = v79;
  v20 = v76;
  a1 = v94;
  if ( !sub_134EE0(a11, 2, 1) )
    goto LABEL_28;
LABEL_27:
  v31 = (int *)sub_B81FC();
  if ( !BN_sub((int *)v77, v29, v31) || !sub_131220(v80, 0, (int *)v77, v30, v20) )
  {
LABEL_28:
    v32 = -1;
    goto LABEL_29;
  }
  if ( a7 < 0 )
  {
    v63 = sub_B8930((int **)v77, 2);
    v37 = 2;
    if ( v63 )
      goto LABEL_44;
    goto LABEL_28;
  }
  v37 = 1;
LABEL_44:
  v75 = v37;
  if ( !sub_B94F0((int)v70, (int **)v29, (int)v20) )
    goto LABEL_28;
  v82 = (int)v30;
  for ( j = v75 + 1; ; ++j )
  {
    if ( a7 >= 0
      && ((v95[1] = (unsigned __int16)(j - 1) >> 8, v95[2] = j - 1, v95[0] = a7, !sub_D1520(v14, a4, 0))
       || !sub_D16D8((int)v14, (int)v34, n)
       || !sub_D16D8((int)v14, (int)"ggencrypto/dsa/dsa_gen.c", 4)
       || !sub_D16D8((int)v14, (int)v95, 3)
       || !sub_D16E4(v14, (int)v95, 0)
       || !sub_B8AEC(v95, v71, v77))
      || !BN_mod_exp_mont(v23, (int *)v77, v80, (int **)v29, v20, v70) )
    {
LABEL_59:
      v32 = -1;
      goto LABEL_29;
    }
    if ( !sub_B86D8((int)v23) )
      break;
    if ( a7 >= 0 )
    {
      if ( j >= 0x10000 )
        goto LABEL_59;
    }
    else
    {
      v39 = (int *)sub_B81FC();
      if ( !BN_add((int *)v77, (int *)v77, v39) )
        goto LABEL_59;
    }
  }
  if ( !sub_134EE0(a11, 3, 1) )
    goto LABEL_28;
  v64 = a1[2];
  if ( v29 != (int *)v64 )
  {
    sub_B895C(v64);
    a1[2] = sub_B8A2C((int)v29);
  }
  v65 = a1[3];
  if ( v82 != v65 )
  {
    sub_B895C(v65);
    a1[3] = sub_B8A2C(v82);
  }
  sub_B895C(a1[4]);
  v66 = sub_B8A2C((int)v23);
  v67 = a1[2];
  a1[4] = v66;
  if ( !v67 )
    goto LABEL_28;
  v68 = v66 == 0;
  if ( v66 )
    v68 = a1[3] == 0;
  if ( v68 )
    goto LABEL_28;
  if ( a9 )
    *a9 = v73;
  v32 = 1;
  if ( a10 )
  {
    v32 = 1;
    *a10 = j - 1;
  }
LABEL_29:
  CRYPTO_free(v35);
  if ( dest != v34 )
    CRYPTO_free(v34);
  sub_130C74(v20);
  sub_130B5C((void **)v20);
  sub_B94B4(v70);
  sub_D1504(v14);
  return v32;
}

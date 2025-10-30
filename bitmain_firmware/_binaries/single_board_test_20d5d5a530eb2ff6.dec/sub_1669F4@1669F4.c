int __fastcall sub_1669F4(_BYTE *a1, int a2, int a3, int a4, char *a5, int a6, int a7, _DWORD *a8, _DWORD *a9)
{
  _DWORD *v12; // r6
  int v13; // r0
  bool v14; // cc
  int v15; // r9
  char *v16; // r10
  char *v17; // r0
  char *v18; // r5
  _BYTE *v19; // r4
  char *v20; // r2
  int v21; // r3
  int v22; // r3
  int v23; // r7
  unsigned int v24; // r4
  bool v25; // cf
  char v26; // r3
  int v27; // r3
  unsigned int v28; // r1
  int *v29; // r6
  bool v30; // cf
  char v31; // r3
  int v32; // r3
  unsigned int v33; // r3
  unsigned int v34; // lr
  unsigned int v35; // r3
  int v36; // r12
  int v37; // r7
  unsigned int v38; // r2
  unsigned __int8 *v39; // r3
  unsigned int v40; // r6
  int v41; // r1
  int v42; // r4
  int *v43; // r0
  char *v44; // r11
  int v45; // r1
  int v46; // r4
  int v47; // r1
  int v48; // r4
  int v49; // r1
  int v50; // r4
  int v51; // r1
  int v52; // r4
  int v53; // r1
  int v54; // r4
  int v55; // r1
  int v56; // r4
  int v57; // r1
  int v58; // r4
  char *v59; // r0
  int *v60; // r7
  int v61; // r1
  int v62; // t1
  int v63; // t1
  int v64; // r3
  int v65; // r12
  int v66; // r6
  int v67; // r0
  int v68; // lr
  int v69; // r4
  int v70; // r7
  unsigned __int8 *v71; // r12
  int v72; // t1
  int v73; // r3
  int v74; // r1
  int v75; // r2
  int v76; // lr
  int v77; // r6
  int v78; // lr
  int v79; // r7
  int v80; // r0
  int v81; // r11
  int v82; // r6
  unsigned __int8 *v83; // r5
  unsigned __int8 *v84; // r4
  char v85; // t1
  int v86; // r4
  _BYTE *v87; // lr
  unsigned __int8 *v88; // r8
  char v89; // t1
  int v90; // r3
  int *v92; // r1
  char *v93; // r0
  char v94; // t1
  unsigned int v95; // r4
  unsigned __int8 *v96; // r1
  char v97; // t1
  char *v98; // [sp+Ch] [bp-E0h]
  unsigned __int8 *v99; // [sp+10h] [bp-DCh]
  int v100; // [sp+18h] [bp-D4h]
  int v101; // [sp+1Ch] [bp-D0h]
  int v103; // [sp+24h] [bp-C8h]
  int v104; // [sp+28h] [bp-C4h]
  int v105; // [sp+2Ch] [bp-C0h]
  char *v106; // [sp+34h] [bp-B8h]
  int v107; // [sp+38h] [bp-B4h]
  int v108; // [sp+68h] [bp-84h] BYREF
  int v109; // [sp+6Ch] [bp-80h] BYREF
  int v110; // [sp+70h] [bp-7Ch]
  int v111; // [sp+74h] [bp-78h]
  int v112; // [sp+78h] [bp-74h]
  int v113; // [sp+7Ch] [bp-70h]
  int v114; // [sp+80h] [bp-6Ch]
  int v115; // [sp+84h] [bp-68h]
  int v116; // [sp+88h] [bp-64h]
  int v117; // [sp+8Ch] [bp-60h]
  int v118; // [sp+90h] [bp-5Ch]
  int v119; // [sp+94h] [bp-58h]
  int v120; // [sp+98h] [bp-54h]
  int v121; // [sp+9Ch] [bp-50h]
  int v122; // [sp+A0h] [bp-4Ch]
  int v123; // [sp+A4h] [bp-48h]
  unsigned __int8 v124[64]; // [sp+A8h] [bp-44h] BYREF

  v12 = a9;
  if ( !a8 )
    a8 = sub_D93D8();
  if ( !a9 )
    v12 = a8;
  v13 = sub_D8C78((int)a8);
  v14 = a4 <= 0;
  if ( a4 > 0 )
    v14 = a2 <= 0;
  v15 = v13;
  if ( v14 )
    return -1;
  if ( a4 > (int)a5 || (v101 = v13 + 1, (int)a5 < 2 * (v13 + 1)) )
  {
    sub_D0048(4, 153, 121, (int)"crypto/rsa/rsa_oaep.c", 152);
    return -1;
  }
  else
  {
    v16 = &a5[-v13];
    v98 = &a5[-v13 - 1];
    v99 = (unsigned __int8 *)CRYPTO_malloc(v98);
    if ( v99 )
    {
      v17 = (char *)CRYPTO_malloc(a5);
      v18 = v17;
      if ( v17 )
      {
        v19 = (_BYTE *)(a3 + a4);
        v20 = &a5[(_DWORD)v17];
        if ( (int)a5 > 0 )
        {
          v18 = v17;
          do
          {
            v22 = ~(((a4 - 1) & ~a4) >> 31);
            v19 = (_BYTE *)((__PAIR64__((unsigned int)v19, (((a4 - 1) & ~a4) >> 31) & 1) - 1) >> 32);
            a4 = (__PAIR64__(a4, (((a4 - 1) & ~a4) >> 31) & 1) - 1) >> 32;
            v21 = (unsigned __int8)(v22 & *v19);
            *--v20 = v21;
          }
          while ( v20 != v17 );
        }
        else
        {
          v18 = &a5[(_DWORD)v17];
          v21 = (unsigned __int8)a5[(_DWORD)v17];
        }
        v23 = ((v21 - 1) & ~v21) >> 31;
        v24 = (unsigned int)&v18[v101];
        v100 = v23;
        if ( sub_166460((int)&v108, v15, (int)&v18[v101], (int)v98, v12) )
        {
          v79 = ~v23;
          v77 = -1;
        }
        else
        {
          if ( v15 > 0 )
          {
            v25 = v18 + 1 >= (char *)&v109;
            if ( v18 + 1 < (char *)&v109 )
              v25 = &v108 >= (int *)(v18 + 5);
            v26 = v25;
            if ( (unsigned int)v15 <= 5 )
              v26 = 0;
            v27 = v26 & 1;
            if ( (((_BYTE)v18 + 1) & 3) != 0 )
              v27 = 0;
            if ( v27 )
            {
              v108 ^= *(_DWORD *)(v18 + 1);
              v28 = 4 * (((unsigned int)(v15 - 4) >> 2) + 1);
              if ( (unsigned int)(v15 - 4) >> 2 )
              {
                v109 ^= *(_DWORD *)(v18 + 5);
                if ( (unsigned int)(v15 - 4) >> 2 != 1 )
                {
                  v110 ^= *(_DWORD *)(v18 + 9);
                  if ( (unsigned int)(v15 - 4) >> 2 != 2 )
                  {
                    v111 ^= *(_DWORD *)(v18 + 13);
                    if ( (unsigned int)(v15 - 4) >> 2 != 3 )
                    {
                      v112 ^= *(_DWORD *)(v18 + 17);
                      if ( (unsigned int)(v15 - 4) >> 2 != 4 )
                      {
                        v113 ^= *(_DWORD *)(v18 + 21);
                        if ( (unsigned int)(v15 - 4) >> 2 != 5 )
                        {
                          v114 ^= *(_DWORD *)(v18 + 25);
                          if ( (unsigned int)(v15 - 4) >> 2 != 6 )
                          {
                            v115 ^= *(_DWORD *)(v18 + 29);
                            if ( (unsigned int)(v15 - 4) >> 2 != 7 )
                            {
                              v116 ^= *(_DWORD *)(v18 + 33);
                              if ( (unsigned int)(v15 - 4) >> 2 != 8 )
                              {
                                v117 ^= *(_DWORD *)(v18 + 37);
                                if ( (unsigned int)(v15 - 4) >> 2 != 9 )
                                {
                                  v118 ^= *(_DWORD *)(v18 + 41);
                                  if ( (unsigned int)(v15 - 4) >> 2 != 10 )
                                  {
                                    v119 ^= *(_DWORD *)(v18 + 45);
                                    if ( (unsigned int)(v15 - 4) >> 2 != 11 )
                                    {
                                      v120 ^= *(_DWORD *)(v18 + 49);
                                      if ( (unsigned int)(v15 - 4) >> 2 != 12 )
                                      {
                                        v121 ^= *(_DWORD *)(v18 + 53);
                                        if ( (unsigned int)(v15 - 4) >> 2 != 13 )
                                        {
                                          v122 ^= *(_DWORD *)(v18 + 57);
                                          if ( (unsigned int)(v15 - 4) >> 2 != 14 )
                                            v123 ^= *(_DWORD *)(v18 + 61);
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
              if ( v15 != v28 )
              {
                *((_BYTE *)&v108 + v28) ^= v18[v28 + 1];
                if ( v15 > (int)(v28 + 1) )
                {
                  *((_BYTE *)&v108 + v28 + 1) ^= v18[v28 + 2];
                  if ( v15 > (int)(v28 + 2) )
                    *((_BYTE *)&v108 + v28 + 2) ^= v18[v28 + 3];
                }
              }
            }
            else
            {
              v92 = &v108;
              v93 = v18;
              do
              {
                v94 = *++v93;
                *(_BYTE *)v92 ^= v94;
                v92 = (int *)((char *)v92 + 1);
              }
              while ( v92 != (int *)((char *)&v108 + v15) );
            }
          }
          v103 = sub_166460((int)v99, (int)v98, (int)&v108, v15, v12);
          if ( v103 )
            goto LABEL_88;
          if ( (int)v98 > 0 )
          {
            v29 = (int *)v99;
            v30 = v24 >= (unsigned int)(v99 + 4);
            if ( v24 < (unsigned int)(v99 + 4) )
              v30 = v99 >= (unsigned __int8 *)&v18[v15 + 5];
            v31 = v30;
            if ( (unsigned int)v98 <= 6 )
              v31 = 0;
            v32 = v31 & 1;
            if ( (((unsigned __int8)v99 | (unsigned __int8)v24) & 3) != 0 )
              v32 = 0;
            if ( v32 )
            {
              v33 = (unsigned int)(v16 - 5) >> 2;
              v34 = v33 + 1;
              v35 = v33 - 8;
              v36 = 4 * v34;
              if ( v35 > 0xFFFFFFF6 )
              {
                v44 = &v18[v101];
                v38 = 0;
              }
              else
              {
                v37 = 0;
                v38 = (v35 & 0xFFFFFFF8) + 8;
                v39 = v99 + 32;
                v40 = v24 + 32;
                do
                {
                  v41 = *(_DWORD *)(v40 - 32);
                  v37 += 8;
                  v42 = *((_DWORD *)v39 - 8);
                  v43 = (int *)v39;
                  __pld(v39 + 48);
                  v44 = (char *)v40;
                  v39 += 32;
                  v45 = v41 ^ v42;
                  v46 = *((_DWORD *)v39 - 15);
                  *((_DWORD *)v39 - 16) = v45;
                  v40 += 32;
                  v47 = *(_DWORD *)(v40 - 60) ^ v46;
                  v48 = *((_DWORD *)v39 - 14);
                  *((_DWORD *)v39 - 15) = v47;
                  v49 = *(_DWORD *)(v40 - 56) ^ v48;
                  v50 = *((_DWORD *)v39 - 13);
                  *((_DWORD *)v39 - 14) = v49;
                  v51 = *(_DWORD *)(v40 - 52) ^ v50;
                  v52 = *((_DWORD *)v39 - 12);
                  *((_DWORD *)v39 - 13) = v51;
                  v53 = *(_DWORD *)(v40 - 48) ^ v52;
                  v54 = *((_DWORD *)v39 - 11);
                  *((_DWORD *)v39 - 12) = v53;
                  v55 = *(_DWORD *)(v40 - 44) ^ v54;
                  v56 = *((_DWORD *)v39 - 10);
                  *((_DWORD *)v39 - 11) = v55;
                  v57 = *(_DWORD *)(v40 - 40) ^ v56;
                  v58 = *((_DWORD *)v39 - 9);
                  *((_DWORD *)v39 - 10) = v57;
                  *((_DWORD *)v39 - 9) = *(_DWORD *)(v40 - 36) ^ v58;
                }
                while ( v37 != v38 );
                v24 = (unsigned int)&v18[v101];
                v29 = v43;
              }
              v59 = v44 - 4;
              v60 = v29 - 1;
              do
              {
                v62 = v60[1];
                ++v60;
                v61 = v62;
                ++v38;
                v63 = *((_DWORD *)v59 + 1);
                v59 += 4;
                *v29++ = v63 ^ v61;
              }
              while ( v34 > v38 );
              if ( (char *)v36 != v98 )
              {
                v64 = v36 + 1;
                v99[4 * v34] ^= *(_BYTE *)(v24 + 4 * v34);
                if ( (int)v98 > v36 + 1 )
                {
                  v65 = v36 + 2;
                  v99[v64] ^= *(_BYTE *)(v24 + v64);
                  if ( (int)v98 > v65 )
                    v99[v65] ^= *(_BYTE *)(v24 + v65);
                }
              }
            }
            else
            {
              v95 = v24 - 1;
              v96 = v99;
              do
              {
                v97 = *(_BYTE *)++v95;
                *v96++ ^= v97;
              }
              while ( v96 != (unsigned __int8 *)&v98[(_DWORD)v99] );
            }
          }
          v66 = 0;
          if ( !sub_D18F0(a6, a7, (int)v124, 0, a8, 0) )
          {
LABEL_88:
            v77 = -1;
            v79 = ~v100;
          }
          else
          {
            v67 = sub_BC33C(v99, v124, v15);
            v68 = v100 & (((v67 - 1) & ~v67) >> 31);
            if ( v15 >= (int)v98 )
            {
              v100 = 0;
              v104 = (int)(v16 - 2);
              v77 = (int)(v16 - 2);
              v79 = -1;
            }
            else
            {
              v69 = 0;
              v70 = v15;
              v71 = &v99[v15];
              do
              {
                v72 = *v71++;
                v73 = (((v72 ^ 1) - 1) & ~(v72 ^ 1)) >> 31;
                v74 = v73 & ~v66;
                v66 |= v73;
                v68 &= v66 | (((v72 - 1) & ~v72) >> 31);
                v75 = v70++ & v74;
                v69 = v69 & ~v74 | v75;
              }
              while ( (char *)v70 != v98 );
              v76 = v66 & v68;
              v77 = (int)&v98[-v69 - 1];
              v104 = v77;
              v78 = v76 & ~(((a2 ^ v77 | (a2 - v77) ^ v77) ^ a2) >> 31);
              v79 = ~v78;
              v103 = v78 & 1;
              v100 = v78;
            }
            v80 = (int)&v98[-v15 - 1];
            v105 = v80 & (((v80 ^ a2 | (v80 - a2) ^ a2) ^ v80) >> 31)
                 | ~(((v80 ^ a2 | (v80 - a2) ^ a2) ^ v80) >> 31) & a2;
            if ( v80 > 1 )
            {
              v81 = 1;
              v106 = v18;
              v107 = v77;
              do
              {
                if ( v101 < (int)&v98[-v81] )
                {
                  v83 = &v99[v101 + v81];
                  v84 = &v99[v101];
                  do
                  {
                    v85 = *v83++;
                    v82 = ~((((v81 & (v80 - v104)) - 1) & ~(v81 & (v80 - v104))) >> 31);
                    *v84 = ~(_BYTE)v82 & *v84 | v85 & v82;
                    ++v84;
                  }
                  while ( (unsigned __int8 *)&v98[(_DWORD)v99 - v81] != v84 );
                }
                v81 *= 2;
              }
              while ( v80 > v81 );
              v18 = v106;
              v77 = v107;
            }
            if ( v105 > 0 )
            {
              v86 = 0;
              v87 = a1;
              v88 = &v99[v15];
              do
              {
                v89 = *++v88;
                v90 = (v86 ^ v104 | (v86 - v104) ^ v104) ^ v86;
                ++v86;
                *v87 = *v87 & ~(v100 & (v90 >> 31)) | v89 & v100 & (v90 >> 31);
                ++v87;
              }
              while ( v86 != v105 );
            }
            sub_D0048(4, 153, 121, (int)"crypto/rsa/rsa_oaep.c", 263);
            sub_D1364(v103);
          }
        }
      }
      else
      {
        sub_D0048(4, 153, 65, (int)"crypto/rsa/rsa_oaep.c", 166);
        v79 = -1;
        v77 = -1;
        v100 = 0;
      }
    }
    else
    {
      v79 = -1;
      sub_D0048(4, 153, 65, (int)"crypto/rsa/rsa_oaep.c", 159);
      v18 = 0;
      v77 = -1;
      v100 = 0;
    }
    sub_E07F8(&v108, 0x40u);
    sub_E0758(v99, (size_t)v98, (size_t)"crypto/rsa/rsa_oaep.c");
    sub_E0758(v18, (size_t)a5, (size_t)"crypto/rsa/rsa_oaep.c");
    return v79 | v77 & v100;
  }
}

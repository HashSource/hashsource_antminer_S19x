int __fastcall sub_819EC(
        int a1,
        int a2,
        _DWORD *a3,
        int a4,
        char *src,
        int a6,
        unsigned int a7,
        void *a8,
        size_t a9,
        unsigned __int8 a10)
{
  int v11; // r0
  int v12; // r0
  size_t v13; // r6
  int v14; // r0
  size_t v15; // r10
  int v16; // r9
  int v17; // r11
  int v18; // r6
  size_t v19; // r7
  unsigned int v20; // r5
  int v21; // r4
  int v22; // r1
  int v23; // r8
  int v24; // r0
  size_t v25; // r2
  unsigned int v26; // r3
  bool v27; // cc
  unsigned int v28; // r3
  int v29; // r5
  int v30; // r2
  unsigned int v31; // r6
  char *v32; // r2
  int v33; // r5
  char *v34; // r4
  char *v35; // r1
  void *v36; // r0
  size_t v37; // r5
  int v38; // r2
  size_t v39; // r6
  int v40; // r12
  int v41; // lr
  int v42; // r12
  int v43; // r3
  int v44; // r1
  int v45; // r2
  int v46; // r2
  _DWORD *v47; // r0
  _BYTE *v48; // r1
  int *v49; // r7
  int v50; // r1
  int v51; // r1
  _BYTE *v52; // r3
  _DWORD *v53; // r2
  unsigned int v54; // r1
  int v55; // r4
  int *v56; // r7
  int v57; // r0
  int v58; // r1
  int v59; // r4
  int v60; // r3
  int v61; // r5
  int v62; // r6
  int v63; // r3
  unsigned int v64; // r4
  int *v65; // r6
  unsigned int v66; // r7
  unsigned int v67; // r7
  int v69; // r5
  int v70; // r0
  unsigned int v71; // r1
  _DWORD *v72; // r2
  size_t v73; // r2
  int v74; // r0
  bool v75; // zf
  size_t v76; // r6
  int v77; // r1
  int v78; // r2
  char v79; // r5
  int v80; // r2
  unsigned int v81; // r0
  char *v82; // r2
  int v83; // r6
  unsigned int v84; // r5
  char *v85; // r4
  char *v86; // r1
  size_t n; // [sp+0h] [bp-334h]
  size_t v88; // [sp+8h] [bp-32Ch]
  size_t v89; // [sp+Ch] [bp-328h]
  int v90; // [sp+10h] [bp-324h]
  int v91; // [sp+14h] [bp-320h]
  _DWORD *v92; // [sp+18h] [bp-31Ch]
  int v93; // [sp+1Ch] [bp-318h]
  int *v94; // [sp+20h] [bp-314h]
  unsigned int v95; // [sp+24h] [bp-310h]
  _BYTE *v96; // [sp+28h] [bp-30Ch]
  char *v97; // [sp+2Ch] [bp-308h]
  unsigned int v98; // [sp+30h] [bp-304h]
  int v99; // [sp+34h] [bp-300h]
  unsigned int v100; // [sp+38h] [bp-2FCh]
  int c; // [sp+3Ch] [bp-2F8h]
  _BYTE *v102; // [sp+40h] [bp-2F4h]
  int (*v103)(); // [sp+44h] [bp-2F0h]
  int v104; // [sp+48h] [bp-2ECh]
  void (__fastcall *v105)(int, int); // [sp+4Ch] [bp-2E8h]
  int *v106; // [sp+50h] [bp-2E4h]
  int v107; // [sp+54h] [bp-2E0h]
  int v108; // [sp+58h] [bp-2DCh]
  int v109; // [sp+5Ch] [bp-2D8h]
  unsigned int v110; // [sp+60h] [bp-2D4h]
  int v111; // [sp+64h] [bp-2D0h]
  _DWORD *v112; // [sp+68h] [bp-2CCh]
  size_t v113; // [sp+6Ch] [bp-2C8h]
  int v114; // [sp+70h] [bp-2C4h]
  int v115; // [sp+74h] [bp-2C0h]
  int v116; // [sp+78h] [bp-2BCh]
  int v117; // [sp+7Ch] [bp-2B8h]
  _BYTE v118[4]; // [sp+80h] [bp-2B4h] BYREF
  char v119; // [sp+84h] [bp-2B0h] BYREF
  _BYTE s[16]; // [sp+88h] [bp-2ACh] BYREF
  _BYTE v121[64]; // [sp+98h] [bp-29Ch] BYREF
  _BYTE v122[128]; // [sp+D8h] [bp-25Ch] BYREF
  _DWORD v123[3]; // [sp+158h] [bp-1DCh] BYREF
  char v124; // [sp+164h] [bp-1D0h]
  char dest[115]; // [sp+165h] [bp-1CFh] BYREF
  _DWORD v126[32]; // [sp+1D8h] [bp-15Ch] BYREF
  _BYTE v127[220]; // [sp+258h] [bp-DCh] BYREF

  c = a10;
  if ( a7 >= 0x100000 )
    return 0;
  v104 = a4;
  v112 = a3;
  v114 = a2;
  v115 = a1;
  v11 = sub_D8D8C(a1);
  v12 = sub_D8C70(v11);
  v13 = v12;
  if ( v12 == 672 )
  {
    v102 = v127;
    if ( sub_100664(v127) <= 0 )
      return 0;
    v14 = 39;
    v15 = 51;
    v16 = 512;
    v17 = 6;
    v18 = 1;
    v19 = 8;
    v103 = SHA256_Transform;
    v113 = 40;
    n = 64;
    v107 = 32;
    v105 = (void (__fastcall *)(int, int))sub_817C0;
    goto LABEL_10;
  }
  if ( v12 <= 672 )
  {
    if ( v12 == 4 )
    {
      v102 = v127;
      if ( sub_DFC40(v127) <= 0 )
        return 0;
      v14 = 55;
      v15 = 51;
      v16 = 512;
      v17 = 6;
      v18 = 0;
      v19 = 8;
      v103 = (int (*)())MD5_Transform;
      v113 = 48;
      n = 64;
      v107 = 16;
      v105 = (void (__fastcall *)(int, int))sub_81718;
      goto LABEL_10;
    }
    if ( v12 == 64 )
    {
      v102 = v127;
      if ( sub_FF628(v127) <= 0 )
        return 0;
      v14 = 51;
      n = v13;
      v15 = 51;
      v16 = 512;
      v17 = 6;
      v18 = 1;
      v19 = 8;
      v103 = SHA1_Transform;
      v113 = 40;
      v107 = 20;
      v105 = (void (__fastcall *)(int, int))sub_81764;
      goto LABEL_10;
    }
LABEL_46:
    if ( v112 )
    {
      *v112 = 0;
      return 0;
    }
    return 0;
  }
  if ( v12 == 674 )
  {
    v102 = v127;
    if ( sub_1065B8(v127) <= 0 )
      return 0;
    v14 = 79;
    v15 = 115;
    v16 = 1024;
    v17 = 4;
    v18 = 1;
    v19 = 16;
    v103 = SHA512_Transform;
    v113 = 40;
    n = 128;
    v107 = 64;
    v105 = (void (__fastcall *)(int, int))sub_81854;
    goto LABEL_10;
  }
  if ( v12 < 674 )
  {
    v102 = v127;
    if ( sub_1064F8(v127) <= 0 )
      return 0;
    v14 = 95;
    v15 = 115;
    v16 = 1024;
    v17 = 4;
    v18 = 1;
    v19 = 16;
    v103 = SHA512_Transform;
    v113 = 40;
    n = 128;
    v107 = 48;
    v105 = (void (__fastcall *)(int, int))sub_81854;
    goto LABEL_10;
  }
  if ( v12 != 675 )
    goto LABEL_46;
  v102 = v127;
  if ( sub_100600(v127) <= 0 )
    return 0;
  v14 = 43;
  v15 = 51;
  v16 = 512;
  v17 = 6;
  v18 = 1;
  v19 = 8;
  v103 = SHA256_Transform;
  v113 = 40;
  n = 64;
  v107 = 28;
  v105 = (void (__fastcall *)(int, int))sub_817C0;
LABEL_10:
  if ( c )
  {
    v17 = 2;
    v88 = a9 + 11 + v113;
    v95 = a7 + v88;
    v20 = sub_189090(v14 + a7 + v88, n);
    v21 = v88 - v107 + a6;
    sub_1892EC(v21, n);
    v23 = v22;
    v109 = sub_189090(v21, n);
    v24 = sub_189090(v19 + v21, n);
    v26 = 3;
  }
  else
  {
    v95 = a7 + 13;
    v88 = 13;
    v20 = sub_189090(a7 + 12 + n + v19 - v107, n);
    v21 = a6 + 13 - v107;
    sub_1892EC(v21, n);
    v23 = v51;
    v109 = sub_189090(v21, n);
    v24 = sub_189090(v19 + v21, n);
    v26 = v17;
  }
  v108 = v24;
  v27 = v20 > v26;
  if ( v20 <= v26 )
  {
    v28 = 0;
    v99 = 0;
  }
  else
  {
    v25 = n;
    v28 = v20 - v17;
    v100 = v20 - v17;
  }
  v29 = 8 * v21;
  if ( v27 )
    v99 = v28 * v25;
  else
    v100 = v28;
  if ( c )
  {
    if ( !v18 )
    {
LABEL_20:
      memset(s, v18, v19);
      *(_DWORD *)&v118[v19] = v29;
      goto LABEL_21;
    }
  }
  else
  {
    memset(v122, 0, n);
    if ( a9 > 0x80 )
      return 0;
    memcpy(v122, a8, a9);
    v53 = v122;
    v54 = c;
    do
    {
      ++v54;
      *v53++ ^= 0x36363636u;
    }
    while ( v54 < ((n - 4) >> 2) + 1 );
    v29 += v16;
    ((void (__fastcall *)(_BYTE *, _BYTE *, _DWORD *))v103)(v102, v122, v53);
    if ( !v18 )
      goto LABEL_20;
  }
  memset(s, 0, v19 - 4);
  v52 = &s[v19];
  s[v19 - 4] = HIBYTE(v29);
  *(v52 - 1) = v29;
  *(v52 - 3) = BYTE2(v29);
  *(v52 - 2) = BYTE1(v29);
LABEL_21:
  if ( !v99 )
    goto LABEL_27;
  if ( c )
  {
    if ( n < v88 )
    {
      ((void (__fastcall *)(_BYTE *, int, size_t))v103)(v102, v104, v88);
      memcpy(v123, (const void *)(v104 + n), v88 - n);
      memcpy((char *)v123 + v88 - n, src, n - (v88 - n));
      ((void (__fastcall *)(_BYTE *, _DWORD *, int))v103)(v102, v123, v30);
      v31 = sub_189090(v99, n) - 1;
      if ( v31 > 1 )
      {
        v32 = src;
        v33 = 1;
        v34 = &src[n - (v88 - n)];
        do
        {
          v35 = v34;
          ++v33;
          v34 += n;
          ((void (__fastcall *)(_BYTE *, char *, char *))v103)(v102, v35, v32);
        }
        while ( v31 != v33 );
      }
      goto LABEL_27;
    }
    return 0;
  }
  v77 = *(_DWORD *)(v104 + 4);
  v78 = *(_DWORD *)(v104 + 8);
  v79 = *(_BYTE *)(v104 + 12);
  v123[0] = *(_DWORD *)v104;
  v123[1] = v77;
  v123[2] = v78;
  v124 = v79;
  memcpy(dest, src, v15);
  ((void (__fastcall *)(_BYTE *, _DWORD *, int))v103)(v102, v123, v80);
  v81 = sub_189090(v99, n);
  if ( v81 > 1 )
  {
    v82 = src;
    v83 = 1;
    v84 = v81;
    v85 = &src[n - 13];
    do
    {
      v86 = v85;
      ++v83;
      v85 += n;
      ((void (__fastcall *)(_BYTE *, char *, char *))v103)(v102, v86, v82);
    }
    while ( v84 != v83 );
  }
LABEL_27:
  v106 = (int *)v121;
  v36 = memset(v121, 0, sizeof(v121));
  v110 = v100 + v17;
  if ( !__CFADD__(v100, v17) )
  {
    v98 = ((unsigned int)(v107 - 4) >> 2) + 1;
    v96 = &s[v19 - n];
    v111 = ~v23;
    v89 = n - v19;
    do
    {
      v37 = 0;
      v38 = (int)(((v108 ^ v100) - 1) & ~(v108 ^ v100)) >> 31;
      v39 = v99;
      v40 = (int)(((v100 ^ v109) - 1) & ~(v100 ^ v109)) >> 31;
      v41 = (unsigned __int8)v40;
      v42 = v40 | ~v38;
      v90 = (unsigned __int8)v38;
      v97 = &src[v99 - v88];
      v93 = ~(unsigned __int8)v38;
      v43 = v111;
      v91 = v104 + v99;
      v92 = v118;
      v94 = (int *)&v119;
      do
      {
        if ( v88 > v39 )
        {
          v44 = *(unsigned __int8 *)(v91 + v37);
        }
        else
        {
          v44 = 0;
          if ( v39 < v95 )
            v44 = (unsigned __int8)v97[v37];
        }
        v116 = v41 & ~((int)((v37 ^ v23 | (v43 + 1) ^ v23) ^ v37) >> 31);
        v117 = ~v116;
        v45 = v42 & ~(v41 & ~((int)((v43 ^ (v23 + 1) | v37 ^ (v23 + 1)) ^ v37) >> 31));
        ++v39;
        ++v43;
        v46 = v45 & (v44 & ~v116 | v116 & 0x80);
        if ( v37 >= v89 )
        {
          v47 = v92;
          v48 = v96;
          v49 = v94;
          *v92 = v90;
          v50 = *v47 & (unsigned __int8)v48[v37];
          *v49 = v93;
          v46 = v46 & *v49 | v50;
        }
        *((_BYTE *)v126 + v37++) = v46;
      }
      while ( n != v37 );
      v55 = (int)v102;
      ((void (__fastcall *)(_BYTE *, _DWORD *, int (*)()))v103)(v102, v126, v103);
      v105(v55, (int)v126);
      v56 = v106;
      v57 = v126[1];
      v58 = (unsigned __int8)v90
          | (unsigned __int16)((unsigned __int8)v90 << 8)
          | ((unsigned __int8)v90 << 16) & 0xFFFFFF
          | ((unsigned __int8)v90 << 24);
      v59 = v126[2];
      v60 = *v106;
      v61 = v126[3];
      v99 += n;
      *v106 = v60 | v126[0] & v58;
      v62 = v56[1];
      v63 = v56[3];
      v56[2] |= v59 & v58;
      v36 = (void *)(v57 & v58 | v62);
      v64 = v98;
      v65 = v56;
      v56[1] = (int)v36;
      v56[3] = v63 | v58 & v61;
      if ( v64 != 4 )
      {
        v56[4] |= v126[4] & v58;
        if ( v64 != 5 )
        {
          v56[5] |= v126[5] & v58;
          if ( v64 != 6 )
          {
            v66 = v98;
            v75 = v98 == 7;
            v65[6] |= v126[6] & v58;
            if ( !v75 )
            {
              v65[7] |= v126[7] & v58;
              if ( v66 != 8 )
              {
                v65[8] |= v126[8] & v58;
                if ( v66 != 9 )
                {
                  v65[9] |= v126[9] & v58;
                  if ( v66 != 10 )
                  {
                    v67 = v98;
                    v75 = v98 == 11;
                    v65[10] |= v126[10] & v58;
                    if ( !v75 )
                    {
                      v65[11] |= v126[11] & v58;
                      if ( v67 != 12 )
                      {
                        v65[12] |= v126[12] & v58;
                        if ( v67 != 13 )
                        {
                          v65[13] |= v126[13] & v58;
                          if ( v67 != 14 )
                          {
                            v65[14] |= v126[14] & v58;
                            if ( v98 == 16 )
                              v65[15] |= v126[15] & v58;
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
    while ( v110 >= ++v100 );
  }
  v69 = sub_D14F4(v36);
  if ( !v69 )
    goto LABEL_88;
  v70 = sub_D8D8C(v115);
  if ( sub_D1520(v69, v70, 0) <= 0 )
    goto LABEL_88;
  if ( c )
  {
    v76 = v113;
    memset(v122, 92, v113);
    if ( sub_D16D8(v69, a8, a9) <= 0 )
    {
LABEL_88:
      sub_D1504(v69);
      return 0;
    }
    v73 = v76;
  }
  else
  {
    v71 = 0;
    v72 = v122;
    do
    {
      ++v71;
      *v72++ ^= 0x6A6A6A6Au;
    }
    while ( v71 < ((n - 4) >> 2) + 1 );
    v73 = n;
  }
  if ( sub_D16D8(v69, v122, v73) <= 0 || sub_D16D8(v69, v106, v107) <= 0 )
    goto LABEL_88;
  v74 = sub_D1734(v69, v114, v126);
  v75 = v74 == 0;
  if ( v74 )
    v75 = v112 == 0;
  if ( !v75 )
    *v112 = v126[0];
  sub_D1504(v69);
  return 1;
}

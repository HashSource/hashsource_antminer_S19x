int __fastcall sub_E5DF0(int a1, char *a2, unsigned int a3, unsigned int a4)
{
  __int64 v4; // r10
  bool v5; // cf
  void (__fastcall *v6)(int, int, int); // r7
  int v7; // r9
  int v8; // r3
  int v10; // r2
  int v11; // r5
  unsigned int v12; // r3
  int v13; // r6
  int v14; // r3
  _BYTE *v15; // r12
  char *v16; // lr
  unsigned int v17; // r5
  int v18; // r0
  int v19; // r2
  char v20; // r3
  char v21; // r1
  char v22; // r2
  char v23; // r8
  char v24; // t1
  int v25; // r2
  char v26; // r1
  __int64 v27; // r2
  int v28; // r6
  int v29; // r5
  int v30; // r0
  unsigned int v31; // r0
  unsigned int v32; // r3
  bool v33; // cc
  unsigned int v34; // r6
  unsigned int v35; // r5
  _BYTE *v36; // r10
  unsigned int v37; // r3
  unsigned int v38; // r5
  unsigned int v39; // r10
  unsigned int v40; // r11
  _BYTE *v41; // r6
  int v42; // r6
  unsigned int v43; // r5
  unsigned int v44; // r3
  unsigned int v45; // r1
  bool v46; // lr
  bool v47; // cf
  char v48; // r12
  char v49; // r12
  unsigned int v50; // r7
  bool v51; // r0
  char v52; // lr
  char v53; // r3
  unsigned __int8 v54; // r0
  bool v55; // cf
  char v56; // r3
  int v57; // r3
  unsigned int v58; // r5
  unsigned int v59; // r3
  int v60; // r2
  int v61; // r2
  int v62; // r2
  int v63; // r1
  int v64; // r6
  char *v65; // r5
  unsigned int v66; // r8
  unsigned int v67; // r7
  char *v68; // r10
  int v69; // r3
  char v70; // t1
  bool v71; // zf
  int v72; // r0
  char v73; // r2
  int v74; // r3
  int v76; // r0
  char v77; // r2
  unsigned int v78; // r6
  int v79; // r1
  unsigned int v80; // r3
  char v81; // r2
  char v82; // r2
  int v83; // r3
  char v84; // r3
  char v85; // r3
  char v86; // r3
  char v87; // r3
  char v88; // r3
  char v89; // r3
  char v90; // r3
  char v91; // r3
  char v92; // r3
  char v93; // r3
  char v94; // r3
  char v95; // r3
  char v96; // r3
  char v97; // r3
  unsigned int v98; // [sp+4h] [bp-20h]
  unsigned int v100; // [sp+Ch] [bp-18h]
  void (__fastcall *v101)(int, int, int); // [sp+Ch] [bp-18h]
  int v102; // [sp+10h] [bp-14h]
  int v103; // [sp+10h] [bp-14h]
  unsigned int v104; // [sp+14h] [bp-10h]
  unsigned int v105; // [sp+14h] [bp-10h]
  unsigned int v106; // [sp+18h] [bp-Ch]

  v98 = a4;
  v100 = (unsigned int)a2;
  v4 = *(_QWORD *)(a1 + 56) + a4;
  v5 = HIDWORD(v4) <= 0xF;
  v6 = *(void (__fastcall **)(int, int, int))(a1 + 368);
  if ( HIDWORD(v4) == 15 )
    v5 = (unsigned int)v4 <= 0xFFFFFFE0;
  v7 = *(_DWORD *)(a1 + 372);
  if ( !v5 )
    return -1;
  v8 = *(_DWORD *)(a1 + 364);
  *(_QWORD *)(a1 + 56) = v4;
  if ( v8 )
  {
    if ( !v98 )
    {
      sub_E4ECC((_BYTE *)(a1 + 64), a1 + 96);
      *(_DWORD *)(a1 + 364) = 0;
      return 0;
    }
    v27 = (unsigned int)(a1 + 64);
    v28 = *(_DWORD *)(a1 + 64);
    v29 = *(_DWORD *)(a1 + 68);
    v30 = *(_DWORD *)(a1 + 72);
    LODWORD(v27) = *(_DWORD *)(v27 + 12);
    *(_DWORD *)(a1 + 380) = v29;
    *(_DWORD *)(a1 + 384) = v30;
    *(_DWORD *)(a1 + 388) = v27;
    LODWORD(v27) = 0;
    *(_QWORD *)(a1 + 64) = v27;
    *(_QWORD *)(a1 + 72) = v27;
    v31 = *(_DWORD *)(a1 + 12);
    v10 = (int)a2;
    *(_DWORD *)(a1 + 376) = v28;
    v102 = 16;
    v104 = bswap32(v31);
    *(_DWORD *)(a1 + 364) = 0;
    goto LABEL_20;
  }
  v10 = *(_DWORD *)(a1 + 360);
  v11 = v10 & 0xF;
  v102 = v10;
  v12 = bswap32(*(_DWORD *)(a1 + 12));
  if ( (v10 & 0xF) == 0 )
    v10 = (int)a2;
  v104 = v12;
  if ( !v11 )
  {
LABEL_20:
    if ( ((a3 | v10) & 3) == 0 )
    {
      v32 = v98;
      v33 = v102 != 0;
      if ( v102 )
        v33 = v98 > 0xF;
      if ( !v33 )
      {
LABEL_24:
        if ( v32 >= 0xC00 )
        {
          do
          {
            v34 = v104;
            v35 = a3 + 16;
            v36 = (_BYTE *)(v100 + 16);
            do
            {
              ++v34;
              v6(a1, a1 + 16, v7);
              *(_BYTE *)(a1 + 15) = v34;
              *(_BYTE *)(a1 + 14) = BYTE1(v34);
              v35 += 16;
              *(_BYTE *)(a1 + 12) = HIBYTE(v34);
              v36 += 16;
              *(_BYTE *)(a1 + 13) = BYTE2(v34);
              *(_DWORD *)(v35 - 32) = *(_DWORD *)(a1 + 16) ^ *((_DWORD *)v36 - 8);
              *(_DWORD *)(v35 - 28) = *(_DWORD *)(a1 + 20) ^ *((_DWORD *)v36 - 7);
              *(_DWORD *)(v35 - 24) = *(_DWORD *)(a1 + 24) ^ *((_DWORD *)v36 - 6);
              *(_DWORD *)(v35 - 20) = *(_DWORD *)(a1 + 28) ^ *((_DWORD *)v36 - 5);
            }
            while ( a3 + 3088 != v35 );
            v104 += 192;
            a3 += 3072;
            v98 -= 3072;
            v100 += 3072;
            sub_E50B4((_BYTE *)(a1 + 64), a1 + 96, a3 - 3072, 3072);
          }
          while ( v98 >= 0xC00 );
        }
        v37 = v98 & 0xFFFFFFF0;
        if ( (v98 & 0xFFFFFFF0) != 0 )
        {
          v38 = v104 + 1;
          v106 = (v98 - 16) >> 4;
          v39 = a3 + 16;
          v105 = v104 + 1 + v106;
          v40 = v98 & 0xFFFFFFF0;
          v41 = (_BYTE *)(v100 + 16);
          while ( 1 )
          {
            v41 += 16;
            ((void (__fastcall *)(int, int, int, unsigned int))v6)(a1, a1 + 16, v7, v37);
            *(_BYTE *)(a1 + 15) = v38;
            *(_BYTE *)(a1 + 14) = BYTE1(v38);
            v39 += 16;
            *(_BYTE *)(a1 + 12) = HIBYTE(v38);
            *(_BYTE *)(a1 + 13) = BYTE2(v38);
            v37 = v105;
            *(_DWORD *)(v39 - 32) = *(_DWORD *)(a1 + 16) ^ *((_DWORD *)v41 - 8);
            *(_DWORD *)(v39 - 28) = *(_DWORD *)(a1 + 20) ^ *((_DWORD *)v41 - 7);
            *(_DWORD *)(v39 - 24) = *(_DWORD *)(a1 + 24) ^ *((_DWORD *)v41 - 6);
            *(_DWORD *)(v39 - 20) = *(_DWORD *)(a1 + 28) ^ *((_DWORD *)v41 - 5);
            if ( v38 == v105 )
              break;
            ++v38;
          }
          v104 = v38;
          v98 &= 0xFu;
          v42 = 16 * (v106 + 1);
          v100 += v42;
          a3 += v42;
          sub_E50B4((_BYTE *)(a1 + 64), a1 + 96, a3 - v40, v40);
        }
        if ( !v98 )
          goto LABEL_17;
        v43 = a1 + 16;
        v6(a1, a1 + 16, v7);
        v44 = v102 + 380 + a1;
        v45 = a1 + v102 + 376;
        v46 = v100 >= v44;
        v47 = v45 >= a1 + 20;
        if ( v45 < a1 + 20 )
          v47 = v43 >= v44;
        v48 = v47;
        if ( v98 > 6 )
          v49 = v48 & 1;
        else
          v49 = 0;
        v50 = a3 + 4;
        v51 = a3 >= a1 + 20;
        if ( v100 + 4 <= v45 )
          v46 = 1;
        v52 = v49 & v46;
        v53 = a3 >= v44;
        if ( v50 <= v43 )
          v51 = 1;
        if ( v50 <= v45 )
          v53 |= 1u;
        v54 = v52 & v51 & v53;
        v55 = v100 >= v50;
        if ( v100 < v50 )
          v55 = a3 >= v100 + 4;
        v56 = v55;
        *(_BYTE *)(a1 + 15) = v104 + 1;
        v57 = (unsigned __int8)v56 & v54 & 1;
        *(_BYTE *)(a1 + 12) = (v104 + 1) >> 24;
        if ( (((unsigned __int8)(a3 | v100) | (unsigned __int8)v45) & 3) != 0 )
          v57 = 0;
        v58 = v98 - 1;
        *(_BYTE *)(a1 + 13) = (v104 + 1) >> 16;
        *(_BYTE *)(a1 + 14) = (unsigned __int16)(v104 + 1) >> 8;
        if ( !v57 )
        {
          v83 = (unsigned __int8)(*(_BYTE *)v100 ^ *(_BYTE *)(a1 + 16));
          *(_BYTE *)a3 = v83;
          *(_BYTE *)(a1 + v102 + 376) = v83;
          if ( v98 != 1 )
          {
            v84 = *(_BYTE *)(a1 + 17) ^ *(_BYTE *)(v100 + 1);
            *(_BYTE *)(a3 + 1) = v84;
            *(_BYTE *)(v102 + 1 + a1 + 376) = v84;
            if ( v98 != 2 )
            {
              v85 = *(_BYTE *)(a1 + 18) ^ *(_BYTE *)(v100 + 2);
              *(_BYTE *)(a3 + 2) = v85;
              *(_BYTE *)(v102 + 2 + a1 + 376) = v85;
              if ( v98 != 3 )
              {
                v86 = *(_BYTE *)(a1 + 19) ^ *(_BYTE *)(v100 + 3);
                *(_BYTE *)(a3 + 3) = v86;
                *(_BYTE *)(v102 + 3 + a1 + 376) = v86;
                if ( v98 != 4 )
                {
                  v87 = *(_BYTE *)(a1 + 20) ^ *(_BYTE *)(v100 + 4);
                  *(_BYTE *)(a3 + 4) = v87;
                  *(_BYTE *)(v102 + 4 + a1 + 376) = v87;
                  if ( v98 != 5 )
                  {
                    v88 = *(_BYTE *)(a1 + 21) ^ *(_BYTE *)(v100 + 5);
                    *(_BYTE *)(a3 + 5) = v88;
                    *(_BYTE *)(v102 + 5 + a1 + 376) = v88;
                    if ( v98 != 6 )
                    {
                      v89 = *(_BYTE *)(a1 + 22) ^ *(_BYTE *)(v100 + 6);
                      *(_BYTE *)(a3 + 6) = v89;
                      *(_BYTE *)(v102 + 6 + a1 + 376) = v89;
                      if ( v98 != 7 )
                      {
                        v90 = *(_BYTE *)(a1 + 23) ^ *(_BYTE *)(v100 + 7);
                        *(_BYTE *)(a3 + 7) = v90;
                        *(_BYTE *)(v102 + 7 + a1 + 376) = v90;
                        if ( v98 != 8 )
                        {
                          v91 = *(_BYTE *)(a1 + 24) ^ *(_BYTE *)(v100 + 8);
                          *(_BYTE *)(a3 + 8) = v91;
                          *(_BYTE *)(v102 + 8 + a1 + 376) = v91;
                          if ( v98 != 9 )
                          {
                            v92 = *(_BYTE *)(a1 + 25) ^ *(_BYTE *)(v100 + 9);
                            *(_BYTE *)(a3 + 9) = v92;
                            *(_BYTE *)(v102 + 9 + a1 + 376) = v92;
                            if ( v98 != 10 )
                            {
                              v93 = *(_BYTE *)(a1 + 26) ^ *(_BYTE *)(v100 + 10);
                              *(_BYTE *)(a3 + 10) = v93;
                              *(_BYTE *)(v102 + 10 + a1 + 376) = v93;
                              if ( v98 != 11 )
                              {
                                v94 = *(_BYTE *)(a1 + 27) ^ *(_BYTE *)(v100 + 11);
                                *(_BYTE *)(a3 + 11) = v94;
                                *(_BYTE *)(v102 + 11 + a1 + 376) = v94;
                                if ( v98 != 12 )
                                {
                                  v95 = *(_BYTE *)(a1 + 28) ^ *(_BYTE *)(v100 + 12);
                                  *(_BYTE *)(a3 + 12) = v95;
                                  *(_BYTE *)(v102 + 12 + a1 + 376) = v95;
                                  if ( v98 != 13 )
                                  {
                                    v96 = *(_BYTE *)(a1 + 29) ^ *(_BYTE *)(v100 + 13);
                                    *(_BYTE *)(a3 + 13) = v96;
                                    *(_BYTE *)(v102 + 13 + a1 + 376) = v96;
                                    if ( v98 != 14 )
                                    {
                                      v97 = *(_BYTE *)(a1 + 30) ^ *(_BYTE *)(v100 + 14);
                                      *(_BYTE *)(a3 + 14) = v97;
                                      *(_BYTE *)(v102 + 14 + a1 + 376) = v97;
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
          goto LABEL_79;
        }
        v59 = 4 * (((v98 - 4) >> 2) + 1);
        if ( v58 <= 2 )
        {
          v63 = v102;
          v59 = 0;
        }
        else
        {
          v60 = *(_DWORD *)(a1 + 16) ^ *(_DWORD *)v100;
          *(_DWORD *)a3 = v60;
          *(_DWORD *)(a1 + v102 + 376) = v60;
          if ( (v98 - 4) >> 2 )
          {
            v61 = *(_DWORD *)(a1 + 20) ^ *(_DWORD *)(v100 + 4);
            *(_DWORD *)(a3 + 4) = v61;
            *(_DWORD *)(v45 + 4) = v61;
            if ( (v98 - 4) >> 2 == 2 )
            {
              v62 = *(_DWORD *)(a1 + 24) ^ *(_DWORD *)(v100 + 8);
              *(_DWORD *)(a3 + 8) = v62;
              *(_DWORD *)(v45 + 8) = v62;
            }
          }
          v58 -= v59;
          v63 = v102 + v59;
          if ( v98 == v59 )
            goto LABEL_79;
        }
        v76 = v63 + 1;
        v77 = *(_BYTE *)(a1 + v59 + 16) ^ *(_BYTE *)(v100 + v59);
        *(_BYTE *)(a3 + v59) = v77;
        *(_BYTE *)(a1 + v63 + 376) = v77;
        v78 = v59 + 1;
        if ( v58 )
        {
          v79 = v63 + 2;
          v80 = v59 + 2;
          v81 = *(_BYTE *)(a1 + v78 + 16) ^ *(_BYTE *)(v100 + v78);
          *(_BYTE *)(a3 + v78) = v81;
          *(_BYTE *)(v76 + a1 + 376) = v81;
          if ( v58 != 1 )
          {
            v82 = *(_BYTE *)(a1 + v80 + 16) ^ *(_BYTE *)(v100 + v80);
            *(_BYTE *)(a3 + v80) = v82;
            *(_BYTE *)(v79 + a1 + 376) = v82;
          }
        }
LABEL_79:
        v102 += v98;
LABEL_17:
        *(_DWORD *)(a1 + 360) = v102;
        return 0;
      }
      v74 = v102;
      v102 = 0;
      sub_E50B4((_BYTE *)(a1 + 64), a1 + 96, a1 + 376, v74);
LABEL_72:
      v32 = v98;
      goto LABEL_24;
    }
    goto LABEL_62;
  }
  if ( !v98 )
    goto LABEL_17;
  v13 = *(_DWORD *)(a1 + 360);
  v14 = v11;
  v15 = (_BYTE *)a3;
  v16 = a2;
  v17 = v98;
  v18 = v102 + 375 + a1;
  do
  {
    v19 = a1 + v14;
    v20 = v14 + 1;
    v21 = *(_BYTE *)(v19 + 16);
    v22 = v20 & 0xF;
    v24 = *v16++;
    v23 = v24;
    if ( (v20 & 0xF) != 0 )
      v22 = 1;
    --v17;
    v25 = v22 & 1;
    if ( !v17 )
      v25 = 0;
    ++v13;
    v26 = v23 ^ v21;
    v14 = v20 & 0xF;
    *v15++ = v26;
    *(_BYTE *)++v18 = v26;
  }
  while ( v25 );
  v98 = v17;
  v102 = v13;
  v100 = (unsigned int)v16;
  a3 = (unsigned int)v15;
  if ( v14 )
    goto LABEL_17;
  sub_E50B4((_BYTE *)(a1 + 64), a1 + 96, a1 + 376, v13);
  v102 = 0;
  if ( !((a3 | v100) << 30) )
    goto LABEL_72;
LABEL_62:
  if ( v98 )
  {
    v64 = 0;
    v65 = (char *)v100;
    v101 = v6;
    v66 = a3 - 1;
    v67 = v104;
    v68 = &v65[v98];
    v69 = v102;
    do
    {
      if ( !v64 )
      {
        ++v67;
        v103 = v69;
        v101(a1, a1 + 16, v7);
        *(_BYTE *)(a1 + 15) = v67;
        *(_BYTE *)(a1 + 12) = HIBYTE(v67);
        *(_BYTE *)(a1 + 13) = BYTE2(v67);
        *(_BYTE *)(a1 + 14) = BYTE1(v67);
        v69 = v103;
      }
      v70 = *v65++;
      v71 = v69 == 47;
      v72 = a1 + v69++;
      v73 = v70 ^ *(_BYTE *)(a1 + v64 + 16);
      v64 = ((_BYTE)v64 + 1) & 0xF;
      *(_BYTE *)++v66 = v73;
      *(_BYTE *)(v72 + 376) = v73;
      if ( v71 )
      {
        sub_E50B4((_BYTE *)(a1 + 64), a1 + 96, a1 + 376, v69);
        v69 = 0;
      }
    }
    while ( v65 != v68 );
  }
  else
  {
    v69 = v102;
  }
  *(_DWORD *)(a1 + 360) = v69;
  return 0;
}

int __fastcall sub_E6B1C(
        int a1,
        char *a2,
        unsigned int a3,
        unsigned int a4,
        void (__fastcall *a5)(char *, unsigned int, int, int, int))
{
  unsigned int v5; // r4
  __int64 v6; // r8
  bool v7; // cf
  int v8; // r3
  int v11; // r8
  int v12; // r12
  __int64 v13; // r2
  int v14; // lr
  unsigned int v15; // r0
  unsigned int v16; // r9
  bool v17; // cc
  int v18; // r3
  char *v19; // r6
  int v20; // r2
  unsigned int v21; // r10
  unsigned int v22; // r10
  unsigned int v23; // r3
  _DWORD *v24; // r12
  unsigned int v25; // r9
  bool v26; // r1
  bool v27; // cf
  _BYTE *v28; // r0
  char v29; // lr
  char v30; // lr
  bool v31; // r6
  unsigned int v32; // r2
  char v33; // r3
  char v34; // r1
  char v35; // r1
  unsigned __int8 v36; // r1
  bool v37; // cf
  char v38; // r3
  int v39; // r3
  unsigned int v40; // lr
  unsigned int v41; // r3
  int v42; // r1
  int v43; // r1
  int v44; // r1
  int v45; // r2
  int v46; // r1
  int v47; // r0
  char v48; // r2
  unsigned int v49; // r12
  int v50; // r1
  unsigned int v51; // r3
  char v52; // r2
  char v53; // r2
  int v54; // lr
  char *v55; // r6
  int v56; // r0
  int v57; // r3
  char v58; // lr
  char v59; // r2
  char v60; // r3
  char v61; // r1
  char v62; // t1
  int v63; // r3
  char v64; // r2
  int v65; // r2
  int v67; // r3
  char v68; // r3
  char v69; // r3
  char v70; // r3
  char v71; // r3
  char v72; // r3
  char v73; // r3
  char v74; // r3
  char v75; // r3
  char v76; // r3
  char v77; // r3
  char v78; // r3
  char v79; // r3
  char v80; // r3
  char v81; // r3
  int v82; // r2
  char v83; // r3
  int v84; // [sp+Ch] [bp-10h]
  char *v85; // [sp+10h] [bp-Ch]

  v5 = a4;
  v85 = a2;
  v6 = *(_QWORD *)(a1 + 56) + a4;
  v7 = HIDWORD(v6) <= 0xF;
  v84 = *(_DWORD *)(a1 + 372);
  if ( HIDWORD(v6) == 15 )
    v7 = (unsigned int)v6 <= 0xFFFFFFE0;
  if ( !v7 )
    return -1;
  v8 = *(_DWORD *)(a1 + 364);
  *(_QWORD *)(a1 + 56) = v6;
  if ( !v8 )
  {
    v11 = *(_DWORD *)(a1 + 360);
    v54 = v11 & 0xF;
    v16 = bswap32(*(_DWORD *)(a1 + 12));
    if ( (v11 & 0xF) != 0 )
    {
      if ( !v5 )
        goto LABEL_60;
      v55 = a2;
      v56 = v11 + 375 + a1;
      do
      {
        v57 = a1 + v54;
        v58 = v54 + 1;
        v59 = *(_BYTE *)(v57 + 16);
        v60 = v58 & 0xF;
        v62 = *v55++;
        v61 = v62;
        if ( (v58 & 0xF) != 0 )
          v60 = 1;
        --v5;
        v63 = v60 & 1;
        if ( !v5 )
          v63 = 0;
        ++v11;
        v64 = v59 ^ v61;
        v54 = v58 & 0xF;
        *(_BYTE *)a3++ = v64;
        *(_BYTE *)++v56 = v64;
      }
      while ( v63 );
      v85 = v55;
      if ( v54 )
        goto LABEL_60;
      goto LABEL_12;
    }
LABEL_8:
    v17 = v11 != 0;
    if ( v11 )
      v17 = v5 > 0xF;
    if ( !v17 )
    {
LABEL_13:
      if ( v5 >= 0xC00 )
      {
        v19 = v85;
        do
        {
          v16 += 192;
          a5(v19, a3, 192, v84, a1);
          *(_BYTE *)(a1 + 15) = v16;
          *(_BYTE *)(a1 + 12) = HIBYTE(v16);
          v5 -= 3072;
          *(_BYTE *)(a1 + 13) = BYTE2(v16);
          *(_BYTE *)(a1 + 14) = BYTE1(v16);
          v20 = a3;
          v19 += 3072;
          a3 += 3072;
          sub_E50B4((_BYTE *)(a1 + 64), a1 + 96, v20, 3072);
        }
        while ( v5 >= 0xC00 );
        v85 = v19;
      }
      v21 = v5 & 0xFF0;
      if ( (v5 & 0xFFFFFFF0) != 0 )
      {
        v16 += v21 >> 4;
        ((void (__fastcall *)(char *, unsigned int))a5)(v85, a3);
        *(_BYTE *)(a1 + 15) = v16;
        *(_BYTE *)(a1 + 12) = HIBYTE(v16);
        v5 -= v21;
        v85 += v21;
        v65 = a3;
        *(_BYTE *)(a1 + 13) = BYTE2(v16);
        *(_BYTE *)(a1 + 14) = BYTE1(v16);
        a3 += v21;
        sub_E50B4((_BYTE *)(a1 + 64), a1 + 96, v65, v21);
        if ( !v5 )
          goto LABEL_60;
      }
      else if ( !v5 )
      {
LABEL_60:
        *(_DWORD *)(a1 + 360) = v11;
        return 0;
      }
      v22 = a1 + 16;
      (*(void (__fastcall **)(int, int, int))(a1 + 368))(a1, a1 + 16, v84);
      v23 = v11 + 380 + a1;
      v24 = (_DWORD *)(a1 + v11 + 376);
      v25 = v16 + 1;
      v26 = (unsigned int)v85 >= v23;
      v27 = (unsigned int)v24 >= a1 + 20;
      if ( (unsigned int)v24 < a1 + 20 )
        v27 = v22 >= v23;
      v28 = v85 + 4;
      v29 = v27;
      if ( v5 > 6 )
        v30 = v29 & 1;
      else
        v30 = 0;
      v31 = a3 >= a1 + 20;
      if ( v28 <= (_BYTE *)v24 )
        v26 = 1;
      v32 = a3 + 4;
      v33 = a3 >= v23;
      v34 = v30 & v26;
      if ( a3 + 4 <= v22 )
        v31 = 1;
      v35 = v34 & v31;
      if ( v32 <= (unsigned int)v24 )
        v33 |= 1u;
      *(_BYTE *)(a1 + 15) = v25;
      v36 = v35 & v33;
      v37 = a3 >= (unsigned int)v28;
      if ( a3 < (unsigned int)v28 )
        v37 = (unsigned int)v85 >= v32;
      v38 = v37;
      v39 = (unsigned __int8)v38 & v36 & 1;
      if ( (((unsigned __int8)v24 | (unsigned __int8)(a3 | (unsigned __int8)v85)) & 3) != 0 )
        v39 = 0;
      *(_BYTE *)(a1 + 12) = HIBYTE(v25);
      v40 = v5 - 1;
      *(_BYTE *)(a1 + 13) = BYTE2(v25);
      *(_BYTE *)(a1 + 14) = BYTE1(v25);
      if ( !v39 )
      {
        v67 = (unsigned __int8)(*(_BYTE *)(a1 + 16) ^ *v85);
        *(_BYTE *)a3 = v67;
        *(_BYTE *)(a1 + v11 + 376) = v67;
        if ( v5 != 1 )
        {
          v68 = *(_BYTE *)(a1 + 17) ^ v85[1];
          *(_BYTE *)(a3 + 1) = v68;
          *(_BYTE *)(v11 + 1 + a1 + 376) = v68;
          if ( v5 != 2 )
          {
            v69 = *(_BYTE *)(a1 + 18) ^ v85[2];
            *(_BYTE *)(a3 + 2) = v69;
            *(_BYTE *)(v11 + 2 + a1 + 376) = v69;
            if ( v5 != 3 )
            {
              v70 = *(_BYTE *)(a1 + 19) ^ v85[3];
              *(_BYTE *)(a3 + 3) = v70;
              *(_BYTE *)(v11 + 3 + a1 + 376) = v70;
              if ( v5 != 4 )
              {
                v71 = *(_BYTE *)(a1 + 20) ^ v85[4];
                *(_BYTE *)(a3 + 4) = v71;
                *(_BYTE *)(v11 + 4 + a1 + 376) = v71;
                if ( v5 != 5 )
                {
                  v72 = *(_BYTE *)(a1 + 21) ^ v85[5];
                  *(_BYTE *)(a3 + 5) = v72;
                  *(_BYTE *)(v11 + 5 + a1 + 376) = v72;
                  if ( v5 != 6 )
                  {
                    v73 = *(_BYTE *)(a1 + 22) ^ v85[6];
                    *(_BYTE *)(a3 + 6) = v73;
                    *(_BYTE *)(v11 + 6 + a1 + 376) = v73;
                    if ( v5 != 7 )
                    {
                      v74 = *(_BYTE *)(a1 + 23) ^ v85[7];
                      *(_BYTE *)(a3 + 7) = v74;
                      *(_BYTE *)(v11 + 7 + a1 + 376) = v74;
                      if ( v5 != 8 )
                      {
                        v75 = *(_BYTE *)(a1 + 24) ^ v85[8];
                        *(_BYTE *)(a3 + 8) = v75;
                        *(_BYTE *)(v11 + 8 + a1 + 376) = v75;
                        if ( v5 != 9 )
                        {
                          v76 = *(_BYTE *)(a1 + 25) ^ v85[9];
                          *(_BYTE *)(a3 + 9) = v76;
                          *(_BYTE *)(v11 + 9 + a1 + 376) = v76;
                          if ( v5 != 10 )
                          {
                            v77 = *(_BYTE *)(a1 + 26) ^ v85[10];
                            *(_BYTE *)(a3 + 10) = v77;
                            *(_BYTE *)(v11 + 10 + a1 + 376) = v77;
                            if ( v5 != 11 )
                            {
                              v78 = *(_BYTE *)(a1 + 27) ^ v85[11];
                              *(_BYTE *)(a3 + 11) = v78;
                              *(_BYTE *)(v11 + 11 + a1 + 376) = v78;
                              if ( v5 != 12 )
                              {
                                v79 = *(_BYTE *)(a1 + 28) ^ v85[12];
                                *(_BYTE *)(a3 + 12) = v79;
                                *(_BYTE *)(v11 + 12 + a1 + 376) = v79;
                                if ( v5 != 13 )
                                {
                                  v80 = *(_BYTE *)(a1 + 29) ^ v85[13];
                                  *(_BYTE *)(a3 + 13) = v80;
                                  *(_BYTE *)(v11 + 13 + a1 + 376) = v80;
                                  if ( v5 != 14 )
                                  {
                                    v81 = *(_BYTE *)(a1 + 30) ^ v85[14];
                                    *(_BYTE *)(a3 + 14) = v81;
                                    *(_BYTE *)(v11 + 14 + a1 + 376) = v81;
                                    if ( v5 != 15 )
                                    {
                                      v82 = v11 + 15 + a1;
                                      v11 += v5;
                                      v83 = *(_BYTE *)(a1 + 31) ^ v85[15];
                                      *(_BYTE *)(a3 + 15) = v83;
                                      *(_BYTE *)(v82 + 376) = v83;
                                      goto LABEL_60;
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
        }
        goto LABEL_50;
      }
      v41 = 4 * (((v5 - 4) >> 2) + 1);
      if ( v40 <= 2 )
      {
        v46 = v11;
        v41 = 0;
      }
      else
      {
        v42 = *(_DWORD *)v85 ^ *(_DWORD *)(a1 + 16);
        *(_DWORD *)a3 = v42;
        *(_DWORD *)(a1 + v11 + 376) = v42;
        if ( (v5 - 4) >> 2 )
        {
          v43 = *(_DWORD *)(a1 + 20) ^ *((_DWORD *)v85 + 1);
          *(_DWORD *)(a3 + 4) = v43;
          v24[1] = v43;
          if ( (v5 - 4) >> 2 != 1 )
          {
            v44 = *(_DWORD *)(a1 + 24) ^ *((_DWORD *)v85 + 2);
            *(_DWORD *)(a3 + 8) = v44;
            v24[2] = v44;
            if ( (v5 - 4) >> 2 != 2 )
            {
              v45 = *(_DWORD *)(a1 + 28) ^ *((_DWORD *)v85 + 3);
              *(_DWORD *)(a3 + 12) = v45;
              v24[3] = v45;
            }
          }
        }
        v40 -= v41;
        v46 = v11 + v41;
        if ( v5 == v41 )
          goto LABEL_50;
      }
      v47 = v46 + 1;
      v48 = v85[v41] ^ *(_BYTE *)(a1 + v41 + 16);
      *(_BYTE *)(a3 + v41) = v48;
      *(_BYTE *)(a1 + v46 + 376) = v48;
      v49 = v41 + 1;
      if ( v40 )
      {
        v50 = v46 + 2;
        v51 = v41 + 2;
        v52 = v85[v49] ^ *(_BYTE *)(a1 + v49 + 16);
        *(_BYTE *)(a3 + v49) = v52;
        *(_BYTE *)(v47 + a1 + 376) = v52;
        if ( v40 != 1 )
        {
          v53 = *(_BYTE *)(a1 + v51 + 16) ^ v85[v51];
          *(_BYTE *)(a3 + v51) = v53;
          *(_BYTE *)(v50 + a1 + 376) = v53;
        }
      }
LABEL_50:
      v11 += v5;
      goto LABEL_60;
    }
LABEL_12:
    v18 = v11;
    v11 = 0;
    sub_E50B4((_BYTE *)(a1 + 64), a1 + 96, a1 + 376, v18);
    goto LABEL_13;
  }
  if ( v5 )
  {
    v11 = 16;
    v12 = *(_DWORD *)(a1 + 64);
    v13 = (unsigned int)(a1 + 64);
    v14 = *(_DWORD *)(a1 + 68);
    LODWORD(v13) = *(_DWORD *)(a1 + 76);
    *(_DWORD *)(a1 + 384) = *(_DWORD *)(a1 + 72);
    v15 = *(_DWORD *)(a1 + 12);
    *(_DWORD *)(a1 + 388) = v13;
    LODWORD(v13) = 0;
    *(_DWORD *)(a1 + 376) = v12;
    v16 = bswap32(v15);
    *(_DWORD *)(a1 + 380) = v14;
    *(_QWORD *)(a1 + 64) = v13;
    *(_QWORD *)(a1 + 72) = v13;
    *(_DWORD *)(a1 + 364) = 0;
    goto LABEL_8;
  }
  sub_E4ECC((_BYTE *)(a1 + 64), a1 + 96);
  *(_DWORD *)(a1 + 364) = 0;
  return 0;
}

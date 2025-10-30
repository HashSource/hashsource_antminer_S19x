int __fastcall sub_E7040(
        int a1,
        unsigned int a2,
        _BYTE *a3,
        unsigned int a4,
        void (__fastcall *a5)(unsigned int, _BYTE *, int, int, int))
{
  unsigned int v5; // r5
  unsigned __int64 v7; // kr00_8
  int v8; // r3
  int v10; // r11
  int v11; // r12
  __int64 v12; // r2
  int v13; // lr
  unsigned int v14; // r0
  unsigned int v15; // r8
  bool v16; // cc
  int v17; // r3
  _BYTE *v18; // r4
  _BYTE *v19; // r1
  unsigned int v20; // r9
  int v21; // lr
  _BYTE *v22; // r4
  int v23; // r0
  int v24; // r11
  char v25; // r1
  char v26; // t1
  int v27; // r2
  unsigned __int8 v28; // r3
  char v29; // r2
  _BOOL4 v30; // r3
  _BYTE *v31; // r12
  int v32; // r3
  unsigned int v33; // r0
  _BYTE *v34; // r1
  unsigned int v35; // r3
  unsigned int v36; // r2
  unsigned int v37; // lr
  bool v38; // r0
  bool v39; // cf
  char v40; // r12
  char v41; // r12
  unsigned int v42; // r8
  char v43; // r4
  _BYTE *v44; // r2
  char v45; // r3
  char v46; // r0
  unsigned __int8 v47; // r0
  bool v48; // cf
  char v49; // r3
  int v50; // r3
  unsigned int v51; // lr
  unsigned int v52; // r3
  int v53; // r0
  int v54; // r0
  int v55; // r0
  int v56; // r0
  int v57; // r2
  char v58; // r8
  int v59; // r0
  unsigned int v60; // r1
  char v61; // r12
  int v62; // r2
  unsigned int v63; // r3
  char v64; // r1
  char v66; // r1
  char v67; // r1
  char v68; // r1
  char v69; // r1
  char v70; // r1
  char v71; // r1
  char v72; // r1
  char v73; // r1
  char v74; // r1
  char v75; // r1
  char v76; // r1
  char v77; // r1
  char v78; // r1
  char v79; // r1
  char v80; // r1
  int v81; // r3
  char v82; // r2
  int v83; // [sp+Ch] [bp-10h]
  _DWORD *v84; // [sp+Ch] [bp-10h]
  _BYTE *v85; // [sp+10h] [bp-Ch]

  v5 = a4;
  v85 = a3;
  v7 = *(_QWORD *)(a1 + 56) + a4;
  v83 = *(_DWORD *)(a1 + 372);
  if ( v7 > 0xFFFFFFFE0LL )
    return -1;
  v8 = *(_DWORD *)(a1 + 364);
  *(_QWORD *)(a1 + 56) = v7;
  if ( v8 )
  {
    if ( v5 )
    {
      v10 = 16;
      v11 = *(_DWORD *)(a1 + 64);
      v12 = (unsigned int)(a1 + 64);
      v13 = *(_DWORD *)(a1 + 68);
      LODWORD(v12) = *(_DWORD *)(a1 + 76);
      *(_DWORD *)(a1 + 384) = *(_DWORD *)(a1 + 72);
      v14 = *(_DWORD *)(a1 + 12);
      *(_DWORD *)(a1 + 388) = v12;
      LODWORD(v12) = 0;
      *(_DWORD *)(a1 + 376) = v11;
      v15 = bswap32(v14);
      *(_DWORD *)(a1 + 380) = v13;
      *(_QWORD *)(a1 + 64) = v12;
      *(_QWORD *)(a1 + 72) = v12;
      *(_DWORD *)(a1 + 364) = 0;
LABEL_6:
      v16 = v10 != 0;
      if ( v10 )
        v16 = v5 > 0xF;
      if ( v16 )
      {
        v17 = v10;
        v10 = 0;
        sub_E50B4((_BYTE *)(a1 + 64), a1 + 96, a1 + 376, v17);
      }
LABEL_11:
      if ( v5 >= 0xC00 )
      {
        v18 = v85;
        do
        {
          sub_E50B4((_BYTE *)(a1 + 64), a1 + 96, a2, 3072);
          v15 += 192;
          v19 = v18;
          v5 -= 3072;
          v18 += 3072;
          a5(a2, v19, 192, v83, a1);
          *(_BYTE *)(a1 + 15) = v15;
          *(_BYTE *)(a1 + 12) = HIBYTE(v15);
          a2 += 3072;
          *(_BYTE *)(a1 + 13) = BYTE2(v15);
          *(_BYTE *)(a1 + 14) = BYTE1(v15);
        }
        while ( v5 >= 0xC00 );
        v85 = v18;
      }
      v20 = v5 & 0xFF0;
      if ( (v5 & 0xFFFFFFF0) != 0 )
      {
        sub_E50B4((_BYTE *)(a1 + 64), a1 + 96, a2, v5 & 0xFFFFFFF0);
        v33 = a2;
        v15 += v20 >> 4;
        v34 = v85;
        v85 += v20;
        v5 -= v20;
        a2 += v20;
        a5(v33, v34, v20 >> 4, v83, a1);
        *(_BYTE *)(a1 + 15) = v15;
        *(_BYTE *)(a1 + 12) = HIBYTE(v15);
        *(_BYTE *)(a1 + 13) = BYTE2(v15);
        *(_BYTE *)(a1 + 14) = BYTE1(v15);
        if ( !v5 )
          goto LABEL_17;
      }
      else if ( !v5 )
      {
LABEL_17:
        *(_DWORD *)(a1 + 360) = v10;
        return 0;
      }
      (*(void (__fastcall **)(int, int, int))(a1 + 368))(a1, a1 + 16, v83);
      v84 = (_DWORD *)(a1 + v10 + 376);
      v35 = v10 + 380 + a1;
      v36 = a1 + 20;
      v37 = a2 + 4;
      v38 = a2 >= v35;
      v39 = a1 + 16 >= v35;
      if ( a1 + 16 < v35 )
        v39 = a1 + v10 + 376 >= v36;
      v40 = v39;
      if ( v5 > 6 )
        v41 = v40 & 1;
      else
        v41 = 0;
      v42 = v15 + 1;
      *(_BYTE *)(a1 + 15) = v42;
      v43 = (unsigned int)v85 >= v36;
      if ( v37 <= (unsigned int)v84 )
        v38 = 1;
      v44 = v85 + 4;
      v45 = (unsigned int)v85 >= v35;
      v46 = v41 & v38;
      if ( (unsigned int)(v85 + 4) <= a1 + 16 )
        v43 |= 1u;
      if ( v44 <= (_BYTE *)v84 )
        v45 |= 1u;
      v47 = v46 & v43 & v45;
      v48 = (unsigned int)v85 >= v37;
      if ( (unsigned int)v85 < v37 )
        v48 = a2 >= (unsigned int)v44;
      v49 = v48;
      v50 = (unsigned __int8)v49 & v47 & 1;
      if ( (((unsigned __int8)((unsigned __int8)v85 | a2) | (unsigned __int8)v84) & 3) != 0 )
        v50 = 0;
      *(_BYTE *)(a1 + 12) = HIBYTE(v42);
      v51 = v5 - 1;
      *(_BYTE *)(a1 + 13) = BYTE2(v42);
      *(_BYTE *)(a1 + 14) = BYTE1(v42);
      if ( !v50 )
      {
        v66 = *(_BYTE *)a2;
        *(_BYTE *)(a1 + v10 + 376) = *(_BYTE *)a2;
        *v85 = *(_BYTE *)(a1 + 16) ^ v66;
        if ( v5 != 1 )
        {
          v67 = *(_BYTE *)(a2 + 1);
          *(_BYTE *)(v10 + 1 + a1 + 376) = v67;
          v85[1] = *(_BYTE *)(a1 + 17) ^ v67;
          if ( v5 != 2 )
          {
            v68 = *(_BYTE *)(a2 + 2);
            *(_BYTE *)(v10 + 2 + a1 + 376) = v68;
            v85[2] = *(_BYTE *)(a1 + 18) ^ v68;
            if ( v5 != 3 )
            {
              v69 = *(_BYTE *)(a2 + 3);
              *(_BYTE *)(v10 + 3 + a1 + 376) = v69;
              v85[3] = *(_BYTE *)(a1 + 19) ^ v69;
              if ( v5 != 4 )
              {
                v70 = *(_BYTE *)(a2 + 4);
                *(_BYTE *)(v10 + 4 + a1 + 376) = v70;
                v85[4] = *(_BYTE *)(a1 + 20) ^ v70;
                if ( v5 != 5 )
                {
                  v71 = *(_BYTE *)(a2 + 5);
                  *(_BYTE *)(v10 + 5 + a1 + 376) = v71;
                  v85[5] = *(_BYTE *)(a1 + 21) ^ v71;
                  if ( v5 != 6 )
                  {
                    v72 = *(_BYTE *)(a2 + 6);
                    *(_BYTE *)(v10 + 6 + a1 + 376) = v72;
                    v85[6] = *(_BYTE *)(a1 + 22) ^ v72;
                    if ( v5 != 7 )
                    {
                      v73 = *(_BYTE *)(a2 + 7);
                      *(_BYTE *)(v10 + 7 + a1 + 376) = v73;
                      v85[7] = *(_BYTE *)(a1 + 23) ^ v73;
                      if ( v5 != 8 )
                      {
                        v74 = *(_BYTE *)(a2 + 8);
                        *(_BYTE *)(v10 + 8 + a1 + 376) = v74;
                        v85[8] = *(_BYTE *)(a1 + 24) ^ v74;
                        if ( v5 != 9 )
                        {
                          v75 = *(_BYTE *)(a2 + 9);
                          *(_BYTE *)(v10 + 9 + a1 + 376) = v75;
                          v85[9] = *(_BYTE *)(a1 + 25) ^ v75;
                          if ( v5 != 10 )
                          {
                            v76 = *(_BYTE *)(a2 + 10);
                            *(_BYTE *)(v10 + 10 + a1 + 376) = v76;
                            v85[10] = *(_BYTE *)(a1 + 26) ^ v76;
                            if ( v5 != 11 )
                            {
                              v77 = *(_BYTE *)(a2 + 11);
                              *(_BYTE *)(v10 + 11 + a1 + 376) = v77;
                              v85[11] = *(_BYTE *)(a1 + 27) ^ v77;
                              if ( v5 != 12 )
                              {
                                v78 = *(_BYTE *)(a2 + 12);
                                *(_BYTE *)(v10 + 12 + a1 + 376) = v78;
                                v85[12] = *(_BYTE *)(a1 + 28) ^ v78;
                                if ( v5 != 13 )
                                {
                                  v79 = *(_BYTE *)(a2 + 13);
                                  *(_BYTE *)(v10 + 13 + a1 + 376) = v79;
                                  v85[13] = *(_BYTE *)(a1 + 29) ^ v79;
                                  if ( v5 != 14 )
                                  {
                                    v80 = *(_BYTE *)(a2 + 14);
                                    v81 = v10 + 15;
                                    *(_BYTE *)(v10 + 14 + a1 + 376) = v80;
                                    v85[14] = *(_BYTE *)(a1 + 30) ^ v80;
                                    if ( v5 != 15 )
                                    {
                                      v82 = *(_BYTE *)(a2 + 15);
                                      v10 += v5;
                                      *(_BYTE *)(v81 + a1 + 376) = v82;
                                      v85[15] = *(_BYTE *)(a1 + 31) ^ v82;
                                      goto LABEL_17;
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
        goto LABEL_58;
      }
      v52 = 4 * (((v5 - 4) >> 2) + 1);
      if ( v51 <= 2 )
      {
        v57 = v10;
        v52 = 0;
      }
      else
      {
        v53 = *(_DWORD *)a2;
        *(_DWORD *)(a1 + v10 + 376) = *(_DWORD *)a2;
        *(_DWORD *)v85 = v53 ^ *(_DWORD *)(a1 + 16);
        if ( (v5 - 4) >> 2 )
        {
          v54 = *(_DWORD *)(a2 + 4);
          v84[1] = v54;
          *((_DWORD *)v85 + 1) = v54 ^ *(_DWORD *)(a1 + 20);
          if ( (v5 - 4) >> 2 != 1 )
          {
            v55 = *(_DWORD *)(a2 + 8);
            v84[2] = v55;
            *((_DWORD *)v85 + 2) = v55 ^ *(_DWORD *)(a1 + 24);
            if ( (v5 - 4) >> 2 != 2 )
            {
              v56 = *(_DWORD *)(a2 + 12);
              v84[3] = v56;
              *((_DWORD *)v85 + 3) = *(_DWORD *)(a1 + 28) ^ v56;
            }
          }
        }
        v51 -= v52;
        v57 = v10 + v52;
        if ( v5 == v52 )
          goto LABEL_58;
      }
      v58 = *(_BYTE *)(a2 + v52);
      v59 = v57 + 1;
      *(_BYTE *)(a1 + v57 + 376) = v58;
      v60 = v52 + 1;
      v85[v52] = v58 ^ *(_BYTE *)(a1 + v52 + 16);
      if ( v51 )
      {
        v61 = *(_BYTE *)(a2 + v60);
        v62 = v57 + 2;
        v63 = v52 + 2;
        *(_BYTE *)(v59 + a1 + 376) = v61;
        v85[v60] = v61 ^ *(_BYTE *)(a1 + v60 + 16);
        if ( v51 != 1 )
        {
          v64 = *(_BYTE *)(a2 + v63);
          *(_BYTE *)(v62 + a1 + 376) = v64;
          v85[v63] = *(_BYTE *)(a1 + v63 + 16) ^ v64;
        }
      }
LABEL_58:
      v10 += v5;
      goto LABEL_17;
    }
    sub_E4ECC((_BYTE *)(a1 + 64), a1 + 96);
    *(_DWORD *)(a1 + 364) = 0;
    return 0;
  }
  else
  {
    v10 = *(_DWORD *)(a1 + 360);
    v21 = v10 & 0xF;
    v15 = bswap32(*(_DWORD *)(a1 + 12));
    if ( (v10 & 0xF) == 0 )
      goto LABEL_6;
    if ( v5 )
    {
      v22 = a3;
      v23 = v10 + 375 + a1;
      v24 = v10 - (_DWORD)a3;
      do
      {
        v26 = *(_BYTE *)a2++;
        v25 = v26;
        v27 = a1 + v21;
        ++v22;
        v28 = (v21 + 1) & 0xF;
        *(_BYTE *)++v23 = v26;
        v21 = v28;
        v29 = *(_BYTE *)(v27 + 16);
        --v5;
        v30 = v28 != 0;
        if ( !v5 )
          v30 = 0;
        v31 = &v22[v24];
        *(v22 - 1) = v29 ^ v25;
      }
      while ( v30 );
      v32 = (int)&v22[v24];
      if ( !v21 )
      {
        v85 = v22;
        v10 = 0;
        sub_E50B4((_BYTE *)(a1 + 64), a1 + 96, a1 + 376, v32);
        goto LABEL_11;
      }
    }
    else
    {
      v31 = *(_BYTE **)(a1 + 360);
    }
    *(_DWORD *)(a1 + 360) = v31;
    return 0;
  }
}

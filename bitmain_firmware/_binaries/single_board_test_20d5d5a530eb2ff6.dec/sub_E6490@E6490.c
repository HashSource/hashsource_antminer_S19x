int __fastcall sub_E6490(int a1, _BYTE *a2, unsigned int a3, unsigned int a4)
{
  __int64 v4; // r10
  bool v5; // cf
  void (__fastcall *v6)(int, int, int); // r7
  int v7; // r9
  int v8; // r3
  int v10; // r5
  unsigned int v11; // r2
  unsigned int v12; // r10
  unsigned int v13; // r6
  unsigned int v14; // r8
  unsigned int v15; // lr
  int v16; // r0
  char v17; // r12
  char v18; // t1
  int v19; // r1
  unsigned __int8 v20; // r3
  char v21; // r2
  _BOOL4 v22; // r1
  __int64 v23; // r2
  int v24; // r6
  int v25; // r5
  int v26; // r0
  unsigned int v27; // r5
  unsigned int v28; // r3
  bool v29; // cc
  unsigned int v30; // r5
  unsigned int v31; // r6
  unsigned int v32; // r10
  unsigned int v33; // r3
  int v34; // r6
  char *v35; // r2
  unsigned int v36; // r5
  unsigned int v37; // r7
  char *v38; // r8
  char *v39; // r10
  int v40; // r3
  char v41; // t1
  int v42; // r2
  bool v43; // zf
  int v44; // r3
  unsigned int v45; // r7
  unsigned int v46; // r2
  unsigned int v47; // r1
  bool v48; // cf
  char v49; // lr
  bool v50; // r0
  char v51; // lr
  char v52; // r0
  unsigned int v53; // r3
  bool v54; // cf
  char v55; // r5
  bool v56; // cf
  char v57; // r2
  unsigned __int8 v58; // r3
  unsigned __int8 v59; // r2
  int v60; // r3
  unsigned int v61; // r5
  unsigned int v62; // r3
  int v63; // r6
  int v64; // r6
  int v65; // r0
  int v66; // r2
  unsigned int v67; // r6
  unsigned int v68; // r11
  unsigned int v69; // r5
  unsigned int v70; // r10
  int v71; // r3
  int v73; // r0
  char v74; // r7
  unsigned int v75; // r1
  int v76; // r2
  unsigned int v77; // r3
  char v78; // r6
  char v79; // r1
  char v80; // r1
  char v81; // r1
  char v82; // r1
  char v83; // r1
  char v84; // r1
  char v85; // r1
  char v86; // r1
  char v87; // r1
  char v88; // r1
  char v89; // r1
  char v90; // r1
  char v91; // r1
  char v92; // r1
  char v93; // r1
  char v94; // r2
  unsigned int v95; // [sp+4h] [bp-20h]
  unsigned int v96; // [sp+8h] [bp-1Ch]
  unsigned int v97; // [sp+Ch] [bp-18h]
  void (__fastcall *v98)(int, int, int); // [sp+Ch] [bp-18h]
  int v99; // [sp+10h] [bp-14h]
  int v100; // [sp+10h] [bp-14h]
  unsigned int v101; // [sp+14h] [bp-10h]
  unsigned int v102; // [sp+14h] [bp-10h]

  v95 = a4;
  v97 = (unsigned int)a2;
  v4 = *(_QWORD *)(a1 + 56) + a4;
  v96 = a3;
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
    if ( !v95 )
    {
      sub_E4ECC((_BYTE *)(a1 + 64), a1 + 96);
      *(_DWORD *)(a1 + 364) = 0;
      return 0;
    }
    v23 = (unsigned int)(a1 + 64);
    v24 = *(_DWORD *)(a1 + 64);
    v25 = *(_DWORD *)(a1 + 68);
    v26 = *(_DWORD *)(a1 + 72);
    LODWORD(v23) = *(_DWORD *)(v23 + 12);
    *(_DWORD *)(a1 + 380) = v25;
    v99 = 16;
    *(_DWORD *)(a1 + 388) = v23;
    LODWORD(v23) = 0;
    *(_QWORD *)(a1 + 64) = v23;
    *(_QWORD *)(a1 + 72) = v23;
    v27 = *(_DWORD *)(a1 + 12);
    v11 = (unsigned int)a2;
    *(_DWORD *)(a1 + 376) = v24;
    *(_DWORD *)(a1 + 384) = v26;
    v101 = bswap32(v27);
    *(_DWORD *)(a1 + 364) = 0;
    goto LABEL_17;
  }
  v10 = *(_DWORD *)(a1 + 360) & 0xF;
  v101 = bswap32(*(_DWORD *)(a1 + 12));
  v99 = *(_DWORD *)(a1 + 360);
  if ( !v10 )
  {
    v11 = (unsigned int)a2;
LABEL_17:
    if ( ((v96 | v11) & 3) == 0 )
    {
      v28 = v95;
      v29 = v99 != 0;
      if ( v99 )
        v29 = v95 > 0xF;
      if ( !v29 )
      {
LABEL_21:
        if ( v28 >= 0xC00 )
        {
          do
          {
            v30 = v96 + 16;
            sub_E50B4((_BYTE *)(a1 + 64), a1 + 96, v97, 3072);
            v31 = v97 + 16;
            v32 = v101;
            do
            {
              ++v32;
              v6(a1, a1 + 16, v7);
              *(_BYTE *)(a1 + 15) = v32;
              *(_BYTE *)(a1 + 14) = BYTE1(v32);
              v30 += 16;
              *(_BYTE *)(a1 + 12) = HIBYTE(v32);
              v31 += 16;
              *(_BYTE *)(a1 + 13) = BYTE2(v32);
              *(_DWORD *)(v30 - 32) = *(_DWORD *)(a1 + 16) ^ *(_DWORD *)(v31 - 32);
              *(_DWORD *)(v30 - 28) = *(_DWORD *)(a1 + 20) ^ *(_DWORD *)(v31 - 28);
              *(_DWORD *)(v30 - 24) = *(_DWORD *)(a1 + 24) ^ *(_DWORD *)(v31 - 24);
              *(_DWORD *)(v30 - 20) = *(_DWORD *)(a1 + 28) ^ *(_DWORD *)(v31 - 20);
            }
            while ( v30 != v96 + 3088 );
            v101 += 192;
            v28 = v95 - 3072;
            v5 = v95 - 3072 >= 0xC00;
            v95 -= 3072;
            v96 += 3072;
            v97 += 3072;
          }
          while ( v5 );
        }
        v33 = v28 & 0xFFFFFFF0;
        if ( v33 )
        {
          v67 = v97 + 16;
          sub_E50B4((_BYTE *)(a1 + 64), a1 + 96, v97, v33);
          v68 = (v95 - 16) >> 4;
          v69 = v101 + 1;
          v70 = v96 + 16;
          v102 = v101 + 1 + v68;
          while ( 1 )
          {
            v67 += 16;
            v6(a1, a1 + 16, v7);
            *(_BYTE *)(a1 + 15) = v69;
            *(_BYTE *)(a1 + 13) = BYTE2(v69);
            v70 += 16;
            *(_BYTE *)(a1 + 12) = HIBYTE(v69);
            *(_BYTE *)(a1 + 14) = BYTE1(v69);
            *(_DWORD *)(v70 - 32) = *(_DWORD *)(v67 - 32) ^ *(_DWORD *)(a1 + 16);
            *(_DWORD *)(v70 - 28) = *(_DWORD *)(a1 + 20) ^ *(_DWORD *)(v67 - 28);
            *(_DWORD *)(v70 - 24) = *(_DWORD *)(a1 + 24) ^ *(_DWORD *)(v67 - 24);
            *(_DWORD *)(v70 - 20) = *(_DWORD *)(a1 + 28) ^ *(_DWORD *)(v67 - 20);
            if ( v69 == v102 )
              break;
            ++v69;
          }
          v71 = 16 * (v68 + 1);
          v101 = v69;
          v95 &= 0xFu;
          v96 += v71;
          v97 += v71;
        }
        if ( !v95 )
          goto LABEL_27;
        v6(a1, a1 + 16, v7);
        v45 = a1 + 20;
        v46 = v99 + 380 + a1;
        v47 = a1 + v99 + 376;
        v48 = a1 + 16 >= v46;
        if ( a1 + 16 < v46 )
          v48 = v47 >= v45;
        v49 = v48;
        v50 = v97 + 4 <= v47;
        if ( v97 >= v46 )
          v50 = 1;
        if ( v95 > 6 )
          v51 = v49 & 1;
        else
          v51 = 0;
        v52 = v51 & v50;
        v53 = v96 + 4;
        v54 = v96 >= v45;
        if ( v96 < v45 )
          v54 = a1 + 16 >= v53;
        v55 = v54;
        v56 = v47 >= v53;
        if ( v47 < v53 )
          v56 = v96 >= v46;
        v57 = v56;
        v58 = v97 >= v53;
        v59 = v52 & v55 & v57;
        if ( v97 + 4 <= v96 )
          v58 |= 1u;
        *(_BYTE *)(a1 + 12) = (v101 + 1) >> 24;
        v60 = v58 & v59 & 1;
        if ( (((unsigned __int8)(v96 | v97) | (unsigned __int8)v47) & 3) != 0 )
          v60 = 0;
        *(_BYTE *)(a1 + 15) = v101 + 1;
        *(_BYTE *)(a1 + 13) = (v101 + 1) >> 16;
        v61 = v95 - 1;
        *(_BYTE *)(a1 + 14) = (unsigned __int16)(v101 + 1) >> 8;
        if ( !v60 )
        {
          v80 = *(_BYTE *)v97;
          *(_BYTE *)(a1 + v99 + 376) = *(_BYTE *)v97;
          *(_BYTE *)v96 = *(_BYTE *)(a1 + 16) ^ v80;
          if ( v95 != 1 )
          {
            v81 = *(_BYTE *)(v97 + 1);
            *(_BYTE *)(v99 + 1 + a1 + 376) = v81;
            *(_BYTE *)(v96 + 1) = *(_BYTE *)(a1 + 17) ^ v81;
            if ( v95 != 2 )
            {
              v82 = *(_BYTE *)(v97 + 2);
              *(_BYTE *)(v99 + 2 + a1 + 376) = v82;
              *(_BYTE *)(v96 + 2) = *(_BYTE *)(a1 + 18) ^ v82;
              if ( v95 != 3 )
              {
                v83 = *(_BYTE *)(v97 + 3);
                *(_BYTE *)(v99 + 3 + a1 + 376) = v83;
                *(_BYTE *)(v96 + 3) = *(_BYTE *)(a1 + 19) ^ v83;
                if ( v95 != 4 )
                {
                  v84 = *(_BYTE *)(v97 + 4);
                  *(_BYTE *)(v99 + 4 + a1 + 376) = v84;
                  *(_BYTE *)(v96 + 4) = *(_BYTE *)(a1 + 20) ^ v84;
                  if ( v95 != 5 )
                  {
                    v85 = *(_BYTE *)(v97 + 5);
                    *(_BYTE *)(v99 + 5 + a1 + 376) = v85;
                    *(_BYTE *)(v96 + 5) = *(_BYTE *)(a1 + 21) ^ v85;
                    if ( v95 != 6 )
                    {
                      v86 = *(_BYTE *)(v97 + 6);
                      *(_BYTE *)(v99 + 6 + a1 + 376) = v86;
                      *(_BYTE *)(v96 + 6) = *(_BYTE *)(a1 + 22) ^ v86;
                      if ( v95 != 7 )
                      {
                        v87 = *(_BYTE *)(v97 + 7);
                        *(_BYTE *)(v99 + 7 + a1 + 376) = v87;
                        *(_BYTE *)(v96 + 7) = *(_BYTE *)(a1 + 23) ^ v87;
                        if ( v95 != 8 )
                        {
                          v88 = *(_BYTE *)(v97 + 8);
                          *(_BYTE *)(v99 + 8 + a1 + 376) = v88;
                          *(_BYTE *)(v96 + 8) = *(_BYTE *)(a1 + 24) ^ v88;
                          if ( v95 != 9 )
                          {
                            v89 = *(_BYTE *)(v97 + 9);
                            *(_BYTE *)(v99 + 9 + a1 + 376) = v89;
                            *(_BYTE *)(v96 + 9) = *(_BYTE *)(a1 + 25) ^ v89;
                            if ( v95 != 10 )
                            {
                              v90 = *(_BYTE *)(v97 + 10);
                              *(_BYTE *)(v99 + 10 + a1 + 376) = v90;
                              *(_BYTE *)(v96 + 10) = *(_BYTE *)(a1 + 26) ^ v90;
                              if ( v95 != 11 )
                              {
                                v91 = *(_BYTE *)(v97 + 11);
                                *(_BYTE *)(v99 + 11 + a1 + 376) = v91;
                                *(_BYTE *)(v96 + 11) = *(_BYTE *)(a1 + 27) ^ v91;
                                if ( v95 != 12 )
                                {
                                  v92 = *(_BYTE *)(v97 + 12);
                                  *(_BYTE *)(v99 + 12 + a1 + 376) = v92;
                                  *(_BYTE *)(v96 + 12) = *(_BYTE *)(a1 + 28) ^ v92;
                                  if ( v95 != 13 )
                                  {
                                    v93 = *(_BYTE *)(v97 + 13);
                                    *(_BYTE *)(v99 + 13 + a1 + 376) = v93;
                                    *(_BYTE *)(v96 + 13) = *(_BYTE *)(a1 + 29) ^ v93;
                                    if ( v95 != 14 )
                                    {
                                      v94 = *(_BYTE *)(v97 + 14);
                                      *(_BYTE *)(v99 + 14 + a1 + 376) = v94;
                                      *(_BYTE *)(v96 + 14) = *(_BYTE *)(a1 + 30) ^ v94;
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
          goto LABEL_81;
        }
        v62 = 4 * (((v95 - 4) >> 2) + 1);
        if ( v61 <= 2 )
        {
          v66 = v99;
          v62 = 0;
        }
        else
        {
          v63 = *(_DWORD *)v97;
          *(_DWORD *)(a1 + v99 + 376) = *(_DWORD *)v97;
          *(_DWORD *)v96 = *(_DWORD *)(a1 + 16) ^ v63;
          if ( (v95 - 4) >> 2 )
          {
            v64 = *(_DWORD *)(v97 + 4);
            *(_DWORD *)(v47 + 4) = v64;
            *(_DWORD *)(v96 + 4) = *(_DWORD *)(a1 + 20) ^ v64;
            if ( (v95 - 4) >> 2 == 2 )
            {
              v65 = *(_DWORD *)(v97 + 8);
              *(_DWORD *)(v47 + 8) = v65;
              *(_DWORD *)(v96 + 8) = *(_DWORD *)(a1 + 24) ^ v65;
            }
          }
          v61 -= v62;
          v66 = v99 + v62;
          if ( v95 == v62 )
            goto LABEL_81;
        }
        v73 = v66 + 1;
        v74 = *(_BYTE *)(v97 + v62);
        *(_BYTE *)(a1 + v66 + 376) = v74;
        v75 = v62 + 1;
        *(_BYTE *)(v96 + v62) = *(_BYTE *)(a1 + v62 + 16) ^ v74;
        if ( v61 )
        {
          v76 = v66 + 2;
          v77 = v62 + 2;
          v78 = *(_BYTE *)(v97 + v75);
          *(_BYTE *)(v73 + a1 + 376) = v78;
          *(_BYTE *)(v96 + v75) = *(_BYTE *)(a1 + v75 + 16) ^ v78;
          if ( v61 != 1 )
          {
            v79 = *(_BYTE *)(v97 + v77);
            *(_BYTE *)(v76 + a1 + 376) = v79;
            *(_BYTE *)(v96 + v77) = *(_BYTE *)(a1 + v77 + 16) ^ v79;
          }
        }
LABEL_81:
        v99 += v95;
LABEL_27:
        *(_DWORD *)(a1 + 360) = v99;
        return 0;
      }
      v44 = v99;
      v99 = 0;
      sub_E50B4((_BYTE *)(a1 + 64), a1 + 96, a1 + 376, v44);
LABEL_38:
      v28 = v95;
      goto LABEL_21;
    }
    goto LABEL_28;
  }
  if ( !v95 )
  {
    *(_DWORD *)(a1 + 360) = v99;
    return 0;
  }
  v12 = (unsigned int)a2;
  v13 = a3;
  v14 = v95;
  v15 = v99 - a3;
  v16 = v99 + 375 + a1;
  do
  {
    v18 = *(_BYTE *)v12++;
    v17 = v18;
    v19 = a1 + v10;
    ++v13;
    v20 = (v10 + 1) & 0xF;
    *(_BYTE *)++v16 = v18;
    v10 = v20;
    v21 = *(_BYTE *)(v19 + 16);
    --v14;
    v22 = v20 != 0;
    if ( !v14 )
      v22 = 0;
    *(_BYTE *)(v13 - 1) = v17 ^ v21;
  }
  while ( v22 );
  v97 = v12;
  v95 = v14;
  if ( v20 )
  {
    *(_DWORD *)(a1 + 360) = v13 + v15;
    return 0;
  }
  sub_E50B4((_BYTE *)(a1 + 64), a1 + 96, a1 + 376, v13 + v15);
  v96 = v13;
  v99 = 0;
  if ( !((v12 | v13) << 30) )
    goto LABEL_38;
LABEL_28:
  if ( v95 )
  {
    v34 = 0;
    v35 = (char *)v97;
    v98 = v6;
    v36 = v96 - 1;
    v37 = v101;
    v38 = v35;
    v39 = &v35[v95];
    v40 = v99;
    do
    {
      if ( !v34 )
      {
        ++v37;
        v100 = v40;
        v98(a1, a1 + 16, v7);
        *(_BYTE *)(a1 + 15) = v37;
        *(_BYTE *)(a1 + 12) = HIBYTE(v37);
        *(_BYTE *)(a1 + 13) = BYTE2(v37);
        *(_BYTE *)(a1 + 14) = BYTE1(v37);
        v40 = v100;
      }
      v41 = *v38++;
      v42 = a1 + v34;
      v43 = v40 == 47;
      *(_BYTE *)(a1 + v40++ + 376) = v41;
      v34 = ((_BYTE)v34 + 1) & 0xF;
      *(_BYTE *)++v36 = *(_BYTE *)(v42 + 16) ^ v41;
      if ( v43 )
      {
        sub_E50B4((_BYTE *)(a1 + 64), a1 + 96, a1 + 376, v40);
        v40 = 0;
      }
    }
    while ( v38 != v39 );
  }
  else
  {
    v40 = v99;
  }
  *(_DWORD *)(a1 + 360) = v40;
  return 0;
}

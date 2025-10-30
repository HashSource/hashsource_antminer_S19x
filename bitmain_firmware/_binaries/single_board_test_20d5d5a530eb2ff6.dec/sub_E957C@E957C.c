int __fastcall sub_E957C(_DWORD *a1, unsigned __int64 *a2, _BYTE *a3, _BYTE *a4, unsigned int a5, int a6)
{
  __int64 v7; // r2
  void (__fastcall *v8)(unsigned __int64 *, unsigned __int64 *, _DWORD); // r4
  _BYTE *v9; // r8
  unsigned __int64 v10; // r6
  _BYTE *v11; // r9
  __int64 v12; // kr00_8
  unsigned int v13; // r4
  _DWORD *v14; // r2
  unsigned int v15; // r0
  int v16; // r1
  int v17; // r2
  unsigned __int64 v18; // kr08_8
  __int64 v19; // r2
  __int64 v22; // r8
  bool v23; // cc
  char v24; // r3
  int v25; // r3
  unsigned int v26; // r1
  unsigned int v27; // r3
  int v28; // r4
  int v29; // r4
  int v30; // r4
  int v31; // r2
  unsigned int v32; // r1
  char v33; // r0
  unsigned int v34; // r3
  char v35; // r0
  char v36; // r1
  __int64 v37; // r2
  __int64 v38; // r4
  __int64 v39; // r2
  int v40; // r1
  __int64 v41; // r8
  __int64 v42; // r4
  __int64 v43; // r6
  unsigned int v44; // r2
  bool v45; // cf
  char v46; // r2
  char v47; // r3
  int v48; // r3
  unsigned int v49; // r2
  int v50; // r1
  int v51; // r1
  int v52; // r1
  int v53; // r3
  char v54; // r5
  _BYTE *v55; // r1
  unsigned int v56; // r3
  char v57; // r5
  unsigned int v58; // r2
  _BYTE *v59; // r3
  char v60; // r1
  __int64 v61; // kr10_8
  __int64 v62; // r2
  char v63; // r2
  char v64; // r2
  char v65; // r2
  char v66; // r2
  char v67; // r2
  char v68; // r2
  char v69; // r2
  char v70; // r2
  char v71; // r2
  char v72; // r2
  char v73; // r2
  char v74; // r2
  char v75; // r2
  char v76; // r2
  char v77; // r3
  __int64 v78; // kr18_8
  char v79; // r2
  char v80; // r2
  char v81; // r2
  char v82; // r2
  char v83; // r2
  char v84; // r2
  char v85; // r2
  char v86; // r2
  char v87; // r2
  char v88; // r2
  char v89; // r3
  char v90; // r3
  char v91; // r3
  char v92; // r3
  char v93; // r3
  __int64 v94; // kr20_8
  void (__fastcall *v95)(__int64 *, __int64 *, int); // [sp+0h] [bp-4Ch]
  __int64 v96; // [sp+0h] [bp-4Ch]
  __int64 v97; // [sp+0h] [bp-4Ch]
  __int64 v98; // [sp+0h] [bp-4Ch]
  __int64 v99; // [sp+0h] [bp-4Ch]
  unsigned int v100; // [sp+8h] [bp-44h]
  __int64 v101; // [sp+10h] [bp-3Ch]
  __int64 v102; // [sp+10h] [bp-3Ch]
  unsigned __int64 v105; // [sp+28h] [bp-24h] BYREF
  __int64 v106; // [sp+30h] [bp-1Ch]
  __int64 v107; // [sp+38h] [bp-14h] BYREF
  __int64 v108; // [sp+40h] [bp-Ch]
  _BYTE v109[4]; // [sp+48h] [bp-4h] BYREF

  if ( a5 > 0xF )
  {
    v7 = a2[1];
    v8 = (void (__fastcall *)(unsigned __int64 *, unsigned __int64 *, _DWORD))a1[3];
    v105 = *a2;
    v106 = v7;
    v8(&v105, &v105, a1[1]);
    if ( !a6 )
    {
      if ( a5 << 28 )
      {
        a5 -= 16;
        if ( a5 <= 0xF )
        {
          v10 = v105;
          v22 = v106;
          goto LABEL_36;
        }
      }
    }
    v9 = a4 + 16;
    v10 = v105;
    v11 = a3 + 16;
    v12 = v106;
    v13 = a5;
    while ( 1 )
    {
      v14 = a1;
      v15 = *((_DWORD *)v11 - 4);
      __pld(v11 + 32);
      a3 = v11;
      v95 = (void (__fastcall *)(__int64 *, __int64 *, int))v14[2];
      v16 = *((_DWORD *)v11 - 3);
      v108 = *((_QWORD *)v11 - 1);
      HIDWORD(v10) ^= v16;
      v107 = v10 ^ v15;
      v17 = *a1;
      v108 ^= v12;
      v95(&v107, &v107, v17);
      v13 -= 16;
      v18 = v105;
      v102 = v106;
      v107 ^= v105;
      v100 = HIDWORD(v105) >> 31;
      v96 = v106 ^ v108;
      v108 ^= v106;
      v19 = v108;
      *((_QWORD *)v9 - 2) = v107;
      *((_QWORD *)v9 - 1) = v19;
      if ( !v13 )
        return 0;
      HIDWORD(v10) = v18 >> 31;
      LODWORD(v10) = (2 * v18) ^ (SHIDWORD(v106) >> 31) & 0x87;
      v101 = (2 * v102) | v100;
      v106 = v101;
      v105 = v10;
      v12 = v101;
      if ( v13 <= 0xF )
        break;
      v9 += 16;
      v11 += 16;
    }
    a4 = v9;
    a5 = v13;
    if ( !a6 )
    {
      v22 = v101;
LABEL_36:
      v97 = 2 * v22;
      v38 = 2 * v10;
      v39 = *((_QWORD *)a3 + 1);
      v40 = *((_DWORD *)a3 + 1);
      LODWORD(v38) = (2 * v10) ^ (SHIDWORD(v106) >> 31) & 0x87;
      v41 = HIDWORD(v10) >> 31;
      LODWORD(v107) = *(_DWORD *)a3;
      HIDWORD(v107) = v40;
      v98 = v97 | v41;
      v107 ^= v38;
      v108 = v98 ^ v39;
      ((void (__fastcall *)(__int64 *, __int64 *, _DWORD))a1[2])(&v107, &v107, *a1);
      v42 = v38 ^ v107;
      v107 = v42;
      v99 = v98 ^ v108;
      v43 = v99;
      v108 = v99;
      if ( !a5 )
      {
LABEL_57:
        v107 = v105 ^ v42;
        v108 = v43 ^ v106;
        ((void (__fastcall *)(__int64 *, __int64 *, _DWORD))a1[2])(&v107, &v107, *a1);
        v107 ^= v105;
        v108 ^= v106;
        v62 = v108;
        *(_QWORD *)a4 = v107;
        *((_QWORD *)a4 + 1) = v62;
        return 0;
      }
      v44 = (unsigned int)(a4 + 16);
      v45 = a3 + 16 >= a4 + 20;
      if ( a3 + 16 < a4 + 20 )
        v45 = v44 >= (unsigned int)(a3 + 20);
      v46 = v44 | ((_BYTE)a3 + 16);
      v47 = v45;
      if ( a5 <= 5 )
        v47 = 0;
      v48 = v47 & 1;
      if ( (v46 & 3) != 0 )
        v48 = 0;
      if ( !v48 )
      {
        v79 = a3[16];
        a4[16] = v107;
        LOBYTE(v107) = v79;
        if ( a5 == 1 )
          goto LABEL_56;
        v80 = a3[17];
        a4[17] = BYTE1(v107);
        BYTE1(v107) = v80;
        if ( a5 == 2 )
          goto LABEL_56;
        v81 = a3[18];
        a4[18] = BYTE2(v107);
        BYTE2(v107) = v81;
        if ( a5 == 3 )
          goto LABEL_56;
        v82 = a3[19];
        a4[19] = BYTE3(v107);
        BYTE3(v107) = v82;
        if ( a5 == 4 )
          goto LABEL_56;
        v83 = a3[20];
        a4[20] = BYTE4(v107);
        BYTE4(v107) = v83;
        if ( a5 <= 5 )
          goto LABEL_56;
        v84 = a3[21];
        a4[21] = BYTE5(v107);
        BYTE5(v107) = v84;
        if ( a5 <= 6 )
          goto LABEL_56;
        v85 = a3[22];
        a4[22] = BYTE6(v107);
        BYTE6(v107) = v85;
        if ( a5 == 7 )
          goto LABEL_56;
        v86 = a3[23];
        a4[23] = HIBYTE(v107);
        HIBYTE(v107) = v86;
        if ( a5 == 8 )
          goto LABEL_56;
        v87 = a3[24];
        a4[24] = v108;
        LOBYTE(v108) = v87;
        if ( a5 != 9 )
        {
          v88 = a3[25];
          a4[25] = BYTE1(v108);
          BYTE1(v108) = v88;
          if ( a5 != 10 )
          {
            v89 = BYTE2(v108);
            BYTE2(v108) = a3[26];
            a4[26] = v89;
            if ( a5 != 11 )
            {
              v90 = BYTE3(v108);
              BYTE3(v108) = a3[27];
              a4[27] = v90;
              if ( a5 != 12 )
              {
                v91 = BYTE4(v108);
                BYTE4(v108) = a3[28];
                a4[28] = v91;
                if ( a5 != 13 )
                {
                  v92 = BYTE5(v108);
                  BYTE5(v108) = a3[29];
                  a4[29] = v92;
                  if ( a5 == 15 )
                  {
                    v93 = BYTE6(v108);
                    BYTE6(v108) = a3[30];
                    v94 = v108;
                    a4[30] = v93;
                    v99 = v94;
                    goto LABEL_56;
                  }
                }
              }
            }
          }
        }
        goto LABEL_58;
      }
      v49 = 4 * (((a5 - 4) >> 2) + 1);
      if ( a5 - 1 <= 2 )
      {
        v49 = HIDWORD(v41);
      }
      else
      {
        v50 = v107;
        LODWORD(v107) = *((_DWORD *)a3 + 4);
        *((_DWORD *)a4 + 4) = v50;
        if ( (a5 - 4) >> 2 )
        {
          v51 = HIDWORD(v107);
          HIDWORD(v107) = *((_DWORD *)a3 + 5);
          *((_DWORD *)a4 + 5) = v51;
          if ( (a5 - 4) >> 2 != 1 )
          {
            v52 = v108;
            LODWORD(v108) = *((_DWORD *)a3 + 6);
            *((_DWORD *)a4 + 6) = v52;
            if ( (a5 - 4) >> 2 != 2 )
            {
              v53 = HIDWORD(v108);
              HIDWORD(v108) = *((_DWORD *)a3 + 7);
              *((_DWORD *)a4 + 7) = v53;
            }
          }
        }
        if ( a5 == v49 )
          goto LABEL_58;
      }
      v54 = a3[v49 + 16];
      a4[v49 + 16] = *((_BYTE *)&v107 + v49);
      *((_BYTE *)&v107 + v49) = v54;
      if ( a5 > v49 + 1 )
      {
        v55 = &v109[v49 + 1];
        v56 = v49 + 2;
        v57 = *(v55 - 16);
        *(v55 - 16) = a3[v49 + 17];
        a4[v49 + 17] = v57;
        if ( a5 > v49 + 2 )
        {
          v58 = v49 + 18;
          v59 = &v109[v56];
          v60 = *(v59 - 16);
          *(v59 - 16) = a3[v58];
          v61 = v108;
          a4[v58] = v60;
          v99 = v61;
LABEL_56:
          v42 = v107;
          v43 = v99;
          goto LABEL_57;
        }
      }
LABEL_58:
      v99 = v108;
      goto LABEL_56;
    }
    v23 = v11 + 4 > v9;
    if ( v11 + 4 > v9 )
      v23 = v9 + 4 > v11;
    v24 = !v23;
    if ( v13 <= 5 )
      v24 = 0;
    v25 = v24 & 1;
    if ( (((unsigned __int8)v9 | (unsigned __int8)v11) & 3) != 0 )
      v25 = 0;
    if ( !v25 )
    {
      v63 = *v11;
      *v9 = v107;
      LOBYTE(v107) = v63;
      if ( v13 == 1 )
        goto LABEL_32;
      v64 = v11[1];
      v9[1] = BYTE1(v107);
      BYTE1(v107) = v64;
      if ( v13 == 2 )
        goto LABEL_32;
      v65 = v11[2];
      v9[2] = BYTE2(v107);
      BYTE2(v107) = v65;
      if ( v13 == 3 )
        goto LABEL_32;
      v66 = v11[3];
      v9[3] = BYTE3(v107);
      BYTE3(v107) = v66;
      if ( v13 == 4 )
        goto LABEL_32;
      v67 = v11[4];
      v9[4] = BYTE4(v107);
      BYTE4(v107) = v67;
      if ( v13 <= 5 )
        goto LABEL_32;
      v68 = v11[5];
      v9[5] = BYTE5(v107);
      BYTE5(v107) = v68;
      if ( v13 <= 6 )
        goto LABEL_32;
      v69 = v11[6];
      v9[6] = BYTE6(v107);
      BYTE6(v107) = v69;
      if ( v13 == 7 )
        goto LABEL_32;
      v70 = v11[7];
      v9[7] = HIBYTE(v107);
      HIBYTE(v107) = v70;
      if ( v13 == 8 )
        goto LABEL_32;
      v71 = v11[8];
      v9[8] = v108;
      LOBYTE(v108) = v71;
      if ( v13 != 9 )
      {
        v72 = v11[9];
        v9[9] = BYTE1(v108);
        BYTE1(v108) = v72;
        if ( v13 != 10 )
        {
          v73 = v11[10];
          v9[10] = BYTE2(v108);
          BYTE2(v108) = v73;
          if ( v13 != 11 )
          {
            v74 = v11[11];
            v9[11] = BYTE3(v108);
            BYTE3(v108) = v74;
            if ( v13 != 12 )
            {
              v75 = v11[12];
              v9[12] = BYTE4(v108);
              BYTE4(v108) = v75;
              if ( v13 != 13 )
              {
                v76 = v11[13];
                v9[13] = BYTE5(v108);
                BYTE5(v108) = v76;
                if ( v13 == 15 )
                {
                  v77 = BYTE6(v108);
                  BYTE6(v108) = v11[14];
                  v78 = v108;
                  v9[14] = v77;
                  v96 = v78;
                  goto LABEL_32;
                }
              }
            }
          }
        }
      }
      goto LABEL_34;
    }
    v26 = v13;
    v27 = 4 * (((v13 - 4) >> 2) + 1);
    if ( v13 <= 3 )
    {
      v27 = 0;
    }
    else
    {
      v28 = v107;
      LODWORD(v107) = *(_DWORD *)v11;
      *(_DWORD *)v9 = v28;
      if ( (v26 - 4) >> 2 )
      {
        v29 = HIDWORD(v107);
        HIDWORD(v107) = *((_DWORD *)v11 + 1);
        *((_DWORD *)v9 + 1) = v29;
        if ( (v26 - 4) >> 2 != 1 )
        {
          v30 = v108;
          LODWORD(v108) = *((_DWORD *)v11 + 2);
          *((_DWORD *)v9 + 2) = v30;
          if ( (v26 - 4) >> 2 != 2 )
          {
            v31 = HIDWORD(v108);
            HIDWORD(v108) = *((_DWORD *)v11 + 3);
            *((_DWORD *)v9 + 3) = v31;
          }
        }
      }
      if ( v27 == v26 )
        goto LABEL_34;
    }
    v32 = v27 + 1;
    v33 = *((_BYTE *)&v107 + v27);
    *((_BYTE *)&v107 + v27) = v11[v27];
    v9[v27] = v33;
    if ( a5 > v27 + 1 )
    {
      v34 = v27 + 2;
      v35 = *((_BYTE *)&v107 + v32);
      *((_BYTE *)&v107 + v32) = v11[v32];
      v9[v32] = v35;
      if ( a5 > v34 )
      {
        v36 = *((_BYTE *)&v107 + v34);
        *((_BYTE *)&v107 + v34) = v11[v34];
        v9[v34] = v36;
        v96 = v108;
LABEL_32:
        v108 = v96 ^ v101;
        v107 ^= v10;
        ((void (__fastcall *)(__int64 *, __int64 *, _DWORD))a1[2])(&v107, &v107, *a1);
        v107 ^= v105;
        v108 ^= v106;
        v37 = v108;
        *((_QWORD *)v9 - 2) = v107;
        *((_QWORD *)v9 - 1) = v37;
        return 0;
      }
    }
LABEL_34:
    v96 = v108;
    goto LABEL_32;
  }
  return -1;
}

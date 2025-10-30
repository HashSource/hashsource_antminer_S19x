int __fastcall sub_E2B94(char *a1, unsigned int a2, unsigned int a3, unsigned int a4)
{
  int v6; // r2
  int v7; // r3
  int v8; // r5
  int v9; // r3
  int v10; // r0
  int v11; // r6
  int v12; // r0
  int v13; // r5
  int v14; // r0
  int v15; // r6
  int v16; // r0
  int v17; // r5
  int v18; // r0
  int v19; // r2
  int v20; // r2
  _DWORD *v21; // r11
  unsigned int v22; // r9
  unsigned int v23; // r8
  void (__fastcall *v24)(char *, __int64 *, int); // r3
  int v25; // r2
  unsigned int v26; // r12
  char v27; // r3
  char v28; // r3
  char v29; // r3
  char v30; // r3
  char v31; // r3
  char v32; // r3
  char v33; // r3
  int v34; // r3
  __int64 v35; // r2
  __int64 v36; // r6
  __int64 v37; // r4
  __int64 v38; // r0
  __int64 v39; // r2
  unsigned int v40; // r3
  unsigned int v41; // r3
  __int64 v42; // r4
  __int64 v44; // r6
  int v45; // r8
  int v46; // r12
  int v47; // r11
  unsigned int v48; // r4
  char v49; // r0
  unsigned int v50; // r1
  unsigned int v51; // r2
  _BYTE *v52; // r3
  bool v53; // cf
  char v54; // r4
  char v55; // r0
  unsigned __int8 v56; // r3
  unsigned __int8 v57; // r2
  int v58; // r3
  unsigned int v59; // r3
  int v60; // r2
  int v61; // r2
  int v62; // r2
  int v63; // r2
  unsigned int v64; // r2
  char v65; // r4
  unsigned int v66; // r3
  char v67; // r0
  char v68; // r2
  int v69; // r3
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
  char v82; // r3
  char v83; // r3
  __int64 v84; // [sp+0h] [bp-44h]
  __int64 v85; // [sp+0h] [bp-44h]
  void (__fastcall *v86)(char *, __int64 *, int); // [sp+Ch] [bp-38h]
  int v87; // [sp+10h] [bp-34h]
  unsigned int v88; // [sp+1Ch] [bp-28h]
  char v91; // [sp+28h] [bp-1Ch]
  int v92; // [sp+2Ch] [bp-18h]
  __int64 v93; // [sp+30h] [bp-14h] BYREF
  __int64 v94; // [sp+38h] [bp-Ch]

  v86 = (void (__fastcall *)(char *, __int64 *, int))*((_DWORD *)a1 + 10);
  v91 = *a1;
  v87 = *((_DWORD *)a1 + 11);
  if ( (*a1 & 0x40) == 0 )
    v86(a1, (__int64 *)a1 + 2, *((_DWORD *)a1 + 11));
  v6 = v91 & 7;
  *a1 = v6;
  v92 = 15 - v6;
  if ( (v91 & 7) != 0 )
  {
    v7 = (unsigned __int8)a1[15 - v6];
    v8 = 16 - v6;
    a1[15 - v6] = 0;
    v9 = v7 << 8;
    if ( v6 != 1 )
    {
      v10 = (unsigned __int8)a1[v8];
      v11 = 17 - v6;
      a1[v8] = 0;
      v9 = (v9 | v10) << 8;
      if ( v6 != 2 )
      {
        v12 = (unsigned __int8)a1[v11];
        v13 = 18 - v6;
        a1[v11] = 0;
        v9 = (v9 | v12) << 8;
        if ( v6 != 3 )
        {
          v14 = (unsigned __int8)a1[v13];
          v15 = 19 - v6;
          a1[v13] = 0;
          v9 = (v9 | v14) << 8;
          if ( v6 != 4 )
          {
            v16 = (unsigned __int8)a1[v15];
            v17 = 20 - v6;
            a1[v15] = 0;
            v9 = (v9 | v16) << 8;
            if ( v6 != 5 )
            {
              v18 = (unsigned __int8)a1[v17];
              a1[v17] = 0;
              v9 = (v9 | v18) << 8;
              if ( v6 != 6 )
              {
                v19 = (unsigned __int8)a1[14];
                a1[14] = 0;
                v9 = (v9 | v19) << 8;
              }
            }
          }
        }
      }
    }
  }
  else
  {
    v9 = 0;
  }
  v20 = (unsigned __int8)a1[15];
  a1[15] = 1;
  v88 = v9 | v20;
  if ( (v9 | v20) == a4 )
  {
    if ( a4 > 0xF )
    {
      v21 = (_DWORD *)a2;
      v22 = a4;
      v23 = a3 + 16;
      do
      {
        v24 = v86;
        v22 -= 16;
        v25 = v87;
        __pld(v21 + 8);
        __pld(v21 + 10);
        v24(a1, &v93, v25);
        v26 = v23 - 16;
        v27 = a1[15] + 1;
        a1[15] = v27;
        if ( !v27 )
        {
          v28 = a1[14] + 1;
          a1[14] = v28;
          if ( !v28 )
          {
            v29 = a1[13] + 1;
            a1[13] = v29;
            if ( !v29 )
            {
              v30 = a1[12] + 1;
              a1[12] = v30;
              if ( !v30 )
              {
                v31 = a1[11] + 1;
                a1[11] = v31;
                if ( !v31 )
                {
                  v32 = a1[10] + 1;
                  a1[10] = v32;
                  if ( !v32 )
                  {
                    v33 = a1[9] + 1;
                    a1[9] = v33;
                    if ( !v33 )
                      ++a1[8];
                  }
                }
              }
            }
          }
        }
        v34 = v21[2];
        v21 += 4;
        v23 += 16;
        LODWORD(v84) = v34;
        v35 = *((_QWORD *)a1 + 2);
        HIDWORD(v84) = *(v21 - 1);
        v36 = v84;
        v93 ^= *((_QWORD *)v21 - 2);
        v85 = v93 ^ v35;
        v37 = *((_QWORD *)a1 + 3);
        v94 ^= v36;
        v38 = v93;
        v39 = v94;
        HIDWORD(v37) ^= HIDWORD(v94);
        *((_QWORD *)a1 + 3) = v37 ^ (unsigned int)v94;
        *((_QWORD *)a1 + 2) = v85;
        *(_DWORD *)(v23 - 32) = v38;
        *(_DWORD *)(v26 + 4) = HIDWORD(v38);
        *(_QWORD *)(v26 + 8) = v39;
        ((void (__fastcall *)(char *, char *, int, void (__fastcall *)(char *, __int64 *, int), _DWORD, _DWORD))v86)(
          a1 + 16,
          a1 + 16,
          v87,
          v86,
          v85,
          HIDWORD(v85));
      }
      while ( v22 > 0xF );
      v40 = v88 - 16;
      v88 &= 0xFu;
      v41 = (v40 & 0xFFFFFFF0) + 16;
      a2 += v41;
      a3 += v41;
    }
    if ( !v88 )
      goto LABEL_25;
    v48 = (unsigned int)(a1 + 20);
    v49 = ((int (__fastcall *)(char *, __int64 *, int))v86)(a1, &v93, v87);
    v50 = (unsigned int)(a1 + 16);
    v51 = a3 + 4;
    if ( a3 < (unsigned int)(a1 + 20) )
      v49 = 0;
    v52 = (_BYTE *)(a2 + 4);
    if ( a3 >= v48 )
      v49 = 1;
    if ( v51 <= v50 )
      v49 |= 1u;
    v53 = a2 >= v48;
    if ( a2 < v48 )
      v53 = v50 >= (unsigned int)v52;
    v54 = v53;
    v55 = v49 & v54;
    v56 = a3 >= (unsigned int)v52;
    if ( v51 <= a2 )
      v56 |= 1u;
    if ( v88 > 4 )
      v57 = v55 & 1;
    else
      v57 = 0;
    v58 = v56 & v57 & 1;
    if ( ((a2 | a3) & 3) != 0 )
      v58 = 0;
    if ( !v58 )
    {
      v69 = (unsigned __int8)(v93 ^ *(_BYTE *)a2);
      *(_BYTE *)a3 = v69;
      a1[16] ^= v69;
      if ( v88 != 1 )
      {
        v70 = *(_BYTE *)(a2 + 1) ^ BYTE1(v93);
        *(_BYTE *)(a3 + 1) = v70;
        a1[17] ^= v70;
        if ( v88 != 2 )
        {
          v71 = *(_BYTE *)(a2 + 2) ^ BYTE2(v93);
          *(_BYTE *)(a3 + 2) = v71;
          a1[18] ^= v71;
          if ( v88 != 3 )
          {
            v72 = *(_BYTE *)(a2 + 3) ^ BYTE3(v93);
            *(_BYTE *)(a3 + 3) = v72;
            a1[19] ^= v72;
            if ( v88 > 4 )
            {
              v73 = *(_BYTE *)(a2 + 4) ^ BYTE4(v93);
              *(_BYTE *)(a3 + 4) = v73;
              a1[20] ^= v73;
              if ( v88 > 5 )
              {
                v74 = *(_BYTE *)(a2 + 5) ^ BYTE5(v93);
                *(_BYTE *)(a3 + 5) = v74;
                a1[21] ^= v74;
                if ( v88 != 6 )
                {
                  v75 = *(_BYTE *)(a2 + 6) ^ BYTE6(v93);
                  *(_BYTE *)(a3 + 6) = v75;
                  a1[22] ^= v75;
                  if ( v88 != 7 )
                  {
                    v76 = *(_BYTE *)(a2 + 7) ^ HIBYTE(v93);
                    *(_BYTE *)(a3 + 7) = v76;
                    a1[23] ^= v76;
                    if ( v88 != 8 )
                    {
                      v77 = *(_BYTE *)(a2 + 8) ^ v94;
                      *(_BYTE *)(a3 + 8) = v77;
                      a1[24] ^= v77;
                      if ( v88 != 9 )
                      {
                        v78 = *(_BYTE *)(a2 + 9) ^ BYTE1(v94);
                        *(_BYTE *)(a3 + 9) = v78;
                        a1[25] ^= v78;
                        if ( v88 != 10 )
                        {
                          v79 = *(_BYTE *)(a2 + 10) ^ BYTE2(v94);
                          *(_BYTE *)(a3 + 10) = v79;
                          a1[26] ^= v79;
                          if ( v88 != 11 )
                          {
                            v80 = *(_BYTE *)(a2 + 11) ^ BYTE3(v94);
                            *(_BYTE *)(a3 + 11) = v80;
                            a1[27] ^= v80;
                            if ( v88 != 12 )
                            {
                              v81 = *(_BYTE *)(a2 + 12) ^ BYTE4(v94);
                              *(_BYTE *)(a3 + 12) = v81;
                              a1[28] ^= v81;
                              if ( v88 != 13 )
                              {
                                v82 = *(_BYTE *)(a2 + 13) ^ BYTE5(v94);
                                *(_BYTE *)(a3 + 13) = v82;
                                a1[29] ^= v82;
                                if ( v88 == 15 )
                                {
                                  v83 = *(_BYTE *)(a2 + 14) ^ BYTE6(v94);
                                  *(_BYTE *)(a3 + 14) = v83;
                                  a1[30] ^= v83;
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
      goto LABEL_54;
    }
    v59 = 4 * (((v88 - 4) >> 2) + 1);
    if ( v88 - 1 <= 2 )
    {
      v59 = 0;
    }
    else
    {
      v60 = v93 ^ *(_DWORD *)a2;
      *(_DWORD *)a3 = v60;
      *((_DWORD *)a1 + 4) ^= v60;
      if ( (v88 - 4) >> 2 )
      {
        v61 = *(_DWORD *)(a2 + 4) ^ HIDWORD(v93);
        *(_DWORD *)(a3 + 4) = v61;
        *((_DWORD *)a1 + 5) ^= v61;
        if ( (v88 - 4) >> 2 != 1 )
        {
          v62 = *(_DWORD *)(a2 + 8) ^ v94;
          *(_DWORD *)(a3 + 8) = v62;
          *((_DWORD *)a1 + 6) ^= v62;
          if ( (v88 - 4) >> 2 != 2 )
          {
            v63 = *(_DWORD *)(a2 + 12) ^ HIDWORD(v94);
            *(_DWORD *)(a3 + 12) = v63;
            *((_DWORD *)a1 + 7) ^= v63;
          }
        }
      }
      if ( v88 == v59 )
        goto LABEL_54;
    }
    v64 = v59 + 1;
    v65 = *(_BYTE *)(a2 + v59) ^ *((_BYTE *)&v93 + v59);
    *(_BYTE *)(a3 + v59) = v65;
    a1[v59 + 16] ^= v65;
    if ( v88 > v59 + 1 )
    {
      v66 = v59 + 2;
      v67 = *((_BYTE *)&v93 + v64) ^ *(_BYTE *)(a2 + v64);
      *(_BYTE *)(a3 + v64) = v67;
      a1[v64 + 16] ^= v67;
      if ( v88 > v66 )
      {
        v68 = *((_BYTE *)&v93 + v66) ^ *(_BYTE *)(a2 + v66);
        *(_BYTE *)(a3 + v66) = v68;
        a1[v66 + 16] ^= v68;
      }
    }
LABEL_54:
    v86(a1 + 16, (__int64 *)v50, v87);
LABEL_25:
    memset(&a1[v92], 0, 16 - v92);
    v86(a1, &v93, v87);
    v42 = *((_QWORD *)a1 + 2);
    v44 = *((_QWORD *)a1 + 3);
    v45 = v94;
    v46 = HIDWORD(v93) ^ HIDWORD(v42);
    v47 = v93 ^ v42;
    LODWORD(v42) = HIDWORD(v44) ^ HIDWORD(v94);
    *((_DWORD *)a1 + 4) = v47;
    *((_DWORD *)a1 + 5) = v46;
    *a1 = v91;
    *((_DWORD *)a1 + 6) = v44 ^ v45;
    *((_DWORD *)a1 + 7) = v42;
    return 0;
  }
  return -1;
}

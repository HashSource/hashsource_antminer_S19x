int __fastcall sub_E3740(
        char *a1,
        char *a2,
        char *a3,
        unsigned int a4,
        void (__fastcall *a5)(char *, char *, unsigned int, int, char *, char *))
{
  char v6; // r8
  int v9; // r11
  int v10; // r2
  int v11; // r6
  int v12; // r3
  int v13; // lr
  int v14; // r3
  int v15; // r0
  int v16; // r12
  int v17; // r0
  int v18; // lr
  int v19; // r0
  int v20; // r12
  int v21; // r0
  int v22; // lr
  int v23; // r0
  int v24; // r2
  int v25; // r2
  int v26; // r3
  __int64 v27; // r6
  __int64 v29; // r2
  __int64 v30; // r10
  char *v31; // r1
  unsigned int v32; // r10
  unsigned int v33; // r2
  unsigned int v34; // r5
  unsigned int v35; // r2
  unsigned int v36; // r10
  unsigned int v37; // r1
  unsigned int v38; // r2
  unsigned int v39; // r2
  unsigned int v40; // r2
  unsigned int v41; // r2
  unsigned int v42; // r2
  unsigned int v43; // r2
  unsigned int v44; // r1
  bool v45; // lr
  char *v46; // r0
  bool v47; // cf
  char v48; // r1
  char v49; // r1
  bool v50; // cf
  char v51; // r2
  unsigned __int8 v52; // r1
  int v53; // r2
  int v54; // r12
  unsigned int v55; // r2
  int v56; // r1
  int v57; // r1
  int v58; // r1
  int v59; // r1
  unsigned int v60; // r1
  char v61; // lr
  unsigned int v62; // r2
  char v63; // r0
  char v64; // r3
  int v65; // r2
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
  char v77; // r2
  char v78; // r2
  char v79; // r2
  char v80; // r3
  void (__fastcall *v82)(char *, __int64 *, int); // [sp+Ch] [bp-20h]
  unsigned int v83; // [sp+10h] [bp-1Ch]
  unsigned int v84; // [sp+14h] [bp-18h]
  __int64 v85; // [sp+18h] [bp-14h] BYREF
  __int64 v86; // [sp+20h] [bp-Ch]

  v6 = *a1;
  v9 = *((_DWORD *)a1 + 11);
  v82 = (void (__fastcall *)(char *, __int64 *, int))*((_DWORD *)a1 + 10);
  if ( (*a1 & 0x40) == 0 )
    (*((void (__fastcall **)(char *, char *, int))a1 + 10))(a1, a1 + 16, v9);
  v10 = v6 & 7;
  *a1 = v6 & 7;
  v11 = 15 - v10;
  if ( (v6 & 7) != 0 )
  {
    v12 = (unsigned __int8)a1[v11];
    v13 = 16 - v10;
    a1[v11] = 0;
    v14 = v12 << 8;
    if ( v10 != 1 )
    {
      v15 = (unsigned __int8)a1[v13];
      v16 = 17 - v10;
      a1[v13] = 0;
      v14 = (v14 | v15) << 8;
      if ( v10 != 2 )
      {
        v17 = (unsigned __int8)a1[v16];
        v18 = 18 - v10;
        a1[v16] = 0;
        v14 = (v14 | v17) << 8;
        if ( v10 != 3 )
        {
          v19 = (unsigned __int8)a1[v18];
          v20 = 19 - v10;
          a1[v18] = 0;
          v14 = (v14 | v19) << 8;
          if ( v10 != 4 )
          {
            v21 = (unsigned __int8)a1[v20];
            v22 = 20 - v10;
            a1[v20] = 0;
            v14 = (v14 | v21) << 8;
            if ( v10 != 5 )
            {
              v23 = (unsigned __int8)a1[v22];
              a1[v22] = 0;
              v14 = (v14 | v23) << 8;
              if ( v10 != 6 )
              {
                v24 = (unsigned __int8)a1[14];
                a1[14] = 0;
                v14 = (v14 | v24) << 8;
              }
            }
          }
        }
      }
    }
  }
  else
  {
    v14 = 0;
  }
  v25 = (unsigned __int8)a1[15];
  a1[15] = 1;
  v26 = v14 | v25;
  if ( v26 == a4 )
  {
    if ( a4 >> 4 )
    {
      v83 = (unsigned int)(a1 + 16);
      v31 = a3;
      v32 = 16 * (a4 >> 4);
      a3 += v32;
      a5(a2, v31, a4 >> 4, v9, a1, a1 + 16);
      a2 += v32;
      v26 = a4 - v32;
      if ( a4 == v32 )
        goto LABEL_14;
      v33 = (unsigned __int8)(a4 >> 4) + (unsigned __int8)a1[15];
      a1[15] = v33;
      if ( (v33 >> 8) | (v32 >> 12) )
      {
        v34 = v32 >> 20;
        v35 = (unsigned __int8)a1[14] + (unsigned __int8)(v32 >> 12) + (v33 >> 8);
        a1[14] = v35;
        if ( (v35 >> 8) | (v32 >> 20) )
        {
          v36 = v32 >> 28;
          v37 = (v35 >> 8) + (unsigned __int8)a1[13] + (unsigned __int8)v34;
          a1[13] = v37;
          if ( (v37 >> 8) | v36 )
          {
            v38 = (v37 >> 8) + v36 + (unsigned __int8)a1[12];
            a1[12] = v38;
            v39 = v38 >> 8;
            if ( v39 )
            {
              v40 = v39 + (unsigned __int8)a1[11];
              a1[11] = v40;
              if ( v40 >> 8 )
              {
                v41 = (unsigned __int8)a1[10] + (v40 >> 8);
                a1[10] = v41;
                if ( v41 >> 8 )
                {
                  v42 = (unsigned __int8)a1[9] + (v41 >> 8);
                  a1[9] = v42;
                  v43 = v42 >> 8;
                  if ( v43 )
                    a1[8] += v43;
                }
              }
            }
          }
        }
      }
    }
    else
    {
      if ( !a4 )
      {
LABEL_14:
        memset(&a1[v11], 0, (v6 & 7) + 1);
        v82(a1, &v85, v9);
        v27 = *((_QWORD *)a1 + 2);
        v29 = v85;
        v30 = *((_QWORD *)a1 + 3);
        *a1 = v6;
        *((_QWORD *)a1 + 2) = v29 ^ v27;
        *((_QWORD *)a1 + 3) = v86 ^ v30;
        return 0;
      }
      v83 = (unsigned int)(a1 + 16);
    }
    v84 = v26;
    v82(a1, &v85, v9);
    v44 = (unsigned int)(a1 + 20);
    v45 = a3 >= a1 + 20;
    v46 = a2 + 4;
    if ( (unsigned int)(a3 + 4) <= v83 )
      v45 = 1;
    v47 = (unsigned int)a2 >= v44;
    if ( (unsigned int)a2 < v44 )
      v47 = v83 >= (unsigned int)v46;
    v48 = v47;
    v49 = v45 & v48;
    v50 = a3 >= v46;
    if ( a3 < v46 )
      v50 = a2 >= a3 + 4;
    v51 = v50;
    if ( v84 > 4 )
      v52 = v49 & 1;
    else
      v52 = 0;
    v53 = (unsigned __int8)v51 & v52 & 1;
    if ( (((unsigned __int8)a3 | (unsigned __int8)a2) & 3) != 0 )
      v53 = 0;
    if ( !v53 )
    {
      v65 = (unsigned __int8)(*a2 ^ v85);
      *a3 = v65;
      a1[16] ^= v65;
      if ( v84 != 1 )
      {
        v66 = a2[1] ^ BYTE1(v85);
        a3[1] = v66;
        a1[17] ^= v66;
        if ( v84 != 2 )
        {
          v67 = a2[2] ^ BYTE2(v85);
          a3[2] = v67;
          a1[18] ^= v67;
          if ( v84 != 3 )
          {
            v68 = a2[3] ^ BYTE3(v85);
            a3[3] = v68;
            a1[19] ^= v68;
            if ( v84 > 4 )
            {
              v69 = a2[4] ^ BYTE4(v85);
              a3[4] = v69;
              a1[20] ^= v69;
              if ( v84 > 5 )
              {
                v70 = a2[5] ^ BYTE5(v85);
                a3[5] = v70;
                a1[21] ^= v70;
                if ( v84 != 6 )
                {
                  v71 = a2[6] ^ BYTE6(v85);
                  a3[6] = v71;
                  a1[22] ^= v71;
                  if ( v84 != 7 )
                  {
                    v72 = a2[7] ^ HIBYTE(v85);
                    a3[7] = v72;
                    a1[23] ^= v72;
                    if ( v84 != 8 )
                    {
                      v73 = a2[8] ^ v86;
                      a3[8] = v73;
                      a1[24] ^= v73;
                      if ( v84 != 9 )
                      {
                        v74 = a2[9] ^ BYTE1(v86);
                        a3[9] = v74;
                        a1[25] ^= v74;
                        if ( v84 != 10 )
                        {
                          v75 = a2[10] ^ BYTE2(v86);
                          a3[10] = v75;
                          a1[26] ^= v75;
                          if ( v84 != 11 )
                          {
                            v76 = a2[11] ^ BYTE3(v86);
                            a3[11] = v76;
                            a1[27] ^= v76;
                            if ( v84 != 12 )
                            {
                              v77 = a2[12] ^ BYTE4(v86);
                              a3[12] = v77;
                              a1[28] ^= v77;
                              if ( v84 != 13 )
                              {
                                v78 = a2[13] ^ BYTE5(v86);
                                a3[13] = v78;
                                a1[29] ^= v78;
                                if ( v84 != 14 )
                                {
                                  v79 = a2[14] ^ BYTE6(v86);
                                  a3[14] = v79;
                                  a1[30] ^= v79;
                                  if ( v84 != 15 )
                                  {
                                    v80 = a2[15] ^ HIBYTE(v86);
                                    a3[15] = v80;
                                    a1[31] ^= v80;
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
      goto LABEL_54;
    }
    if ( v84 )
      v54 = v84;
    else
      v54 = 1;
    v55 = 4 * (((unsigned int)(v54 - 4) >> 2) + 1);
    if ( v84 <= 3 )
    {
      v55 = 0;
    }
    else
    {
      v56 = *(_DWORD *)a2 ^ v85;
      *(_DWORD *)a3 = v56;
      *((_DWORD *)a1 + 4) ^= v56;
      if ( (unsigned int)(v54 - 4) >> 2 )
      {
        v57 = HIDWORD(v85) ^ *((_DWORD *)a2 + 1);
        *((_DWORD *)a3 + 1) = v57;
        *((_DWORD *)a1 + 5) ^= v57;
        if ( (unsigned int)(v54 - 4) >> 2 != 1 )
        {
          v58 = v86 ^ *((_DWORD *)a2 + 2);
          *((_DWORD *)a3 + 2) = v58;
          *((_DWORD *)a1 + 6) ^= v58;
          if ( (unsigned int)(v54 - 4) >> 2 != 2 )
          {
            v59 = HIDWORD(v86) ^ *((_DWORD *)a2 + 3);
            *((_DWORD *)a3 + 3) = v59;
            *((_DWORD *)a1 + 7) ^= v59;
          }
        }
      }
      if ( v54 == v55 )
        goto LABEL_54;
    }
    v60 = v55 + 1;
    v61 = a2[v55] ^ *((_BYTE *)&v85 + v55);
    a3[v55] = v61;
    a1[v55 + 16] ^= v61;
    if ( v84 > v55 + 1 )
    {
      v62 = v55 + 2;
      v63 = a2[v60] ^ *((_BYTE *)&v85 + v60);
      a3[v60] = v63;
      a1[v60 + 16] ^= v63;
      if ( v84 > v62 )
      {
        v64 = *((_BYTE *)&v85 + v62) ^ a2[v62];
        a3[v62] = v64;
        a1[v62 + 16] ^= v64;
      }
    }
LABEL_54:
    v82((char *)v83, (__int64 *)v83, v9);
    goto LABEL_14;
  }
  return -1;
}

int __fastcall sub_E3140(
        char *a1,
        unsigned int a2,
        _BYTE *a3,
        unsigned int a4,
        void (__fastcall *a5)(unsigned int, _BYTE *, unsigned int, int, char *, char *))
{
  char v8; // r10
  int v10; // r3
  int v11; // r9
  int v12; // r5
  int v13; // r0
  int v14; // r5
  int v15; // r1
  int v16; // lr
  int v17; // r1
  int v18; // r0
  int v19; // r1
  int v20; // lr
  int v21; // r1
  int v22; // r0
  int v23; // r1
  int v24; // r3
  int v25; // r3
  unsigned int v26; // r5
  __int64 v27; // r2
  bool v28; // cf
  unsigned int v29; // r11
  bool v30; // r3
  int v31; // r3
  int v32; // r7
  unsigned int v33; // r0
  unsigned int v34; // r1
  unsigned int v35; // r0
  bool v36; // cf
  char v37; // r3
  int v38; // r3
  int v39; // r2
  unsigned int v40; // r3
  unsigned int v41; // r2
  unsigned int v42; // r3
  unsigned int v43; // r11
  _BYTE *v44; // r1
  unsigned int v45; // r0
  __int64 v46; // r6
  __int64 v48; // r2
  __int64 v49; // r8
  unsigned int v50; // r2
  unsigned int v51; // r3
  unsigned int v52; // r1
  unsigned int v53; // r11
  unsigned int v54; // r2
  unsigned int v55; // r3
  unsigned int v56; // r3
  unsigned int v57; // r3
  unsigned int v58; // r3
  unsigned int v59; // r3
  unsigned int v60; // r3
  int v61; // [sp+8h] [bp-24h]
  void (__fastcall *v62)(char *, char *, int); // [sp+Ch] [bp-20h]
  unsigned int v63; // [sp+10h] [bp-1Ch]
  __int64 v64; // [sp+18h] [bp-14h] BYREF
  __int64 v65; // [sp+20h] [bp-Ch]

  v8 = *a1;
  v62 = (void (__fastcall *)(char *, char *, int))*((_DWORD *)a1 + 10);
  v61 = *((_DWORD *)a1 + 11);
  if ( (*a1 & 0x40) == 0 )
  {
    v62(a1, a1 + 16, *((_DWORD *)a1 + 11));
    ++*((_QWORD *)a1 + 4);
  }
  v10 = v8 & 7;
  *a1 = v8 & 7;
  v11 = 15 - v10;
  if ( (v8 & 7) != 0 )
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
  if ( v26 != a4 )
    return -1;
  v27 = *((_QWORD *)a1 + 4) + (((a4 + 15) >> 3) | 1);
  v28 = HIDWORD(v27) >= 0x20000000;
  *((_QWORD *)a1 + 4) = v27;
  if ( HIDWORD(v27) == 0x20000000 )
    v28 = (_DWORD)v27 != 0;
  if ( !v28 )
  {
    if ( a4 >> 4 )
    {
      v43 = 16 * (a4 >> 4);
      v63 = (unsigned int)(a1 + 16);
      v44 = a3;
      v45 = a2;
      a2 += v43;
      a3 += v43;
      a5(v45, v44, a4 >> 4, v61, a1, a1 + 16);
      v26 = a4 - v43;
      if ( a4 == v43 )
        goto LABEL_57;
      v50 = (unsigned __int8)(a4 >> 4) + (unsigned __int8)a1[15];
      a1[15] = v50;
      if ( (v50 >> 8) | (v43 >> 12) )
      {
        v51 = v43 >> 20;
        v52 = (v50 >> 8) + (unsigned __int8)a1[14] + (unsigned __int8)(v43 >> 12);
        a1[14] = v52;
        if ( (v52 >> 8) | (v43 >> 20) )
        {
          v53 = v43 >> 28;
          v54 = (v52 >> 8) + (unsigned __int8)v51 + (unsigned __int8)a1[13];
          a1[13] = v54;
          if ( (v54 >> 8) | v53 )
          {
            v55 = (v54 >> 8) + v53 + (unsigned __int8)a1[12];
            a1[12] = v55;
            v56 = v55 >> 8;
            if ( v56 )
            {
              v57 = v56 + (unsigned __int8)a1[11];
              a1[11] = v57;
              if ( v57 >> 8 )
              {
                v58 = (unsigned __int8)a1[10] + (v57 >> 8);
                a1[10] = v58;
                if ( v58 >> 8 )
                {
                  v59 = (unsigned __int8)a1[9] + (v58 >> 8);
                  a1[9] = v59;
                  v60 = v59 >> 8;
                  if ( v60 )
                    a1[8] += v60;
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
        goto LABEL_57;
      v63 = (unsigned int)(a1 + 16);
    }
    v29 = a2 + 4;
    v30 = a2 >= (unsigned int)(a1 + 20) || a2 + 4 <= v63;
    v31 = v30 && v26 > 5;
    if ( (a2 & 3) != 0 )
      v31 = 0;
    if ( !v31 )
    {
      a1[16] ^= *(_BYTE *)a2;
      if ( v26 != 1 )
      {
        a1[17] ^= *(_BYTE *)(a2 + 1);
        if ( v26 != 2 )
        {
          a1[18] ^= *(_BYTE *)(a2 + 2);
          if ( v26 != 3 )
          {
            a1[19] ^= *(_BYTE *)(a2 + 3);
            if ( v26 != 4 )
            {
              a1[20] ^= *(_BYTE *)(a2 + 4);
              if ( v26 > 5 )
              {
                a1[21] ^= *(_BYTE *)(a2 + 5);
                if ( v26 > 6 )
                {
                  a1[22] ^= *(_BYTE *)(a2 + 6);
                  if ( v26 != 7 )
                  {
                    a1[23] ^= *(_BYTE *)(a2 + 7);
                    if ( v26 != 8 )
                    {
                      a1[24] ^= *(_BYTE *)(a2 + 8);
                      if ( v26 != 9 )
                      {
                        a1[25] ^= *(_BYTE *)(a2 + 9);
                        if ( v26 != 10 )
                        {
                          a1[26] ^= *(_BYTE *)(a2 + 10);
                          if ( v26 != 11 )
                          {
                            a1[27] ^= *(_BYTE *)(a2 + 11);
                            if ( v26 != 12 )
                            {
                              a1[28] ^= *(_BYTE *)(a2 + 12);
                              if ( v26 != 13 )
                              {
                                a1[29] ^= *(_BYTE *)(a2 + 13);
                                if ( v26 != 14 )
                                {
                                  a1[30] ^= *(_BYTE *)(a2 + 14);
                                  if ( v26 != 15 )
                                    a1[31] ^= *(_BYTE *)(a2 + 15);
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
      goto LABEL_36;
    }
    if ( v26 )
      v32 = v26;
    else
      v32 = 1;
    v33 = 4 * (((unsigned int)(v32 - 4) >> 2) + 1);
    if ( v26 <= 3 )
    {
      v33 = 0;
    }
    else
    {
      *((_DWORD *)a1 + 4) ^= *(_DWORD *)a2;
      if ( (unsigned int)(v32 - 4) >> 2 )
      {
        *((_DWORD *)a1 + 5) ^= *(_DWORD *)(a2 + 4);
        if ( (unsigned int)(v32 - 4) >> 2 != 1 )
        {
          *((_DWORD *)a1 + 6) ^= *(_DWORD *)(a2 + 8);
          if ( (unsigned int)(v32 - 4) >> 2 != 2 )
            *((_DWORD *)a1 + 7) ^= *(_DWORD *)(a2 + 12);
        }
      }
      if ( v32 == v33 )
        goto LABEL_36;
    }
    v34 = v33 + 1;
    a1[v33 + 16] ^= *(_BYTE *)(a2 + v33);
    if ( v26 > v33 + 1 )
    {
      v35 = v33 + 2;
      a1[v34 + 16] ^= *(_BYTE *)(a2 + v34);
      if ( v26 > v35 )
        a1[v35 + 16] ^= *(_BYTE *)(a2 + v35);
    }
LABEL_36:
    v62((char *)v63, (char *)v63, v61);
    v62(a1, (char *)&v64, v61);
    v36 = (unsigned int)a3 >= v29;
    if ( (unsigned int)a3 < v29 )
      v36 = a2 >= (unsigned int)(a3 + 4);
    v37 = v36;
    v38 = (v26 > 5) & (unsigned __int8)v37;
    if ( (((unsigned __int8)a3 | (unsigned __int8)a2) & 3) != 0 )
      v38 = 0;
    if ( !v38 )
    {
      *a3 = *(_BYTE *)a2 ^ v64;
      if ( v26 != 1 )
      {
        a3[1] = *(_BYTE *)(a2 + 1) ^ BYTE1(v64);
        if ( v26 != 2 )
        {
          a3[2] = *(_BYTE *)(a2 + 2) ^ BYTE2(v64);
          if ( v26 != 3 )
          {
            a3[3] = *(_BYTE *)(a2 + 3) ^ BYTE3(v64);
            if ( v26 != 4 )
            {
              a3[4] = *(_BYTE *)(a2 + 4) ^ BYTE4(v64);
              if ( v26 > 5 )
              {
                a3[5] = *(_BYTE *)(a2 + 5) ^ BYTE5(v64);
                if ( v26 > 6 )
                {
                  a3[6] = *(_BYTE *)(a2 + 6) ^ BYTE6(v64);
                  if ( v26 != 7 )
                  {
                    a3[7] = *(_BYTE *)(a2 + 7) ^ HIBYTE(v64);
                    if ( v26 != 8 )
                    {
                      a3[8] = *(_BYTE *)(a2 + 8) ^ v65;
                      if ( v26 != 9 )
                      {
                        a3[9] = *(_BYTE *)(a2 + 9) ^ BYTE1(v65);
                        if ( v26 != 10 )
                        {
                          a3[10] = *(_BYTE *)(a2 + 10) ^ BYTE2(v65);
                          if ( v26 != 11 )
                          {
                            a3[11] = *(_BYTE *)(a2 + 11) ^ BYTE3(v65);
                            if ( v26 != 12 )
                            {
                              a3[12] = *(_BYTE *)(a2 + 12) ^ BYTE4(v65);
                              if ( v26 != 13 )
                              {
                                a3[13] = *(_BYTE *)(a2 + 13) ^ BYTE5(v65);
                                if ( v26 != 14 )
                                {
                                  a3[14] = *(_BYTE *)(a2 + 14) ^ BYTE6(v65);
                                  if ( v26 != 15 )
                                    a3[15] = HIBYTE(v65) ^ *(_BYTE *)(a2 + 15);
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
      goto LABEL_57;
    }
    if ( v26 )
      v39 = v26;
    else
      v39 = 1;
    v40 = 4 * (((unsigned int)(v39 - 4) >> 2) + 1);
    if ( v26 <= 3 )
    {
      v40 = 0;
    }
    else
    {
      *(_DWORD *)a3 = v64 ^ *(_DWORD *)a2;
      if ( (unsigned int)(v39 - 4) >> 2 )
      {
        *((_DWORD *)a3 + 1) = HIDWORD(v64) ^ *(_DWORD *)(a2 + 4);
        if ( (unsigned int)(v39 - 4) >> 2 != 1 )
        {
          *((_DWORD *)a3 + 2) = v65 ^ *(_DWORD *)(a2 + 8);
          if ( (unsigned int)(v39 - 4) >> 2 != 2 )
            *((_DWORD *)a3 + 3) = HIDWORD(v65) ^ *(_DWORD *)(a2 + 12);
        }
      }
      if ( v40 == v39 )
        goto LABEL_57;
    }
    v41 = v40 + 1;
    a3[v40] = *((_BYTE *)&v64 + v40) ^ *(_BYTE *)(a2 + v40);
    if ( v26 > v40 + 1 )
    {
      v42 = v40 + 2;
      a3[v41] = *((_BYTE *)&v64 + v41) ^ *(_BYTE *)(a2 + v41);
      if ( v26 > v42 )
        a3[v42] = *((_BYTE *)&v64 + v42) ^ *(_BYTE *)(a2 + v42);
    }
LABEL_57:
    memset(&a1[v11], 0, (v8 & 7) + 1);
    v62(a1, (char *)&v64, v61);
    v46 = *((_QWORD *)a1 + 2);
    v48 = v64;
    v49 = *((_QWORD *)a1 + 3);
    *a1 = v8;
    *((_QWORD *)a1 + 2) = v48 ^ v46;
    *((_QWORD *)a1 + 3) = v65 ^ v49;
    return 0;
  }
  return -2;
}

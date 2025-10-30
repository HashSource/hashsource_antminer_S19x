int __fastcall sub_E24EC(char *a1, unsigned int a2, _BYTE *a3, unsigned int a4)
{
  int v6; // r11
  int v7; // r2
  int v8; // r3
  int v9; // r5
  int v10; // r3
  int v11; // r0
  int v12; // r6
  int v13; // r0
  int v14; // r5
  int v15; // r0
  int v16; // r6
  int v17; // r0
  int v18; // r5
  int v19; // r0
  int v20; // r2
  int v21; // r2
  __int64 v22; // kr00_8
  bool v23; // cf
  _BYTE *v24; // r6
  unsigned int v25; // r7
  __int64 v26; // r8
  __int64 v27; // kr08_8
  int v28; // r3
  char v29; // r3
  char v30; // r3
  char v31; // r3
  char v32; // r3
  char v33; // r3
  char v34; // r3
  char v35; // r3
  int v36; // r1
  __int64 v37; // r4
  unsigned int v38; // r3
  unsigned int v39; // r3
  unsigned int v40; // r6
  bool v41; // r3
  int v42; // r3
  unsigned int v43; // r2
  unsigned int v44; // r1
  unsigned int v45; // r2
  bool v46; // cf
  char v47; // r3
  int v48; // r3
  unsigned int v49; // r3
  unsigned int v50; // r2
  unsigned int v51; // r3
  __int64 v52; // r4
  __int64 v54; // r6
  int v55; // r8
  int v56; // r12
  int v57; // r11
  char v58; // r2
  char v59; // r3
  int v60; // [sp+0h] [bp-44h]
  int v61; // [sp+4h] [bp-40h]
  unsigned int v62; // [sp+8h] [bp-3Ch]
  void (__fastcall *v63)(int, int, int); // [sp+Ch] [bp-38h]
  unsigned int v65; // [sp+20h] [bp-24h]
  char v67; // [sp+28h] [bp-1Ch]
  int v68; // [sp+2Ch] [bp-18h]
  __int64 v69; // [sp+30h] [bp-14h] BYREF
  int v70; // [sp+38h] [bp-Ch]
  int v71; // [sp+3Ch] [bp-8h]

  v67 = *a1;
  v63 = (void (__fastcall *)(int, int, int))*((_DWORD *)a1 + 10);
  v6 = *((_DWORD *)a1 + 11);
  if ( (*a1 & 0x40) == 0 )
  {
    (*((void (__fastcall **)(char *, char *, _DWORD))a1 + 10))(a1, a1 + 16, *((_DWORD *)a1 + 11));
    ++*((_QWORD *)a1 + 4);
  }
  v7 = v67 & 7;
  *a1 = v7;
  v68 = 15 - v7;
  if ( (v67 & 7) != 0 )
  {
    v8 = (unsigned __int8)a1[15 - v7];
    v9 = 16 - v7;
    a1[15 - v7] = 0;
    v10 = v8 << 8;
    if ( v7 != 1 )
    {
      v11 = (unsigned __int8)a1[v9];
      v12 = 17 - v7;
      a1[v9] = 0;
      v10 = (v10 | v11) << 8;
      if ( v7 != 2 )
      {
        v13 = (unsigned __int8)a1[v12];
        v14 = 18 - v7;
        a1[v12] = 0;
        v10 = (v10 | v13) << 8;
        if ( v7 != 3 )
        {
          v15 = (unsigned __int8)a1[v14];
          v16 = 19 - v7;
          a1[v14] = 0;
          v10 = (v10 | v15) << 8;
          if ( v7 != 4 )
          {
            v17 = (unsigned __int8)a1[v16];
            v18 = 20 - v7;
            a1[v16] = 0;
            v10 = (v10 | v17) << 8;
            if ( v7 != 5 )
            {
              v19 = (unsigned __int8)a1[v18];
              a1[v18] = 0;
              v10 = (v10 | v19) << 8;
              if ( v7 != 6 )
              {
                v20 = (unsigned __int8)a1[14];
                a1[14] = 0;
                v10 = (v10 | v20) << 8;
              }
            }
          }
        }
      }
    }
  }
  else
  {
    v10 = 0;
  }
  v21 = (unsigned __int8)a1[15];
  a1[15] = 1;
  v65 = v10 | v21;
  if ( (v10 | v21) != a4 )
    return -1;
  v22 = *((_QWORD *)a1 + 4) + (((a4 + 15) >> 3) | 1);
  v23 = HIDWORD(v22) >= 0x20000000;
  *((_QWORD *)a1 + 4) = v22;
  if ( HIDWORD(v22) == 0x20000000 )
    v23 = (_DWORD)v22 != 0;
  if ( !v23 )
  {
    if ( a4 > 0xF )
    {
      v24 = a3;
      v25 = a2;
      v62 = a4;
      do
      {
        v26 = *(_QWORD *)v25;
        v60 = *(_DWORD *)(v25 + 8);
        v27 = *((_QWORD *)a1 + 3);
        v62 -= 16;
        v28 = *(_DWORD *)(v25 + 12);
        __pld((void *)(v25 + 32));
        __pld((void *)(v25 + 40));
        v25 += 16;
        v61 = v28;
        *((_QWORD *)a1 + 2) ^= v26;
        *((_DWORD *)a1 + 6) = v60 ^ v27;
        *((_DWORD *)a1 + 7) = v28 ^ HIDWORD(v27);
        v63((int)(a1 + 16), (int)(a1 + 16), v6);
        v63((int)a1, (int)&v69, v6);
        v29 = a1[15] + 1;
        a1[15] = v29;
        if ( !v29 )
        {
          v30 = a1[14] + 1;
          a1[14] = v30;
          if ( !v30 )
          {
            v31 = a1[13] + 1;
            a1[13] = v31;
            if ( !v31 )
            {
              v32 = a1[12] + 1;
              a1[12] = v32;
              if ( !v32 )
              {
                v33 = a1[11] + 1;
                a1[11] = v33;
                if ( !v33 )
                {
                  v34 = a1[10] + 1;
                  a1[10] = v34;
                  if ( !v34 )
                  {
                    v35 = a1[9] + 1;
                    a1[9] = v35;
                    if ( !v35 )
                      ++a1[8];
                  }
                }
              }
            }
          }
        }
        v24 += 16;
        v36 = v61 ^ v71;
        v37 = v69 ^ v26;
        *((_DWORD *)v24 - 2) = v60 ^ v70;
        *((_DWORD *)v24 - 1) = v36;
        *((_QWORD *)v24 - 2) = v37;
      }
      while ( v62 > 0xF );
      v38 = v65 - 16;
      v65 &= 0xFu;
      v39 = (v38 & 0xFFFFFFF0) + 16;
      a2 += v39;
      a3 += v39;
    }
    if ( !v65 )
      goto LABEL_59;
    v40 = a2 + 4;
    v41 = a2 + 4 <= (unsigned int)(a1 + 16);
    if ( a2 >= (unsigned int)(a1 + 20) )
      v41 = 1;
    v42 = v41 && v65 > 5;
    if ( (a2 & 3) != 0 )
      v42 = 0;
    if ( v42 )
    {
      v43 = 4 * (((v65 - 4) >> 2) + 1);
      if ( v65 - 1 <= 2 )
      {
        v43 = 0;
LABEL_39:
        v44 = v43 + 1;
        a1[v43 + 16] ^= *(_BYTE *)(a2 + v43);
        if ( v65 > v43 + 1 )
        {
          v45 = v43 + 2;
          a1[v44 + 16] ^= *(_BYTE *)(a2 + v44);
          if ( v65 > v45 )
            a1[v45 + 16] ^= *(_BYTE *)(a2 + v45);
        }
        goto LABEL_42;
      }
      *((_DWORD *)a1 + 4) ^= *(_DWORD *)a2;
      if ( (v65 - 4) >> 2 )
      {
        *((_DWORD *)a1 + 5) ^= *(_DWORD *)(a2 + 4);
        if ( (v65 - 4) >> 2 != 1 )
        {
          *((_DWORD *)a1 + 6) ^= *(_DWORD *)(a2 + 8);
          if ( (v65 - 4) >> 2 != 2 )
            *((_DWORD *)a1 + 7) ^= *(_DWORD *)(a2 + 12);
        }
      }
      if ( v65 != v43 )
        goto LABEL_39;
    }
    else
    {
      a1[16] ^= *(_BYTE *)a2;
      if ( v65 != 1 )
      {
        a1[17] ^= *(_BYTE *)(a2 + 1);
        if ( v65 != 2 )
        {
          a1[18] ^= *(_BYTE *)(a2 + 2);
          if ( v65 != 3 )
          {
            a1[19] ^= *(_BYTE *)(a2 + 3);
            if ( v65 != 4 )
            {
              a1[20] ^= *(_BYTE *)(a2 + 4);
              if ( v65 > 5 )
              {
                a1[21] ^= *(_BYTE *)(a2 + 5);
                if ( v65 > 6 )
                {
                  a1[22] ^= *(_BYTE *)(a2 + 6);
                  if ( v65 != 7 )
                  {
                    a1[23] ^= *(_BYTE *)(a2 + 7);
                    if ( v65 != 8 )
                    {
                      a1[24] ^= *(_BYTE *)(a2 + 8);
                      if ( v65 != 9 )
                      {
                        a1[25] ^= *(_BYTE *)(a2 + 9);
                        if ( v65 != 10 )
                        {
                          a1[26] ^= *(_BYTE *)(a2 + 10);
                          if ( v65 != 11 )
                          {
                            a1[27] ^= *(_BYTE *)(a2 + 11);
                            if ( v65 != 12 )
                            {
                              a1[28] ^= *(_BYTE *)(a2 + 12);
                              if ( v65 != 13 )
                              {
                                v58 = a1[29];
                                v59 = *(_BYTE *)(a2 + 13) ^ v58;
                                if ( v65 == 15 )
                                  v58 = a1[30];
                                a1[29] = v59;
                                if ( v65 == 15 )
                                  a1[30] = *(_BYTE *)(a2 + 14) ^ v58;
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
LABEL_42:
    v63((int)(a1 + 16), (int)(a1 + 16), v6);
    v63((int)a1, (int)&v69, v6);
    v46 = (unsigned int)a3 >= v40;
    if ( (unsigned int)a3 < v40 )
      v46 = a2 >= (unsigned int)(a3 + 4);
    v47 = v46;
    v48 = (unsigned __int8)v47 & (v65 > 5);
    if ( (((unsigned __int8)a3 | (unsigned __int8)a2) & 3) != 0 )
      v48 = 0;
    if ( !v48 )
    {
      *a3 = *(_BYTE *)a2 ^ v69;
      if ( v65 != 1 )
      {
        a3[1] = *(_BYTE *)(a2 + 1) ^ BYTE1(v69);
        if ( v65 != 2 )
        {
          a3[2] = *(_BYTE *)(a2 + 2) ^ BYTE2(v69);
          if ( v65 != 3 )
          {
            a3[3] = *(_BYTE *)(a2 + 3) ^ BYTE3(v69);
            if ( v65 != 4 )
            {
              a3[4] = *(_BYTE *)(a2 + 4) ^ BYTE4(v69);
              if ( v65 > 5 )
              {
                a3[5] = *(_BYTE *)(a2 + 5) ^ BYTE5(v69);
                if ( v65 > 6 )
                {
                  a3[6] = *(_BYTE *)(a2 + 6) ^ BYTE6(v69);
                  if ( v65 != 7 )
                  {
                    a3[7] = *(_BYTE *)(a2 + 7) ^ HIBYTE(v69);
                    if ( v65 != 8 )
                    {
                      a3[8] = *(_BYTE *)(a2 + 8) ^ v70;
                      if ( v65 != 9 )
                      {
                        a3[9] = *(_BYTE *)(a2 + 9) ^ BYTE1(v70);
                        if ( v65 != 10 )
                        {
                          a3[10] = *(_BYTE *)(a2 + 10) ^ BYTE2(v70);
                          if ( v65 != 11 )
                          {
                            a3[11] = *(_BYTE *)(a2 + 11) ^ HIBYTE(v70);
                            if ( v65 != 12 )
                            {
                              a3[12] = *(_BYTE *)(a2 + 12) ^ v71;
                              if ( v65 != 13 )
                              {
                                a3[13] = *(_BYTE *)(a2 + 13) ^ BYTE1(v71);
                                if ( v65 == 15 )
                                  a3[14] = *(_BYTE *)(a2 + 14) ^ BYTE2(v71);
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
      goto LABEL_59;
    }
    v49 = 4 * (((v65 - 4) >> 2) + 1);
    if ( v65 - 1 <= 2 )
    {
      v49 = 0;
    }
    else
    {
      *(_DWORD *)a3 = *(_DWORD *)a2 ^ v69;
      if ( (v65 - 4) >> 2 )
      {
        *((_DWORD *)a3 + 1) = *(_DWORD *)(a2 + 4) ^ HIDWORD(v69);
        if ( (v65 - 4) >> 2 != 1 )
        {
          *((_DWORD *)a3 + 2) = *(_DWORD *)(a2 + 8) ^ v70;
          if ( (v65 - 4) >> 2 != 2 )
            *((_DWORD *)a3 + 3) = *(_DWORD *)(a2 + 12) ^ v71;
        }
      }
      if ( v65 == v49 )
        goto LABEL_59;
    }
    v50 = v49 + 1;
    a3[v49] = *((_BYTE *)&v69 + v49) ^ *(_BYTE *)(a2 + v49);
    if ( v65 > v49 + 1 )
    {
      v51 = v49 + 2;
      a3[v50] = *((_BYTE *)&v69 + v50) ^ *(_BYTE *)(a2 + v50);
      if ( v65 > v51 )
        a3[v51] = *((_BYTE *)&v69 + v51) ^ *(_BYTE *)(a2 + v51);
    }
LABEL_59:
    memset(&a1[v68], 0, 16 - v68);
    v63((int)a1, (int)&v69, v6);
    v52 = *((_QWORD *)a1 + 2);
    v54 = *((_QWORD *)a1 + 3);
    v55 = v70;
    v56 = HIDWORD(v69) ^ HIDWORD(v52);
    v57 = v69 ^ v52;
    LODWORD(v52) = HIDWORD(v54) ^ v71;
    *((_DWORD *)a1 + 4) = v57;
    *((_DWORD *)a1 + 5) = v56;
    *a1 = v67;
    *((_DWORD *)a1 + 6) = v54 ^ v55;
    *((_DWORD *)a1 + 7) = v52;
    return 0;
  }
  return -2;
}

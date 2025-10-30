int __fastcall sub_E56D4(int a1, _DWORD *a2, unsigned int a3)
{
  unsigned int v3; // r8
  unsigned int v5; // r9
  unsigned int v6; // r6
  _DWORD *v7; // r5
  unsigned int v8; // r10
  char v9; // r3
  char v10; // r2
  char v11; // r12
  char v12; // lr
  char v13; // r11
  char v14; // r3
  char v15; // r2
  char v16; // r3
  char v17; // r12
  char v18; // r3
  char v19; // lr
  char v20; // r3
  char v21; // r11
  char v22; // r3
  char v23; // r2
  char v24; // r12
  char v25; // lr
  char v26; // r11
  char v27; // r3
  char v28; // r12
  unsigned int v29; // r3
  bool v30; // cc
  char v31; // r3
  int v32; // r3
  unsigned int v33; // r0
  unsigned int v34; // r2
  unsigned int v35; // r0
  unsigned int v36; // lr
  char v37; // r7
  unsigned int v38; // r12
  unsigned int v39; // r5
  __int64 v40; // r2
  unsigned int v41; // r5
  int result; // r0
  int v43; // r2
  int v44; // r3
  char v45; // r2
  char v46; // r3

  v3 = a3;
  v5 = (unsigned int)a2;
  *(_QWORD *)(a1 + 48) = 0;
  *(_QWORD *)(a1 + 56) = 0;
  *(_DWORD *)(a1 + 364) = 0;
  *(_DWORD *)(a1 + 360) = 0;
  if ( a3 == 12 )
  {
    v43 = a2[1];
    v41 = 2;
    v44 = a2[2];
    *(_DWORD *)a1 = *a2;
    *(_DWORD *)(a1 + 4) = v43;
    *(_DWORD *)(a1 + 8) = v44;
    *(_BYTE *)(a1 + 12) = 0;
    *(_BYTE *)(a1 + 13) = 0;
    *(_BYTE *)(a1 + 14) = 0;
    *(_BYTE *)(a1 + 15) = 1;
    goto LABEL_28;
  }
  *(_QWORD *)(a1 + 64) = 0;
  v6 = a1 + 64;
  *(_QWORD *)(a1 + 72) = 0;
  if ( a3 > 0xF )
  {
    v7 = a2 + 4;
    v8 = a3;
    do
    {
      v9 = *((_BYTE *)v7 - 16);
      v8 -= 16;
      v10 = *(_BYTE *)(a1 + 65);
      v11 = *(_BYTE *)(a1 + 66);
      v7 += 4;
      v12 = *(_BYTE *)(a1 + 67);
      *(_BYTE *)(a1 + 64) ^= v9;
      v13 = *(_BYTE *)(a1 + 68);
      v14 = *((_BYTE *)v7 - 31) ^ v10;
      v15 = *(_BYTE *)(a1 + 69);
      *(_BYTE *)(a1 + 65) = v14;
      v16 = v11 ^ *((_BYTE *)v7 - 30);
      v17 = *(_BYTE *)(a1 + 70);
      *(_BYTE *)(a1 + 66) = v16;
      v18 = v12 ^ *((_BYTE *)v7 - 29);
      v19 = *(_BYTE *)(a1 + 71);
      *(_BYTE *)(a1 + 67) = v18;
      v20 = v13 ^ *((_BYTE *)v7 - 28);
      v21 = *(_BYTE *)(a1 + 72);
      *(_BYTE *)(a1 + 68) = v20;
      *(_BYTE *)(a1 + 69) = *((_BYTE *)v7 - 27) ^ v15;
      v22 = *(_BYTE *)(a1 + 73);
      v23 = v17 ^ *((_BYTE *)v7 - 26);
      v24 = *(_BYTE *)(a1 + 74);
      *(_BYTE *)(a1 + 70) = v23;
      *(_BYTE *)(a1 + 71) = v19 ^ *((_BYTE *)v7 - 25);
      *(_BYTE *)(a1 + 72) = v21 ^ *((_BYTE *)v7 - 24);
      *(_BYTE *)(a1 + 73) = *((_BYTE *)v7 - 23) ^ v22;
      *(_BYTE *)(a1 + 74) = v24 ^ *((_BYTE *)v7 - 22);
      v25 = *(_BYTE *)(a1 + 76);
      v26 = *(_BYTE *)(a1 + 77);
      v27 = *(_BYTE *)(a1 + 78);
      *(_BYTE *)(a1 + 75) ^= *((_BYTE *)v7 - 21);
      v28 = *(_BYTE *)(a1 + 79);
      *(_BYTE *)(a1 + 76) = v25 ^ *((_BYTE *)v7 - 20);
      *(_BYTE *)(a1 + 77) = v26 ^ *((_BYTE *)v7 - 19);
      *(_BYTE *)(a1 + 78) = *((_BYTE *)v7 - 18) ^ v27;
      *(_BYTE *)(a1 + 79) = v28 ^ *((_BYTE *)v7 - 17);
      sub_E4ECC((_BYTE *)(a1 + 64), a1 + 96);
    }
    while ( v8 > 0xF );
    v29 = v3 - 16;
    v3 &= 0xFu;
    v5 += (v29 & 0xFFFFFFF0) + 16;
  }
  if ( v3 )
  {
    v30 = a1 + 68 > v5;
    if ( a1 + 68 > v5 )
      v30 = v5 + 4 > v6;
    v31 = !v30;
    if ( v3 <= 5 )
      v31 = 0;
    v32 = v31 & 1;
    if ( (v5 & 3) != 0 )
      v32 = 0;
    if ( !v32 )
    {
      *(_BYTE *)(a1 + 64) ^= *(_BYTE *)v5;
      if ( v3 != 1 )
      {
        *(_BYTE *)(a1 + 65) ^= *(_BYTE *)(v5 + 1);
        if ( v3 != 2 )
        {
          *(_BYTE *)(a1 + 66) ^= *(_BYTE *)(v5 + 2);
          if ( v3 != 3 )
          {
            *(_BYTE *)(a1 + 67) ^= *(_BYTE *)(v5 + 3);
            if ( v3 != 4 )
            {
              *(_BYTE *)(a1 + 68) ^= *(_BYTE *)(v5 + 4);
              if ( v3 > 5 )
              {
                *(_BYTE *)(a1 + 69) ^= *(_BYTE *)(v5 + 5);
                if ( v3 > 6 )
                {
                  *(_BYTE *)(a1 + 70) ^= *(_BYTE *)(v5 + 6);
                  if ( v3 != 7 )
                  {
                    *(_BYTE *)(a1 + 71) ^= *(_BYTE *)(v5 + 7);
                    if ( v3 != 8 )
                    {
                      *(_BYTE *)(a1 + 72) ^= *(_BYTE *)(v5 + 8);
                      if ( v3 != 9 )
                      {
                        *(_BYTE *)(a1 + 73) ^= *(_BYTE *)(v5 + 9);
                        if ( v3 != 10 )
                        {
                          *(_BYTE *)(a1 + 74) ^= *(_BYTE *)(v5 + 10);
                          if ( v3 != 11 )
                          {
                            *(_BYTE *)(a1 + 75) ^= *(_BYTE *)(v5 + 11);
                            if ( v3 != 12 )
                            {
                              *(_BYTE *)(a1 + 76) ^= *(_BYTE *)(v5 + 12);
                              if ( v3 != 13 )
                              {
                                v45 = *(_BYTE *)(a1 + 77);
                                v46 = *(_BYTE *)(v5 + 13) ^ v45;
                                if ( v3 == 15 )
                                  v45 = *(_BYTE *)(a1 + 78);
                                *(_BYTE *)(a1 + 77) = v46;
                                if ( v3 == 15 )
                                  *(_BYTE *)(a1 + 78) = *(_BYTE *)(v5 + 14) ^ v45;
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
      goto LABEL_26;
    }
    v33 = 4 * (((v3 - 4) >> 2) + 1);
    if ( v3 - 1 <= 2 )
    {
      v33 = 0;
    }
    else
    {
      *(_DWORD *)(a1 + 64) ^= *(_DWORD *)v5;
      if ( (v3 - 4) >> 2 )
      {
        *(_DWORD *)(a1 + 68) ^= *(_DWORD *)(v5 + 4);
        if ( (v3 - 4) >> 2 != 1 )
        {
          *(_DWORD *)(a1 + 72) ^= *(_DWORD *)(v5 + 8);
          if ( (v3 - 4) >> 2 != 2 )
            *(_DWORD *)(a1 + 76) ^= *(_DWORD *)(v5 + 12);
        }
      }
      if ( v3 == v33 )
        goto LABEL_26;
    }
    v34 = v33 + 1;
    *(_BYTE *)(a1 + v33 + 64) ^= *(_BYTE *)(v5 + v33);
    if ( v3 > v33 + 1 )
    {
      v35 = v33 + 2;
      *(_BYTE *)(a1 + v34 + 64) ^= *(_BYTE *)(v5 + v34);
      if ( v3 > v35 )
        *(_BYTE *)(a1 + v35 + 64) ^= *(_BYTE *)(v5 + v35);
    }
LABEL_26:
    sub_E4ECC((_BYTE *)(a1 + 64), a1 + 96);
  }
  v36 = *(unsigned __int8 *)(a1 + 77) ^ (((8 * a3) >> 16) | (a3 >> 29 << 16));
  v37 = *(_BYTE *)(a1 + 79);
  v38 = *(unsigned __int8 *)(a1 + 76) ^ (((8 * a3) >> 24) | (a3 >> 29 << 8));
  v39 = *(unsigned __int8 *)(a1 + 78) ^ (((8 * a3) >> 8) | (a3 >> 29 << 24));
  *(_BYTE *)(a1 + 75) ^= a3 >> 29;
  *(_BYTE *)(a1 + 78) = v39;
  *(_BYTE *)(a1 + 79) = (8 * a3) ^ v37;
  *(_BYTE *)(a1 + 76) = v38;
  *(_BYTE *)(a1 + 77) = v36;
  sub_E4ECC((_BYTE *)(a1 + 64), a1 + 96);
  v40 = *(_QWORD *)(a1 + 72);
  v41 = bswap32(*(_DWORD *)(a1 + 76)) + 1;
  *(_QWORD *)a1 = *(_QWORD *)(a1 + 64);
  *(_QWORD *)(a1 + 8) = v40;
LABEL_28:
  *(_QWORD *)(a1 + 64) = 0;
  *(_QWORD *)(a1 + 72) = 0;
  result = (*(int (__fastcall **)(int, int, _DWORD))(a1 + 368))(a1, a1 + 32, *(_DWORD *)(a1 + 372));
  *(_BYTE *)(a1 + 15) = v41;
  *(_BYTE *)(a1 + 12) = HIBYTE(v41);
  *(_BYTE *)(a1 + 13) = BYTE2(v41);
  *(_BYTE *)(a1 + 14) = BYTE1(v41);
  return result;
}

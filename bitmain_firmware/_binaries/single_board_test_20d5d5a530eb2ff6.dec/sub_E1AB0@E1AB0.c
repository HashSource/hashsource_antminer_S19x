int __fastcall sub_E1AB0(
        int result,
        unsigned int a2,
        unsigned int a3,
        int a4,
        unsigned int a5,
        int (__fastcall *a6)(int *, int *, int))
{
  _BYTE *v8; // r4
  unsigned int v9; // r6
  unsigned int v10; // r7
  _BYTE *v11; // r3
  int *v12; // r4
  int v13; // r5
  unsigned int v14; // r6
  char v15; // r7
  unsigned int v16; // r6
  int v17; // r4
  int v18; // r3
  unsigned int v19; // lr
  _BYTE *v20; // r5
  int v21; // r1
  int v22; // r12
  char v23; // r2
  char v24; // t1
  char v25; // t1
  int v26; // r1
  int v27; // r2
  int v28; // r3
  _DWORD *v29; // lr
  int *v30; // r4
  int v31; // r5
  unsigned int v32; // r9
  int v33; // r0
  int v34; // [sp+0h] [bp-Ch]

  v34 = result;
  if ( a3 )
  {
    if ( (result | a2 | a5) << 30 )
    {
      if ( a3 <= 0xF )
      {
        v8 = (_BYTE *)a2;
        v9 = a5;
        v10 = a3;
        goto LABEL_8;
      }
      v11 = (_BYTE *)a5;
      v12 = (int *)a2;
      v13 = result + 16;
      v14 = a3;
      do
      {
        v15 = *(_BYTE *)(v13 - 16);
        v14 -= 16;
        v13 += 16;
        *(_BYTE *)v12 = *v11 ^ v15;
        *((_BYTE *)v12 + 1) = *(_BYTE *)(v13 - 31) ^ v11[1];
        *((_BYTE *)v12 + 2) = *(_BYTE *)(v13 - 30) ^ v11[2];
        *((_BYTE *)v12 + 3) = *(_BYTE *)(v13 - 29) ^ v11[3];
        *((_BYTE *)v12 + 4) = *(_BYTE *)(v13 - 28) ^ v11[4];
        *((_BYTE *)v12 + 5) = *(_BYTE *)(v13 - 27) ^ v11[5];
        *((_BYTE *)v12 + 6) = *(_BYTE *)(v13 - 26) ^ v11[6];
        *((_BYTE *)v12 + 7) = *(_BYTE *)(v13 - 25) ^ v11[7];
        *((_BYTE *)v12 + 8) = *(_BYTE *)(v13 - 24) ^ v11[8];
        *((_BYTE *)v12 + 9) = *(_BYTE *)(v13 - 23) ^ v11[9];
        *((_BYTE *)v12 + 10) = *(_BYTE *)(v13 - 22) ^ v11[10];
        *((_BYTE *)v12 + 11) = *(_BYTE *)(v13 - 21) ^ v11[11];
        *((_BYTE *)v12 + 12) = *(_BYTE *)(v13 - 20) ^ v11[12];
        *((_BYTE *)v12 + 13) = *(_BYTE *)(v13 - 19) ^ v11[13];
        *((_BYTE *)v12 + 14) = *(_BYTE *)(v13 - 18) ^ v11[14];
        *((_BYTE *)v12 + 15) = v11[15] ^ *(_BYTE *)(v13 - 17);
        result = a6(v12, v12, a4);
        v11 = v12;
        v12 += 4;
      }
      while ( v14 > 0xF );
    }
    else
    {
      if ( a3 <= 0xF )
      {
        v8 = (_BYTE *)a2;
        v10 = a3;
        v9 = a5;
        goto LABEL_8;
      }
      v29 = (_DWORD *)a5;
      v30 = (int *)a2;
      v31 = result + 16;
      v32 = a3;
      do
      {
        v33 = *(_DWORD *)(v31 - 16);
        v32 -= 16;
        v31 += 16;
        *v30 = *v29 ^ v33;
        v30[1] = v29[1] ^ *(_DWORD *)(v31 - 28);
        v30[2] = v29[2] ^ *(_DWORD *)(v31 - 24);
        v30[3] = v29[3] ^ *(_DWORD *)(v31 - 20);
        result = a6(v30, v30, a4);
        v29 = v30;
        v30 += 4;
      }
      while ( v32 > 0xF );
    }
    v16 = (a3 - 16) >> 4;
    v10 = a3 & 0xF;
    v17 = 16 * (v16 + 1);
    v9 = a2 + 16 * v16;
    v18 = v34 + v17;
    v8 = (_BYTE *)(v17 + a2);
    v34 = v18;
    if ( (a3 & 0xF) == 0 )
    {
      v8 = (_BYTE *)v9;
LABEL_27:
      if ( v8 != (_BYTE *)a5 )
      {
        result = *(_DWORD *)v8;
        v26 = *((_DWORD *)v8 + 1);
        v27 = *((_DWORD *)v8 + 2);
        v28 = *((_DWORD *)v8 + 3);
        *(_DWORD *)a5 = *(_DWORD *)v8;
        *(_DWORD *)(a5 + 4) = v26;
        *(_DWORD *)(a5 + 8) = v27;
        *(_DWORD *)(a5 + 12) = v28;
      }
      return result;
    }
LABEL_8:
    v19 = v9 - 1;
    v20 = v8 - 1;
    v21 = 0;
    v22 = v34 - 1;
    while ( 1 )
    {
      v24 = *(_BYTE *)++v22;
      v23 = v24;
      v25 = *(_BYTE *)++v19;
      *++v20 = v25 ^ v23;
      if ( v10 <= v21 + 1 )
        break;
      ++v21;
    }
    v8[v21 + 1] = *(_BYTE *)(v9 + v21 + 1);
    if ( v21 != 14 )
    {
      v8[v21 + 2] = *(_BYTE *)(v9 + v21 + 2);
      if ( v21 != 13 )
      {
        v8[v21 + 3] = *(_BYTE *)(v9 + v21 + 3);
        if ( v21 != 12 )
        {
          v8[v21 + 4] = *(_BYTE *)(v9 + v21 + 4);
          if ( v21 != 11 )
          {
            v8[v21 + 5] = *(_BYTE *)(v9 + v21 + 5);
            if ( v21 != 10 )
            {
              v8[v21 + 6] = *(_BYTE *)(v9 + v21 + 6);
              if ( v21 != 9 )
              {
                v8[v21 + 7] = *(_BYTE *)(v9 + v21 + 7);
                if ( v21 != 8 )
                {
                  v8[v21 + 8] = *(_BYTE *)(v9 + v21 + 8);
                  if ( v21 != 7 )
                  {
                    v8[v21 + 9] = *(_BYTE *)(v9 + v21 + 9);
                    if ( v21 != 6 )
                    {
                      v8[v21 + 10] = *(_BYTE *)(v9 + v21 + 10);
                      if ( v21 != 5 )
                      {
                        v8[v21 + 11] = *(_BYTE *)(v9 + v21 + 11);
                        if ( v21 != 4 )
                        {
                          v8[v21 + 12] = *(_BYTE *)(v9 + v21 + 12);
                          if ( v21 != 3 )
                          {
                            v8[v21 + 13] = *(_BYTE *)(v9 + v21 + 13);
                            if ( v21 != 2 )
                            {
                              v8[v21 + 14] = *(_BYTE *)(v9 + v21 + 14);
                              if ( v21 != 1 )
                                v8[15] = *(_BYTE *)(v9 + 15);
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
    result = a6((int *)v8, (int *)v8, a4);
    goto LABEL_27;
  }
  return result;
}

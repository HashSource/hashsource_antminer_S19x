int __fastcall sub_D50D8(int a1, int *a2, _DWORD *a3, int a4)
{
  _DWORD *v5; // r9
  unsigned int v7; // r6
  int v8; // r2
  char *v9; // r4
  char v10; // r0
  char v11; // t1
  char v12; // r1
  char v13; // t1
  _BOOL4 v14; // r2
  int v15; // r12
  unsigned int v16; // r4
  int v17; // r3
  int v18; // r8
  unsigned int v19; // lr
  int v20; // r6
  unsigned int v21; // r2
  _DWORD *v22; // r1
  int *v23; // r0
  unsigned int v25; // r1
  bool v26; // cc
  char v27; // r2
  bool v28; // cf
  int v29; // r3
  char v30; // r3
  unsigned int v31; // r3
  int v32; // r2
  int v33; // r6
  char *v34; // r7
  char *v35; // r0
  char *v36; // r1
  char *v37; // r5
  char v38; // r3
  char v39; // t1
  char v40; // t1
  _DWORD *v41; // [sp+0h] [bp-14h]
  unsigned int i; // [sp+Ch] [bp-8h]

  v5 = *(_DWORD **)(a1 + 96);
  v7 = v5[28];
  if ( !v7 )
    goto LABEL_14;
  v8 = a4;
  if ( a4 )
    v8 = 1;
  if ( v7 > 0x3F )
    v8 = 0;
  if ( v8 )
  {
    v9 = (char *)v5 + v7 + 47;
    do
    {
      --a4;
      v11 = *(_BYTE *)a3;
      a3 = (_DWORD *)((char *)a3 + 1);
      v10 = v11;
      v13 = *++v9;
      v12 = v13;
      v14 = ++v7 <= 0x3F && a4 != 0;
      *(_BYTE *)a2 = v12 ^ v10;
      a2 = (int *)((char *)a2 + 1);
    }
    while ( v14 );
  }
  v5[28] = v7;
  if ( !a4 )
    return 1;
  if ( v7 == 64 )
  {
    v33 = v5[8];
    v5[28] = 0;
    v5[8] = ++v33;
    v15 = v33;
    if ( !v33 )
    {
      v15 = 0;
      ++v5[9];
    }
  }
  else
  {
LABEL_14:
    v15 = v5[8];
  }
  v16 = a4 - (a4 & 0x3F);
  for ( i = a4 & 0x3F; v16 > 0x3F; v15 = v20 )
  {
    while ( 1 )
    {
      v18 = -64 * v15;
      v19 = v16 >> 6 << 6;
      v20 = (v16 >> 6) + v15;
      v41 = v5 + 8;
      if ( !__CFADD__(v16 >> 6, v15) )
        break;
      sub_137024(a2, a3, -64 * v15, v5, v41);
      v16 -= v18;
      a3 = (_DWORD *)((char *)a3 + v18);
      a2 = (int *)((char *)a2 + v18);
      v15 = 0;
      v17 = v5[9] + 1;
      v5[8] = 0;
      v5[9] = v17;
      if ( v16 <= 0x3F )
        goto LABEL_20;
    }
    v21 = v16 >> 6 << 6;
    v22 = a3;
    v23 = a2;
    v16 -= v19;
    a3 = (_DWORD *)((char *)a3 + v19);
    a2 = (int *)((char *)a2 + v19);
    sub_137024(v23, v22, v21, v5, v41);
    v5[8] = v20;
  }
LABEL_20:
  if ( !i )
    return 1;
  memset(v5 + 12, 0, 0x40u);
  sub_137024(v5 + 12, v5 + 12, 64, v5, v5 + 8);
  v25 = (unsigned int)(a2 + 1);
  v26 = v5 + 13 > a2;
  if ( v5 + 13 > a2 )
    v26 = v25 > (unsigned int)(v5 + 12);
  v27 = !v26;
  v28 = (unsigned int)a3 >= v25;
  if ( (unsigned int)a3 < v25 )
    v28 = a2 >= a3 + 1;
  v29 = v28;
  v30 = v29 & v27;
  if ( i > 6 )
    LOBYTE(v29) = v30 & 1;
  else
    LOBYTE(v29) = 0;
  if ( (((unsigned __int8)a2 | (unsigned __int8)a3) & 3) != 0 )
    v29 = 0;
  if ( v29 )
  {
    v31 = ((i - 4) >> 2) + 1;
    *a2 = *a3 ^ v5[12];
    v32 = 4 * v31;
    if ( (i - 4) >> 2 )
    {
      a2[1] = v5[13] ^ a3[1];
      if ( (i - 4) >> 2 != 1 )
      {
        a2[2] = v5[14] ^ a3[2];
        if ( (i - 4) >> 2 != 2 )
        {
          a2[3] = v5[15] ^ a3[3];
          if ( (i - 4) >> 2 != 3 )
          {
            a2[4] = v5[16] ^ a3[4];
            if ( (i - 4) >> 2 != 4 )
            {
              a2[5] = v5[17] ^ a3[5];
              if ( (i - 4) >> 2 != 5 )
              {
                a2[6] = v5[18] ^ a3[6];
                if ( (i - 4) >> 2 != 6 )
                {
                  a2[7] = v5[19] ^ a3[7];
                  if ( (i - 4) >> 2 != 7 )
                  {
                    a2[8] = v5[20] ^ a3[8];
                    if ( (i - 4) >> 2 != 8 )
                    {
                      a2[9] = v5[21] ^ a3[9];
                      if ( (i - 4) >> 2 != 9 )
                      {
                        a2[10] = v5[22] ^ a3[10];
                        if ( (i - 4) >> 2 != 10 )
                        {
                          a2[11] = v5[23] ^ a3[11];
                          if ( (i - 4) >> 2 != 11 )
                          {
                            a2[12] = v5[24] ^ a3[12];
                            if ( (i - 4) >> 2 != 12 )
                            {
                              a2[13] = v5[25] ^ a3[13];
                              if ( (i - 4) >> 2 == 14 )
                                a2[14] = v5[26] ^ a3[14];
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
    if ( i != v32 )
    {
      LOBYTE(a2[v31]) = LOBYTE(v5[v31 + 12]) ^ LOBYTE(a3[v31]);
      if ( i > v32 + 1 )
      {
        BYTE1(a2[v32 / 4u]) = BYTE1(a3[v32 / 4u]) ^ BYTE1(v5[v32 / 4u + 12]);
        if ( i > v32 + 2 )
          BYTE2(a2[v32 / 4u]) = BYTE2(v5[v32 / 4u + 12]) ^ BYTE2(a3[v32 / 4u]);
      }
    }
  }
  else
  {
    v34 = (char *)a2 - 1;
    v35 = (char *)a3 + i - 1;
    v36 = (char *)v5 + 47;
    v37 = (char *)a3 - 1;
    do
    {
      v39 = *++v37;
      v38 = v39;
      v40 = *++v36;
      *++v34 = v38 ^ v40;
    }
    while ( v37 != v35 );
  }
  v5[28] = i;
  return 1;
}

int __fastcall sub_BB438(_DWORD *a1, unsigned int a2, int *a3)
{
  int v7; // r0
  signed int v8; // r6
  int v9; // r3
  bool v10; // cc
  char v11; // r3
  int v12; // r3
  unsigned int v13; // r3
  int v14; // r2
  int v15; // r0
  signed int v16; // r2
  bool v18; // cf
  char v19; // r3
  int v20; // r3
  unsigned int v21; // r3
  int v22; // r2
  int v23; // r0
  signed int v24; // r2
  _DWORD *v25; // r2
  unsigned int v26; // r0
  char *v27; // r1
  char v28; // r3
  char v29; // t1
  char v30; // t1
  char *v31; // r2
  char *v32; // lr
  unsigned int v33; // r0
  char *v34; // r1
  char v35; // r3
  char v36; // t1
  char v37; // t1

  if ( a1[33] == -1 )
    return 0;
  v7 = sub_D8904(*a1);
  v8 = v7;
  *a3 = v7;
  if ( !a2 )
    return 1;
  v9 = a1[33];
  if ( v7 == v9 )
  {
    if ( v7 > 0 )
    {
      v18 = (unsigned int)a1 >= a2;
      if ( (unsigned int)a1 < a2 )
        v18 = a2 >= (unsigned int)(a1 + 26);
      v19 = v18;
      if ( (a2 & 3) != 0 )
        v19 = 0;
      if ( (unsigned int)v7 > 5 )
        v20 = v19 & 1;
      else
        v20 = 0;
      if ( v20 )
      {
        v21 = ((unsigned int)(v7 - 4) >> 2) + 1;
        *(_DWORD *)a2 = a1[25] ^ a1[1];
        v22 = 4 * v21;
        if ( (unsigned int)(v7 - 4) >> 2 )
        {
          *(_DWORD *)(a2 + 4) = a1[2] ^ a1[26];
          if ( (unsigned int)(v7 - 4) >> 2 != 1 )
          {
            *(_DWORD *)(a2 + 8) = a1[3] ^ a1[27];
            if ( (unsigned int)(v7 - 4) >> 2 != 2 )
            {
              *(_DWORD *)(a2 + 12) = a1[4] ^ a1[28];
              if ( (unsigned int)(v7 - 4) >> 2 != 3 )
              {
                *(_DWORD *)(a2 + 16) = a1[5] ^ a1[29];
                if ( (unsigned int)(v7 - 4) >> 2 != 4 )
                {
                  *(_DWORD *)(a2 + 20) = a1[6] ^ a1[30];
                  if ( (unsigned int)(v7 - 4) >> 2 != 5 )
                  {
                    *(_DWORD *)(a2 + 24) = a1[7] ^ a1[31];
                    if ( (unsigned int)(v7 - 4) >> 2 != 6 )
                      *(_DWORD *)(a2 + 28) = a1[8] ^ a1[32];
                  }
                }
              }
            }
          }
        }
        if ( v7 != v22 )
        {
          v23 = v22 + 1;
          *(_BYTE *)(a2 + 4 * v21) = LOBYTE(a1[v21 + 1]) ^ LOBYTE(a1[v21 + 25]);
          if ( v8 > v22 + 1 )
          {
            v24 = v22 + 2;
            *(_BYTE *)(a2 + v23) = *((_BYTE *)a1 + v23 + 4) ^ *((_BYTE *)a1 + v23 + 100);
            if ( v8 > v24 )
              *(_BYTE *)(a2 + v24) = *((_BYTE *)a1 + v24 + 4) ^ *((_BYTE *)a1 + v24 + 100);
          }
        }
      }
      else
      {
        v31 = (char *)a1 + 3;
        v32 = (char *)a1 + v7 + 3;
        v33 = a2 - 1;
        v34 = (char *)a1 + 99;
        do
        {
          v36 = *++v31;
          v35 = v36;
          v37 = *++v34;
          *(_BYTE *)++v33 = v35 ^ v37;
        }
        while ( v31 != v32 );
      }
    }
  }
  else
  {
    *((_BYTE *)a1 + v9 + 100) = 0x80;
    if ( v7 - v9 > 1 )
      memset((char *)a1 + v9 + 101, 0, v7 - v9 - 1);
    if ( v8 > 0 )
    {
      v10 = (unsigned int)(a1 + 26) > a2;
      if ( (unsigned int)(a1 + 26) > a2 )
        v10 = a2 + 4 > (unsigned int)(a1 + 9);
      v11 = !v10;
      if ( (a2 & 3) != 0 )
        v11 = 0;
      if ( (unsigned int)v8 > 5 )
        v12 = v11 & 1;
      else
        v12 = 0;
      if ( v12 )
      {
        v13 = ((unsigned int)(v8 - 4) >> 2) + 1;
        *(_DWORD *)a2 = a1[25] ^ a1[9];
        v14 = 4 * v13;
        if ( (unsigned int)(v8 - 4) >> 2 )
        {
          *(_DWORD *)(a2 + 4) = a1[10] ^ a1[26];
          if ( (unsigned int)(v8 - 4) >> 2 != 1 )
          {
            *(_DWORD *)(a2 + 8) = a1[11] ^ a1[27];
            if ( (unsigned int)(v8 - 4) >> 2 != 2 )
            {
              *(_DWORD *)(a2 + 12) = a1[12] ^ a1[28];
              if ( (unsigned int)(v8 - 4) >> 2 != 3 )
              {
                *(_DWORD *)(a2 + 16) = a1[13] ^ a1[29];
                if ( (unsigned int)(v8 - 4) >> 2 != 4 )
                {
                  *(_DWORD *)(a2 + 20) = a1[14] ^ a1[30];
                  if ( (unsigned int)(v8 - 4) >> 2 != 5 )
                  {
                    *(_DWORD *)(a2 + 24) = a1[15] ^ a1[31];
                    if ( (unsigned int)(v8 - 4) >> 2 != 6 )
                      *(_DWORD *)(a2 + 28) = a1[16] ^ a1[32];
                  }
                }
              }
            }
          }
        }
        if ( v8 != v14 )
        {
          v15 = v14 + 1;
          *(_BYTE *)(a2 + 4 * v13) = LOBYTE(a1[v13 + 9]) ^ LOBYTE(a1[v13 + 25]);
          if ( v8 > v14 + 1 )
          {
            v16 = v14 + 2;
            *(_BYTE *)(a2 + v15) = *((_BYTE *)a1 + v15 + 36) ^ *((_BYTE *)a1 + v15 + 100);
            if ( v8 > v16 )
              *(_BYTE *)(a2 + v16) = *((_BYTE *)a1 + v16 + 36) ^ *((_BYTE *)a1 + v16 + 100);
          }
        }
      }
      else
      {
        v25 = (_DWORD *)((char *)a1 + 35);
        v26 = a2 - 1;
        v27 = (char *)a1 + 99;
        do
        {
          v29 = *((_BYTE *)v25 + 1);
          v25 = (_DWORD *)((char *)v25 + 1);
          v28 = v29;
          v30 = *++v27;
          *(_BYTE *)++v26 = v28 ^ v30;
        }
        while ( v25 != (_DWORD *)((char *)a1 + v8 + 35) );
      }
    }
  }
  if ( sub_D8910(*a1, a2, a2, v8) )
    return 1;
  sub_E07F8(a2, v8);
  return 0;
}

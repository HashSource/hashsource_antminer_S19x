int __fastcall sub_E5B38(int a1, unsigned int a2, unsigned int a3)
{
  unsigned int v5; // r4
  __int64 v6; // r2
  bool v7; // cf
  int v8; // r0
  int v9; // r7
  char v10; // r3
  char v11; // r2
  char v12; // lr
  char v13; // t1
  int v14; // r3
  unsigned int v16; // r8
  unsigned int v17; // r7
  bool v18; // cf
  char v19; // r3
  int v20; // r3
  unsigned int v21; // r3
  unsigned int v22; // r1
  unsigned int v23; // r3

  v5 = a3;
  if ( *(_QWORD *)(a1 + 56) )
    return -2;
  v6 = *(_QWORD *)(a1 + 48) + a3;
  v7 = HIDWORD(v6) >= 0x20000000;
  if ( HIDWORD(v6) == 0x20000000 )
    v7 = (_DWORD)v6 != 0;
  if ( v7 )
    return -1;
  v8 = *(_DWORD *)(a1 + 364);
  *(_QWORD *)(a1 + 48) = v6;
  if ( v8 )
  {
    if ( !v5 )
      goto LABEL_13;
    do
    {
      v9 = a1 + v8;
      v10 = (v8 + 1) & 0xF;
      v11 = *(_BYTE *)(a1 + v8 + 64);
      v13 = *(_BYTE *)a2++;
      v12 = v13;
      if ( ((v8 + 1) & 0xF) != 0 )
        v10 = 1;
      --v5;
      v14 = v10 & 1;
      if ( !v5 )
        v14 = 0;
      v8 = ((_BYTE)v8 + 1) & 0xF;
      *(_BYTE *)(v9 + 64) = v12 ^ v11;
    }
    while ( v14 );
    if ( v8 )
    {
LABEL_13:
      *(_DWORD *)(a1 + 364) = v8;
      return 0;
    }
    sub_E4ECC((_BYTE *)(a1 + 64), a1 + 96);
  }
  v16 = v5 & 0xFFFFFFF0;
  if ( (v5 & 0xFFFFFFF0) != 0 )
  {
    v17 = a1 + 64;
    sub_E50B4((_BYTE *)(a1 + 64), a1 + 96, a2, v5 & 0xFFFFFFF0);
    v5 -= v16;
    if ( !v5 )
      goto LABEL_17;
    a2 += v16;
  }
  else
  {
    v17 = a1 + 64;
    if ( !v5 )
    {
LABEL_17:
      v5 = 0;
      goto LABEL_18;
    }
  }
  v18 = a2 >= a1 + 68;
  if ( a2 < a1 + 68 )
    v18 = v17 >= a2 + 4;
  v19 = v18;
  if ( v5 <= 5 )
    v19 = 0;
  v20 = v19 & 1;
  if ( (a2 & 3) != 0 )
    v20 = 0;
  if ( !v20 )
  {
    *(_BYTE *)(a1 + 64) ^= *(_BYTE *)a2;
    if ( v5 != 1 )
    {
      *(_BYTE *)(a1 + 65) ^= *(_BYTE *)(a2 + 1);
      if ( v5 != 2 )
      {
        *(_BYTE *)(a1 + 66) ^= *(_BYTE *)(a2 + 2);
        if ( v5 != 3 )
        {
          *(_BYTE *)(a1 + 67) ^= *(_BYTE *)(a2 + 3);
          if ( v5 != 4 )
          {
            *(_BYTE *)(a1 + 68) ^= *(_BYTE *)(a2 + 4);
            if ( v5 > 5 )
            {
              *(_BYTE *)(a1 + 69) ^= *(_BYTE *)(a2 + 5);
              if ( v5 > 6 )
              {
                *(_BYTE *)(a1 + 70) ^= *(_BYTE *)(a2 + 6);
                if ( v5 != 7 )
                {
                  *(_BYTE *)(a1 + 71) ^= *(_BYTE *)(a2 + 7);
                  if ( v5 != 8 )
                  {
                    *(_BYTE *)(a1 + 72) ^= *(_BYTE *)(a2 + 8);
                    if ( v5 != 9 )
                    {
                      *(_BYTE *)(a1 + 73) ^= *(_BYTE *)(a2 + 9);
                      if ( v5 != 10 )
                      {
                        *(_BYTE *)(a1 + 74) ^= *(_BYTE *)(a2 + 10);
                        if ( v5 != 11 )
                        {
                          *(_BYTE *)(a1 + 75) ^= *(_BYTE *)(a2 + 11);
                          if ( v5 != 12 )
                          {
                            *(_BYTE *)(a1 + 76) ^= *(_BYTE *)(a2 + 12);
                            if ( v5 != 13 )
                            {
                              *(_BYTE *)(a1 + 77) ^= *(_BYTE *)(a2 + 13);
                              if ( v5 != 14 )
                              {
                                *(_BYTE *)(a1 + 78) ^= *(_BYTE *)(a2 + 14);
                                if ( v5 != 15 )
                                  *(_BYTE *)(a1 + 79) ^= *(_BYTE *)(a2 + 15);
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
    goto LABEL_18;
  }
  v21 = 4 * (((v5 - 4) >> 2) + 1);
  if ( v5 <= 3 )
  {
    v21 = 0;
  }
  else
  {
    *(_DWORD *)(a1 + 64) ^= *(_DWORD *)a2;
    if ( (v5 - 4) >> 2 )
    {
      *(_DWORD *)(a1 + 68) ^= *(_DWORD *)(a2 + 4);
      if ( (v5 - 4) >> 2 != 1 )
      {
        *(_DWORD *)(a1 + 72) ^= *(_DWORD *)(a2 + 8);
        if ( (v5 - 4) >> 2 != 2 )
          *(_DWORD *)(a1 + 76) ^= *(_DWORD *)(a2 + 12);
      }
    }
    if ( v21 == v5 )
      goto LABEL_18;
  }
  v22 = v21 + 1;
  *(_BYTE *)(a1 + v21 + 64) ^= *(_BYTE *)(a2 + v21);
  if ( v5 <= v21 + 1 || (v23 = v21 + 2, *(_BYTE *)(a1 + v22 + 64) ^= *(_BYTE *)(a2 + v22), v5 <= v23) )
  {
LABEL_18:
    *(_DWORD *)(a1 + 364) = v5;
    return 0;
  }
  *(_BYTE *)(a1 + v23 + 64) ^= *(_BYTE *)(a2 + v23);
  *(_DWORD *)(a1 + 364) = v5;
  return 0;
}

int __fastcall sub_A7EDC(_DWORD *a1)
{
  int *v2; // r0
  int v3; // r3
  int v4; // r2
  __int64 v5; // r4
  int v6; // r12
  int v7; // r6
  _BYTE *v8; // r1
  _BYTE *v9; // r3
  int v10; // r7
  bool v11; // cc
  int v12; // lr
  unsigned int v13; // r6
  _BYTE *v14; // lr
  int v15; // r3
  int v17; // r1
  int v18; // r4
  int v19; // r1

  v2 = (int *)a1[5];
  if ( !v2 )
    return 0;
  v3 = *v2;
  if ( !*v2 )
    return 0;
  v4 = a1[3];
  LODWORD(v5) = v4 - v2[3];
  if ( (_DWORD)v5 )
    goto LABEL_4;
  v17 = v2[4];
  if ( (v17 & 1) != 0 )
    return 0;
  if ( (v17 & 2) != 0 )
  {
    v18 = v2[2];
    v19 = a1[2] - v18;
    if ( v19 == v2[1] )
    {
      a1[2] = v19;
      a1[3] = v4 - v18;
    }
    v2[1] = 0;
    v2[2] = 0;
    goto LABEL_19;
  }
LABEL_4:
  v6 = v2[2];
  if ( v6 )
  {
    v7 = a1[1];
    if ( !v7 )
      v7 = *(_DWORD *)(*a1 + 4);
    HIDWORD(v5) = 0;
    v8 = (_BYTE *)(v6 + v2[1] - 1 + v7);
    if ( (unsigned int)(v6 - 1) <= 0x1F )
    {
      v12 = v2[2];
    }
    else
    {
      v9 = v8 - 32;
      do
      {
        v9[32] = v5;
        v10 = (__int64)(unsigned int)v5 >> 8;
        v11 = (unsigned int)(v6 - 33) > 0x1F;
        __pld(v9 - 2);
        v12 = v6 - 32;
        v9[28] = 0;
        v6 -= 32;
        v13 = WORD1(v5);
        v9[27] = 0;
        v9[26] = 0;
        v8 = v9;
        v9[25] = 0;
        v9[24] = 0;
        v5 = 0;
        v9[23] = 0;
        v9[22] = 0;
        v9 -= 32;
        v9[53] = 0;
        v9[52] = 0;
        v9[51] = 0;
        v9[50] = 0;
        v9[49] = 0;
        v9[48] = 0;
        v9[47] = 0;
        v9[46] = 0;
        v9[45] = 0;
        v9[44] = 0;
        v9[43] = 0;
        v9[42] = 0;
        v9[41] = 0;
        v9[40] = 0;
        v9[39] = 0;
        v9[38] = 0;
        v9[37] = 0;
        v9[36] = 0;
        v9[35] = 0;
        v9[34] = 0;
        v9[63] = v10;
        v9[62] = v13;
        v9[61] = BYTE1(v13);
        v9[33] = 0;
      }
      while ( v11 );
    }
    v14 = &v8[-v12];
    do
    {
      *v8-- = v5;
      v15 = v5 >> 8;
      HIDWORD(v5) >>= 8;
      LODWORD(v5) = v15;
    }
    while ( v8 != v14 );
    if ( v5 )
      return 0;
    v3 = *v2;
  }
LABEL_19:
  a1[5] = v3;
  CRYPTO_free(v2, "ssl/packet.c", 219);
  return 1;
}

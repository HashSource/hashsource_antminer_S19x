int __fastcall sub_A8054(_DWORD *a1)
{
  int *v1; // r6
  int v2; // r3
  int v4; // r2
  __int64 v5; // r4
  int v6; // r1
  int v7; // r4
  int v8; // r1
  int v10; // r8
  int v11; // r7
  _BYTE *v12; // r1
  _BYTE *v13; // r3
  int v14; // lr
  bool v15; // cc
  int v16; // r12
  unsigned int v17; // r7
  _BYTE *v18; // r12
  int v19; // r3

  v1 = (int *)a1[5];
  if ( !v1 )
    return 0;
  v2 = *v1;
  if ( *v1 )
    return 0;
  v4 = a1[3];
  LODWORD(v5) = v4 - v1[3];
  if ( (_DWORD)v5 )
    goto LABEL_11;
  v6 = v1[4];
  if ( (v6 & 1) != 0 )
    return 0;
  if ( (v6 & 2) == 0 )
  {
LABEL_11:
    v10 = v1[2];
    if ( v10 )
    {
      v11 = a1[1];
      if ( !v11 )
        v11 = *(_DWORD *)(*a1 + 4);
      HIDWORD(v5) = 0;
      v12 = (_BYTE *)(v10 + v1[1] - 1 + v11);
      if ( (unsigned int)(v10 - 1) <= 0x1F )
      {
        v16 = v1[2];
      }
      else
      {
        v13 = v12 - 32;
        do
        {
          v13[32] = v5;
          v14 = (__int64)(unsigned int)v5 >> 8;
          v15 = (unsigned int)(v10 - 33) > 0x1F;
          __pld(v13 - 2);
          v16 = v10 - 32;
          v13[28] = 0;
          v10 -= 32;
          v17 = WORD1(v5);
          v13[27] = 0;
          v13[26] = 0;
          v12 = v13;
          v13[25] = 0;
          v13[24] = 0;
          v5 = 0;
          v13[23] = 0;
          v13[22] = 0;
          v13 -= 32;
          v13[53] = 0;
          v13[52] = 0;
          v13[51] = 0;
          v13[50] = 0;
          v13[49] = 0;
          v13[48] = 0;
          v13[47] = 0;
          v13[46] = 0;
          v13[45] = 0;
          v13[44] = 0;
          v13[43] = 0;
          v13[42] = 0;
          v13[41] = 0;
          v13[40] = 0;
          v13[39] = 0;
          v13[38] = 0;
          v13[37] = 0;
          v13[36] = 0;
          v13[35] = 0;
          v13[34] = 0;
          v13[63] = v14;
          v13[62] = v17;
          v13[61] = BYTE1(v17);
          v13[33] = 0;
        }
        while ( v15 );
      }
      v18 = &v12[-v16];
      do
      {
        *v12-- = v5;
        v19 = v5 >> 8;
        HIDWORD(v5) >>= 8;
        LODWORD(v5) = v19;
      }
      while ( v12 != v18 );
      if ( v5 )
        return 0;
      v2 = *v1;
    }
  }
  else
  {
    v7 = v1[2];
    v8 = a1[2] - v7;
    if ( v8 == v1[1] )
    {
      a1[2] = v8;
      a1[3] = v4 - v7;
    }
    v1[1] = 0;
    v1[2] = 0;
  }
  a1[5] = v2;
  CRYPTO_free(v1, "ssl/packet.c", 219);
  CRYPTO_free(a1[5], "ssl/packet.c", 265);
  a1[5] = 0;
  return 1;
}

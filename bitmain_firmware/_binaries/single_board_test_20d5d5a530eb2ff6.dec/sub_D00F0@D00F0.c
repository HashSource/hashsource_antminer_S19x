_DWORD *sub_D00F0()
{
  _DWORD *result; // r0
  _DWORD *v1; // r4
  int v2; // r3
  int v3; // r3
  int v4; // r3
  int v5; // r3
  int v6; // r3
  int v7; // r3
  int v8; // r3
  int v9; // r3
  int v10; // r3
  int v11; // r3
  int v12; // r3
  int v13; // r3
  int v14; // r3
  int v15; // r3
  int v16; // r3

  result = sub_CFCDC();
  if ( result )
  {
    v1 = result;
    if ( (result[48] & 1) != 0 )
    {
      CRYPTO_free(result[32], "crypto/err/err.c", 470);
      v1[32] = 0;
    }
    v2 = v1[49];
    v1[48] = 0;
    *v1 = 0;
    v1[16] = 0;
    v1[64] = 0;
    v1[80] = -1;
    if ( (v2 & 1) != 0 )
    {
      CRYPTO_free(v1[33], "crypto/err/err.c", 470);
      v1[33] = 0;
    }
    v3 = v1[50];
    v1[81] = -1;
    v1[49] = 0;
    v1[1] = 0;
    v1[17] = 0;
    v1[65] = 0;
    if ( (v3 & 1) != 0 )
    {
      CRYPTO_free(v1[34], "crypto/err/err.c", 470);
      v1[34] = 0;
    }
    v4 = v1[51];
    v1[50] = 0;
    v1[2] = 0;
    v1[18] = 0;
    v1[66] = 0;
    v1[82] = -1;
    if ( (v4 & 1) != 0 )
    {
      CRYPTO_free(v1[35], "crypto/err/err.c", 470);
      v1[35] = 0;
    }
    v5 = v1[52];
    v1[51] = 0;
    v1[3] = 0;
    v1[19] = 0;
    v1[67] = 0;
    v1[83] = -1;
    if ( (v5 & 1) != 0 )
    {
      CRYPTO_free(v1[36], "crypto/err/err.c", 470);
      v1[36] = 0;
    }
    v6 = v1[53];
    v1[52] = 0;
    v1[4] = 0;
    v1[20] = 0;
    v1[68] = 0;
    v1[84] = -1;
    if ( (v6 & 1) != 0 )
    {
      CRYPTO_free(v1[37], "crypto/err/err.c", 470);
      v1[37] = 0;
    }
    v7 = v1[54];
    v1[85] = -1;
    v1[53] = 0;
    v1[5] = 0;
    v1[21] = 0;
    v1[69] = 0;
    if ( (v7 & 1) != 0 )
    {
      CRYPTO_free(v1[38], "crypto/err/err.c", 470);
      v1[38] = 0;
    }
    v8 = v1[55];
    v1[54] = 0;
    v1[6] = 0;
    v1[22] = 0;
    v1[70] = 0;
    v1[86] = -1;
    if ( (v8 & 1) != 0 )
    {
      CRYPTO_free(v1[39], "crypto/err/err.c", 470);
      v1[39] = 0;
    }
    v9 = v1[56];
    v1[55] = 0;
    v1[7] = 0;
    v1[23] = 0;
    v1[71] = 0;
    v1[87] = -1;
    if ( (v9 & 1) != 0 )
    {
      CRYPTO_free(v1[40], "crypto/err/err.c", 470);
      v1[40] = 0;
    }
    v10 = v1[57];
    v1[56] = 0;
    v1[8] = 0;
    v1[24] = 0;
    v1[72] = 0;
    v1[88] = -1;
    if ( (v10 & 1) != 0 )
    {
      CRYPTO_free(v1[41], "crypto/err/err.c", 470);
      v1[41] = 0;
    }
    v11 = v1[58];
    v1[89] = -1;
    v1[57] = 0;
    v1[9] = 0;
    v1[25] = 0;
    v1[73] = 0;
    if ( (v11 & 1) != 0 )
    {
      CRYPTO_free(v1[42], "crypto/err/err.c", 470);
      v1[42] = 0;
    }
    v12 = v1[59];
    v1[58] = 0;
    v1[10] = 0;
    v1[26] = 0;
    v1[74] = 0;
    v1[90] = -1;
    if ( (v12 & 1) != 0 )
    {
      CRYPTO_free(v1[43], "crypto/err/err.c", 470);
      v1[43] = 0;
    }
    v13 = v1[60];
    v1[59] = 0;
    v1[11] = 0;
    result = (_DWORD *)(v13 << 31);
    v1[27] = 0;
    v1[75] = 0;
    v1[91] = -1;
    if ( (v13 & 1) != 0 )
    {
      result = (_DWORD *)CRYPTO_free(v1[44], "crypto/err/err.c", 470);
      v1[44] = 0;
    }
    v14 = v1[61];
    v1[60] = 0;
    v1[12] = 0;
    v1[28] = 0;
    v1[76] = 0;
    v1[92] = -1;
    if ( (v14 & 1) != 0 )
    {
      result = (_DWORD *)CRYPTO_free(v1[45], "crypto/err/err.c", 470);
      v1[45] = 0;
    }
    v15 = v1[62];
    v1[93] = -1;
    v1[61] = 0;
    v1[13] = 0;
    v1[29] = 0;
    v1[77] = 0;
    if ( (v15 & 1) != 0 )
    {
      result = (_DWORD *)CRYPTO_free(v1[46], "crypto/err/err.c", 470);
      v1[46] = 0;
    }
    v16 = v1[63];
    v1[62] = 0;
    v1[14] = 0;
    v1[30] = 0;
    v1[78] = 0;
    v1[94] = -1;
    if ( (v16 & 1) != 0 )
    {
      result = (_DWORD *)CRYPTO_free(v1[47], "crypto/err/err.c", 470);
      v1[47] = 0;
    }
    v1[63] = 0;
    v1[15] = 0;
    v1[31] = 0;
    v1[79] = 0;
    v1[97] = 0;
    v1[96] = 0;
    v1[95] = -1;
  }
  return result;
}

int sub_CFA04()
{
  int result; // r0
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

  result = sub_10C5B4(&unk_6DF438);
  if ( result )
  {
    v1 = (_DWORD *)result;
    sub_10C5BC(&unk_6DF438, 0);
    if ( (v1[48] & 1) != 0 )
    {
      CRYPTO_free(v1[32], "crypto/err/err.c", 296);
      v1[32] = 0;
    }
    v2 = v1[49];
    v1[48] = 0;
    if ( (v2 & 1) != 0 )
    {
      CRYPTO_free(v1[33], "crypto/err/err.c", 296);
      v1[33] = 0;
    }
    v3 = v1[50];
    v1[49] = 0;
    if ( (v3 & 1) != 0 )
    {
      CRYPTO_free(v1[34], "crypto/err/err.c", 296);
      v1[34] = 0;
    }
    v4 = v1[51];
    v1[50] = 0;
    if ( (v4 & 1) != 0 )
    {
      CRYPTO_free(v1[35], "crypto/err/err.c", 296);
      v1[35] = 0;
    }
    v5 = v1[52];
    v1[51] = 0;
    if ( (v5 & 1) != 0 )
    {
      CRYPTO_free(v1[36], "crypto/err/err.c", 296);
      v1[36] = 0;
    }
    v6 = v1[53];
    v1[52] = 0;
    if ( (v6 & 1) != 0 )
    {
      CRYPTO_free(v1[37], "crypto/err/err.c", 296);
      v1[37] = 0;
    }
    v7 = v1[54];
    v1[53] = 0;
    if ( (v7 & 1) != 0 )
    {
      CRYPTO_free(v1[38], "crypto/err/err.c", 296);
      v1[38] = 0;
    }
    v8 = v1[55];
    v1[54] = 0;
    if ( (v8 & 1) != 0 )
    {
      CRYPTO_free(v1[39], "crypto/err/err.c", 296);
      v1[39] = 0;
    }
    v9 = v1[56];
    v1[55] = 0;
    if ( (v9 & 1) != 0 )
    {
      CRYPTO_free(v1[40], "crypto/err/err.c", 296);
      v1[40] = 0;
    }
    v10 = v1[57];
    v1[56] = 0;
    if ( (v10 & 1) != 0 )
    {
      CRYPTO_free(v1[41], "crypto/err/err.c", 296);
      v1[41] = 0;
    }
    v11 = v1[58];
    v1[57] = 0;
    if ( (v11 & 1) != 0 )
    {
      CRYPTO_free(v1[42], "crypto/err/err.c", 296);
      v1[42] = 0;
    }
    v12 = v1[59];
    v1[58] = 0;
    if ( (v12 & 1) != 0 )
    {
      CRYPTO_free(v1[43], "crypto/err/err.c", 296);
      v1[43] = 0;
    }
    v13 = v1[60];
    v1[59] = 0;
    if ( (v13 & 1) != 0 )
    {
      CRYPTO_free(v1[44], "crypto/err/err.c", 296);
      v1[44] = 0;
    }
    v14 = v1[61];
    v1[60] = 0;
    if ( (v14 & 1) != 0 )
    {
      CRYPTO_free(v1[45], "crypto/err/err.c", 296);
      v1[45] = 0;
    }
    v15 = v1[62];
    v1[61] = 0;
    if ( (v15 & 1) != 0 )
    {
      CRYPTO_free(v1[46], "crypto/err/err.c", 296);
      v1[46] = 0;
    }
    v16 = v1[63];
    v1[62] = 0;
    if ( (v16 & 1) != 0 )
    {
      CRYPTO_free(v1[47], "crypto/err/err.c", 296);
      v1[47] = 0;
    }
    v1[63] = 0;
    return CRYPTO_free(v1, "crypto/err/err.c", 298);
  }
  return result;
}

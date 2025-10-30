_DWORD *sub_CFCDC()
{
  int *v0; // r6
  int v1; // r7
  int v2; // r0
  _DWORD *v3; // r4
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
  int v17; // r3
  int v18; // r3
  int v19; // r3

  v0 = _errno_location();
  v1 = *v0;
  if ( !sub_DE05C(0x40000, 0, 0) )
    return 0;
  if ( !sub_10C594(&unk_6E1944, sub_CF440) )
    return 0;
  if ( !dword_6DF43C )
    return 0;
  v2 = sub_10C5B4(&unk_6DF438);
  v3 = (_DWORD *)v2;
  if ( v2 == -1 )
    return 0;
  if ( v2 )
  {
LABEL_6:
    *v0 = v1;
    return v3;
  }
  if ( !sub_10C5BC(&unk_6DF438, -1) )
    return 0;
  v3 = (_DWORD *)sub_E0740(392, "crypto/err/err.c", 766);
  if ( v3 )
  {
    if ( sub_DE414(2, 0) && sub_10C5BC(&unk_6DF438, v3) )
    {
      sub_DE05C(2, 0, 0);
      goto LABEL_6;
    }
    if ( (v3[48] & 1) != 0 )
    {
      CRYPTO_free(v3[32], "crypto/err/err.c", 296);
      v3[32] = 0;
    }
    v5 = v3[49];
    v3[48] = 0;
    if ( (v5 & 1) != 0 )
    {
      CRYPTO_free(v3[33], "crypto/err/err.c", 296);
      v3[33] = 0;
    }
    v6 = v3[50];
    v3[49] = 0;
    if ( (v6 & 1) != 0 )
    {
      CRYPTO_free(v3[34], "crypto/err/err.c", 296);
      v3[34] = 0;
    }
    v7 = v3[51];
    v3[50] = 0;
    if ( (v7 & 1) != 0 )
    {
      CRYPTO_free(v3[35], "crypto/err/err.c", 296);
      v3[35] = 0;
    }
    v8 = v3[52];
    v3[51] = 0;
    if ( (v8 & 1) != 0 )
    {
      CRYPTO_free(v3[36], "crypto/err/err.c", 296);
      v3[36] = 0;
    }
    v9 = v3[53];
    v3[52] = 0;
    if ( (v9 & 1) != 0 )
    {
      CRYPTO_free(v3[37], "crypto/err/err.c", 296);
      v3[37] = 0;
    }
    v10 = v3[54];
    v3[53] = 0;
    if ( (v10 & 1) != 0 )
    {
      CRYPTO_free(v3[38], "crypto/err/err.c", 296);
      v3[38] = 0;
    }
    v11 = v3[55];
    v3[54] = 0;
    if ( (v11 & 1) != 0 )
    {
      CRYPTO_free(v3[39], "crypto/err/err.c", 296);
      v3[39] = 0;
    }
    v12 = v3[56];
    v3[55] = 0;
    if ( (v12 & 1) != 0 )
    {
      CRYPTO_free(v3[40], "crypto/err/err.c", 296);
      v3[40] = 0;
    }
    v13 = v3[57];
    v3[56] = 0;
    if ( (v13 & 1) != 0 )
    {
      CRYPTO_free(v3[41], "crypto/err/err.c", 296);
      v3[41] = 0;
    }
    v14 = v3[58];
    v3[57] = 0;
    if ( (v14 & 1) != 0 )
    {
      CRYPTO_free(v3[42], "crypto/err/err.c", 296);
      v3[42] = 0;
    }
    v15 = v3[59];
    v3[58] = 0;
    if ( (v15 & 1) != 0 )
    {
      CRYPTO_free(v3[43], "crypto/err/err.c", 296);
      v3[43] = 0;
    }
    v16 = v3[60];
    v3[59] = 0;
    if ( (v16 & 1) != 0 )
    {
      CRYPTO_free(v3[44], "crypto/err/err.c", 296);
      v3[44] = 0;
    }
    v17 = v3[61];
    v3[60] = 0;
    if ( (v17 & 1) != 0 )
    {
      CRYPTO_free(v3[45], "crypto/err/err.c", 296);
      v3[45] = 0;
    }
    v18 = v3[62];
    v3[61] = 0;
    if ( (v18 & 1) != 0 )
    {
      CRYPTO_free(v3[46], "crypto/err/err.c", 296);
      v3[46] = 0;
    }
    v19 = v3[63];
    v3[62] = 0;
    if ( (v19 & 1) != 0 )
    {
      CRYPTO_free(v3[47], "crypto/err/err.c", 296);
      v3[47] = 0;
    }
    v3[63] = 0;
    CRYPTO_free(v3, "crypto/err/err.c", 298);
    sub_10C5BC(&unk_6DF438, 0);
    return 0;
  }
  else
  {
    sub_10C5BC(&unk_6DF438, 0);
    return 0;
  }
}

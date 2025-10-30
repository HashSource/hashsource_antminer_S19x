int sub_D099C()
{
  _DWORD *v0; // r0
  _DWORD *v1; // r4
  int v2; // r2
  int v3; // r3
  int v4; // r1
  _DWORD *v5; // lr
  _DWORD *v6; // r0
  int v8; // r3
  bool v9; // nf
  int v10; // r1
  int v11; // r1
  _DWORD *v12; // r10
  _DWORD *v13; // r1
  int v14; // r5
  int v15; // r3

  v0 = sub_CFCDC();
  if ( v0 )
  {
    v1 = v0;
    v2 = v0[96];
    v3 = v0[97];
    while ( v2 != v3 )
    {
      while ( 1 )
      {
        v4 = v2;
        v5 = &v1[v2];
        if ( (*v5 & 2) == 0 )
          break;
        if ( (v5[48] & 1) != 0 )
        {
          CRYPTO_free(v5[32], "crypto/err/err.c", 550);
          v2 = v1[96];
          v3 = v1[97];
          v4 = v2;
          v1[v2 + 32] = 0;
        }
        if ( v2 <= 0 )
          v2 = 15;
        else
          --v2;
        v6 = &v1[v4];
        v6[48] = 0;
        v1[v4] = 0;
        v6[16] = 0;
        v6[64] = 0;
        v6[80] = -1;
        v1[96] = v2;
        if ( v2 == v3 )
          return 0;
      }
      v8 = v3 + 1;
      v10 = -v8;
      v9 = -v8 < 0;
      v3 = v8 & 0xF;
      v11 = v10 & 0xF;
      if ( !v9 )
        v3 = -v11;
      v12 = &v1[v3];
      if ( (*v12 & 2) == 0 )
      {
        v14 = v12[16];
        v1[97] = v3;
        v15 = v12[48];
        v12[16] = 0;
        if ( (v15 & 1) != 0 )
        {
          CRYPTO_free(v12[32], "crypto/err/err.c", 589);
          v12[32] = 0;
        }
        v12[48] = 0;
        return v14;
      }
      v1[97] = v3;
      if ( (v12[48] & 1) != 0 )
      {
        CRYPTO_free(v12[32], "crypto/err/err.c", 557);
        v3 = v1[97];
        v2 = v1[96];
        v1[v3 + 32] = 0;
      }
      v13 = &v1[v3];
      v13[48] = 0;
      *v13 = 0;
      v13[16] = 0;
      v13[64] = 0;
      v13[80] = -1;
    }
  }
  return 0;
}

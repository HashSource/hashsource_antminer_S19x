int __fastcall sub_D0AD0(_DWORD *a1, _DWORD *a2)
{
  _DWORD *v4; // r0
  _DWORD *v5; // r4
  int v6; // r2
  int v7; // r3
  int v8; // r0
  _DWORD *v9; // lr
  _DWORD *v10; // r1
  int result; // r0
  int v12; // r3
  bool v13; // nf
  int v14; // r1
  int v15; // r1
  _DWORD *v16; // lr
  _DWORD *v17; // r1
  bool v18; // zf
  int v19; // r3

  v4 = sub_CFCDC();
  if ( v4 )
  {
    v5 = v4;
    v6 = v4[96];
    v7 = v4[97];
    while ( v6 != v7 )
    {
      while ( 1 )
      {
        v8 = v6;
        v9 = &v5[v6];
        if ( (*v9 & 2) == 0 )
          break;
        if ( (v9[48] & 1) != 0 )
        {
          CRYPTO_free(v9[32], "crypto/err/err.c", 550);
          v6 = v5[96];
          v7 = v5[97];
          v8 = v6;
          v5[v6 + 32] = 0;
        }
        if ( v6 <= 0 )
          v6 = 15;
        else
          --v6;
        v10 = &v5[v8];
        v10[48] = 0;
        v5[v8] = 0;
        v10[16] = 0;
        v10[64] = 0;
        v10[80] = -1;
        v5[96] = v6;
        if ( v6 == v7 )
          return 0;
      }
      v12 = v7 + 1;
      v14 = -v12;
      v13 = -v12 < 0;
      v7 = v12 & 0xF;
      v15 = v14 & 0xF;
      if ( !v13 )
        v7 = -v15;
      v16 = &v5[v7];
      if ( (*v16 & 2) == 0 )
      {
        v18 = a1 == 0;
        if ( a1 )
          v18 = a2 == 0;
        result = v16[16];
        if ( !v18 )
        {
          v19 = v16[64];
          if ( v19 )
          {
            *a1 = v19;
            *a2 = v16[80];
          }
          else
          {
            *a1 = "NA";
            *a2 = 0;
          }
        }
        return result;
      }
      v5[97] = v7;
      if ( (v16[48] & 1) != 0 )
      {
        CRYPTO_free(v16[32], "crypto/err/err.c", 557);
        v7 = v5[97];
        v6 = v5[96];
        v5[v7 + 32] = 0;
      }
      v17 = &v5[v7];
      v17[48] = 0;
      *v17 = 0;
      v17[16] = 0;
      v17[64] = 0;
      v17[80] = -1;
    }
  }
  return 0;
}

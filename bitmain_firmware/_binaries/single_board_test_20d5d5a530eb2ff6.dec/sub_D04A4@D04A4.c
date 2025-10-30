int __fastcall sub_D04A4(_DWORD *a1, _DWORD *a2, _DWORD *a3, _DWORD *a4)
{
  _DWORD *v8; // r0
  _DWORD *v9; // r4
  int v10; // r2
  int v11; // r3
  int v12; // r0
  _DWORD *v13; // lr
  _DWORD *v14; // r1
  int v16; // r3
  bool v17; // nf
  int v18; // r1
  int v19; // r3
  _DWORD *v20; // r3
  _DWORD *v21; // r1
  bool v22; // zf
  int v23; // r5
  int v24; // r2
  int v25; // r2
  _DWORD *v26; // [sp+4h] [bp-8h]

  v8 = sub_CFCDC();
  if ( v8 )
  {
    v9 = v8;
    v10 = v8[96];
    v11 = v8[97];
    while ( v10 != v11 )
    {
      while ( 1 )
      {
        v12 = v10;
        v13 = &v9[v10];
        if ( (*v13 & 2) == 0 )
          break;
        if ( (v13[48] & 1) != 0 )
        {
          CRYPTO_free(v13[32], "crypto/err/err.c", 550);
          v10 = v9[96];
          v11 = v9[97];
          v12 = v10;
          v9[v10 + 32] = 0;
        }
        if ( v10 <= 0 )
          v10 = 15;
        else
          --v10;
        v14 = &v9[v12];
        v14[48] = 0;
        v9[v12] = 0;
        v14[16] = 0;
        v14[64] = 0;
        v14[80] = -1;
        v9[96] = v10;
        if ( v10 == v11 )
          return 0;
      }
      v16 = v11 + 1;
      v17 = -v16 < 0;
      v18 = v16 & 0xF;
      v19 = -v16 & 0xF;
      if ( !v17 )
        v18 = -v19;
      v20 = &v9[v18];
      if ( (*v20 & 2) == 0 )
      {
        v22 = a1 == 0;
        if ( a1 )
          v22 = a2 == 0;
        v23 = v20[16];
        v9[97] = v18;
        v20[16] = 0;
        if ( !v22 )
        {
          v25 = v20[64];
          if ( v25 )
          {
            *a1 = v25;
            *a2 = v20[80];
          }
          else
          {
            *a1 = "NA";
            *a2 = 0;
          }
        }
        if ( a3 )
        {
          v24 = v20[32];
          if ( v24 )
          {
            *a3 = v24;
            if ( a4 )
            {
              *a4 = v20[48];
              return v23;
            }
          }
          else
          {
            *a3 = &byte_1A4198;
            if ( a4 )
            {
              *a4 = 0;
              return v23;
            }
          }
          return v23;
        }
        else
        {
          if ( (v20[48] & 1) != 0 )
          {
            v26 = &v9[v18];
            CRYPTO_free(v20[32], "crypto/err/err.c", 589);
            v20 = v26;
            v26[32] = 0;
          }
          v20[48] = 0;
          return v23;
        }
      }
      v9[97] = v18;
      if ( (v20[48] & 1) != 0 )
      {
        CRYPTO_free(v20[32], "crypto/err/err.c", 557);
        v11 = v9[97];
        v10 = v9[96];
        v9[v11 + 32] = 0;
      }
      else
      {
        v11 = v18;
      }
      v21 = &v9[v11];
      v21[48] = 0;
      *v21 = 0;
      v21[16] = 0;
      v21[64] = 0;
      v21[80] = -1;
    }
  }
  return 0;
}

_DWORD *__fastcall sub_D0048(int a1, __int16 a2, __int16 a3, int a4, int a5)
{
  _DWORD *result; // r0
  _DWORD *v10; // r5
  int v11; // r3
  int v12; // r4
  bool v13; // nf
  int v14; // r2
  int v15; // r4
  int v16; // r2
  _DWORD *v17; // lr
  int v18; // r3
  int v19; // r3

  result = sub_CFCDC();
  if ( result )
  {
    v10 = result;
    v11 = result[97];
    v12 = result[96] + 1;
    v14 = -v12;
    v13 = -v12 < 0;
    v15 = v12 & 0xF;
    v16 = v14 & 0xF;
    if ( !v13 )
      v15 = -v16;
    result[96] = v15;
    if ( v15 == v11 )
    {
      v19 = (v15 + 1) & 0xF;
      if ( v15 + 1 <= 0 )
        v19 = -(-(v15 + 1) & 0xF);
      result[97] = v19;
    }
    result = (_DWORD *)(a1 << 24);
    v17 = &v10[v15];
    *v17 = 0;
    v18 = v17[48];
    v17[64] = a4;
    v17[16] = a3 & 0xFFF | (a1 << 24) | ((a2 & 0xFFF) << 12);
    v17[80] = a5;
    if ( (v18 & 1) != 0 )
    {
      result = (_DWORD *)CRYPTO_free(v17[32], "crypto/err/err.c", 457);
      v15 = v10[96];
      v10[v15 + 32] = 0;
    }
    v10[v15 + 48] = 0;
  }
  return result;
}

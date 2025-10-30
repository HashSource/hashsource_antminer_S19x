int sub_D128C()
{
  _DWORD *v0; // r0
  _DWORD *v1; // r4
  int v2; // r7
  int v3; // r3
  int v4; // r2
  _DWORD *v6; // r2
  int v7; // r1
  _DWORD *v8; // r2

  v0 = sub_CFCDC();
  if ( v0 )
  {
    v1 = v0;
    v2 = v0[97];
    v3 = v0[96];
    if ( v3 != v2 )
    {
      v4 = v0[v3];
      if ( (v4 & 1) != 0 )
      {
LABEL_11:
        v1[v3] = v4 & 0xFFFFFFFE;
        return 1;
      }
      while ( 1 )
      {
        v7 = v3;
        v8 = &v1[v3];
        if ( (v8[48] & 1) != 0 )
        {
          CRYPTO_free(v8[32], "crypto/err/err.c", 935);
          v3 = v1[96];
          v2 = v1[97];
          v7 = v3;
          v1[v3 + 32] = 0;
        }
        if ( v3-- <= 0 )
          v3 = 15;
        v6 = &v1[v7];
        v6[48] = 0;
        v1[v7] = 0;
        v6[16] = 0;
        v6[64] = 0;
        v6[80] = -1;
        v1[96] = v3;
        if ( v3 == v2 )
          break;
        v4 = v1[v3];
        if ( (v4 & 1) != 0 )
          goto LABEL_11;
      }
    }
  }
  return 0;
}

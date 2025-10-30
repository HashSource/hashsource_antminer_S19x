_DWORD *sub_13FDA0()
{
  _DWORD *v0; // r4
  int v1; // r0
  int v2; // r3
  bool v3; // zf
  _DWORD *result; // r0

  v0 = sub_BFD20();
  if ( !v0 )
    return 0;
  v0[2] = sub_B8A2C((int)&bignum_dh2048_256_p);
  v0[3] = sub_B8A2C((int)&bignum_dh2048_256_g);
  v1 = sub_B8A2C((int)&bignum_dh2048_256_q);
  v2 = v0[2];
  v0[9] = v1;
  v3 = v1 == 0;
  if ( v1 )
    v3 = v2 == 0;
  result = v0;
  if ( v3 || !v0[3] )
  {
    sub_BFB8C((int)v0);
    return 0;
  }
  return result;
}

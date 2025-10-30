_DWORD *sub_12EE94()
{
  _DWORD *v0; // r4
  int v1; // r0
  int v2; // r3
  bool v3; // zf

  v0 = sub_E0740((void *)0x30);
  if ( v0 )
  {
    v0[1] = sub_B2888();
    v1 = sub_B2068();
    v2 = v0[1];
    v0[2] = v1;
    v3 = v1 == 0;
    if ( v1 )
      v3 = v2 == 0;
    if ( !v3 )
      return v0;
  }
  sub_12EE50((int)v0);
  sub_D0048(13, 173, 65, (int)"crypto/asn1/x_pkey.c", 32);
  return 0;
}

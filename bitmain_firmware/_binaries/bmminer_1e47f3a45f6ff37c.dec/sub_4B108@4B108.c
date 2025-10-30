int __fastcall sub_4B108(int src)
{
  int *v1; // r2
  int *v2; // r1
  unsigned int v3; // t1
  int v4; // [sp+0h] [bp-214h] BYREF
  _DWORD srca[7]; // [sp+4h] [bp-210h] BYREF
  int v6; // [sp+20h] [bp-1F4h] BYREF
  _DWORD v7[7]; // [sp+24h] [bp-1F0h] BYREF
  int v8; // [sp+40h] [bp-1D4h] BYREF
  unsigned int v9[16]; // [sp+44h] [bp-1D0h] BYREF
  _DWORD s[20]; // [sp+84h] [bp-190h] BYREF
  _DWORD dest[21]; // [sp+D4h] [bp-140h] BYREF
  _BYTE v12[232]; // [sp+128h] [bp-ECh] BYREF

  memset(srca, 0, sizeof(srca));
  v6 = 0;
  memset(v7, 0, sizeof(v7));
  v8 = 0;
  if ( src )
  {
    memcpy(dest, (const void *)src, sizeof(dest));
    sub_3EE50((int)&dest[5], 64);
    v9[0] = dest[5];
    v9[1] = dest[6];
    v9[2] = dest[7];
    v9[3] = dest[8];
    v9[4] = dest[9];
    v9[5] = dest[10];
    v9[6] = dest[11];
    v9[7] = dest[12];
    v9[8] = dest[13];
    v9[9] = dest[14];
    v9[10] = dest[15];
    v9[11] = dest[16];
    v9[12] = dest[17];
    v9[13] = dest[18];
    v9[14] = dest[19];
    v9[15] = dest[20];
    sub_3F2A8((int)&dest[5], v9, 0x40u);
    sub_3EE50((int)&dest[2], 12);
    memset(v9, 0, sizeof(v9));
    v9[0] = dest[2];
    v9[1] = dest[3];
    v9[2] = dest[4];
    sub_3F2A8((int)&dest[2], v9, 0xCu);
    sub_3EE50((int)&dest[1], 4);
    memset(v12, 0, sizeof(v12));
    s[0] = dest[5];
    s[1] = dest[6];
    s[2] = dest[7];
    s[3] = dest[8];
    s[4] = dest[9];
    s[5] = dest[10];
    s[6] = dest[11];
    s[7] = dest[12];
    s[8] = dest[13];
    s[9] = dest[14];
    s[10] = dest[15];
    s[11] = dest[16];
    s[12] = dest[17];
    s[13] = dest[18];
    s[14] = dest[19];
    s[15] = dest[20];
    s[16] = dest[2];
    s[17] = dest[3];
    s[18] = dest[4];
    s[19] = dest[1];
    sub_2CE5C((char *)s, 80, srca);
    memset(v12, 0, sizeof(v12));
    sub_2CE5C((char *)srca, 32, v7);
    v1 = &v6;
    v2 = &v4;
    do
    {
      v3 = v1[1];
      ++v1;
      v2[1] = bswap32(v3);
      ++v2;
    }
    while ( v1 != &v8 );
    src = v6;
    if ( v6 )
      return 1;
  }
  return src;
}

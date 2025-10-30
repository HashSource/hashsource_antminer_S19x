int __fastcall sub_272A0(int a1, int a2)
{
  int v2; // r5
  _DWORD *v3; // r4
  int v4; // r3
  int v5; // r2
  _DWORD *v6; // r0
  unsigned int v7; // r3
  unsigned int v8; // r3
  unsigned int v9; // r3
  size_t n; // [sp+8h] [bp-134h] BYREF
  time_t v12; // [sp+Ch] [bp-130h] BYREF
  unsigned int v13[2]; // [sp+10h] [bp-12Ch] BYREF
  unsigned int s2; // [sp+18h] [bp-124h] BYREF
  int v15; // [sp+1Ch] [bp-120h]
  __int16 v16; // [sp+24h] [bp-118h]
  _BYTE v17[256]; // [sp+34h] [bp-108h] BYREF

  v2 = EVP_MD_CTX_new(a1, a2);
  if ( dword_1092A8 )
  {
    dword_1092B0 = 0;
    pubkey = hostval;
    if ( !dword_1092B4 )
      dword_1092B4 = sub_64B04(0, dword_BA8E4, 0, 0);
    EVP_DigestInit(v2, dword_BA8E8);
    EVP_DigestUpdate(v2, &pubkey, 12);
    EVP_DigestUpdate(v2, dword_1092AC, bswap32(dword_1092A8));
    if ( EVP_SignFinal(v2, dword_1092B4, &n, dword_BA8E0) )
    {
      if ( n > dword_BA8E4 )
        sub_6FC54("ntp_crypto.c", 1868, 2, "len <= sign_siglen");
      dword_1092B0 = bswap32(n);
    }
  }
  v3 = (_DWORD *)cinfo;
  if ( cinfo )
  {
    do
    {
      v4 = v3[20];
      v5 = hostval;
      v3[19] = 0;
      v3[15] = v5;
      if ( !v4 )
        v3[20] = sub_64B04(0, dword_BA8E4, 0, 0);
      EVP_DigestInit(v2, dword_BA8E8);
      EVP_DigestUpdate(v2, v3 + 15, 12);
      EVP_DigestUpdate(v2, v3[18], bswap32(v3[17]));
      if ( EVP_SignFinal(v2, v3[20], &n, dword_BA8E0) )
      {
        if ( n > dword_BA8E4 )
          sub_6FC54("ntp_crypto.c", 1889, 2, "len <= sign_siglen");
        v3[19] = bswap32(n);
      }
      v3 = (_DWORD *)*v3;
    }
    while ( v3 );
  }
  tai_leap = hostval;
  dword_1092BC = dword_10928C;
  sub_2DED4(v13);
  if ( !memcmp(v13, &s2, 8u) )
  {
    v12 = time(0);
    sub_2DBF8(v13, v12 - 2085978496, &v12);
  }
  v6 = (_DWORD *)dword_1092C4;
  n = 12;
  if ( !dword_1092C4 || dword_1092C0 != 201326592 )
  {
    free((void *)dword_1092C4);
    v6 = (_DWORD *)sub_64B04(0, n, 0, 0);
    dword_1092C0 = bswap32(n);
    dword_1092C4 = (int)v6;
  }
  if ( v16 <= 10 )
  {
    memset(v6, 0, n);
  }
  else
  {
    *v6 = bswap32(v16);
    v7 = v13[0];
    v6[1] = bswap32(v13[0]);
    if ( v15 >= 0 )
      v8 = s2;
    else
      v8 = v7 + 2146304;
    if ( v15 >= 0 )
      v9 = v8 + 604800;
    else
      v9 = v8 + 13696;
    v6[2] = bswap32(v9);
  }
  if ( !dword_1092CC )
    dword_1092CC = sub_64B04(0, dword_BA8E4, 0, 0);
  EVP_DigestInit(v2, dword_BA8E8);
  EVP_DigestUpdate(v2, &tai_leap, 12);
  EVP_DigestUpdate(v2, dword_1092C4, n);
  if ( EVP_SignFinal(v2, dword_1092CC, &n, dword_BA8E0) )
  {
    if ( n > dword_BA8E4 )
      sub_6FC54("ntp_crypto.c", 1939, 2, "len <= sign_siglen");
    dword_1092C8 = bswap32(n);
  }
  crypto_flags |= 2u;
  sub_6D00C(v17, 256, "signature update ts %u", bswap32(hostval));
  sub_432D0(0, v17);
  return EVP_MD_CTX_free(v2);
}

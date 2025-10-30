int __fastcall sub_26E50(int a1, int a2)
{
  int v2; // r5
  _DWORD *v3; // r4
  int v4; // r3
  int v5; // r2
  _DWORD *v6; // r0
  unsigned int v7; // r3
  unsigned int v8; // r3
  int v9; // r3
  size_t n; // [sp+8h] [bp-134h] BYREF
  time_t v12; // [sp+Ch] [bp-130h] BYREF
  unsigned int v13[2]; // [sp+10h] [bp-12Ch] BYREF
  unsigned int v14; // [sp+18h] [bp-124h]
  int v15; // [sp+1Ch] [bp-120h]
  __int16 v16; // [sp+24h] [bp-118h]
  _BYTE v17[256]; // [sp+34h] [bp-108h] BYREF

  v2 = EVP_MD_CTX_new(a1, a2);
  if ( dword_108288 )
  {
    dword_108290 = 0;
    pubkey = hostval;
    if ( !dword_108294 )
      dword_108294 = sub_63BA4(0, dword_B98E4, 0, 0);
    EVP_DigestInit(v2, dword_B98E8);
    EVP_DigestUpdate(v2, &pubkey, 12);
    EVP_DigestUpdate(v2, dword_10828C, bswap32(dword_108288));
    if ( EVP_SignFinal(v2, dword_108294, &n, dword_B98E0) )
    {
      if ( n > dword_B98E4 )
        sub_6ECC0("ntp_crypto.c", 1868, 2, "len <= sign_siglen");
      dword_108290 = bswap32(n);
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
        v3[20] = sub_63BA4(0, dword_B98E4, 0, 0);
      EVP_DigestInit(v2, dword_B98E8);
      EVP_DigestUpdate(v2, v3 + 15, 12);
      EVP_DigestUpdate(v2, v3[18], bswap32(v3[17]));
      if ( EVP_SignFinal(v2, v3[20], &n, dword_B98E0) )
      {
        if ( n > dword_B98E4 )
          sub_6ECC0("ntp_crypto.c", 1889, 2, "len <= sign_siglen");
        v3[19] = bswap32(n);
      }
      v3 = (_DWORD *)*v3;
    }
    while ( v3 );
  }
  tai_leap = hostval;
  dword_10829C = dword_10826C;
  sub_2DA78(v13);
  if ( v13[0] == v14 && v13[1] == v15 )
  {
    v12 = time(0);
    sub_2D7D0(v13, v12 - 2085978496, &v12);
  }
  v6 = (_DWORD *)dword_1082A4;
  n = 12;
  if ( !dword_1082A4 || dword_1082A0 != 201326592 )
  {
    free((void *)dword_1082A4);
    v6 = (_DWORD *)sub_63BA4(0, n, 0, 0);
    dword_1082A4 = (int)v6;
    dword_1082A0 = bswap32(n);
  }
  if ( v16 <= 10 )
  {
    memset(v6, 0, n);
    v9 = dword_1082AC;
    if ( dword_1082AC )
      goto LABEL_21;
    goto LABEL_35;
  }
  *v6 = bswap32(v16);
  v7 = v13[0];
  v6[1] = bswap32(v13[0]);
  if ( v15 < 0 )
    v8 = v7 + 2160000;
  else
    v8 = v14;
  if ( v15 >= 0 )
    v8 += 604800;
  v6[2] = bswap32(v8);
  v9 = dword_1082AC;
  if ( !dword_1082AC )
LABEL_35:
    dword_1082AC = sub_63BA4(v9, dword_B98E4, v9, v9);
LABEL_21:
  EVP_DigestInit(v2, dword_B98E8);
  EVP_DigestUpdate(v2, &tai_leap, 12);
  EVP_DigestUpdate(v2, dword_1082A4, n);
  if ( EVP_SignFinal(v2, dword_1082AC, &n, dword_B98E0) )
  {
    if ( n > dword_B98E4 )
      sub_6ECC0("ntp_crypto.c", 1939, 2, "len <= sign_siglen");
    dword_1082A8 = bswap32(n);
  }
  crypto_flags |= 2u;
  sub_6C054(v17, 256, "signature update ts %u", bswap32(hostval));
  sub_42514(0, v17);
  return EVP_MD_CTX_free(v2);
}

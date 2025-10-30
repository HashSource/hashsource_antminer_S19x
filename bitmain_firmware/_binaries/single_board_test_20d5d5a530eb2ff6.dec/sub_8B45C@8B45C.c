int __fastcall sub_8B45C(int result)
{
  unsigned int *v1; // r2
  unsigned int v2; // r3
  int v3; // r3
  _DWORD *v4; // r4
  int v5; // r0
  int v6; // r1
  int v7; // r2
  int v8; // r0
  int v9; // r3

  if ( result )
  {
    v1 = (unsigned int *)(result + 1256);
    do
      v2 = __ldrex(v1);
    while ( __strex(v2 - 1, v1) );
    v3 = v2 - 1;
    if ( v3 )
    {
      if ( v3 > 0 )
        return result;
    }
    else
    {
      __dmb(0xBu);
    }
    v4 = (_DWORD *)result;
    X509_VERIFY_PARAM_free(*(_DWORD *)(result + 144));
    sub_10BFDC(v4[38], sub_878F8);
    v4[38] = 0;
    sub_10BFDC(v4[39], X509_free);
    v5 = v4[41];
    v4[39] = 0;
    X509_free(v5, v6, v7);
    v4[43] = -1;
    v4[44] = -1;
    v4[41] = 0;
    v4[40] = 0;
    sub_DC2BC(0, v4, v4 + 311);
    sub_8A8AC((int)v4);
    sub_B717C(v4[3]);
    sub_B717C(v4[2]);
    sub_BAE3C(v4[27]);
    sub_10BDB4(v4[47]);
    sub_10BDB4(v4[48]);
    sub_10BDB4(v4[49]);
    sub_10BDB4(v4[46]);
    if ( v4[285] )
    {
      sub_8E450(v4);
      sub_8D6A4(v4[285]);
    }
    sub_8D6A4(v4[286]);
    CRYPTO_free(v4[287], "ssl/ssl_lib.c", 1182);
    sub_8A7B4(v4);
    sub_8B024(v4 + 248);
    sub_8B024(v4 + 256);
    sub_84370(v4[257]);
    CRYPTO_free(v4[994], "ssl/ssl_lib.c", 1187);
    CRYPTO_free(v4[334], "ssl/ssl_lib.c", 1190);
    sub_89F14(v4[376]);
    CRYPTO_free(v4[345], "ssl/ssl_lib.c", 1193);
    CRYPTO_free(v4[347], "ssl/ssl_lib.c", 1194);
    CRYPTO_free(v4[349], "ssl/ssl_lib.c", 1195);
    CRYPTO_free(v4[351], "ssl/ssl_lib.c", 1196);
    sub_10BFDC(v4[340], X509_EXTENSION_free);
    sub_10BFDC(v4[339], OCSP_RESPID_free);
    sub_BD014(v4[374]);
    CRYPTO_free(v4[336], "ssl/ssl_lib.c", 1204);
    CRYPTO_free(v4[341], "ssl/ssl_lib.c", 1206);
    CRYPTO_free(v4[357], "ssl/ssl_lib.c", 1207);
    CRYPTO_free(v4[365], "ssl/ssl_lib.c", 1208);
    v8 = v4[370];
    if ( v8 )
    {
      CRYPTO_free(*(_DWORD *)(v8 + 616), "ssl/ssl_lib.c", 1210);
      v8 = v4[370];
    }
    CRYPTO_free(v8, "ssl/ssl_lib.c", 1211);
    CRYPTO_free(v4[383], "ssl/ssl_lib.c", 1212);
    sub_D1504(v4[386]);
    sub_10BFDC(v4[312], X509_NAME_free);
    sub_10BFDC(v4[313], X509_NAME_free);
    sub_10BFDC(v4[309], X509_free);
    v9 = v4[1];
    if ( v9 )
      (*(void (__fastcall **)(_DWORD *))(v9 + 20))(v4);
    sub_7D39C(v4 + 404);
    sub_89F14(v4[308]);
    sub_B3430(v4[978]);
    CRYPTO_free(v4[359], "ssl/ssl_lib.c", 1230);
    sub_10BDB4(v4[377]);
    sub_10C574(v4[986]);
    return CRYPTO_free(v4, "ssl/ssl_lib.c", 1239);
  }
  return result;
}

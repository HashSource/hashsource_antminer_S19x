int __fastcall sub_10C70(int a1, int a2, int a3, int a4)
{
  int v4; // r0
  const char *v5; // r0
  int v7; // r0
  int error; // r0
  const char *v9; // r0
  _BYTE v14[112]; // [sp+1Ch] [bp-A0h] BYREF
  _BYTE v15[32]; // [sp+8Ch] [bp-30h] BYREF
  int v16; // [sp+ACh] [bp-10h]
  int bio_RSA_PUBKEY; // [sp+B0h] [bp-Ch]
  int v18; // [sp+B4h] [bp-8h]

  v18 = BIO_new_mem_buf(a4, 1024);
  bio_RSA_PUBKEY = PEM_read_bio_RSA_PUBKEY(v18, 0, 0, 0);
  if ( bio_RSA_PUBKEY )
  {
    SHA256_Init(v14);
    SHA256_Update(v14, a1, a2);
    SHA256_Final(v15, v14);
    v7 = RSA_verify(672, v15, 32, a3, 256, bio_RSA_PUBKEY);
    v16 = v7;
    if ( bio_RSA_PUBKEY )
      v7 = RSA_free(bio_RSA_PUBKEY);
    if ( v18 )
      v7 = BIO_free(v18);
    if ( v16 == 1 )
    {
      return 0;
    }
    else
    {
      error = ERR_get_error(v7);
      v9 = (const char *)ERR_error_string(error, 0);
      printf("OpenSSL error: %s\n", v9);
      puts("Check miner.pem Failed!");
      return 13;
    }
  }
  else
  {
    v4 = ERR_get_error(0);
    v5 = (const char *)ERR_error_string(v4, 0);
    printf("OpenSSL error: %s\n", v5);
    puts("Read Root PubK Failed!");
    return 12;
  }
}

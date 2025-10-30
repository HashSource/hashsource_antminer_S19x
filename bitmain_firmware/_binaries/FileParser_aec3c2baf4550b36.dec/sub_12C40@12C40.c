int __fastcall sub_12C40(const char *a1, char *a2, const char *a3, _BYTE *a4, char a5, char a6, char a7)
{
  size_t v8; // r0
  int v9; // r0
  const char *v10; // r0
  int v11; // r0
  int error; // r0
  const char *v13; // r0
  _DWORD v19[65]; // [sp+1Ch] [bp-BF0h] BYREF
  _BYTE v20[12]; // [sp+120h] [bp-AECh] BYREF
  _DWORD v21[8]; // [sp+190h] [bp-A7Ch] BYREF
  _DWORD v22[64]; // [sp+1B0h] [bp-A5Ch] BYREF
  _BYTE v23[12]; // [sp+2B0h] [bp-95Ch] BYREF
  _OWORD v24[66]; // [sp+320h] [bp-8ECh] BYREF
  _DWORD v25[256]; // [sp+740h] [bp-4CCh] BYREF
  __int64 dest; // [sp+B40h] [bp-CCh] BYREF
  _BYTE v27[48]; // [sp+B48h] [bp-C4h] BYREF
  int v28; // [sp+B78h] [bp-94h]
  unsigned int v29; // [sp+BB0h] [bp-5Ch]
  int v30; // [sp+BB4h] [bp-58h]
  int v31; // [sp+BB8h] [bp-54h]
  int bio_RSA_PUBKEY; // [sp+BBCh] [bp-50h]
  int v33; // [sp+BC0h] [bp-4Ch]
  FILE *v34; // [sp+BC4h] [bp-48h]
  FILE *v35; // [sp+BC8h] [bp-44h]
  int v36; // [sp+BCCh] [bp-40h]
  size_t n; // [sp+BD0h] [bp-3Ch]
  FILE *v38; // [sp+BD4h] [bp-38h]
  unsigned int v39; // [sp+BD8h] [bp-34h]
  unsigned __int16 v40; // [sp+BDEh] [bp-2Eh]
  unsigned __int64 v41; // [sp+BE0h] [bp-2Ch]
  FILE *stream; // [sp+BE8h] [bp-24h]
  int v43; // [sp+BECh] [bp-20h]
  int m; // [sp+BF0h] [bp-1Ch]
  int k; // [sp+BF4h] [bp-18h]
  int j; // [sp+BF8h] [bp-14h]
  int v47; // [sp+BFCh] [bp-10h]
  int i; // [sp+C00h] [bp-Ch]
  unsigned __int8 v49; // [sp+C07h] [bp-5h]

  sub_13BA4(a1, v27);
  v43 = v28;
  if ( v28 >= 2048 )
  {
    stream = (FILE *)fopen64(a1, "rb");
    if ( stream )
    {
      fread(a4, 0x800u, 1u, stream);
      if ( *a4 == 38 )
      {
        printf("miner_type %s\n", a2);
        v8 = strlen(a2);
        v41 = sub_12180((unsigned __int8 *)a2, v8);
        memcpy(&dest, a4 + 2, sizeof(dest));
        printf("miner_type_hash %16llx, bmu_hash %16llx\n", v41, dest);
        if ( v41 == dest )
        {
          v49 = 0;
          v40 = _byteswap_ushort(*(_WORD *)(a4 + 11));
          if ( !a7 || (printf("content:%x\n", v40), (v40 & 0xFE00) == 0xFE00) )
          {
            for ( i = 0; i <= 15; ++i )
            {
              if ( (((int)v40 >> i) & 1) != 0 )
                ++v49;
            }
            if ( v49 == (unsigned __int8)a4[1304] )
            {
              v47 = ((unsigned __int8)a4[1304] + 9) << 8;
              v39 = _byteswap_ulong(*(_DWORD *)(a4 + 1305));
              for ( j = 0; j < v49; ++j )
              {
                v29 = _byteswap_ulong(*(_DWORD *)&a4[5 * j + 1310]);
                v47 += v29;
                printf("file[%d] size:[%d]\n", j, v29);
              }
              if ( v47 == v43 )
              {
                v38 = (FILE *)fopen64(a3, "r");
                if ( v38 )
                {
                  memset(v25, 0, sizeof(v25));
                  fread(v25, 0x400u, 1u, v38);
                  fclose(v38);
                  v38 = 0;
                  n = ((unsigned __int8)a4[22] << 8) | (unsigned __int8)a4[23];
                  v36 = sub_10C70((int)(a4 + 24), n, (int)(a4 + 1048), (int)v25);
                  if ( v36 )
                  {
                    printf("Check pem payload failed! ret:[%d]\n", v36);
                    if ( stream )
                      fclose(stream);
                    return v36;
                  }
                  else
                  {
                    v35 = (FILE *)fopen64("/usr/bin/fw_version", "w");
                    if ( v35 )
                    {
                      fwrite(a4 + 13, 1u, 8u, v35);
                      fclose(v35);
                    }
                    if ( a5 )
                    {
                      v34 = (FILE *)fopen64("/tmp/tmpfw/miner.pem", "w");
                      if ( !v34 )
                      {
                        puts("Dump Miner.pem Failed!\r");
                        return 15;
                      }
                      fwrite(a4 + 24, 1u, n, v34);
                      fclose(v34);
                      v34 = (FILE *)fopen64("/tmp/tmpfw/miner.pem.sig", "w");
                      if ( !v34 )
                      {
                        puts("Dump Miner.pem.sig Failed!\r");
                        return 16;
                      }
                      fwrite(a4 + 1048, 1u, 0x100u, v34);
                      fclose(v34);
                    }
                    memset(v24, 0, sizeof(v24));
                    SHA256_Init(v23);
                    SHA256_Update(v23, a4, 2048);
                    SHA256_Final(v24, v23);
                    for ( k = 0; k < v49; ++k )
                    {
                      v30 = _byteswap_ulong(*(_DWORD *)&a4[5 * k + 1310]);
                      sub_10DE8(stream, v30, &v24[2 * k + 2], a4[5 * k + 1309], 0, a5);
                    }
                    for ( m = 0; m < v49; ++m )
                      sub_10DE8(stream, 256, &v24[2 * v49 + 2 + 2 * m], a4[5 * m + 1309], 1, a5);
                    memset(v22, 0, sizeof(v22));
                    fseek(stream, -256, 2);
                    fread(v22, 0x100u, 1u, stream);
                    memset(v21, 0, sizeof(v21));
                    SHA256_Init(v20);
                    SHA256_Update(v20, v24, (v49 << 6) + 32);
                    SHA256_Final(v21, v20);
                    v33 = 0;
                    bio_RSA_PUBKEY = 0;
                    v33 = BIO_new_mem_buf(a4 + 24, 1024);
                    bio_RSA_PUBKEY = PEM_read_bio_RSA_PUBKEY(v33, 0, 0, 0);
                    if ( bio_RSA_PUBKEY )
                    {
                      v31 = RSA_verify(672, v21, 32, v22, 256, bio_RSA_PUBKEY);
                      if ( bio_RSA_PUBKEY )
                        RSA_free(bio_RSA_PUBKEY);
                      if ( v33 )
                        BIO_free(v33);
                      if ( v31 == 1 )
                      {
                        if ( stream )
                          fclose(stream);
                        stream = 0;
                        puts("All Done!\r");
                        if ( a6 )
                        {
                          puts("This Comment Of This Package:");
                          memset(v19, 0, 257);
                          memcpy(v19, a4 + 1360, 0x100u);
                          puts((const char *)v19);
                        }
                        return 0;
                      }
                      else
                      {
                        v11 = puts("Check File Sig failed!\r");
                        error = ERR_get_error(v11);
                        v13 = (const char *)ERR_error_string(error, 0);
                        printf("OpenSSL error: %s\n", v13);
                        return 18;
                      }
                    }
                    else
                    {
                      v9 = ERR_get_error(0);
                      v10 = (const char *)ERR_error_string(v9, 0);
                      printf("OpenSSL error: %s\n", v10);
                      puts("Load Pem Failed!");
                      return 17;
                    }
                  }
                }
                else
                {
                  printf("Cannot Open Root PublicKey '%s'!\n", a3);
                  if ( stream )
                    fclose(stream);
                  return 11;
                }
              }
              else
              {
                printf(
                  "Check FileSize Failed, FileSize Should Be [%d]Bytes, But It Was [%d] Bytes, And Total Says[%d]\n",
                  v39,
                  v43,
                  v47);
                if ( stream )
                  fclose(stream);
                return 10;
              }
            }
            else
            {
              printf("Content Doesn't Match![%d][%d]\n", (unsigned __int8)a4[1304], v49);
              if ( stream )
                fclose(stream);
              return 9;
            }
          }
          else
          {
            puts("This Package Was Not Full Package!");
            return 20;
          }
        }
        else
        {
          puts("input miner_type and bmu miner type donot match!");
          if ( stream )
            fclose(stream);
          return 30;
        }
      }
      else
      {
        printf("'%s' Not A Btmu File!\n", a1);
        if ( stream )
          fclose(stream);
        return 8;
      }
    }
    else
    {
      printf("Read File '%s' Failed!\n", a1);
      return 7;
    }
  }
  else
  {
    printf("File '%s' Not Enough %d, Something Wrong!\n", a1, 2048);
    return 6;
  }
}

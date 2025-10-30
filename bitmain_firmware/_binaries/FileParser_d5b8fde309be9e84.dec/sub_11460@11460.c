int __fastcall sub_11460(const char *a1, const char *a2, _BYTE *a3, char a4, char a5, char a6)
{
  int v7; // r0
  const char *v8; // r0
  int v9; // r0
  int error; // r0
  const char *v11; // r0
  _DWORD v17[65]; // [sp+1Ch] [bp-BE0h] BYREF
  _BYTE v18[12]; // [sp+120h] [bp-ADCh] BYREF
  _DWORD v19[8]; // [sp+190h] [bp-A6Ch] BYREF
  _DWORD v20[64]; // [sp+1B0h] [bp-A4Ch] BYREF
  _BYTE v21[12]; // [sp+2B0h] [bp-94Ch] BYREF
  _OWORD v22[66]; // [sp+320h] [bp-8DCh] BYREF
  _DWORD v23[256]; // [sp+740h] [bp-4BCh] BYREF
  _BYTE v24[48]; // [sp+B40h] [bp-BCh] BYREF
  int v25; // [sp+B70h] [bp-8Ch]
  unsigned int v26; // [sp+BA8h] [bp-54h]
  int v27; // [sp+BACh] [bp-50h]
  int v28; // [sp+BB0h] [bp-4Ch]
  int bio_RSA_PUBKEY; // [sp+BB4h] [bp-48h]
  int v30; // [sp+BB8h] [bp-44h]
  FILE *v31; // [sp+BBCh] [bp-40h]
  FILE *s; // [sp+BC0h] [bp-3Ch]
  int v33; // [sp+BC4h] [bp-38h]
  size_t n; // [sp+BC8h] [bp-34h]
  FILE *v35; // [sp+BCCh] [bp-30h]
  unsigned int v36; // [sp+BD0h] [bp-2Ch]
  unsigned __int16 v37; // [sp+BD6h] [bp-26h]
  FILE *stream; // [sp+BD8h] [bp-24h]
  int v39; // [sp+BDCh] [bp-20h]
  int m; // [sp+BE0h] [bp-1Ch]
  int k; // [sp+BE4h] [bp-18h]
  int j; // [sp+BE8h] [bp-14h]
  int v43; // [sp+BECh] [bp-10h]
  int i; // [sp+BF0h] [bp-Ch]
  unsigned __int8 v45; // [sp+BF7h] [bp-5h]

  sub_122B4(a1, v24);
  v39 = v25;
  if ( v25 >= 2048 )
  {
    stream = (FILE *)fopen64(a1, "rb");
    if ( stream )
    {
      fread(a3, 0x800u, 1u, stream);
      if ( *a3 == 38 )
      {
        v45 = 0;
        v37 = _byteswap_ushort(*(_WORD *)(a3 + 11));
        if ( !a6 || (printf("content:%x\n", v37), (v37 & 0xFE00) == 0xFE00) )
        {
          for ( i = 0; i <= 15; ++i )
          {
            if ( (((int)v37 >> i) & 1) != 0 )
              ++v45;
          }
          if ( v45 == (unsigned __int8)a3[1304] )
          {
            v43 = ((unsigned __int8)a3[1304] + 9) << 8;
            v36 = _byteswap_ulong(*(_DWORD *)(a3 + 1305));
            for ( j = 0; j < v45; ++j )
            {
              v26 = _byteswap_ulong(*(_DWORD *)&a3[5 * j + 1310]);
              v43 += v26;
              printf("file[%d] size:[%d]\n", j, v26);
            }
            if ( v43 == v39 )
            {
              v35 = (FILE *)fopen64(a2, "r");
              if ( v35 )
              {
                memset(v23, 0, sizeof(v23));
                fread(v23, 0x400u, 1u, v35);
                fclose(v35);
                v35 = 0;
                n = ((unsigned __int8)a3[22] << 8) | (unsigned __int8)a3[23];
                v33 = sub_10C70((int)(a3 + 24), n, (int)(a3 + 1048), (int)v23);
                if ( v33 )
                {
                  printf("Check pem payload failed! ret:[%d]\n", v33);
                  if ( stream )
                    fclose(stream);
                  return v33;
                }
                else
                {
                  s = (FILE *)fopen64("/usr/bin/fw_version", "w");
                  if ( s )
                  {
                    fwrite(a3 + 13, 1u, 8u, s);
                    fclose(s);
                  }
                  if ( a4 )
                  {
                    v31 = (FILE *)fopen64("/tmp/tmpfw/miner.pem", "w");
                    if ( !v31 )
                    {
                      puts("Dump Miner.pem Failed!\r");
                      return 15;
                    }
                    fwrite(a3 + 24, 1u, n, v31);
                    fclose(v31);
                    v31 = (FILE *)fopen64("/tmp/tmpfw/miner.pem.sig", "w");
                    if ( !v31 )
                    {
                      puts("Dump Miner.pem.sig Failed!\r");
                      return 16;
                    }
                    fwrite(a3 + 1048, 1u, 0x100u, v31);
                    fclose(v31);
                  }
                  memset(v22, 0, sizeof(v22));
                  SHA256_Init(v21);
                  SHA256_Update(v21, a3, 2048);
                  SHA256_Final(v22, v21);
                  for ( k = 0; k < v45; ++k )
                  {
                    v27 = _byteswap_ulong(*(_DWORD *)&a3[5 * k + 1310]);
                    sub_10DE8(stream, v27, &v22[2 * k + 2], a3[5 * k + 1309], 0, a4);
                  }
                  for ( m = 0; m < v45; ++m )
                    sub_10DE8(stream, 256, &v22[2 * v45 + 2 + 2 * m], a3[5 * m + 1309], 1, a4);
                  memset(v20, 0, sizeof(v20));
                  fseek(stream, -256, 2);
                  fread(v20, 0x100u, 1u, stream);
                  memset(v19, 0, sizeof(v19));
                  SHA256_Init(v18);
                  SHA256_Update(v18, v22, (v45 << 6) + 32);
                  SHA256_Final(v19, v18);
                  v30 = 0;
                  bio_RSA_PUBKEY = 0;
                  v30 = BIO_new_mem_buf(a3 + 24, 1024);
                  bio_RSA_PUBKEY = PEM_read_bio_RSA_PUBKEY(v30, 0, 0, 0);
                  if ( bio_RSA_PUBKEY )
                  {
                    v28 = RSA_verify(672, v19, 32, v20, 256, bio_RSA_PUBKEY);
                    if ( bio_RSA_PUBKEY )
                      RSA_free(bio_RSA_PUBKEY);
                    if ( v30 )
                      BIO_free(v30);
                    if ( v28 == 1 )
                    {
                      if ( stream )
                        fclose(stream);
                      stream = 0;
                      puts("All Done!\r");
                      if ( a5 )
                      {
                        puts("This Comment Of This Package:");
                        memset(v17, 0, 257);
                        memcpy(v17, a3 + 1360, 0x100u);
                        puts((const char *)v17);
                      }
                      return 0;
                    }
                    else
                    {
                      v9 = puts("Check File Sig failed!\r");
                      error = ERR_get_error(v9);
                      v11 = (const char *)ERR_error_string(error, 0);
                      printf("OpenSSL error: %s\n", v11);
                      return 18;
                    }
                  }
                  else
                  {
                    v7 = ERR_get_error(0);
                    v8 = (const char *)ERR_error_string(v7, 0);
                    printf("OpenSSL error: %s\n", v8);
                    puts("Load Pem Failed!");
                    return 17;
                  }
                }
              }
              else
              {
                printf("Cannot Open Root PublicKey '%s'!\n", a2);
                if ( stream )
                  fclose(stream);
                return 11;
              }
            }
            else
            {
              printf(
                "Check FileSize Failed, FileSize Should Be [%d]Bytes, But It Was [%d] Bytes, And Total Says[%d]\n",
                v36,
                v39,
                v43);
              if ( stream )
                fclose(stream);
              return 10;
            }
          }
          else
          {
            printf("Content Doesn't Match![%d][%d]\n", (unsigned __int8)a3[1304], v45);
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

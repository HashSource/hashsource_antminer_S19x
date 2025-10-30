int __fastcall sub_86D1C(int a1, int a2, int a3)
{
  int v4; // r5
  int v5; // r10
  unsigned int v6; // r8
  unsigned int v7; // r9
  unsigned int v8; // r6
  unsigned int v9; // r7
  const char *v10; // r2
  const char *v11; // lr
  const char *v12; // r6
  const char *v13; // r0
  const char *v15; // r12

  if ( a2 )
  {
    if ( a3 > 127 )
    {
      v4 = a2;
      v5 = a3;
      goto LABEL_4;
    }
    return 0;
  }
  else
  {
    v5 = 128;
    v4 = CRYPTO_malloc(128, "ssl/ssl_ciph.c", 1645);
    if ( v4 )
    {
LABEL_4:
      v6 = *(_DWORD *)(a1 + 16);
      v7 = *(_DWORD *)(a1 + 20);
      v8 = *(_DWORD *)(a1 + 24);
      v9 = *(_DWORD *)(a1 + 28);
      v10 = (const char *)sub_8A720(*(_DWORD *)(a1 + 32));
      if ( v6 == 8 )
      {
        v11 = "PSK";
      }
      else if ( v6 <= 8 )
      {
        if ( v6 != 1 )
        {
          switch ( v6 )
          {
            case 0u:
              v11 = "any";
              goto LABEL_11;
            case 2u:
              v11 = "DH";
              goto LABEL_11;
            case 4u:
              v11 = "ECDH";
              goto LABEL_11;
          }
          goto LABEL_83;
        }
        v11 = (const char *)&dword_1BC564;
      }
      else if ( v6 == 64 )
      {
        v11 = "RSAPSK";
      }
      else
      {
        if ( v6 > 0x40 )
        {
          if ( v6 == 128 )
          {
            v11 = "ECDHEPSK";
            goto LABEL_11;
          }
          if ( v6 == 256 )
          {
            v11 = "DHEPSK";
            goto LABEL_11;
          }
          goto LABEL_83;
        }
        if ( v6 != 16 )
        {
          if ( v6 == 32 )
          {
            v11 = "SRP";
            goto LABEL_11;
          }
LABEL_83:
          v11 = "unknown";
          goto LABEL_11;
        }
        v11 = "GOST";
      }
LABEL_11:
      if ( v7 == 8 )
      {
        v15 = "ECDSA";
        goto LABEL_19;
      }
      if ( v7 <= 8 )
      {
        switch ( v7 )
        {
          case 1u:
            v15 = (const char *)&dword_1BC564;
            break;
          case 0u:
            v15 = "any";
            break;
          case 2u:
            v15 = "DSS";
            break;
          case 4u:
            v15 = "None";
            break;
          default:
LABEL_73:
            v15 = "unknown";
            break;
        }
LABEL_19:
        if ( v8 != 1024 )
        {
          if ( v8 <= 0x400 )
          {
            if ( v8 == 16 )
            {
              v12 = "IDEA(128)";
              goto LABEL_60;
            }
            if ( v8 <= 0x10 )
            {
              if ( v8 == 2 )
              {
                v12 = "3DES(168)";
                goto LABEL_60;
              }
              if ( v8 <= 2 )
              {
                if ( v8 == 1 )
                {
                  v12 = "DES(56)";
                  goto LABEL_60;
                }
              }
              else
              {
                if ( v8 == 4 )
                {
                  v12 = "RC4(128)";
                  goto LABEL_60;
                }
                if ( v8 == 8 )
                {
                  v12 = "RC2(128)";
                  goto LABEL_60;
                }
              }
            }
            else
            {
              if ( v8 == 128 )
              {
                v12 = "AES(256)";
                goto LABEL_60;
              }
              if ( v8 > 0x80 )
              {
                if ( v8 == 256 )
                {
                  v12 = "Camellia(128)";
                  goto LABEL_60;
                }
                if ( v8 == 512 )
                {
                  v12 = "Camellia(256)";
                  goto LABEL_60;
                }
              }
              else
              {
                if ( v8 == 32 )
                {
                  v12 = "None";
                  goto LABEL_60;
                }
                if ( v8 == 64 )
                {
                  v12 = "AES(128)";
                  goto LABEL_60;
                }
              }
            }
            goto LABEL_122;
          }
          if ( v8 == 0x10000 )
          {
            v12 = "AESCCM8(128)";
            goto LABEL_60;
          }
          if ( v8 <= 0x10000 )
          {
            if ( v8 != 0x2000 )
            {
              if ( v8 > 0x2000 )
              {
                if ( v8 == 0x4000 )
                {
                  v12 = "AESCCM(128)";
                  goto LABEL_60;
                }
                if ( v8 == 0x8000 )
                {
                  v12 = "AESCCM(256)";
                  goto LABEL_60;
                }
              }
              else
              {
                if ( v8 == 2048 )
                {
                  v12 = "SEED(128)";
                  goto LABEL_60;
                }
                if ( v8 == 4096 )
                {
                  v12 = "AESGCM(128)";
                  goto LABEL_60;
                }
              }
              goto LABEL_122;
            }
            v12 = "AESGCM(256)";
LABEL_60:
            if ( v9 == 16 )
            {
              v13 = "SHA256";
              goto LABEL_66;
            }
            if ( v9 <= 0x10 )
            {
              if ( v9 == 2 )
              {
                v13 = "SHA1";
                goto LABEL_66;
              }
              if ( v9 <= 2 )
              {
                if ( v9 == 1 )
                {
                  v13 = "MD5";
                  goto LABEL_66;
                }
                goto LABEL_113;
              }
              if ( v9 == 4 )
              {
                v13 = "GOST94";
LABEL_66:
                sub_B5560(
                  v4,
                  v5,
                  "%-23s %s Kx=%-8s Au=%-4s Enc=%-9s Mac=%-4s\n",
                  *(const char **)(a1 + 4),
                  v10,
                  v11,
                  v15,
                  v12,
                  v13);
                return v4;
              }
              if ( v9 != 8 )
              {
LABEL_113:
                v13 = "unknown";
                goto LABEL_66;
              }
              goto LABEL_115;
            }
            if ( v9 != 128 )
            {
              if ( v9 <= 0x80 )
              {
                if ( v9 == 32 )
                {
                  v13 = "SHA384";
                  goto LABEL_66;
                }
                if ( v9 == 64 )
                {
                  v13 = "AEAD";
                  goto LABEL_66;
                }
                goto LABEL_113;
              }
              if ( v9 == 256 )
              {
LABEL_115:
                v13 = "GOST89";
                goto LABEL_66;
              }
              if ( v9 != 512 )
                goto LABEL_113;
            }
            v13 = "GOST2012";
            goto LABEL_66;
          }
          if ( v8 == 0x80000 )
          {
            v12 = "CHACHA20/POLY1305(256)";
            goto LABEL_60;
          }
          if ( v8 > 0x80000 )
          {
            if ( v8 == 0x100000 )
            {
              v12 = "ARIAGCM(128)";
              goto LABEL_60;
            }
            if ( v8 == 0x200000 )
            {
              v12 = "ARIAGCM(256)";
              goto LABEL_60;
            }
            goto LABEL_122;
          }
          if ( v8 == 0x20000 )
          {
            v12 = "AESCCM8(256)";
            goto LABEL_60;
          }
          if ( v8 != 0x40000 )
          {
LABEL_122:
            v12 = "unknown";
            goto LABEL_60;
          }
        }
        v12 = "GOST89(256)";
        goto LABEL_60;
      }
      if ( v7 == 32 )
      {
        v15 = "GOST01";
        goto LABEL_19;
      }
      if ( v7 <= 0x20 )
      {
        if ( v7 == 16 )
        {
          v15 = "PSK";
          goto LABEL_19;
        }
      }
      else
      {
        if ( v7 == 64 )
        {
          v15 = "SRP";
          goto LABEL_19;
        }
        if ( v7 == 160 )
        {
          v15 = "GOST12";
          goto LABEL_19;
        }
      }
      goto LABEL_73;
    }
    sub_D0048(20, 626, 65, "ssl/ssl_ciph.c", 1646);
    return 0;
  }
}

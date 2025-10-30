int __fastcall sub_130EC(_DWORD *a1, int a2, _DWORD *a3, _DWORD *a4)
{
  int v8; // r0
  int v9; // r9
  int v10; // r0
  int digestbyname; // r0
  const char *v12; // r0
  int v13; // r3
  unsigned int v15; // r4
  _BYTE *v16; // r5
  int v17; // r4
  int v18; // r0
  int v19; // r0
  const char *v20; // r0
  const char *v21; // r0
  const char *v22; // r0
  _BYTE *v23; // r1
  const char *v24; // r0
  const char *v25; // r0
  int v26; // [sp+Ch] [bp-1Ch] BYREF
  int v27; // [sp+10h] [bp-18h] BYREF
  _BYTE v28[16]; // [sp+14h] [bp-14h] BYREF

  v26 = 0;
  if ( !ssl_init_done )
    sub_102C4();
  if ( a2 == 894 )
  {
    v15 = a3[1];
    v16 = (_BYTE *)*a3;
    if ( v15 <= 0xF )
    {
      v23 = v16;
      v16 = v28;
      _memcpy_chk(v28, v23);
      memset(&v28[v15], 0, 16 - v15);
    }
    v17 = CMAC_CTX_new();
    if ( v17 )
    {
      v18 = EVP_aes_128_cbc();
      if ( CMAC_Init(v17, v16, 16, v18, 0) )
      {
        if ( CMAC_CTX_get0_cipher_ctx(v17) && a1[1] < (unsigned int)EVP_CIPHER_CTX_block_size() )
        {
          sub_ABF8((_BYTE *)&dword_0 + 3, "MAC encrypt: CMAC %s buf too small.", "AES128CMAC");
        }
        else if ( CMAC_Update(v17, *a4, a4[1]) )
        {
          if ( !CMAC_Final(v17, *a1, &v26) )
          {
            sub_ABF8((_BYTE *)&dword_0 + 3, "MAC encrypt: CMAC %s Final failed.", "AES128CMAC");
            v26 = 0;
          }
        }
        else
        {
          sub_ABF8((_BYTE *)&dword_0 + 3, "MAC encrypt: CMAC %s Update failed.", "AES128CMAC");
        }
      }
      else
      {
        sub_ABF8((_BYTE *)&dword_0 + 3, "MAC encrypt: CMAC %s Init failed.", "AES128CMAC");
      }
      CMAC_CTX_cleanup(v17);
    }
    else
    {
      sub_ABF8((_BYTE *)&dword_0 + 3, "MAC encrypt: CMAC %s CTX new failed.", "AES128CMAC");
    }
    return v26;
  }
  v8 = EVP_MD_CTX_new();
  v27 = 0;
  v9 = v8;
  if ( v8 )
  {
    EVP_MD_CTX_set_flags(v8, 8);
    v10 = OBJ_nid2sn(a2);
    digestbyname = EVP_get_digestbyname(v10);
    if ( EVP_DigestInit_ex(v9, digestbyname, 0) )
    {
      v19 = EVP_MD_CTX_md(v9);
      if ( (unsigned int)EVP_MD_size(v19) > a1[1] )
      {
        v21 = (const char *)OBJ_nid2sn(a2);
        sub_ABF8((_BYTE *)&dword_0 + 3, "MAC encrypt: MAC %s buf too small.", v21);
        v13 = v27;
      }
      else if ( EVP_DigestUpdate(v9, *a3, a3[1]) )
      {
        if ( EVP_DigestUpdate(v9, *a4, a4[1]) )
        {
          if ( EVP_DigestFinal(v9, *a1, &v27) )
          {
            v13 = v27;
          }
          else
          {
            v24 = (const char *)OBJ_nid2sn(a2);
            sub_ABF8((_BYTE *)&dword_0 + 3, "MAC encrypt: MAC %s Digest Final failed.", v24);
            v27 = 0;
            v13 = 0;
          }
        }
        else
        {
          v25 = (const char *)OBJ_nid2sn(a2);
          sub_ABF8((_BYTE *)&dword_0 + 3, "MAC encrypt: MAC %s Digest Update data failed.", v25);
          v13 = v27;
        }
      }
      else
      {
        v20 = (const char *)OBJ_nid2sn(a2);
        sub_ABF8((_BYTE *)&dword_0 + 3, "MAC encrypt: MAC %s Digest Update key failed.", v20);
        v13 = v27;
      }
    }
    else
    {
      v12 = (const char *)OBJ_nid2sn(a2);
      sub_ABF8((_BYTE *)&dword_0 + 3, "MAC encrypt: MAC %s Digest Init failed.", v12);
      v13 = v27;
    }
    v26 = v13;
    EVP_MD_CTX_free(v9);
    return v26;
  }
  v22 = (const char *)OBJ_nid2sn(a2);
  sub_ABF8((_BYTE *)&dword_0 + 3, "MAC encrypt: MAC %s Digest CTX new failed.", v22);
  return v27;
}

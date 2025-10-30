int __fastcall sub_12C00(_DWORD *a1, int a2, _DWORD *a3, _DWORD *a4)
{
  int v5; // r0
  unsigned int v9; // r4
  _BYTE *v10; // r5
  int v11; // r4
  int v12; // r0
  int v14; // r0
  int v15; // r9
  int v16; // r0
  int digestbyname; // r0
  int v18; // r0
  const char *v19; // r0
  int v20; // r3
  const char *v21; // r0
  _BYTE *v22; // r1
  void *v23; // r0
  const char *v24; // r0
  const char *v25; // r0
  const char *v26; // r0
  const char *v27; // r0
  int v28; // [sp+Ch] [bp-1Ch] BYREF
  int v29; // [sp+10h] [bp-18h] BYREF
  _BYTE v30[16]; // [sp+14h] [bp-14h] BYREF

  v5 = 768;
  v28 = 0;
  if ( !ssl_init_done )
    v5 = sub_FDCC();
  if ( a2 == 894 )
  {
    v9 = a3[1];
    v10 = (_BYTE *)*a3;
    if ( v9 <= 0xF )
    {
      v22 = v10;
      v10 = v30;
      _memcpy_chk(v30, v22);
      v23 = memset(&v30[v9], 0, 16 - v9);
      v11 = CMAC_CTX_new(v23);
      if ( v11 )
        goto LABEL_6;
    }
    else
    {
      v11 = CMAC_CTX_new(v5);
      if ( v11 )
      {
LABEL_6:
        v12 = EVP_aes_128_cbc();
        if ( CMAC_Init(v11, v10, 16, v12, 0) )
        {
          if ( CMAC_CTX_get0_cipher_ctx(v11) && a1[1] < (unsigned int)EVP_CIPHER_CTX_block_size() )
          {
            sub_A828((_BYTE *)&dword_0 + 3, "MAC encrypt: CMAC %s buf too small.", "AES128CMAC");
          }
          else if ( CMAC_Update(v11, *a4, a4[1]) )
          {
            if ( !CMAC_Final(v11, *a1, &v28) )
            {
              sub_A828((_BYTE *)&dword_0 + 3, "MAC encrypt: CMAC %s Final failed.", "AES128CMAC");
              v28 = 0;
            }
          }
          else
          {
            sub_A828((_BYTE *)&dword_0 + 3, "MAC encrypt: CMAC %s Update failed.", "AES128CMAC");
          }
        }
        else
        {
          sub_A828((_BYTE *)&dword_0 + 3, "MAC encrypt: CMAC %s Init failed.", "AES128CMAC");
        }
        CMAC_CTX_cleanup(v11);
        return v28;
      }
    }
    sub_A828((_BYTE *)&dword_0 + 3, "MAC encrypt: CMAC %s CTX new failed.", "AES128CMAC");
    return v28;
  }
  v14 = EVP_MD_CTX_new();
  v15 = v14;
  v29 = 0;
  if ( v14 )
  {
    EVP_MD_CTX_set_flags(v14, 8);
    v16 = OBJ_nid2sn(a2);
    digestbyname = EVP_get_digestbyname(v16);
    if ( EVP_DigestInit_ex(v15, digestbyname, 0) )
    {
      v18 = EVP_MD_CTX_md(v15);
      if ( (unsigned int)EVP_MD_size(v18) <= a1[1] )
      {
        if ( EVP_DigestUpdate(v15, *a3, a3[1]) )
        {
          if ( EVP_DigestUpdate(v15, *a4, a4[1]) )
          {
            if ( EVP_DigestFinal(v15, *a1, &v29) )
            {
              v20 = v29;
            }
            else
            {
              v27 = (const char *)OBJ_nid2sn(a2);
              sub_A828((_BYTE *)&dword_0 + 3, "MAC encrypt: MAC %s Digest Final failed.", v27);
              v29 = 0;
              v20 = 0;
            }
          }
          else
          {
            v25 = (const char *)OBJ_nid2sn(a2);
            sub_A828((_BYTE *)&dword_0 + 3, "MAC encrypt: MAC %s Digest Update data failed.", v25);
            v20 = v29;
          }
        }
        else
        {
          v26 = (const char *)OBJ_nid2sn(a2);
          sub_A828((_BYTE *)&dword_0 + 3, "MAC encrypt: MAC %s Digest Update key failed.", v26);
          v20 = v29;
        }
      }
      else
      {
        v19 = (const char *)OBJ_nid2sn(a2);
        sub_A828((_BYTE *)&dword_0 + 3, "MAC encrypt: MAC %s buf too small.", v19);
        v20 = v29;
      }
    }
    else
    {
      v21 = (const char *)OBJ_nid2sn(a2);
      sub_A828((_BYTE *)&dword_0 + 3, "MAC encrypt: MAC %s Digest Init failed.", v21);
      v20 = v29;
    }
    v28 = v20;
    EVP_MD_CTX_free(v15);
    return v28;
  }
  v24 = (const char *)OBJ_nid2sn(a2);
  sub_A828((_BYTE *)&dword_0 + 3, "MAC encrypt: MAC %s Digest CTX new failed.", v24);
  return v29;
}

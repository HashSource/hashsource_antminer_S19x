int __fastcall sub_60310(_DWORD *a1, int a2, _DWORD *a3, _DWORD *a4)
{
  int v5; // r0
  int v9; // r1
  unsigned int v10; // r4
  _BYTE *v11; // r5
  int v12; // r4
  int v13; // r0
  __int64 v14; // r0
  int v16; // r0
  int v17; // r9
  int v18; // r0
  int digestbyname; // r0
  int v20; // r3
  int v21; // r0
  const char *v22; // r0
  int v23; // r3
  const char *v24; // r0
  _BYTE *v25; // r1
  void *v26; // r0
  const char *v27; // r0
  const char *v28; // r0
  const char *v29; // r0
  const char *v30; // r0
  int v31; // [sp+Ch] [bp-1Ch] BYREF
  int v32; // [sp+10h] [bp-18h] BYREF
  _BYTE v33[16]; // [sp+14h] [bp-14h] BYREF

  v5 = 2092;
  v31 = 0;
  v9 = _stack_chk_guard;
  if ( !ssl_init_done )
    v5 = sub_6C6B8(2092);
  if ( a2 == 894 )
  {
    v10 = a3[1];
    v11 = (_BYTE *)*a3;
    if ( v10 <= 0xF )
    {
      v25 = v11;
      v11 = v33;
      _memcpy_chk(v33, v25);
      v26 = memset(&v33[v10], 0, 16 - v10);
      v12 = CMAC_CTX_new(v26);
      if ( v12 )
        goto LABEL_6;
    }
    else
    {
      v12 = CMAC_CTX_new(v5);
      if ( v12 )
      {
LABEL_6:
        v13 = EVP_aes_128_cbc();
        if ( CMAC_Init(v12, v11, 16, v13, 0) )
        {
          if ( CMAC_CTX_get0_cipher_ctx(v12) && a1[1] < (unsigned int)EVP_CIPHER_CTX_block_size() )
          {
            v14 = sub_64E00(3, "MAC encrypt: CMAC %s buf too small.", "AES128CMAC");
          }
          else if ( CMAC_Update(v12, *a4, a4[1]) )
          {
            if ( !CMAC_Final(v12, *a1, &v31) )
            {
              v14 = sub_64E00(3, "MAC encrypt: CMAC %s Final failed.", "AES128CMAC");
              v31 = 0;
            }
          }
          else
          {
            v14 = sub_64E00(3, "MAC encrypt: CMAC %s Update failed.", "AES128CMAC");
          }
        }
        else
        {
          v14 = sub_64E00(3, "MAC encrypt: CMAC %s Init failed.", "AES128CMAC");
        }
        CMAC_CTX_cleanup(v12, HIDWORD(v14));
        return v31;
      }
    }
    sub_64E00(3, "MAC encrypt: CMAC %s CTX new failed.", "AES128CMAC");
    return v31;
  }
  v16 = EVP_MD_CTX_new(v5, v9);
  v17 = v16;
  v32 = 0;
  if ( v16 )
  {
    EVP_MD_CTX_set_flags(v16, 8);
    v18 = OBJ_nid2sn(a2);
    digestbyname = EVP_get_digestbyname(v18);
    if ( EVP_DigestInit_ex(v17, digestbyname, 0, v20) )
    {
      v21 = EVP_MD_CTX_md(v17);
      if ( (unsigned int)EVP_MD_size(v21) <= a1[1] )
      {
        if ( EVP_DigestUpdate(v17, *a3, a3[1]) )
        {
          if ( EVP_DigestUpdate(v17, *a4, a4[1]) )
          {
            if ( EVP_DigestFinal(v17, *a1, &v32) )
            {
              v23 = v32;
            }
            else
            {
              v30 = (const char *)OBJ_nid2sn(a2);
              sub_64E00(3, "MAC encrypt: MAC %s Digest Final failed.", v30);
              v32 = 0;
              v23 = 0;
            }
          }
          else
          {
            v28 = (const char *)OBJ_nid2sn(a2);
            sub_64E00(3, "MAC encrypt: MAC %s Digest Update data failed.", v28);
            v23 = v32;
          }
        }
        else
        {
          v29 = (const char *)OBJ_nid2sn(a2);
          sub_64E00(3, "MAC encrypt: MAC %s Digest Update key failed.", v29);
          v23 = v32;
        }
      }
      else
      {
        v22 = (const char *)OBJ_nid2sn(a2);
        sub_64E00(3, "MAC encrypt: MAC %s buf too small.", v22);
        v23 = v32;
      }
    }
    else
    {
      v24 = (const char *)OBJ_nid2sn(a2);
      sub_64E00(3, "MAC encrypt: MAC %s Digest Init failed.", v24);
      v23 = v32;
    }
    v31 = v23;
    EVP_MD_CTX_free(v17);
    return v31;
  }
  v27 = (const char *)OBJ_nid2sn(a2);
  sub_64E00(3, "MAC encrypt: MAC %s Digest CTX new failed.", v27);
  return v32;
}

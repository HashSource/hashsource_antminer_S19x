int __fastcall sub_61200(_DWORD *a1, int a2, _DWORD *a3, _DWORD *a4)
{
  int v5; // r0
  int v9; // r1
  int v10; // r0
  int v11; // r9
  int v12; // r0
  int digestbyname; // r0
  int v14; // r3
  const char *v15; // r0
  int v16; // r3
  unsigned int v18; // r4
  _BYTE *v19; // r5
  int v20; // r4
  int v21; // r0
  __int64 v22; // r0
  int v23; // r0
  const char *v24; // r0
  const char *v25; // r0
  const char *v26; // r0
  _BYTE *v27; // r1
  const char *v28; // r0
  const char *v29; // r0
  int v30; // [sp+Ch] [bp-1Ch] BYREF
  int v31; // [sp+10h] [bp-18h] BYREF
  _BYTE v32[16]; // [sp+14h] [bp-14h] BYREF

  v5 = 2092;
  v30 = 0;
  v9 = _stack_chk_guard;
  if ( !ssl_init_done )
    v5 = sub_6D690(2092);
  if ( a2 == 894 )
  {
    v18 = a3[1];
    v19 = (_BYTE *)*a3;
    if ( v18 <= 0xF )
    {
      v27 = v19;
      v19 = v32;
      _memcpy_chk(v32, v27, v18, 16);
      memset(&v32[v18], 0, 16 - v18);
    }
    v20 = CMAC_CTX_new();
    if ( v20 )
    {
      v21 = EVP_aes_128_cbc();
      if ( CMAC_Init(v20, v19, 16, v21, 0) )
      {
        if ( CMAC_CTX_get0_cipher_ctx(v20) && a1[1] < (unsigned int)EVP_CIPHER_CTX_block_size() )
        {
          v22 = sub_65D40(3, "MAC encrypt: CMAC %s buf too small.", "AES128CMAC");
        }
        else if ( CMAC_Update(v20, *a4, a4[1]) )
        {
          if ( !CMAC_Final(v20, *a1, &v30) )
          {
            v22 = sub_65D40(3, "MAC encrypt: CMAC %s Final failed.", "AES128CMAC");
            v30 = 0;
          }
        }
        else
        {
          v22 = sub_65D40(3, "MAC encrypt: CMAC %s Update failed.", "AES128CMAC");
        }
      }
      else
      {
        v22 = sub_65D40(3, "MAC encrypt: CMAC %s Init failed.", "AES128CMAC");
      }
      CMAC_CTX_cleanup(v20, HIDWORD(v22));
    }
    else
    {
      sub_65D40(3, "MAC encrypt: CMAC %s CTX new failed.", "AES128CMAC");
    }
    return v30;
  }
  v10 = EVP_MD_CTX_new(v5, v9);
  v31 = 0;
  v11 = v10;
  if ( v10 )
  {
    EVP_MD_CTX_set_flags(v10, 8);
    v12 = OBJ_nid2sn(a2);
    digestbyname = EVP_get_digestbyname(v12);
    if ( EVP_DigestInit_ex(v11, digestbyname, 0, v14) )
    {
      v23 = EVP_MD_CTX_md(v11);
      if ( (unsigned int)EVP_MD_size(v23) > a1[1] )
      {
        v25 = (const char *)OBJ_nid2sn(a2);
        sub_65D40(3, "MAC encrypt: MAC %s buf too small.", v25);
        v16 = v31;
      }
      else if ( EVP_DigestUpdate(v11, *a3, a3[1]) )
      {
        if ( EVP_DigestUpdate(v11, *a4, a4[1]) )
        {
          if ( EVP_DigestFinal(v11, *a1, &v31) )
          {
            v16 = v31;
          }
          else
          {
            v28 = (const char *)OBJ_nid2sn(a2);
            sub_65D40(3, "MAC encrypt: MAC %s Digest Final failed.", v28);
            v31 = 0;
            v16 = 0;
          }
        }
        else
        {
          v29 = (const char *)OBJ_nid2sn(a2);
          sub_65D40(3, "MAC encrypt: MAC %s Digest Update data failed.", v29);
          v16 = v31;
        }
      }
      else
      {
        v24 = (const char *)OBJ_nid2sn(a2);
        sub_65D40(3, "MAC encrypt: MAC %s Digest Update key failed.", v24);
        v16 = v31;
      }
    }
    else
    {
      v15 = (const char *)OBJ_nid2sn(a2);
      sub_65D40(3, "MAC encrypt: MAC %s Digest Init failed.", v15);
      v16 = v31;
    }
    v30 = v16;
    EVP_MD_CTX_free(v11);
    return v30;
  }
  v26 = (const char *)OBJ_nid2sn(a2);
  sub_65D40(3, "MAC encrypt: MAC %s Digest CTX new failed.", v26);
  return v31;
}

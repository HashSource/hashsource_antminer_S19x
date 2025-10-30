int __fastcall sub_1312C(int a1)
{
  int v3; // r4
  int v4; // r0
  int v5; // r0
  int v6; // [sp+0h] [bp-48h] BYREF
  _DWORD v7[16]; // [sp+4h] [bp-44h] BYREF

  if ( *(_WORD *)a1 == 2 )
    return *(_DWORD *)(a1 + 4);
  if ( !ssl_init_done )
    sub_FDCC();
  v3 = EVP_MD_CTX_new();
  v4 = EVP_MD_CTX_set_flags(v3, 8);
  v5 = EVP_md5(v4);
  if ( !EVP_DigestInit_ex(v3, v5, 0) )
  {
    sub_A828((_BYTE *)&dword_0 + 3, "MD5 init failed");
    EVP_MD_CTX_free(v3);
    exit(1);
  }
  EVP_DigestUpdate(v3, a1 + 8, 16);
  EVP_DigestFinal(v3, v7, &v6);
  EVP_MD_CTX_free(v3);
  return v7[0];
}

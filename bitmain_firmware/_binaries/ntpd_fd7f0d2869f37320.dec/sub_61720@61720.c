int __fastcall sub_61720(unsigned __int16 *a1)
{
  unsigned __int16 *v1; // r6
  int v2; // r1
  int v4; // r4
  int v5; // r0
  int v6; // r0
  int v7; // r3
  int v8; // [sp+0h] [bp-48h] BYREF
  _DWORD v9[16]; // [sp+4h] [bp-44h] BYREF

  v1 = a1;
  v2 = *a1;
  if ( v2 == 2 )
    return *((_DWORD *)a1 + 1);
  if ( !ssl_init_done )
    a1 = (unsigned __int16 *)sub_6D690(a1);
  v4 = EVP_MD_CTX_new(a1, v2);
  v5 = EVP_MD_CTX_set_flags(v4, 8);
  v6 = EVP_md5(v5);
  if ( !EVP_DigestInit_ex(v4, v6, 0, v7) )
  {
    sub_65D40(3, "MD5 init failed");
    EVP_MD_CTX_free(v4);
    exit(1);
  }
  EVP_DigestUpdate(v4, v1 + 4, 16);
  EVP_DigestFinal(v4, v9, &v8);
  EVP_MD_CTX_free(v4);
  return v9[0];
}

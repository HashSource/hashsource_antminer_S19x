void __fastcall sub_26540(int a1, int a2)
{
  int v4; // r0
  int v5; // r12
  void *v6; // r7
  __int64 v7; // r0
  int v8; // r5
  int v9; // r0
  int v10; // r0
  int v11; // r3
  int v12; // [sp+0h] [bp-48h] BYREF
  _DWORD v13[16]; // [sp+4h] [bp-44h] BYREF

  v4 = BN_num_bits();
  v5 = v4 + 7;
  if ( v4 + 7 < 0 )
    v5 = v4 + 14;
  v12 = v5 >> 3;
  v6 = (void *)sub_63BA4(0, v5 >> 3, 0, 0);
  v7 = BN_bn2bin(a1, v6);
  v8 = EVP_MD_CTX_new(v7, HIDWORD(v7));
  v9 = EVP_MD_CTX_set_flags(v8, 8);
  v10 = EVP_md5(v9);
  EVP_DigestInit_ex(v8, v10, 0, v11, v12, v13[0]);
  EVP_DigestUpdate(v8, v6, v12);
  EVP_DigestFinal(v8, v13, &v12);
  EVP_MD_CTX_free(v8);
  BN_bin2bn(v13, v12, a2);
  free(v6);
}

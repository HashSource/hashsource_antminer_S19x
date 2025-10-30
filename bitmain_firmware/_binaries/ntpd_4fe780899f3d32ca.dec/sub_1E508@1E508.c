int __fastcall sub_1E508(unsigned __int16 *a1, int a2, int a3)
{
  int v4; // r0
  int v5; // r1
  int v6; // r1
  int v7; // r1
  int v8; // r1
  int v9; // r4
  int v10; // r0
  int digestbyname; // r0
  int v12; // r3
  int v13; // r3
  int v14; // r2
  unsigned __int16 *v15; // r1
  int v17; // [sp+0h] [bp-50h] BYREF
  int v18; // [sp+4h] [bp-4Ch] BYREF
  _BYTE v19[4]; // [sp+8h] [bp-48h] BYREF
  _DWORD v20[16]; // [sp+Ch] [bp-44h] BYREF

  v4 = 2092;
  v18 = a2;
  v17 = a3;
  v5 = _stack_chk_guard;
  while ( !dword_B93F4 || (unsigned int)(current_time - dword_B9404) >= 0xE10 )
  {
    dword_B93F4 = sub_68AE4(v4, v5);
    dword_B93F8 = sub_68AE4(dword_B93F4, v6);
    dword_B93FC = sub_68AE4(dword_B93F8, v7);
    v4 = sub_68AE4(dword_B93FC, v8);
    dword_B9400 = v4;
    dword_B9404 = current_time;
  }
  v9 = EVP_MD_CTX_new(v4, v5);
  EVP_MD_CTX_set_flags(v9, 8);
  v10 = OBJ_nid2sn(4);
  digestbyname = EVP_get_digestbyname(v10);
  EVP_DigestInit_ex(v9, digestbyname, 0, v12, v17, v18);
  EVP_DigestUpdate(v9, &dword_B93F4, 16);
  EVP_DigestUpdate(v9, &v18, 4);
  EVP_DigestUpdate(v9, &v17, 4);
  v13 = *a1;
  if ( v13 == 2 )
    v14 = 2;
  else
    v14 = 8;
  if ( v13 == 2 )
    v15 = &a1[v14];
  else
    v15 = a1 + 4;
  EVP_DigestUpdate(v9, v15, v14 * 2);
  EVP_DigestUpdate(v9, a1 + 1, 2);
  EVP_DigestUpdate(v9, &dword_B93F4, 16);
  EVP_DigestFinal(v9, v20, v19);
  EVP_MD_CTX_free(v9);
  return v20[0];
}

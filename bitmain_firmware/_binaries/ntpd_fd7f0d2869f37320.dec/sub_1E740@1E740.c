int __fastcall sub_1E740(unsigned __int16 *a1, int a2, int a3)
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
  unsigned __int16 *v13; // r1
  int v14; // r2
  int v15; // r3
  int v17; // [sp+0h] [bp-50h] BYREF
  int v18; // [sp+4h] [bp-4Ch] BYREF
  _BYTE v19[4]; // [sp+8h] [bp-48h] BYREF
  _DWORD v20[16]; // [sp+Ch] [bp-44h] BYREF

  v4 = 2092;
  v18 = a2;
  v17 = a3;
  v5 = _stack_chk_guard;
  while ( !dword_BA3F4 || (unsigned int)(current_time - dword_BA404) >= 0xE10 )
  {
    dword_BA3F4 = sub_69A2C(v4, v5);
    dword_BA3F8 = sub_69A2C(dword_BA3F4, v6);
    dword_BA3FC = sub_69A2C(dword_BA3F8, v7);
    v4 = sub_69A2C(dword_BA3FC, v8);
    dword_BA404 = current_time;
    dword_BA400 = v4;
  }
  v9 = EVP_MD_CTX_new(v4, v5);
  EVP_MD_CTX_set_flags(v9, 8);
  v10 = OBJ_nid2sn(4);
  digestbyname = EVP_get_digestbyname(v10);
  EVP_DigestInit_ex(v9, digestbyname, 0, v12, v17, v18);
  EVP_DigestUpdate(v9, &dword_BA3F4, 16);
  EVP_DigestUpdate(v9, &v18, 4);
  EVP_DigestUpdate(v9, &v17, 4);
  v15 = *a1;
  if ( v15 == 2 )
    v14 = 2;
  else
    v13 = a1 + 4;
  if ( v15 == 2 )
    v13 = &a1[v14];
  else
    v14 = 8;
  EVP_DigestUpdate(v9, v13, v14 * 2);
  EVP_DigestUpdate(v9, a1 + 1, 2);
  EVP_DigestUpdate(v9, &dword_BA3F4, 16);
  EVP_DigestFinal(v9, v20, v19);
  EVP_MD_CTX_free(v9);
  return v20[0];
}
